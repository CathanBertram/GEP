// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GEPProject/Interfaces/InitablePC.h"
#include "GameFramework/PlayerController.h"
#include "GEPPlayerController.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPause, APlayerController*, playerController);

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

	FOnPause onPause;
protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<APawn> pawnToSpawn;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(EditAnywhere, Category=Camera)
	float ControllerTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(EditAnywhere, Category=Camera)
	float ControllerLookUpRate;

	UPROPERTY(EditAnywhere, Category=Camera)
	float MouseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(EditAnywhere, Category=Camera)
	float MouseLookUpRate;

	void OnPause(){onPause.Broadcast(this);}
	
private:
	
	void JumpPressed(); void JumpReleased();
	void FirePressed(); void FireReleased();
	void InteractPressed(); void InteractReleased();
	void Key1Pressed(); void Key2Pressed(); void Key3Pressed(); void Key4Pressed(); void Key5Pressed(); void Key6Pressed(); void Key7Pressed(); void Key8Pressed();
	void QuickSavePressed();
	void QuickLoadPressed();
	void NextWeaponPressed(); void PrevWeaponPressed();
	void CrouchPressed(); void CrouchReleased();
	
	void MoveForward(float value);
	void MoveRight(float value);
	void LookUpAtRate(float value);
	void TurnAtRate(float value);
	void LookUp(float value);
	void Turn(float value);
};
