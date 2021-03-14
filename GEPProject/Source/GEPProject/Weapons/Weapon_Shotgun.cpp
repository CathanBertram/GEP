// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Shotgun.h"

#include "GEPProject/Interfaces/Shootable.h"
#include "Kismet/GameplayStatics.h"

bool AWeapon_Shotgun::Fire_Implementation()
{	if (!canShoot) return false;

	canShoot = false;
	UWorld* const world = GetWorld();
	if (world != nullptr)
	{	
		USceneComponent* muzzle = GetGunMuzzle();
		UGameplayStatics::PlaySound2D(world, shootSound);
		UGameplayStatics::SpawnEmitterAtLocation(world, muzzleFlash , muzzle->GetComponentLocation());

		for (int i = 0; i < pelletCount; ++i)
		{
			FHitResult hit(ForceInit);
			FVector start = UGameplayStatics::GetPlayerController(world, 0)->PlayerCameraManager->GetCameraLocation();
			FVector forward = UGameplayStatics::GetPlayerController(world, 0)->PlayerCameraManager->GetActorForwardVector();

			forward.Y += FMath::RandRange(-spread, spread);
			forward.Z += FMath::RandRange(-spread, spread);
			FVector end = (forward * range) + start;	
		
			FCollisionQueryParams collisionParams;
			const FName traceTag("TraceTag");
			world->DebugDrawTraceTag = traceTag; //Draws arrow at hit point
			collisionParams.TraceTag = traceTag;

			if (world->LineTraceSingleByChannel(hit, start,end, ECC_Visibility, collisionParams))
			{
				IShootable* shootableCast = Cast<IShootable>(hit.GetActor()); //cast to Interface through Actor
				if (shootableCast)
				{
					shootableCast->Execute_GetShot(hit.GetActor());
				}
				//hit.Actor->Destroy(false, false);			
			}
		}
		
	}
	world->GetTimerManager().SetTimer(WeaponResetTimerHandle, this, &AWeapon_Hitscan::ResetShoot, shootCooldown);
	return true;
}
