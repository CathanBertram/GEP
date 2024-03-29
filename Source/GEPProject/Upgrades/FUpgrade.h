// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "EUpgradeTypes.h"
#include "Engine/UserDefinedStruct.h"
#include "Framework/Views/ITypedTableView.h"
#include "GEPProject/Upgrades/EUpgradeTypes.h"

#include "FUpgrade.generated.h"

USTRUCT()
struct FUpgrade
{
	GENERATED_BODY();
	
	FUpgrade()
	{
		level = 0;
		maxLevel = 50;
		cost = 0;
		valueMulti = 0;
		upgradeValueType = EUpgradeValueTypes::Multiply;
	}

	FUpgrade(float Cost, float MultiValue, TEnumAsByte<EUpgradeTypes> UpgradeType)
	{
		level = 0;
		maxLevel = 50;
		cost = Cost;
		valueMulti = MultiValue;
		upgradeType = UpgradeType;
		upgradeValueType = EUpgradeValueTypes::Multiply;
	}
	
	UPROPERTY(EditAnywhere)
	int level;
	UPROPERTY(EditAnywhere)
	int maxLevel;
	UPROPERTY(EditAnywhere)
	float cost;
	UPROPERTY(EditAnywhere)
	float valueMulti;
	UPROPERTY(EditAnywhere)
	TEnumAsByte<EUpgradeTypes> upgradeType;
	UPROPERTY(EditAnywhere)
	TEnumAsByte<EUpgradeValueTypes> upgradeValueType;

	void SetLevel(int newLevel) {level = newLevel;}
	void IncreaseLevel() {level++;}
};
