// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EventSystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEventName);

UCLASS()
class GEPPROJECT_API UEventSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
    FEventName onEventName;
	void OnEventName();
};
