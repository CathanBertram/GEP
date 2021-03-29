// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Hitscan_Auto.h"

bool AWeapon_Hitscan_Auto::Fire_Implementation( )
{
	shooting = true;
	Shoot();
	return true;
}

void AWeapon_Hitscan_Auto::FireReleased_Implementation()
{
	shooting = false;
}

void AWeapon_Hitscan_Auto::Shoot()
{
	if (shooting)
	{
		Super::Shoot();
		GetWorld()->GetTimerManager().SetTimer(WeaponShootTimerHandle, this, &AWeapon_Hitscan_Auto::Shoot, shootCooldown);
	}
}
