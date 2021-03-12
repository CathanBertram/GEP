// Copyright Epic Games, Inc. All Rights Reserved.

#include "GEPProjectGameMode.h"
#include "Interfaces/InitablePC.h"
#include "GEPPlayerController.h"
#include "GameFramework/PlayerStart.h"
#include "Kismet/GameplayStatics.h"

AGEPProjectGameMode::AGEPProjectGameMode() : Super()
{

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
	}
	Super::Logout(Exiting);
}

void AGEPProjectGameMode::BeginPlay()
{
	UGameplayStatics::RemovePlayer(UGameplayStatics::GetPlayerController(GetWorld(), 0), true);

	UGameplayStatics::CreatePlayer(GetWorld());
}
