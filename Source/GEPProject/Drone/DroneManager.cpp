// Fill out your copyright notice in the Description page of Project Settings.


#include "DroneManager.h"


#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ADroneManager::ADroneManager()
{
	boundingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundingBox"));
}

void ADroneManager::Init_Implementation()
{
	SpawnDrone();
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


			droneCount++;
		}
	}
	FTimerHandle timer;
	world->GetTimerManager().SetTimer(timer, this, &ADroneManager::SpawnDrone, spawnTimer);
}


