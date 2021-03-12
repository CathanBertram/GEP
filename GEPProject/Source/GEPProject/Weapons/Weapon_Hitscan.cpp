// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Hitscan.h"

#include "K2Node_GetSubsystem.h"
#include "GEPProject/Interfaces/Shootable.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Components/ArrowComponent.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"

void AWeapon_Hitscan::BeginPlay()
{
	Super::BeginPlay();
}
bool AWeapon_Hitscan::Fire_Implementation()
{
	UWorld* const world = GetWorld();
	if (world != nullptr)
	{
		
		
		FHitResult hit(ForceInit);
		UArrowComponent* muzzle = GetGunMuzzle();
		FVector start = UGameplayStatics::GetPlayerController(world, 0)->PlayerCameraManager->GetCameraLocation();
		FVector forward = UGameplayStatics::GetPlayerController(world, 0)->PlayerCameraManager->GetActorForwardVector();
			
		
		FVector end = (forward * range) + start;
		//FVector start = ((muzzle != nullptr) ? muzzle->GetComponentLocation() : GetActorLocation());
		//FVector end = (((muzzle != nullptr) ? muzzle->GetForwardVector() : GetActorForwardVector()) * 100000);
		
		
		const FName traceTag("TraceTag");
		world->DebugDrawTraceTag = traceTag; //Draws arrow at hit point
		FCollisionQueryParams collisionParams;
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
	return true;
}

