// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Inputable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInputable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GEPPROJECT_API IInputable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//Action Mappings
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void JumpPressed();
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void JumpReleased();
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void FirePressed();
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void FireReleased();
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void InteractPressed();
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void InteractReleased();
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
    void Key1Pressed();
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
    void Key2Pressed();
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
    void Key3Pressed();
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
    void Key4Pressed();
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
    void Key5Pressed();

	//Axis Mappings
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void MoveForward(float value);
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void MoveRight(float value);
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void LookUpAtRate(float value);
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void TurnAtRate(float value);
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void LookUp(float value);
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void Turn(float value);
};
