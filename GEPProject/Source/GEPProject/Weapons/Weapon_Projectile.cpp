// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Projectile.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Components/ArrowComponent.h"
#include "GEPProject/Interfaces/Pawnable.h"

bool AWeapon_Projectile::Fire_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red, FString::Printf(TEXT("Firing proj weapon")));
	UWorld* const world = GetWorld();
	if (world != nullptr && projectile != nullptr)
	{
		UArrowComponent* muzzle = GetGunMuzzle();
		FVector spawnLocation = ((muzzle != nullptr) ? muzzle->GetComponentLocation() : GetActorLocation());
		FRotator spawnRotation = ((muzzle != nullptr) ? muzzle->GetComponentRotation() : GetActorRotation());

		FActorSpawnParameters actorSpawnParams;
		actorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		AActor* parentActor = GetParentActor();
		actorSpawnParams.Owner = parentActor;
		actorSpawnParams.Instigator = Cast<IPawnable>(parentActor)->Execute_GetAsPawn(parentActor);

		world->SpawnActor<AGEPProjectProjectile>(projectile, spawnLocation, spawnRotation, actorSpawnParams);
	}
	return true;
}


