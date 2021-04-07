// Fill out your copyright notice in the Description page of Project Settings.


#include "LoseMenuWidget.h"


#include "GEPProject/EventSystem.h"
#include "Kismet/GameplayStatics.h"

void ULoseMenuWidget::LoadFromSave()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->OnStartSave();
	APlayerController* pc = GetOwningPlayer();
	const UWorld* world = GetWorld();
	UGameplayStatics::SetGamePaused(world, false);
	pc->bShowMouseCursor = false;
	RemoveFromParent();
}

void ULoseMenuWidget::QuitToMainMenu()
{
	if (mainMenu != "")
	{
		UGameplayStatics::OpenLevel(GetWorld(), mainMenu, true);
	}
}
