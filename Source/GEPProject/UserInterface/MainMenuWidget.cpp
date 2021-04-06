// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"

#include "GameFramework/SaveGame.h"
#include "GEPProject/GEPSaveGame.h"
#include "GEPProject/Interfaces/GetGEPSaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UMainMenuWidget::ContinueGame()
{
	if (levelToLoad != "")
	{
		FLatentActionInfo latentInfo;
		UGameplayStatics::LoadStreamLevel(GetOwningPlayer(), levelToLoad, true, true, latentInfo);
	}
}

void UMainMenuWidget::NewGame()
{
	USaveGame* tempSave = UGameplayStatics::CreateSaveGameObject(UGEPSaveGame::StaticClass());
	//Event to save data from other classes
	if (UKismetSystemLibrary::DoesImplementInterface(tempSave, UGetGEPSaveGame::StaticClass()))
	{
		UGEPSaveGame* saveGameInstance = IGetGEPSaveGame::Execute_GetGEPSave(tempSave);

		UGameplayStatics::SaveGameToSlot(saveGameInstance, TEXT("Save"), 0);
	}
	if (levelToLoad != "")
	{
		FLatentActionInfo latentInfo;
		UGameplayStatics::LoadStreamLevel(GetOwningPlayer(), levelToLoad, true, true, latentInfo);
	}
}

void UMainMenuWidget::QuitGame()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), GetOwningPlayer(), EQuitPreference::Quit, true);
}
