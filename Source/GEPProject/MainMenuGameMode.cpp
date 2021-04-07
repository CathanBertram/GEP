// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

void AMainMenuGameMode::BeginPlay()
{
	const UWorld* world = GetWorld();
	APlayerController* pc = UGameplayStatics::GetPlayerController(world, 0);
	pc->bShowMouseCursor = true;
	
	UGameplayStatics::SetGamePaused(world, true);
	UUserWidget* widget = CreateWidget(pc, mainMenu, "MainMenu");
	if(widget)
		widget->AddToViewport();
}
