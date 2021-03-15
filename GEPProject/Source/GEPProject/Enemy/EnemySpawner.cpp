// Fill out your copyright notice in the Description page of Project Settings.
#include "EnemySpawner.h"

#include "Enemy_Base.h"
#include "Components/BoxComponent.h"
#include "GEPProject/Interfaces/InitableEnemy.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
	boundingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundingBox"));
	maxEnemyCount = 10;
	curEnemyCount = 0;
}

void AEnemySpawner::BeginPlay()
{
	Init_Implementation();
}

void AEnemySpawner::Init_Implementation()
{
	//Do init things
	curEnemyCount = 0;
	GetWorld()->GetTimerManager().SetTimer(EnemySpawnTimerHandle, this, &AEnemySpawner::SpawnEnemy, 1.f);
}

void AEnemySpawner::SpawnEnemy()
{
	UWorld* const world =  GetWorld();
	if (curEnemyCount < maxEnemyCount || maxEnemyCount == 0)
	{
		int i = FMath::RandRange(0, enemyList.Num() - 1);
		TSubclassOf<AActor> enemyToSpawn = enemyList[i];
		if (world != nullptr && enemyToSpawn)
		{
			FVector origin = boundingBox->GetComponentLocation();
			FVector extents = boundingBox->GetScaledBoxExtent();
		
			FVector spawnPosition = UKismetMathLibrary::RandomPointInBoundingBox(origin, extents);
			FRotator spawnRotation = FRotator::ZeroRotator;
			FActorSpawnParameters actorSpawnParams;
			actorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		
			AActor* tempActor = world->SpawnActor<AActor>(enemyToSpawn, spawnPosition, spawnRotation, actorSpawnParams);
			if (UKismetSystemLibrary::DoesImplementInterface(tempActor, UInitableEnemy::StaticClass()))
			{
				AEnemy_Base* tempEnemy = IInitableEnemy::Execute_GetEnemyBase(tempActor);
			
				//Bind events
				tempEnemy->OnDeath.AddDynamic(this, &AEnemySpawner::EnemyDied);
				
				IInitableEnemy::Execute_Init(tempActor);
			}
			curEnemyCount++;
		}
	}	
	world->GetTimerManager().SetTimer(EnemySpawnTimerHandle, this, &AEnemySpawner::SpawnEnemy, .3f);
}

void AEnemySpawner::EnemyDied()
{
	curEnemyCount--;
}

