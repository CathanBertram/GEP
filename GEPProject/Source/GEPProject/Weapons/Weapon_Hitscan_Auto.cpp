// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Hitscan_Auto.h"

bool AWeapon_Hitscan_Auto::Fire_Implementation(float curEnergy)
{
	shooting = true;
	Shoot(curEnergy);
	return true;
}

void AWeapon_Hitscan_Auto::FireReleased_Implementation(float curEnergy)
{
	shooting = false;
}

void AWeapon_Hitscan_Auto::Shoot(float curEnergy)
{
	if (shooting)
	{
		Super::Shoot(curEnergy);
		curEnergy -= energyCost;
		FTimerDelegate shootDelegate = FTimerDelegate::CreateUObject(this, &AWeapon_Hitscan_Auto::Shoot, curEnergy);
		GetWorld()->GetTimerManager().SetTimer(WeaponShootTimerHandle, shootDelegate, shootCooldown, false);
	}
}
