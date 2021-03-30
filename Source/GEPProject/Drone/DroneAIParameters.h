// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DroneAIParameters.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GEPPROJECT_API UDroneAIParameters : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDroneAIParameters();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float linearDamping;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float angularDamping;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float compMaxForce;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float compMaxVel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float compMaxDist;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float compRotationAlpha;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool compUseShortestPath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float compMaxDistFromTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float compMinDistFromTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float addedElevation;

	ACharacter* owner;
	
	void Setup();

		
};
