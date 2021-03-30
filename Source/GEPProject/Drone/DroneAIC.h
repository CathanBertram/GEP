// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "DroneAIParameters.h"
#include "Perception/PawnSensingComponent.h"

#include "DroneAIC.generated.h"

/**
 * 
 */
UCLASS()
class GEPPROJECT_API ADroneAIC : public AAIController
{
	GENERATED_BODY()
	ADroneAIC();

	UPawnSensingComponent* pawnSensing;
	void OnSeePawn(APawn* pawn);

	UPROPERTY(EditAnywhere)
	UBehaviorTree* behaviorTree;
	UPROPERTY(EditAnywhere)
	APawn* target;
	UPROPERTY(EditAnywhere)
	UDroneAIParameters* droneAIParams;
public:
	void Init();

	void SetupAIC(UBehaviorTree* bt, APawn* pawnTarget, UDroneAIParameters* aiParams);

	void RunBT();
};


