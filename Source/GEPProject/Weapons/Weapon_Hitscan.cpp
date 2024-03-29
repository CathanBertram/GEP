// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Hitscan.h"

#include "GEPProject/Interfaces/Shootable.h"
#include "Engine/World.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"


AWeapon_Hitscan::AWeapon_Hitscan() : AWeapon_Base()
{
	range = 100000.f;
	shootCooldown = 1.f;
	damage = 10.f;
}

bool AWeapon_Hitscan::Fire_Implementation()
{
	Shoot();
	return true;
}


void AWeapon_Hitscan::Shoot()
{
	if (!canShoot) return;
	if (curEnergy < energyCost) return;
	
	canShoot = false;
	const UWorld* const world = GetWorld();
	if (world != nullptr)
	{	
		FHitResult hit(ForceInit);
		USceneComponent* muzzle = GetGunMuzzle();
		APlayerCameraManager* cameraManager = UGameplayStatics::GetPlayerController(world, 0)->PlayerCameraManager;
		FVector start = cameraManager->GetCameraLocation();
		FVector forward = cameraManager->GetActorForwardVector();
		//add screen shake maybe
		
		PlayShootEffects();
		
		FVector end = (forward * range) + start;

		// const FName traceTag("TraceTag");
		// world->DebugDrawTraceTag = traceTag; //Draws arrow at hit point
		FCollisionQueryParams collisionParams;
		//collisionParams.TraceTag = traceTag;

		if (world->LineTraceSingleByChannel(hit, start,end, ECC_Visibility, collisionParams))
		{
			if (UKismetSystemLibrary::DoesImplementInterface(hit.GetActor(), UShootable::StaticClass()))
			{
				IShootable::Execute_GetShot(hit.GetActor());
			}
			//Use this to damage enemies
			UGameplayStatics::ApplyDamage(hit.GetActor(), damage, this->GetInstigatorController(), this, TSubclassOf<UDamageType>(UDamageType::StaticClass()));
			PlayHitEffects(hit.ImpactPoint);
		}
	}
	onShoot.Broadcast(energyCost);
	world->GetTimerManager().SetTimer(WeaponResetTimerHandle, this, &AWeapon_Hitscan::ResetShoot, shootCooldown);
}

