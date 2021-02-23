// Copyright Epic Games, Inc. All Rights Reserved.

#include "GEPProjectGameMode.h"
#include "GEPProjectHUD.h"
#include "GEPProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGEPProjectGameMode::AGEPProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGEPProjectHUD::StaticClass();
}
