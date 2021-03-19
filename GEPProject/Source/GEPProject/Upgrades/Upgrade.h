// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "Framework/Views/ITypedTableView.h"
#include "GEPProject/UpgradeTypes.h"

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
	TEnumAsByte<UpgradeTypes> upgradeType;

	FUpgrade(float Cost, float MultiValue, TEnumAsByte<UpgradeTypes> UpgradeType)
	{
		cost = Cost;
		valueMulti = MultiValue;
		upgradeType = UpgradeType;
	}
};
