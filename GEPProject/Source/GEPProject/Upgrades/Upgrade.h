// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "EUpgradeTypes.h"
#include "Engine/UserDefinedStruct.h"
#include "Framework/Views/ITypedTableView.h"
#include "GEPProject/Upgrades/EUpgradeTypes.h"

#include "Upgrade.generated.h"

USTRUCT()
struct FUpgrade
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	int level;
	UPROPERTY(EditAnywhere)
	float cost;
	UPROPERTY(EditAnywhere)
	float valueMulti;
	UPROPERTY(EditAnywhere)
	TEnumAsByte<EUpgradeTypes> upgradeType;

	FUpgrade()
	{
		cost = 0;
		valueMulti = 0;
	}
	FUpgrade(float Cost, float MultiValue, TEnumAsByte<EUpgradeTypes> UpgradeType)
	{
		cost = Cost;
		valueMulti = MultiValue;
		upgradeType = UpgradeType;
	}
};
