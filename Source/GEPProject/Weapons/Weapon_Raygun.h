// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon_Hitscan_Auto.h"
#include "Weapon_Raygun.generated.h"

/**
 * 
 */
UCLASS()
class GEPPROJECT_API AWeapon_Raygun : public AWeapon_Hitscan_Auto
{
	GENERATED_BODY()
	UFUNCTION()
void GetUpdatedDirties() ;
	virtual void BeginPlay() override;
};
