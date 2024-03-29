// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "FUpgrade.h"
#include "Components/SceneComponent.h"
#include "GEPProject/EventSystem.h"

#include "UpgradeSystem.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GEPPROJECT_API UUpgradeSystem : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUpgradeSystem();

	float GetUpgradeValue(TEnumAsByte<EUpgradeTypes> upgradeType);
	void Init(UEventSystem* eventSystem);
	float GetUpgradeCost(TEnumAsByte<EUpgradeTypes> upgradeType);
	void SetUpgradeArray(TArray<FUpgrade> newUpgrades);
	TArray<FUpgrade> GetUpgradeArray() {return upgrades;}

	void UpdateDirties();
	void ForceUpdateDirties();
protected:

	UPROPERTY(EditAnywhere)
	TArray<FUpgrade> upgrades;
	UEventSystem* eventInstance;
	UFUNCTION()
	void Upgrade(TEnumAsByte<EUpgradeTypes> upgradeType, int currency);
	void SetDirty(EUpgradeTypes upgradeType);
	
	bool playerDirty;
	bool enemyDirty;
	bool droneDirty;
	bool pistolDirty;
	bool revolverDirty;
	bool shotgunDirty;
	bool smgDirty;
	bool rifleDirty;
	bool autoRifleDirty;
	bool rayGunDirty;
	bool grenadeLauncherDirty;
};



