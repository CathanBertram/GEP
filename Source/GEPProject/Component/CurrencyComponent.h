// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GEPProject/EventSystem.h"
#include "GEPProject/Upgrades/UpgradeSystem.h"


#include "CurrencyComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GEPPROJECT_API UCurrencyComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCurrencyComponent();
	void Init(UEventSystem* event);
	int GetCurrency(){return currency;}
	void SetCurrency(int amount){currency = amount;}
	UFUNCTION()
	void GainCurrency(int amount);
	UFUNCTION()
	void LoseCurrency(int amount);

	void UpdateValues(UUpgradeSystem* upgrades);
	
private:
	UPROPERTY(EditAnywhere)
	int currency;

	UPROPERTY(EditAnywhere)
	float baseCurrencyMulti;
	UPROPERTY(EditAnywhere)
	float currencyMulti;
	
	UPROPERTY(EditAnywhere)
	int baseCurrencyGen;
	UPROPERTY(EditAnywhere)
	float baseCurrencyGenTick;
	
	UPROPERTY(EditAnywhere)
	int currencyGen;
	UPROPERTY(EditAnywhere)
	float currencyGenTick;

	void PassiveGen();
	UEventSystem* eventSystem;
	FTimerHandle genTimer;
		
};
