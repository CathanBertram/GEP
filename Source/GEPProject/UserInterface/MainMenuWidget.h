// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class GEPPROJECT_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable)
	void ContinueGame();
	UFUNCTION(BlueprintCallable)
    void NewGame();
	UFUNCTION(BlueprintCallable)
    void QuitGame();

	UPROPERTY(EditAnywhere)
	FName levelToLoad;
};
