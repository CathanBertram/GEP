// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Weapon_Hitscan.h"
#include "GEPProject/Interfaces/FireReleaseable.h"

#include "Weapon_Hitscan_Auto.generated.h"

/**
 * 
 */
UCLASS()
class GEPPROJECT_API AWeapon_Hitscan_Auto : public AWeapon_Hitscan, public IFireReleaseable
{
	GENERATED_BODY()
public:
	virtual bool Fire_Implementation( ) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void FireReleased( );
	virtual void FireReleased_Implementation( ) override;

protected:
	bool shooting;
	virtual void Shoot( ) override;
	FTimerHandle WeaponShootTimerHandle;
};