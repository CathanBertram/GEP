// Fill out your copyright notice in the Description page of Project Settings.


#include "DroneManager.h"



#include "Drone.h"
#include "Components/BoxComponent.h"
#include "GameFramework/GameModeBase.h"
#include "GEPProject/GEPProjectGameMode.h"
#include "GEPProject/Interfaces/GetDrone.h"
#include "GEPProject/Interfaces/GetGEPGamemode.h"
#include "GEPProject/Upgrades/UpgradeSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ADroneManager::ADroneManager()
{
	boundingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundingBox"));
}

void ADroneManager::Init_Implementation()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->onDirtyDrone.AddDynamic(this, &ADroneManager::UpdateDirties);
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

void ADroneManager::UpdateDirties()
{
	UWorld* world = GetWorld();
	AGameModeBase* tempGamemode = UGameplayStatics::GetGameMode(world);
	
	if (tempGamemode->GetClass()->ImplementsInterface(UGetGEPGamemode::StaticClass()))
	{
		UUpgradeSystem* upgradeSystem = IGetGEPGamemode::Execute_GetGEPGamemode(tempGamemode)->GetUpgradeSystem();
		droneDamage += upgradeSystem->GetUpgradeValue(EUpgradeTypes::Drone_AttackDamage);
		droneTargettingCooldown *= upgradeSystem->GetUpgradeValue(EUpgradeTypes::Drone_AttackCooldown);
		droneMovementSpeed += upgradeSystem->GetUpgradeValue(EUpgradeTypes::Drone_MovementSpeed);
		maxDroneCount = upgradeSystem->GetUpgradeValue(EUpgradeTypes::Drone_Amount);
		//Need To Do Currency Stuff
	}
	for (ADrone* drone : drones)
	{
		drone->UpdateValues(droneDamage, droneTargettingCooldown, droneMovementSpeed);
	}
	SpawnDrone();
}

void ADroneManager::SpawnDrone()
{
	UWorld* const world =  GetWorld();
	for (int i = droneCount; i < maxDroneCount; ++i)
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
				tempDrone->Init();
				tempDrone->UpdateValues(droneDamage, droneTargettingCooldown, droneMovementSpeed);
				drones.Add(tempDrone);
			}
				
			droneCount++;
		}
	}
}


