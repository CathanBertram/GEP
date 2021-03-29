// Fill out your copyright notice in the Description page of Project Settings.


#include "PurchaseableWeaponStand.h"


#include "GEPProject/EventSystem.h"
#include "GEPProject/Player/GEPProjectCharacter.h"

// Sets default values
APurchaseableWeaponStand::APurchaseableWeaponStand()
{
	weaponStand = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponStand"));
	weaponStand->SetRenderCustomDepth(true);
	weaponStand->CustomDepthStencilValue = 2;
	
	weaponSocket = CreateDefaultSubobject<USceneComponent>(TEXT("WeaponSocket"));
	weaponSocket->SetupAttachment(weaponStand);
	
	weapon = CreateDefaultSubobject<UChildActorComponent>(TEXT("Weapon"));
	weapon->SetupAttachment(weaponSocket);
	weapon->CreateChildActor();

	textSocket = CreateDefaultSubobject<USceneComponent>(TEXT("TextSocket"));
	textSocket->SetupAttachment(weaponStand);
	text = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));
	text->SetupAttachment(textSocket);
	
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	boxComp->SetupAttachment(weaponStand);

	spotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
	spotLight->SetLightColor(FColor::Red);
	spotLight->Intensity = 40000;
	spotLight->OuterConeAngle = 20;
	spotLight->SetupAttachment(weaponStand);
		
}

void APurchaseableWeaponStand::OnInteract_Implementation(AGEPProjectCharacter* character)
{
	if (unlocked) return;

	if (character->GetCurrency() >= cost)
	{
		GetGameInstance()->GetSubsystem<UEventSystem>()->OnUnlockWeapon(weaponToUnlock, cost);
		Unlock();
	}
	
}
void APurchaseableWeaponStand::Unlock()
{
	if (weapon != nullptr)
		weapon->DestroyChildActor();
	if(text != nullptr)
		text->DestroyComponent();
	if (spotLight!= nullptr)
		spotLight->DestroyComponent();
	
	unlocked = true;
}

void APurchaseableWeaponStand::BeginPlay()
{
	Super::BeginPlay();
	UEventSystem* eventSystem = GetGameInstance()->GetSubsystem<UEventSystem>();
	eventSystem->onLoad.AddDynamic(this, &APurchaseableWeaponStand::Load);
	eventSystem->onCurrencyUpdate.AddDynamic(this, &APurchaseableWeaponStand::CurrencyUpdate);
}


void APurchaseableWeaponStand::Load(UGEPSaveGame* saveInstance)
{
	for (TSubclassOf<AActor> unlockedWeapon : saveInstance->unlockedWeapons)
	{
		if (unlockedWeapon == weaponToUnlock)
		{
			unlocked = true;
			Unlock();
		}
	}
}

void APurchaseableWeaponStand::CurrencyUpdate(int newCur)
{
	if (spotLight == nullptr) return;

	if(newCur >= cost)
		spotLight->SetLightColor(FColor::Cyan);
	else
		spotLight->SetLightColor(FColor::Red);
}






