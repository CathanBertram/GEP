// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerEnergyComponent.h"


void UPlayerEnergyComponent::Init()
{
	currentEnergy = baseEnergy;
	maxEnergy = baseEnergy;
	energyRegenAmount = baseEnergyRegenAmount;
	energyRegenCooldown = baseEnergyRegenCooldown;
	Regen();
}

void UPlayerEnergyComponent::UseEnergy(float energyToUse)
{
	if(!canConsume) return;
	currentEnergy -= energyToUse;
	eventInstance->OnEnergyUpdate(GetEnergyPercent());

	if(constantRegen) return;
	
	GetWorld()->GetTimerManager().ClearTimer(EnergyRegenCooldownHandle);
	GetWorld()->GetTimerManager().SetTimer(EnergyRegenCooldownHandle, this, &UPlayerEnergyComponent::Regen, energyRegenResetTime);
}

void UPlayerEnergyComponent::Regen()
{
	currentEnergy += energyRegenAmount;
	if (currentEnergy >= maxEnergy)
		currentEnergy = maxEnergy;
	eventInstance->OnEnergyUpdate(GetEnergyPercent());
	onCompEnergyUpdate.Broadcast(currentEnergy);
	GetWorld()->GetTimerManager().SetTimer(EnergyRegenCooldownHandle, this, &UPlayerEnergyComponent::Regen, energyRegenCooldown);
}

