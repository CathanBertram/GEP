// Fill out your copyright notice in the Description page of Project Settings.


#include "CurrencyComponent.h"

// Sets default values for this component's properties
UCurrencyComponent::UCurrencyComponent()
{

}

void UCurrencyComponent::Init(UEventSystem* event)
{
	eventSystem = event;
	eventSystem->onCurrencyGain.AddDynamic(this, &UCurrencyComponent::GainCurrency);
	eventSystem->onCurrencyLoss.AddDynamic(this, &UCurrencyComponent::LoseCurrency);
	PassiveGen();
}

void UCurrencyComponent::GainCurrency(int amount)
{
	currency += amount * currencyMulti;
	eventSystem->OnCurrencyUpdate(currency);
}

void UCurrencyComponent::LoseCurrency(int amount)
{
	currency -= amount;
	eventSystem->OnCurrencyUpdate(currency);
}

void UCurrencyComponent::UpdateValues(UUpgradeSystem* upgrades)
{
	currencyMulti = baseCurrencyMulti * upgrades->GetUpgradeValue(EUpgradeTypes::Player_CurrencyDropped);
	currencyGen = baseCurrencyGen + upgrades->GetUpgradeValue(EUpgradeTypes::Player_PassiveCurrencyGain);
	currencyGenTick = baseCurrencyGenTick * upgrades->GetUpgradeValue(EUpgradeTypes::Player_PassiveCurrencyTick);
}

void UCurrencyComponent::PassiveGen()
{
	GEngine->AddOnScreenDebugMessage(-1, .5f, FColor::Red, FString::SanitizeFloat(currencyGenTick));
	currency += currencyGen;
	eventSystem->OnCurrencyUpdate(currency);
	GetWorld()->GetTimerManager().SetTimer(genTimer, this, &UCurrencyComponent::PassiveGen, currencyGenTick);
}

