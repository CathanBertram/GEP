// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GEPSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class GEPPROJECT_API UGEPSaveGame : public USaveGame
{
	GENERATED_BODY()
public:
	UGEPSaveGame();

	UPROPERTY(EditAnywhere)
	FTransform transform;
	UPROPERTY(EditAnywhere)
	int currency;
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AActor>> unlockedWeapons;
};
