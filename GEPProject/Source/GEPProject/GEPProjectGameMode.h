// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Components/Widget.h"
#include "GameFramework/GameModeBase.h"
#include "Interfaces/GetGEPGamemode.h"

#include "GEPProjectGameMode.generated.h"

UCLASS(Abstract)
class AGEPProjectGameMode : public AGameModeBase, public IGetGEPGamemode
{
	GENERATED_BODY()

public:
	AGEPProjectGameMode();

	virtual AActor* FindPlayerStart_Implementation(AController* Player, const FString& IncomingName) override;

	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Classes)
	TSubclassOf<UUserWidget> mainUI;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AGEPProjectGameMode* GetGEPGamemode();
	virtual AGEPProjectGameMode* GetGEPGamemode_Implementation() override;

	UFUNCTION(BlueprintCallable)
	int GetCurrency(){return currency;}

protected:
	TArray<AActor*> playerStarts;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<AController*> playerControllers;

	virtual void BeginPlay() override;
	int currency;

	UFUNCTION()
	void UpdateCurrency(int newCur);
};



