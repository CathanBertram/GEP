// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GEPProject/Interfaces/Initable.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

UCLASS()
class GEPPROJECT_API AEnemySpawner : public AActor, public IInitable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawner();

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void Init();
	virtual void Init_Implementation() override;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* boundingBox;

protected:
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AActor>> enemyList;
	
	UPROPERTY(EditAnywhere)
	int maxEnemyCount;
	int curEnemyCount;
	
	void SpawnEnemy();
	void EnemyDied();
	FTimerHandle EnemySpawnTimerHandle;

	
};
