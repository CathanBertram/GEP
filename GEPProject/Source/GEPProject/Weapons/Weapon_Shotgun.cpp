// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Shotgun.h"


#include "Engine/EngineTypes.h"
#include "GEPProject/Interfaces/Shootable.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

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
		
	}
	world->GetTimerManager().SetTimer(WeaponResetTimerHandle, this, &AWeapon_Shotgun::ResetShoot, shootCooldown);
	return true;
}
