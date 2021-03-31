// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GEPProject/Interfaces/Initable.h"
#include "GameFramework/Actor.h"
#include "GEPProject/GEPSaveGame.h"
#include "Enemy_Base.h"
#include "EnemySpawner.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemyDeath, AEnemy_Base*, enemy);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemySpawned, AActor*, enemy);

UCLASS()
class GEPPROJECT_API AEnemySpawner : public AActor, public IInitable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawner();

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void Init();
	virtual void Init_Implementation() override;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* boundingBox;

	FOnEnemyDeath onEnemyDeath;
	FOnEnemySpawned onEnemySpawned;
protected:
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AActor>> enemyList;
	
	UPROPERTY(EditAnywhere)
	int maxEnemyCount;
	UPROPERTY(EditAnywhere)
	int baseMaxEnemyCount;
	UPROPERTY(EditAnywhere)
	float enemySpawnRate;
	UPROPERTY(EditAnywhere)
	float baseEnemySpawnRate;
	UPROPERTY(EditAnywhere)
	float enemySpawnAmount;
	UPROPERTY(EditAnywhere)
	float baseEnemySpawnAmount;
	int curEnemyCount;

	UFUNCTION()
	void GetUpdatedMultipliers();	
	void SpawnEnemy();
	UFUNCTION()
	void EnemyDied(AEnemy_Base* enemy);
	FTimerHandle EnemySpawnTimerHandle;

};
