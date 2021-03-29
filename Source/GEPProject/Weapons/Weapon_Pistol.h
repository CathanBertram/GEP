// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon_Hitscan.h"
#include "Weapon_Pistol.generated.h"

/**
 * 
 */
UCLASS()
class GEPPROJECT_API AWeapon_Pistol : public AWeapon_Hitscan
{
	GENERATED_BODY()

	UFUNCTION()
	void GetUpdatedDirties() ;
	
	virtual void BeginPlay() override;
};
