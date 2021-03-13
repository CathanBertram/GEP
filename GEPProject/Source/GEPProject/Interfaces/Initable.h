// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Initable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInitable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GEPPROJECT_API IInitable
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Init();
};
