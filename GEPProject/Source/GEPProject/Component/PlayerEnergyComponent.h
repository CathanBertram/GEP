// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GEPProject/EventSystem.h"
#include "GEPProject/Weapons/Weapon_Base.h"


#include "PlayerEnergyComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompEnergyUpdate, float, newCur);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GEPPROJECT_API UPlayerEnergyComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	float GetEnergyPercent() {return currentEnergy/maxEnergy;}
	void SetCurEnergy(float energy) {currentEnergy = energy;}
	void SetMaxEnergy(float energy) {maxEnergy = energy;}
	void SetBaseEnergy(float energy) {baseEnergy = energy;}
	float GetMaxEnergy(){return maxEnergy;}
	float GetCurEnergy(){return currentEnergy;}
	virtual void Init();
	void UseEnergy(float energyToUse);
	void SetEventInstance(UEventSystem* instance) {eventInstance = instance;}
	FOnCompEnergyUpdate onCompEnergyUpdate;
	void UpdateEnergyRegenAmount(float multi){energyRegenAmount = baseEnergyRegenAmount * multi;}
	void UpdateEnergyRegenCooldown(float multi){energyRegenCooldown = baseEnergyRegenCooldown * multi;}
	bool constantRegen = false;
protected:
	protected:
	UPROPERTY(EditAnywhere)
	float maxEnergy;
	UPROPERTY(EditAnywhere)
	float currentEnergy;
	UPROPERTY(EditAnywhere)
	float baseEnergy;
	UPROPERTY(EditAnywhere)
	float energyRegenCooldown;
	UPROPERTY(EditAnywhere)
	float energyRegenAmount;
	UPROPERTY(EditAnywhere)
	float energyRegenResetTime;
	UPROPERTY(EditAnywhere)
	float baseEnergyRegenCooldown;
	UPROPERTY(EditAnywhere)
	float baseEnergyRegenAmount;
	
	UPROPERTY(EditAnywhere)
	bool canConsume = true;

	void Regen();
	UEventSystem* eventInstance;
	FTimerHandle EnergyRegenCooldownHandle;
};
