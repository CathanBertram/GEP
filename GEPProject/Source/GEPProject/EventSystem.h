// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "GEPSaveGame.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EventSystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTrySave);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrencyGain, int, curToGain);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrencyLoss, int, curToLose);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrencyUpdate, int, newCur);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSave, UGEPSaveGame*, saveInstance);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoad, UGEPSaveGame*, saveInstance);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamagePlayer, float, damageAmount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthUpdate, float, healthPercent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnergyUpdate, float, energyPercent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnlockWeapon, TSubclassOf<AActor>, weaponToUnlock, int, cost);
UCLASS()
class GEPPROJECT_API UEventSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	FOnTrySave onTrySave;
	void OnTrySave() {onTrySave.Broadcast();}

	FOnCurrencyGain onCurrencyGain;
	void OnCurrencyGain(int curToGain) {onCurrencyGain.Broadcast(curToGain);}

	FOnCurrencyLoss onCurrencyLoss;
	void OnCurrencyLoss(int curToLose) {onCurrencyLoss.Broadcast(curToLose);}

	FOnDamagePlayer onDamagePlayer;
	void OnDamagePlayer(float damageAmount) {onDamagePlayer.Broadcast(damageAmount);}
	
	FOnCurrencyUpdate onCurrencyUpdate;
	void OnCurrencyUpdate(int newCur) {onCurrencyUpdate.Broadcast(newCur);}

	FOnSave onSave;
	void OnSave(UGEPSaveGame* saveInstance) {onSave.Broadcast(saveInstance);}

	FOnLoad onLoad;
	void OnLoad(UGEPSaveGame* saveInstance) {onLoad.Broadcast(saveInstance);}

	FOnHealthUpdate onHealthUpdate;
	void OnHealthUpdate(float healthPercent) {onHealthUpdate.Broadcast(healthPercent);}
	
	FOnEnergyUpdate onEnergyUpdate;
	void OnEnergyUpdate(float energyPercent) {onEnergyUpdate.Broadcast(energyPercent);}
	
	FOnUnlockWeapon onUnlockWeapon;
	void OnUnlockWeapon(TSubclassOf<AActor> weaponToUnlock, int cost) {onUnlockWeapon.Broadcast(weaponToUnlock, cost);}

	
};
