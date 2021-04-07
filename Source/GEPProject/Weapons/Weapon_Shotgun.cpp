// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Shotgun.h"


#include "Engine/EngineTypes.h"
#include "GEPProject/Interfaces/Shootable.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/GameModeBase.h"
#include "GEPProject/GEPProjectGameMode.h"
#include "GEPProject/Interfaces/GetGEPGamemode.h"
#include "GEPProject/Upgrades/UpgradeSystem.h"

bool AWeapon_Shotgun::Fire_Implementation()
{	if (!canShoot) return false;
	if (curEnergy < energyCost) return false;
	
	canShoot = false;
	const UWorld* const world = GetWorld();
	if (world != nullptr)
	{	
		USceneComponent* muzzle = GetGunMuzzle();
		UGameplayStatics::PlaySound2D(world, shootSound);
		UGameplayStatics::SpawnEmitterAtLocation(world, muzzleFlash , muzzle->GetComponentLocation());

		for (int i = 0; i < pelletCount; ++i)
		{
			FHitResult hit(ForceInit);
			APlayerCameraManager* cameraManager = UGameplayStatics::GetPlayerController(world, 0)->PlayerCameraManager;
			FVector start = cameraManager->GetCameraLocation();
			FVector forward = cameraManager->GetActorForwardVector();

			forward.X += FMath::RandRange(-spread, spread);
			forward.Y += FMath::RandRange(-spread, spread);
			forward.Z += FMath::RandRange(-spread, spread);
			FVector end = (forward * range) + start;	
		
			FCollisionQueryParams collisionParams;
			// const FName traceTag("TraceTag");
			// world->DebugDrawTraceTag = traceTag; //Draws arrow at hit point
			// collisionParams.TraceTag = traceTag;

			if (world->LineTraceSingleByChannel(hit, start,end, ECC_Visibility, collisionParams))
			{
				if (UKismetSystemLibrary::DoesImplementInterface(hit.GetActor(), UShootable::StaticClass()))
				{
					IShootable::Execute_GetShot(hit.GetActor());
				}
				UGameplayStatics::ApplyDamage(hit.GetActor(), damage, this->GetInstigatorController(), this, TSubclassOf<UDamageType>(UDamageType::StaticClass()));
				UGameplayStatics::SpawnEmitterAtLocation(world, hitParticle , hit.Location);			
			}
		}
		onShoot.Broadcast(energyCost);
	}
	world->GetTimerManager().SetTimer(WeaponResetTimerHandle, this, &AWeapon_Shotgun::ResetShoot, shootCooldown);
	return true;
}

void AWeapon_Shotgun::GetUpdatedDirties()
{
	const UWorld* world = GetWorld();
	AGameModeBase* tempGamemode = UGameplayStatics::GetGameMode(world);
	
	if (tempGamemode->GetClass()->ImplementsInterface(UGetGEPGamemode::StaticClass()))
	{
		UUpgradeSystem* upgradeSystem = IGetGEPGamemode::Execute_GetGEPGamemode(tempGamemode)->GetUpgradeSystem();
		damage = baseDamage * upgradeSystem->GetUpgradeValue(Weapon_Shotgun_Damage);
		shootCooldown = baseShootCooldown * upgradeSystem->GetUpgradeValue(Weapon_Shotgun_Firerate);
		spread = baseSpread * upgradeSystem->GetUpgradeValue(Weapon_Shotgun_Spread);
		pelletCount = basePelletCount + upgradeSystem->GetUpgradeValue(Weapon_Shotgun_PelletCount);
		//Need To Do Currency Stuff
	}
}
void AWeapon_Shotgun::BeginPlay()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->onDirtyShotgun.AddDynamic(this, &AWeapon_Shotgun::GetUpdatedDirties);
	Super::BeginPlay();
}