// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GEPProject/Interfaces/InitablePC.h"
#include "GameFramework/PlayerController.h"
#include "GEPPlayerController.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class GEPPROJECT_API AGEPPlayerController : public APlayerController, public IInitablePC
{
	GENERATED_BODY()

public:
	AGEPPlayerController();
	virtual void SetupInputComponent() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Init();
	virtual void Init_Implementation() override;

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	AGEPPlayerController* GetAsPC();
	virtual AGEPPlayerController* GetAsPC_Implementation() override;

protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<APawn> pawnToSpawn;
	
private:
	UFUNCTION()
	void SaveGame();
	void LoadGame();

	
	void JumpPressed(); void JumpReleased();
	void FirePressed(); void FireReleased();
	void InteractPressed(); void InteractReleased();
	void Key1Pressed(); void Key2Pressed(); void Key3Pressed(); void Key4Pressed(); void Key5Pressed(); void Key6Pressed(); void Key7Pressed(); void Key8Pressed();
	void QuickSavePressed();
	void QuickLoadPressed();
	void NextWeaponPressed(); void PrevWeaponPressed();
	
	void MoveForward(float value);
	void MoveRight(float value);
	void LookUpAtRate(float value);
	void TurnAtRate(float value);
	void LookUp(float value);
	void Turn(float value);
};
