// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon_Base.h"
#include "Weapon_Hitscan.generated.h"


UCLASS(Abstract)
class GEPPROJECT_API AWeapon_Hitscan : public AWeapon_Base
{
	GENERATED_BODY()
	
public:
	virtual bool Fire_Implementation() override;

protected:
	UPROPERTY(EditAnywhere, Category = "Weapon Variables")
	float range;

	virtual void BeginPlay() override;
	
};
