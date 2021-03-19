// Copyright Epic Games, Inc. All Rights Reserved.

#include "GEPProjectGameMode.h"

#include "EventSystem.h"
#include "Blueprint/UserWidget.h"
#include "Interfaces/InitablePC.h"
#include "Player/GEPPlayerController.h"
#include "GameFramework/PlayerStart.h"
#include "Kismet/GameplayStatics.h"
#include "Upgrades/EUpgradeTypes.h"

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

AGEPProjectGameMode* AGEPProjectGameMode::GetGEPGamemode_Implementation()
{
	return this;
}

void AGEPProjectGameMode::BeginPlay()
{
	UEventSystem* eventSystem = GetGameInstance()->GetSubsystem<UEventSystem>();
	eventSystem->onCurrencyUpdate.AddDynamic(this, &AGEPProjectGameMode::UpdateCurrency);
	eventSystem->onHealthUpdate.AddDynamic(this, &AGEPProjectGameMode::UpdateHealthPercent);
	
	UGameplayStatics::RemovePlayer(UGameplayStatics::GetPlayerController(GetWorld(), 0), true);

	UGameplayStatics::CreatePlayer(GetWorld());

	for (int i = 0; i < static_cast<int>(EUpgradeTypes::End); ++i)
	{
		upgrades.Add(FUpgrade(i,0,static_cast<EUpgradeTypes>(i)));
		//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, FString::FromInt(upgrades.Num()));
	}
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, FString::FromInt(upgrades[15].cost));
}

void AGEPProjectGameMode::UpdateCurrency(int newCur)
{
	currency = newCur;
}

void AGEPProjectGameMode::UpdateHealthPercent(float newHealthPercent)
{
	healthPercent = newHealthPercent;
}

