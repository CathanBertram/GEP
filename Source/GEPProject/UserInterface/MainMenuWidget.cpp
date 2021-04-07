// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"

#include "GameFramework/SaveGame.h"
#include "GEPProject/GEPSaveGame.h"
#include "GEPProject/Interfaces/GetGEPSaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UMainMenuWidget::ContinueGame()
{
	UGameplayStatics::OpenLevel(GetWorld(), levelToLoad, true);
}

void UMainMenuWidget::StartNewGame()
{
	USaveGame* tempSave = UGameplayStatics::CreateSaveGameObject(UGEPSaveGame::StaticClass());
	UGameplayStatics::SaveGameToSlot(tempSave, TEXT("Save"), 0);
	if (UKismetSystemLibrary::DoesImplementInterface(tempSave, UGetGEPSaveGame::StaticClass()))
	{
		UGEPSaveGame* saveGameInstance = IGetGEPSaveGame::Execute_GetGEPSave(tempSave);
		//Save data from this class
		saveGameInstance->isNew = true;
	}
	UGameplayStatics::OpenLevel(GetWorld(), levelToLoad, true);
}

void UMainMenuWidget::QuitGame()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), GetOwningPlayer(), EQuitPreference::Quit, true);
}
