// Fill out your copyright notice in the Description page of Project Settings.


#include "UpgradeSystem.h"

#include "EUpgradeTypes.h"

UUpgradeSystem::UUpgradeSystem()
{
	for (int i = 0; i < static_cast<int>(EUpgradeTypes::End); ++i)
	{
		upgrades.Add(FUpgrade(0,0, static_cast<EUpgradeTypes>(i)));
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::FromInt(static_cast<int>(upgrades[i].upgradeType)));
	}
}
float UUpgradeSystem::GetUpgradeValue(EUpgradeTypes upgradeType)
{
	for (FUpgrade upgrade : upgrades)
	{
		if (upgrade.upgradeType == upgradeType)
		{
			return upgrade.valueMulti;
		}
	}
	return 1;
}

void UUpgradeSystem::BeginPlay()
{

}

