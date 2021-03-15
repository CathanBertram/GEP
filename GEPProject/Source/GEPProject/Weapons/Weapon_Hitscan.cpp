// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Hitscan.h"

#include "K2Node_GetSubsystem.h"
#include "GEPProject/Interfaces/Shootable.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Components/ArrowComponent.h"
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


void AWeapon_Hitscan::ResetShoot()
{
	canShoot = true;
}

void AWeapon_Hitscan::Shoot()
{
	if (!canShoot) return;

	canShoot = false;
	UWorld* const world = GetWorld();
	if (world != nullptr)
	{	
		FHitResult hit(ForceInit);
		USceneComponent* muzzle = GetGunMuzzle();
		FVector start = UGameplayStatics::GetPlayerController(world, 0)->PlayerCameraManager->GetCameraLocation();
		FVector forward = UGameplayStatics::GetPlayerController(world, 0)->PlayerCameraManager->GetActorForwardVector();

		UGameplayStatics::PlaySound2D(world, shootSound);
		UGameplayStatics::SpawnEmitterAtLocation(world, muzzleFlash , muzzle->GetComponentLocation());
		
		FVector end = (forward * range) + start;
		//FVector start = ((muzzle != nullptr) ? muzzle->GetComponentLocation() : GetActorLocation());
		//FVector end = (((muzzle != nullptr) ? muzzle->GetForwardVector() : GetActorForwardVector()) * 100000);
		
		
		// const FName traceTag("TraceTag");
		// world->DebugDrawTraceTag = traceTag; //Draws arrow at hit point
		FCollisionQueryParams collisionParams;
		//collisionParams.TraceTag = traceTag;

		if (world->LineTraceSingleByChannel(hit, start,end, ECC_Visibility, collisionParams))
		{
			IShootable* shootableCast = Cast<IShootable>(hit.GetActor()); //cast to Interface through Actor
			if (shootableCast)
			{
				shootableCast->Execute_GetShot(hit.GetActor());
			}
			UGameplayStatics::SpawnEmitterAtLocation(world, hitParticle , hit.Location);	
		}
	}
	world->GetTimerManager().SetTimer(WeaponResetTimerHandle, this, &AWeapon_Hitscan::ResetShoot, shootCooldown);
}

