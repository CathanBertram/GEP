// Fill out your copyright notice in the Description page of Project Settings.


#include "UpgradeSystem.h"

#include "EUpgradeTypes.h"


UUpgradeSystem::UUpgradeSystem()
{
	//Create upgrades and add them to array
	for (int i = 0; i < static_cast<int>(EUpgradeTypes::End); ++i)
	{
		upgrades.Add(FUpgrade(0,0, static_cast<TEnumAsByte<EUpgradeTypes>>(i)));
	}
}

float UUpgradeSystem::GetUpgradeValue(TEnumAsByte<EUpgradeTypes> upgradeType)
{
	for (FUpgrade upgrade : upgrades)
	{
		if (upgrade.upgradeType == upgradeType)
		{
			if (upgrade.upgradeValueType == EUpgradeValueTypes::Add)
				return upgrade.valueMulti * upgrade.level;
			else if(upgrade.upgradeValueType == EUpgradeValueTypes::Multiply)
				return FMath::Pow(upgrade.valueMulti, upgrade.level);
			return upgrade.valueMulti;
		}
	}
	return 1;
}

void UUpgradeSystem::Init(UEventSystem* eventSystem)
{	
	eventInstance = eventSystem;
	eventSystem->onUpgradeAttempt.AddDynamic(this, &UUpgradeSystem::Upgrade);
}

float UUpgradeSystem::GetUpgradeCost(TEnumAsByte<EUpgradeTypes> upgradeType)
{
	for (FUpgrade upgrade : upgrades)
	{
		if (upgrade.upgradeType == upgradeType)
		{
			return upgrade.cost;
		}
	}
	return 0;
}

void UUpgradeSystem::Upgrade(TEnumAsByte<EUpgradeTypes> upgradeType, int currency)
{
	for (int i = 0; i < upgrades.Num(); ++i)
	{
		if (upgrades[i].upgradeType == upgradeType)
		{
			if (currency >= upgrades[i].cost)
			{
				upgrades[i].level++;
				eventInstance->OnCurrencyLoss(upgrades[i].cost);
				GEngine->AddOnScreenDebugMessage(-1,.5f,FColor::Red,FString::FromInt(static_cast<int>(upgrades[i].upgradeType)));
				GEngine->AddOnScreenDebugMessage(-1,.5f,FColor::Red,FString::FromInt(upgrades[i].level));
			}	
		}
	}
}

