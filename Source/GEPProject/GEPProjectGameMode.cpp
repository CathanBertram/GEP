// Copyright Epic Games, Inc. All Rights Reserved.

#include "GEPProjectGameMode.h"

#include "EventSystem.h"
#include "Blueprint/UserWidget.h"
#include "Interfaces/InitablePC.h"
#include "Player/GEPPlayerController.h"
#include "GameFramework/PlayerStart.h"
#include "Kismet/GameplayStatics.h"

AGEPProjectGameMode::AGEPProjectGameMode() : Super()
{
	upgradeSystem = CreateDefaultSubobject<UUpgradeSystem>(TEXT("UpgradeSystem"));
}

AActor* AGEPProjectGameMode::FindPlayerStart_Implementation(AController* Player, const FString& IncomingName)
{
	if (playerStarts.Num() == 0)
	{
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerStart::StaticClass(), playerStarts);
	}
	if (playerStarts.Num() > 0)
	{
		return playerStarts[0];
	}
	else
		return nullptr;
}

void AGEPProjectGameMode::PostLogin(APlayerController* NewPlayer)
{
	playerControllers.AddUnique(NewPlayer);
	
	if (UKismetSystemLibrary::DoesImplementInterface(NewPlayer, UInitablePC::StaticClass()))
	{
		AGEPPlayerController* tempPC = IInitablePC::Execute_GetAsPC(NewPlayer);

		//Bind events

		tempPC->onPause.AddDynamic(this, &AGEPProjectGameMode::OnPause);
		
		IInitablePC::Execute_Init(NewPlayer);
	}
	Super::PostLogin(NewPlayer);
}

void AGEPProjectGameMode::Logout(AController* Exiting)
{
	playerControllers.Remove(Exiting);
	if (UKismetSystemLibrary::DoesImplementInterface(Exiting, UInitablePC::StaticClass()))
	{
		AGEPPlayerController* tempPC = IInitablePC::Execute_GetAsPC(Exiting);

		//Unbind events
		tempPC->onPause.RemoveDynamic(this, &AGEPProjectGameMode::OnPause);
	}
	Super::Logout(Exiting);
}

AGEPProjectGameMode* AGEPProjectGameMode::GetGEPGamemode_Implementation()
{
	return this;
}


void AGEPProjectGameMode::UpdateDirties()
{
	upgradeSystem->UpdateDirties();
}

void AGEPProjectGameMode::BeginPlay()
{
	const UWorld* world = GetWorld();
	//Bind GameMode to events
	UEventSystem* eventSystem = GetGameInstance()->GetSubsystem<UEventSystem>();
	eventSystem->onCurrencyUpdate.AddDynamic(this, &AGEPProjectGameMode::UpdateCurrency);
	eventSystem->onHealthUpdate.AddDynamic(this, &AGEPProjectGameMode::UpdateHealthPercent);
	eventSystem->onEnergyUpdate.AddDynamic(this, &AGEPProjectGameMode::UpdateEnergyPercent);
	eventSystem->onStartSave.AddDynamic(this, &AGEPProjectGameMode::SaveGame);
	eventSystem->onStartLoad.AddDynamic(this, &AGEPProjectGameMode::LoadGame);
	eventSystem->onPlayerDeath.AddDynamic(this, &AGEPProjectGameMode::PlayerDied);

	//Initialise upgrade system
	upgradeSystem->Init(eventSystem);

	//Create Player Character
	UGameplayStatics::RemovePlayer(UGameplayStatics::GetPlayerController(world, 0), true);
	UGameplayStatics::CreatePlayer(world);

	//Get and initialise enemy spawner
	AActor* temp = UGameplayStatics::GetActorOfClass(world, AEnemySpawner::StaticClass());
	enemySpawner = Cast<AEnemySpawner>(temp);
	enemySpawner->Init_Implementation();
	enemySpawner->onEnemyDeath.AddDynamic(this, &AGEPProjectGameMode::EnemyDied);
	enemySpawner->onEnemySpawned.AddDynamic(this, &AGEPProjectGameMode::EnemySpawned);

	//Get and initialise drone manager
	temp = UGameplayStatics::GetActorOfClass(GetWorld(), ADroneManager::StaticClass());
	droneManager = Cast<ADroneManager>(temp);
	droneManager->Init_Implementation();
	droneManager->SetPlayer(playerControllers[0]->GetPawn());

	//Load Game
	LoadGame();
	SaveGame(); //There was an actual reason this is here but I forgot
}

void AGEPProjectGameMode::SaveGame()
{
	//Create saveGameInstance
	USaveGame* tempSave = UGameplayStatics::CreateSaveGameObject(UGEPSaveGame::StaticClass());
	//Event to save data from other classes
	if (UKismetSystemLibrary::DoesImplementInterface(tempSave, UGetGEPSaveGame::StaticClass()))
	{
		UGEPSaveGame* saveGameInstance = IGetGEPSaveGame::Execute_GetGEPSave(tempSave);
		//Save data from this class
		saveGameInstance->isNew = false;
		saveGameInstance->upgrades = upgradeSystem->GetUpgradeArray();
		saveGameInstance->numEnemiesKilled = numEnemiesKilled;
		saveGameInstance->won = won;
		GetGameInstance()->GetSubsystem<UEventSystem>()->OnSave(saveGameInstance);
		UGameplayStatics::SaveGameToSlot(saveGameInstance, TEXT("Save"), 0);
	}
}

void AGEPProjectGameMode::LoadGame()
{
//Load save game from slot
	if (UGameplayStatics::DoesSaveGameExist(TEXT("Save"), 0))
	{
		USaveGame* tempSave = UGameplayStatics::LoadGameFromSlot(TEXT("Save"), 0);
		if (UKismetSystemLibrary::DoesImplementInterface(tempSave, UGetGEPSaveGame::StaticClass()))
		{
			UGEPSaveGame* saveGameInstance = IGetGEPSaveGame::Execute_GetGEPSave(tempSave);
			//Load data for this class
			numEnemiesKilled = saveGameInstance->numEnemiesKilled;
			won = saveGameInstance->won;
			upgradeSystem->SetUpgradeArray(saveGameInstance->upgrades);
			upgradeSystem->ForceUpdateDirties();
			GetGameInstance()->GetSubsystem<UEventSystem>()->OnLoad(saveGameInstance);	
		}		
	}
}

void AGEPProjectGameMode::OnPause(APlayerController* pc)
{
	const UWorld* world = GetWorld();
	UGameplayStatics::SetGamePaused(world, true);
	pc->bShowMouseCursor = true;
	UUserWidget* widget = CreateWidget(pc, pauseMenu, "PauseMenu");
	if(widget)
		widget->AddToViewport();
}

void AGEPProjectGameMode::PlayerDied()
{
	Lose();
}

void AGEPProjectGameMode::Win()
{
	won = true;
	const UWorld* world = GetWorld();
	UGameplayStatics::SetGamePaused(world, true);

	if (UKismetSystemLibrary::DoesImplementInterface(playerControllers[0], UInitablePC::StaticClass()))
	{
		AGEPPlayerController* pc = IInitablePC::Execute_GetAsPC(playerControllers[0]);
		pc->bShowMouseCursor = true;
		UUserWidget* widget = CreateWidget(pc, winMenu, "WinMenu");
		if(widget)
			widget->AddToViewport();

	}
}

void AGEPProjectGameMode::Lose()
{
	const UWorld* world = GetWorld();
	UGameplayStatics::SetGamePaused(world, true);
	if (UKismetSystemLibrary::DoesImplementInterface(playerControllers[0], UInitablePC::StaticClass()))
	{
		AGEPPlayerController* pc = IInitablePC::Execute_GetAsPC(playerControllers[0]);
		pc->bShowMouseCursor = true;
		UUserWidget* widget = CreateWidget(pc, loseMenu, "LoseMenu");
		if(widget)
			widget->AddToViewport();

	}
}

void AGEPProjectGameMode::UpdateCurrency(int newCur)
{
	currency = newCur;
}

void AGEPProjectGameMode::UpdateHealthPercent(float newHealthPercent)
{
	healthPercent = newHealthPercent;
}

void AGEPProjectGameMode::UpdateEnergyPercent(float newEnergyPercent)
{
	energyPercent = newEnergyPercent;
}

float AGEPProjectGameMode::GetUpgradeCost(TEnumAsByte<EUpgradeTypes> upgradeType)
{
	return upgradeSystem->GetUpgradeCost(upgradeType);
}

void AGEPProjectGameMode::EnemyDied(AEnemy_Base* enemy, bool killed)
{
	droneManager->EnemyDied(enemy);
	if (killed)
	{
		numEnemiesKilled++;
		if (numEnemiesKilled >= enemiesRequiredToKill && !won)
		{
			Win();
		}
	}
	
}

void AGEPProjectGameMode::EnemySpawned(AActor* enemy)
{
	droneManager->EnemySpawned(enemy);
}