// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GEPProject/Enemy/Enemy_Base.h"
#include "GameFramework/Actor.h"
#include "GEPProject/Interfaces/Initable.h"

#include "DroneManager.generated.h"

UCLASS()
class GEPPROJECT_API ADroneManager : public AActor, public IInitable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADroneManager();
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
    void Init();
	virtual void Init_Implementation() override;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* boundingBox;
protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> droneToSpawn;
	UPROPERTY(EditAnywhere)
	int maxDroneCount;
	UPROPERTY(EditAnywhere)
	int droneCount;
	UPROPERTY(EditAnywhere)
	float spawnTimer;
	
	void SpawnDrone();

	void EnemyDied(AEnemy_Base* enemy);

};
