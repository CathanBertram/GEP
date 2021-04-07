// Fill out your copyright notice in the Description page of Project Settings.


#include "WinMenuWidget.h"

#include "Kismet/GameplayStatics.h"

void UWinMenuWidget::Continue()
{
	APlayerController* pc = GetOwningPlayer();
	const UWorld* world = GetWorld();
	UGameplayStatics::SetGamePaused(world, false);
	pc->bShowMouseCursor = false;
	RemoveFromParent();
}

void UWinMenuWidget::QuitToMainMenu()
{
	if (mainMenu != "")
	{
		UGameplayStatics::OpenLevel(GetWorld(), mainMenu, true);
	}
}
