// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoseMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class GEPPROJECT_API ULoseMenuWidget : public UUserWidget
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	void LoadFromSave();
	UFUNCTION(BlueprintCallable)
	void QuitToMainMenu();

	UPROPERTY(EditAnywhere)
	FName mainMenu;
};
