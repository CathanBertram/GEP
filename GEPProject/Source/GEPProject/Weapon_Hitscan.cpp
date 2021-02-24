// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Hitscan.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Components/ArrowComponent.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"

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
		world->DebugDrawTraceTag = traceTag;
		FCollisionQueryParams collsionParams;
		collsionParams.TraceTag = traceTag;

		if (world->LineTraceSingleByChannel(hit, start,end, ECC_Visibility, collsionParams))
		{
			GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,hit.GetActor()->GetName());
			hit.Actor->K2_DestroyActor();
		}
	}
	return true;
}


