// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GrenadeProjectile.h"
#include "Weapon_Base.h"
#include "GEPProject/Weapons/GEPProjectProjectile.h"
#include "Weapon_Projectile.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class GEPPROJECT_API AWeapon_Projectile : public AWeapon_Base
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Projectile")
	TSubclassOf<AGrenadeProjectile> projectile;

public:
	virtual bool Fire_Implementation() override;
	
protected:
	UPROPERTY(EditAnywhere)
	float damageRadius;

};
