// Copyright Epic Games, Inc. All Rights Reserved.

#include "GEPProjectCharacter.h"

#include "GEPProject/Weapons/GEPProjectProjectile.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/InputSettings.h"
#include "Components/ChildActorComponent.h"
#include "GameFramework/GameModeBase.h"
#include "GEPProject/Interfaces/Fireable.h"
#include "GEPProject/Interfaces/Interactable.h"
#include "GameFramework/Pawn.h"
#include "GEPProject/EventSystem.h"
#include "GEPProject/GEPProjectGameMode.h"
#include "GEPProject/Component/PlayerEnergyComponent.h"
#include "GEPProject/Component/PlayerHealthComponent.h"
#include "GEPProject/Interfaces/FireReleaseable.h"
#include "GEPProject/Interfaces/GetGEPGamemode.h"
#include "GEPProject/Interfaces/GetWeaponBase.h"
#include "GEPProject/Upgrades/UpgradeSystem.h"
#include "Kismet/GameplayStatics.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

AGEPProjectCharacter::AGEPProjectCharacter() : Super()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	interactRange = 300.f;
	
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	equippedWeapon = CreateDefaultSubobject<UChildActorComponent>(TEXT("GunSlot"));
	equippedWeapon->SetupAttachment(FirstPersonCameraComponent);
	equippedWeapon->CreateChildActor();

	healthComponent = CreateDefaultSubobject<UPlayerHealthComponent>(TEXT("HealthComponent"));
	healthComponent->SetBaseHealth(100);
	healthComponent->SetCurHealth(100);
	healthComponent->SetMaxHealth(100);
	energyComponent = CreateDefaultSubobject<UPlayerEnergyComponent>(TEXT("EnergyComponent"));
	energyComponent->SetBaseEnergy(300);
	energyComponent->SetCurEnergy(300);
	energyComponent->SetMaxEnergy(300);
	currencyComponent = CreateDefaultSubobject<UCurrencyComponent>(TEXT("CurrencyComponent"));

}

void AGEPProjectCharacter::Init_Implementation()
{
	UEventSystem* eventSystemInstance = GetGameInstance()->GetSubsystem<UEventSystem>();
	eventSystemInstance->onSave.AddDynamic(this, &AGEPProjectCharacter::Save);
	eventSystemInstance->onLoad.AddDynamic(this, &AGEPProjectCharacter::Load);
	eventSystemInstance->onUnlockWeapon.AddDynamic(this, &AGEPProjectCharacter::UnlockWeapon);
	eventSystemInstance->onDirtyPlayer.AddDynamic(this, &AGEPProjectCharacter::GetUpdatedMultipliers);

	healthComponent->SetEventInstance(eventSystemInstance);
	healthComponent->Init();
	
	energyComponent->SetEventInstance(eventSystemInstance);
	energyComponent->Init();
	energyComponent->onCompEnergyUpdate.AddDynamic(this, &AGEPProjectCharacter::UpdateEnergy);

	currencyComponent->Init(eventSystemInstance);
	
	AActor* child = equippedWeapon->GetChildActor();
	if (UKismetSystemLibrary::DoesImplementInterface(child, UGetWeaponBase::StaticClass()))
	{
		AWeapon_Base* tempWeaponBase = IGetWeaponBase::Execute_GetWeaponBase(child);
		tempWeaponBase->onShoot.AddDynamic(this, &AGEPProjectCharacter::UseEnergy);
		onLocalEnergyUpdate.AddDynamic(tempWeaponBase, &AWeapon_Base::UpdateCurEnergy);
	}
	
	eventSystemInstance->OnHealthUpdate(healthComponent->GetHealthPercent());
	eventSystemInstance->OnEnergyUpdate(energyComponent->GetEnergyPercent());
}

APawn* AGEPProjectCharacter::GetAsPawn_Implementation()
{
	return this;
}

void AGEPProjectCharacter::UseEnergy(float energyToUse)
{
	energyComponent->UseEnergy(energyToUse);
	onLocalEnergyUpdate.Broadcast(energyComponent->GetCurEnergy());
}

void AGEPProjectCharacter::Save(UGEPSaveGame* saveInstance)
{
	saveInstance->currency = currencyComponent->GetCurrency();
	saveInstance->transform = GetTransform();
	saveInstance->unlockedWeapons = unlockedWeaponArray;
	saveInstance->curHealth = healthComponent->GetCurHealth();
	saveInstance->maxHealth = healthComponent->GetMaxHealth();
	saveInstance->curEnergy = energyComponent->GetCurEnergy();
	saveInstance->maxEnergy = energyComponent->GetMaxEnergy();
	saveInstance->canBeDamaged = healthComponent->canBeDamaged;
	saveInstance->constantEnergyRegen = energyComponent->constantRegen;	
}

void AGEPProjectCharacter::Load(UGEPSaveGame* saveInstance)
{
	currencyComponent->SetCurrency(saveInstance->currency);
	SetActorTransform(saveInstance->transform);
	unlockedWeaponArray = saveInstance->unlockedWeapons;
	healthComponent->SetMaxHealth(saveInstance->maxHealth);
	healthComponent->SetCurHealth(saveInstance->curHealth);
	energyComponent->SetMaxEnergy(saveInstance->maxEnergy);
	energyComponent->SetCurEnergy(saveInstance->curEnergy);
	healthComponent->canBeDamaged = saveInstance->canBeDamaged;
	energyComponent->constantRegen = saveInstance->constantEnergyRegen;
	
	UEventSystem* eventSystem = GetGameInstance()->GetSubsystem<UEventSystem>();
	eventSystem->OnCurrencyUpdate(currencyComponent->GetCurrency());
	eventSystem->OnHealthUpdate(healthComponent->GetHealthPercent());
	eventSystem->OnEnergyUpdate(energyComponent->GetEnergyPercent());
}

void AGEPProjectCharacter::UnlockWeapon(TSubclassOf<AActor> weaponToUnlock, int cost)
{
	unlockedWeaponArray.Add(weaponToUnlock);

	currencyComponent->LoseCurrency(cost);
	UEventSystem* eventSystem = GetGameInstance()->GetSubsystem<UEventSystem>();
	eventSystem->OnStartSave();
}

void AGEPProjectCharacter::UpdateEnergy(float newEnergy)
{
	onLocalEnergyUpdate.Broadcast(newEnergy);
}

void AGEPProjectCharacter::GetUpdatedMultipliers()
{
	UWorld* world = GetWorld();
	AGameModeBase* tempGamemode = UGameplayStatics::GetGameMode(world);
	
	if (tempGamemode->GetClass()->ImplementsInterface(UGetGEPGamemode::StaticClass()))
	{
		UUpgradeSystem* upgradeSystem = IGetGEPGamemode::Execute_GetGEPGamemode(tempGamemode)->GetUpgradeSystem();
		healthComponent->UpdateHealthRegenAmount(upgradeSystem->GetUpgradeValue(EUpgradeTypes::Player_RegenAmount));
		healthComponent->UpdateHealthRegenCooldown(upgradeSystem->GetUpgradeValue(EUpgradeTypes::Player_RegenTick));
		if (upgradeSystem->GetUpgradeValue(Player_Invincible) > 0)
			healthComponent->canBeDamaged = false;
		
		energyComponent->UpdateEnergyRegenAmount(upgradeSystem->GetUpgradeValue(EUpgradeTypes::Player_PassiveEnergyRegen));
		energyComponent->UpdateEnergyRegenCooldown(upgradeSystem->GetUpgradeValue(EUpgradeTypes::Player_PassiveEnergyTick));
		if (upgradeSystem->GetUpgradeValue(Player_ConstantEnergyRegen) > 0)
			energyComponent->constantRegen = true;
		//Need To Do Currency Stuff
		currencyComponent->UpdateValues(upgradeSystem);
	}
}

AGEPProjectCharacter* AGEPProjectCharacter::GetAsChar_Implementation()
{
	return this;
}

#pragma region Input
void AGEPProjectCharacter::JumpPressed_Implementation()
{
	Jump();
}


void AGEPProjectCharacter::JumpReleased_Implementation()
{
	StopJumping();
}

void AGEPProjectCharacter::FirePressed_Implementation()
{
	AActor* child = equippedWeapon->GetChildActor();
	if (child->GetClass()->ImplementsInterface(UFireable::StaticClass()))
	{
		IFireable::Execute_Fire(child);
	}
}

void AGEPProjectCharacter::FireReleased_Implementation()
{
	AActor* child = equippedWeapon->GetChildActor();
	if (child->GetClass()->ImplementsInterface(UFireReleaseable::StaticClass()))
	{
		IFireReleaseable::Execute_FireReleased(child);
	}
}

void AGEPProjectCharacter::InteractPressed_Implementation()
{
	OnInteract();
}

void AGEPProjectCharacter::InteractReleased_Implementation()
{
}

void AGEPProjectCharacter::Key1Pressed_Implementation()
{
	SwitchWeapon(0);
}

void AGEPProjectCharacter::Key2Pressed_Implementation()
{
	SwitchWeapon(1);
}

void AGEPProjectCharacter::Key3Pressed_Implementation()
{
	SwitchWeapon(2);
}

void AGEPProjectCharacter::Key4Pressed_Implementation()
{
	SwitchWeapon(3);
}

void AGEPProjectCharacter::Key5Pressed_Implementation()
{
	SwitchWeapon(4);
}

void AGEPProjectCharacter::Key6Pressed_Implementation()
{
	SwitchWeapon(5);
}

void AGEPProjectCharacter::Key7Pressed_Implementation()
{
	SwitchWeapon(6);
}

void AGEPProjectCharacter::Key8Pressed_Implementation()
{
	SwitchWeapon(7);
}

void AGEPProjectCharacter::NextWeaponPressed_Implementation()
{
	SwitchWeapon(curWeapon + 1);
}

void AGEPProjectCharacter::PrevWeaponPressed_Implementation()
{
	SwitchWeapon(curWeapon - 1);
}

void AGEPProjectCharacter::MoveForward_Implementation(float value)
{
	if (value != 0.0f)
		AddMovementInput(GetActorForwardVector(), value);
}

void AGEPProjectCharacter::MoveRight_Implementation(float value)
{
	if (value != 0.0f)
		AddMovementInput(GetActorRightVector(), value);
}

void AGEPProjectCharacter::LookUpAtRate_Implementation(float value)
{
	if (value != 0.0f)
		AddControllerPitchInput(value * GetWorld()->GetDeltaSeconds());
}

void AGEPProjectCharacter::TurnAtRate_Implementation(float value)
{
	if (value != 0.0f)
		AddControllerYawInput(value * GetWorld()->GetDeltaSeconds());
}

void AGEPProjectCharacter::LookUp_Implementation(float value)
{
	if (value != 0.0f)
		AddControllerPitchInput(value);
}

void AGEPProjectCharacter::Turn_Implementation(float value)
{
	if (value != 0.0f)
		AddControllerYawInput(value);
}


void AGEPProjectCharacter::SwitchWeapon(int i)
{
	if(i == curWeapon) return;
	
	if (i < unlockedWeaponArray.Num() && i >= 0)
	{
		AActor* child = equippedWeapon->GetChildActor();
		if (UKismetSystemLibrary::DoesImplementInterface(child, UGetWeaponBase::StaticClass()))
		{
			AWeapon_Base* tempWeaponBase = IGetWeaponBase::Execute_GetWeaponBase(child);
			tempWeaponBase->onShoot.RemoveDynamic(this, &AGEPProjectCharacter::UseEnergy);
			onLocalEnergyUpdate.RemoveDynamic(tempWeaponBase, &AWeapon_Base::UpdateCurEnergy);
		}
		
		curWeapon = i;
		equippedWeapon->SetChildActorClass(unlockedWeaponArray[i]);

		child = equippedWeapon->GetChildActor();
		if (UKismetSystemLibrary::DoesImplementInterface(child, UGetWeaponBase::StaticClass()))
		{
			AWeapon_Base* tempWeaponBase = IGetWeaponBase::Execute_GetWeaponBase(child);
			tempWeaponBase->onShoot.AddDynamic(this, &AGEPProjectCharacter::UseEnergy);
			onLocalEnergyUpdate.AddDynamic(tempWeaponBase, &AWeapon_Base::UpdateCurEnergy);

			UEventSystem* eventSystem = GetGameInstance()->GetSubsystem<UEventSystem>();
			EWeaponTypes type = tempWeaponBase->weaponType;
			switch (type)
			{
			case Pistol: eventSystem->OnDirtyPistol(); break;
			case Revolver: eventSystem->OnDirtyRevolver();break;
			case Shotgun:eventSystem->OnDirtyShotgun(); break;
			case SMG: eventSystem->OnDirtySMG();break;
			case Rifle: eventSystem->OnDirtyRifle();break;
			case AutoRifle: eventSystem->OnDirtyAutoRifle();break;
			case RayGun: eventSystem->OnDirtyRaygun();break;
			case GrenadeLauncher: eventSystem->OnDirtyGrenadeLauncher();break;
			default: ;
			}
		}
	}
}


void AGEPProjectCharacter::CrouchPressed_Implementation()
{
	Crouch();
}

void AGEPProjectCharacter::CrouchReleased_Implementation()
{
}

void AGEPProjectCharacter::OnInteract()
{
	UWorld* const world = GetWorld();
	if (world != nullptr)
	{
		FHitResult hit(ForceInit);
		FVector start = UGameplayStatics::GetPlayerController(world, 0)->PlayerCameraManager->GetCameraLocation(); 
		FVector forward = UGameplayStatics::GetPlayerController(world, 0)->PlayerCameraManager->GetActorForwardVector();
		FVector end = (forward * interactRange) + start;
		
		FCollisionQueryParams collsionParams;

		if (world->LineTraceSingleByChannel(hit, start,end, ECC_Visibility, collsionParams))
		{
			if (UKismetSystemLibrary::DoesImplementInterface(hit.GetActor(), UInteractable::StaticClass()))
			{
				IInteractable::Execute_OnInteract(hit.GetActor(), this);
			}
		}
	}
}
#pragma endregion 
