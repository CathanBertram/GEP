// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WinMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class GEPPROJECT_API UWinMenuWidget : public UUserWidget
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	void Continue();
	UFUNCTION(BlueprintCallable)
	void QuitToMainMenu();


	UPROPERTY(EditAnywhere)
	FName mainMenu;
};
