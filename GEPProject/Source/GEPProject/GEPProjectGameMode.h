// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GEPProjectGameMode.generated.h"

UCLASS(minimalapi)
class AGEPProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGEPProjectGameMode();

	virtual AActor* FindPlayerStart_Implementation(AController* Player, const FString& IncomingName) override;

	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;

protected:
	TArray<AActor*> playerStarts;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<AController*> playerControllers;

	virtual void BeginPlay() override;
};



