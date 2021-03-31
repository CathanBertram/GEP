// Fill out your copyright notice in the Description page of Project Settings.


#include "DroneManager.h"



#include "Drone.h"
#include "Components/BoxComponent.h"
#include "GEPProject/Interfaces/GetDrone.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ADroneManager::ADroneManager()
{
	boundingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundingBox"));
}

void ADroneManager::Init_Implementation()
{
	SpawnDrone();
}

void ADroneManager::EnemySpawned(AActor* enemy)
{
	for (ADrone* drone : drones)
	{
		if(drone->curTarget != enemy && !drone->GetTargettingEnemy() && drone->GetCanTargetEnemy())
		{
			drone->UpdateTarget(enemy, true);
			break;
		}
	}
}

void ADroneManager::EnemyDied(AEnemy_Base* enemy)
{
	for (ADrone* drone : drones)
	{
		if(drone->curTarget == enemy)
		{
			drone->UpdateTarget(player, false);
			drone->EnemyDied();
		}
	}
}

void ADroneManager::SpawnDrone()
{
	UWorld* const world =  GetWorld();
	if (droneCount < maxDroneCount)
	{
		if (world != nullptr)
		{
			FVector origin = boundingBox->GetComponentLocation();
			FVector extents = boundingBox->GetScaledBoxExtent();
		
			FVector spawnPosition = UKismetMathLibrary::RandomPointInBoundingBox(origin, extents);
			FRotator spawnRotation = FRotator::ZeroRotator;
			FActorSpawnParameters actorSpawnParams;
			actorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		
			AActor* tempActor = world->SpawnActor<AActor>(droneToSpawn, spawnPosition, spawnRotation, actorSpawnParams);

			//TODO drone init stuff
			if (UKismetSystemLibrary::DoesImplementInterface(tempActor, UGetDrone::StaticClass()))
			{
				ADrone* tempDrone = IGetDrone::Execute_GetDrone(tempActor);
				drones.Add(tempDrone);
				tempDrone->Init();
			}
				
			droneCount++;
		}
	}
	FTimerHandle timer;
	world->GetTimerManager().SetTimer(timer, this, &ADroneManager::SpawnDrone, spawnTimer);
}


