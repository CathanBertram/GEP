// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EventSystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEvent);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrencyGain, int, curToGain);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrencyLoss, int, curToLose);
UCLASS()
class GEPPROJECT_API UEventSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	FOnEvent onEvent;
	void OnEvent() {onEvent.Broadcast();}

	FOnCurrencyGain onCurrencyGain;
	void OnCurrencyGain(int curToGain) {onCurrencyGain.Broadcast(curToGain);}

	FOnCurrencyLoss onCurrencyLoss;
	void OnCurrencyLoss(int curToLose) {onCurrencyLoss.Broadcast(curToLose);}
};
