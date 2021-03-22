// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GEPProject/Interfaces/FireReleaseable.h"
#include "Weapon_Hitscan.h"
#include "Weapon_Hitscan_Charge.generated.h"

/**
 * 
 */
UCLASS()
class GEPPROJECT_API AWeapon_Hitscan_Charge : public AWeapon_Hitscan, public IFireReleaseable
{
	GENERATED_BODY()
public:
	virtual bool Fire_Implementation(float energyCost) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireReleased(float curEnergy);
	virtual void FireReleased_Implementation(float curEnergy) override;

protected:
	UPROPERTY(EditAnywhere, Category = "Weapon Variables")
	float chargeTime;
	UPROPERTY(EditAnywhere)
	USoundCue* chargeSound;
	
	bool charged = false;
	
	FTimerHandle ChargeTimerHandle;

	void FinishCharge();

	
	
};
