// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon_Hitscan_Auto.h"
#include "Weapon_SMG.generated.h"

/**
 * 
 */
UCLASS()
class GEPPROJECT_API AWeapon_SMG : public AWeapon_Hitscan_Auto
{
	GENERATED_BODY()
	UFUNCTION()
	void GetUpdatedDirties();
	virtual void BeginPlay() override;
};
