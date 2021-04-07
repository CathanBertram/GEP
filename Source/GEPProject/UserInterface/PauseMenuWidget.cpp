// Fill out your copyright notice in the Description page of Project Settings.


#include "PauseMenuWidget.h"


#include "GEPProject/EventSystem.h"
#include "Kismet/GameplayStatics.h"

void UPauseMenuWidget::ResumeGame()
{
	APlayerController* pc = GetOwningPlayer();
	const UWorld* world = GetWorld();
	UGameplayStatics::SetGamePaused(world, false);
	pc->bShowMouseCursor = false;
	RemoveFromParent();
}

void UPauseMenuWidget::Save()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->OnStartSave();
}

void UPauseMenuWidget::Load()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->OnStartLoad();
}

void UPauseMenuWidget::Quit()
{
	if (mainMenu != "")
	{
		UGameplayStatics::OpenLevel(GetWorld(), mainMenu, true);
	}
}
