// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Interfaces/GetGEPSaveGame.h"
#include "Upgrades/FUpgrade.h"
#include "Enemy/Enemy_Base.h"

#include "GEPSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class GEPPROJECT_API UGEPSaveGame : public USaveGame, public IGetGEPSaveGame
{
	GENERATED_BODY()
public:
	UGEPSaveGame();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UGEPSaveGame* GetGEPSave();
	virtual UGEPSaveGame* GetGEPSave_Implementation() override;
	
	UPROPERTY(EditAnywhere)
	FTransform transform;
	UPROPERTY(EditAnywhere)
	int currency;
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AActor>> unlockedWeapons;
	UPROPERTY(EditAnywhere)
	float curHealth;
	UPROPERTY(EditAnywhere)
	float maxHealth;
	UPROPERTY(EditAnywhere)
	float curEnergy;
	UPROPERTY(EditAnywhere)
	float maxEnergy;
	UPROPERTY(EditAnywhere)
	TArray<FUpgrade> upgrades;
	UPROPERTY(EditAnywhere)
	bool canBeDamaged;
	UPROPERTY(EditAnywhere)
	bool constantEnergyRegen;
};
