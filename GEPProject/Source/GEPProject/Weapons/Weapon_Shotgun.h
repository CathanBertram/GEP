// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon_Hitscan.h"
#include "Weapon_Shotgun.generated.h"

/**
 * 
 */
UCLASS()
class GEPPROJECT_API AWeapon_Shotgun : public AWeapon_Hitscan
{
	GENERATED_BODY()
public:
	virtual bool Fire_Implementation(float curEnergy) override;

protected:
	UPROPERTY(EditAnywhere, Category = "Weapon Variables")
	int pelletCount;
	UPROPERTY(EditAnywhere, Category = "Weapon Variables")
	float spread;
	
};
