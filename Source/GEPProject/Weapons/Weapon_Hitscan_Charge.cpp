// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Hitscan_Charge.h"

#include "Kismet/GameplayStatics.h"

bool AWeapon_Hitscan_Charge::Fire_Implementation()
{
	if (curEnergy < energyCost) return false;
	if(canShoot)
	{
		GetWorld()->GetTimerManager().SetTimer(ChargeTimerHandle, this, &AWeapon_Hitscan_Charge::FinishCharge, chargeTime);
	}
	
	return true;
}

void AWeapon_Hitscan_Charge::FireReleased_Implementation()
{
	if (charged)
	{
		Super::Shoot();
	}
	GetWorld()->GetTimerManager().ClearTimer(ChargeTimerHandle);
	charged = false;
}

void AWeapon_Hitscan_Charge::FinishCharge()
{
	UGameplayStatics::PlaySound2D(GetWorld(), chargeSound);
	charged = true;
}
