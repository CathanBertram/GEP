// Fill out your copyright notice in the Description page of Project Settings.
#include "EnemySpawner.h"

#include "Enemy_Base.h"
#include "Components/BoxComponent.h"
#include "GameFramework/GameModeBase.h"
#include "GEPProject/EventSystem.h"
#include "GEPProject/GEPProjectGameMode.h"
#include "GEPProject/Interfaces/GetGEPGamemode.h"
#include "GEPProject/Interfaces/InitableEnemy.h"
#include "GEPProject/Upgrades/EUpgradeTypes.h"
#include "GEPProject/Upgrades/UpgradeSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
	boundingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundingBox"));
	maxEnemyCount = 10;
	curEnemyCount = 0;
}

void AEnemySpawner::Init_Implementation()
{
	//Do init things
	curEnemyCount = 0;
	GetGameInstance()->GetSubsystem<UEventSystem>()->onDirtyEnemy.AddDynamic(this, &AEnemySpawner::GetUpdatedMultipliers);
	GetWorld()->GetTimerManager().SetTimer(EnemySpawnTimerHandle, this, &AEnemySpawner::SpawnEnemy, 1.f);
}

void AEnemySpawner::GetUpdatedMultipliers()
{
	UWorld* world = GetWorld();
	AGameModeBase* tempGamemode = UGameplayStatics::GetGameMode(world);
	
	if (tempGamemode->GetClass()->ImplementsInterface(UGetGEPGamemode::StaticClass()))
	{
		UUpgradeSystem* upgradeSystem = IGetGEPGamemode::Execute_GetGEPGamemode(tempGamemode)->GetUpgradeSystem();
		maxEnemyCount = baseMaxEnemyCount + upgradeSystem->GetUpgradeValue(EUpgradeTypes::Enemy_MaxAliveEnemies);
		enemySpawnAmount = baseEnemySpawnAmount + upgradeSystem->GetUpgradeValue(Enemy_SpawnAmount);
		enemySpawnRate = baseEnemySpawnRate * upgradeSystem->GetUpgradeValue(Enemy_SpawnRate);
		GEngine->AddOnScreenDebugMessage(-1,.5f,FColor::Red, FString::FromInt(maxEnemyCount));
	}
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
			for (int j = 0; j < enemySpawnAmount; ++j)
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
				onEnemySpawned.Broadcast(tempActor);
				
				curEnemyCount++;
			}
		}
	}	
	world->GetTimerManager().SetTimer(EnemySpawnTimerHandle, this, &AEnemySpawner::SpawnEnemy, enemySpawnRate);
}

void AEnemySpawner::EnemyDied(AEnemy_Base* enemy, bool killed)
{
	curEnemyCount--;
	onEnemyDeath.Broadcast(enemy, killed);
}
