// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerEnergyComponent.h"


void UPlayerEnergyComponent::Init()
{
	currentEnergy = baseEnergy;
	maxEnergy = baseEnergy;
	Regen();
}

void UPlayerEnergyComponent::UseEnergy(float energyToUse)
{
	currentEnergy -= energyToUse;
	eventInstance->OnEnergyUpdate(GetEnergyPercent());
	GetWorld()->GetTimerManager().ClearTimer(EnergyRegenCooldownHandle);
	GetWorld()->GetTimerManager().SetTimer(EnergyRegenCooldownHandle, this, &UPlayerEnergyComponent::Regen, energyRegenResetTime);
}

void UPlayerEnergyComponent::Regen()
{
	currentEnergy += energyRegenAmount;
	if (currentEnergy >= maxEnergy)
		currentEnergy = maxEnergy;
	eventInstance->OnEnergyUpdate(GetEnergyPercent());
	
	GetWorld()->GetTimerManager().SetTimer(EnergyRegenCooldownHandle, this, &UPlayerEnergyComponent::Regen, energyRegenCooldown);
}

