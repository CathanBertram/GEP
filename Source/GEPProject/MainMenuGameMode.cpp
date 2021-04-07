// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

void AMainMenuGameMode::BeginPlay()
{
	APlayerController* pc = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	pc->bShowMouseCursor = true;
	
	UGameplayStatics::SetGamePaused(GetWorld(), true);
	UUserWidget* widget = CreateWidget(pc, mainMenu, "MainMenu");
	if(widget)
		widget->AddToViewport();
}
