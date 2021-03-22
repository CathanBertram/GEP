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
			return upgrade.valueMulti;
		}
	}
	return 1;
}

void UUpgradeSystem::BeginPlay()
{

}

