// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Projectile.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Components/ArrowComponent.h"
#include "GEPProject/Interfaces/Pawnable.h"
#include "Kismet/GameplayStatics.h"

bool AWeapon_Projectile::Fire_Implementation()
{
	if (!canShoot) return false;
	if (curEnergy < energyCost) return false;
	canShoot = false;
	UWorld* const world = GetWorld();
	if (world != nullptr && projectile != nullptr)
	{
		USceneComponent* muzzle = GetGunMuzzle();
		FVector spawnLocation = ((muzzle != nullptr) ? muzzle->GetComponentLocation() : GetActorLocation());
		FRotator spawnRotation = ((muzzle != nullptr) ? muzzle->GetComponentRotation() : GetActorRotation());

		UGameplayStatics::PlaySound2D(world, shootSound);
		UGameplayStatics::SpawnEmitterAtLocation(world, muzzleFlash , muzzle->GetComponentLocation());
		
		FActorSpawnParameters actorSpawnParams;
		actorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		AActor* parentActor = GetParentActor();
		actorSpawnParams.Owner = parentActor;
		actorSpawnParams.Instigator = Cast<IPawnable>(parentActor)->Execute_GetAsPawn(parentActor);
		AGrenadeProjectile* grenadeProjectile =	world->SpawnActor<AGrenadeProjectile>(projectile, spawnLocation, spawnRotation, actorSpawnParams);
		grenadeProjectile->Init(damage, damageRadius);
	}
	onShoot.Broadcast(energyCost);
	world->GetTimerManager().SetTimer(WeaponResetTimerHandle, this, &AWeapon_Projectile::ResetShoot, shootCooldown);
	return true;
}


