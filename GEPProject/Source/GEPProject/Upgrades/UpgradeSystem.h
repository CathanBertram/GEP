// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "Upgrade.h"
#include "Components/SceneComponent.h"
#include "UpgradeSystem.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GEPPROJECT_API UUpgradeSystem : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUpgradeSystem();

	float GetUpgradeValue(TEnumAsByte<EUpgradeTypes> upgradeType);
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere)
	TArray<FUpgrade> upgrades;

public:	


		
};

