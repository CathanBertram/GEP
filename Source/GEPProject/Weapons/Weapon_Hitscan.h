// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon_Base.h"
#include "Sound/SoundCue.h"

#include "Weapon_Hitscan.generated.h"


UCLASS(Abstract)
class GEPPROJECT_API AWeapon_Hitscan : public AWeapon_Base
{
	GENERATED_BODY()
	
public:
	virtual bool Fire_Implementation() override;

	AWeapon_Hitscan();

protected:
	UPROPERTY(EditAnywhere, Category = "Weapon Variables")
	float range;

	UFUNCTION(BlueprintImplementableEvent)
	void PlayShootEffects();
	UFUNCTION(BlueprintImplementableEvent)
	void PlayHitEffects(FVector hitPoint);
	
	virtual void Shoot();

	UPROPERTY(EditAnywhere)
	UParticleSystem* hitParticle;
	
};
