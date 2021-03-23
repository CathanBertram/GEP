// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "GEPSaveGame.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Upgrades/EUpgradeTypes.h"

#include "EventSystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartSave);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartLoad);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDirtyPlayer);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDirtyEnemy);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDirtyDrone);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDirtyPistol);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDirtyRevolver);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDirtyShotgun);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDirtySMG);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDirtyRifle);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDirtyAutoRifle);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDirtyRaygun);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDirtyGrenadeLauncher);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrencyGain, int, curToGain);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrencyLoss, int, curToLose);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrencyUpdate, int, newCur);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSave, UGEPSaveGame*, saveInstance);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoad, UGEPSaveGame*, saveInstance);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamagePlayer, float, damageAmount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthUpdate, float, healthPercent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnergyUpdate, float, energyPercent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUnlockWeapon, TSubclassOf<AActor>, weaponToUnlock, int, cost);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpgradeAttempt, TEnumAsByte<EUpgradeTypes>, upgradeType, int, currency);
UCLASS()
class GEPPROJECT_API UEventSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	FOnStartSave onStartSave;
	void OnStartSave() {onStartSave.Broadcast();}
	FOnStartLoad onStartLoad;
	void OnStartLoad() {onStartLoad.Broadcast();}
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

	FOnUpgradeAttempt onUpgradeAttempt;
	UFUNCTION(BlueprintCallable)
	void OnUpgradeAttempt(TEnumAsByte<EUpgradeTypes> upgradeType, int currency) {onUpgradeAttempt.Broadcast(upgradeType, currency);}

#pragma region upgradeEvents
	FOnDirtyPlayer onDirtyPlayer;
	void OnDirtyPlayer() {onDirtyPlayer.Broadcast();}
	FOnDirtyEnemy onDirtyEnemy;
	void OnDirtyEnemy() {onDirtyEnemy.Broadcast();}
	FOnDirtyDrone onDirtyDrone;
	void OnDirtyDrone() {onDirtyDrone.Broadcast();}
	FOnDirtyPistol onDirtyPistol;
	void OnDirtyPistol() {onDirtyPistol.Broadcast();}
	FOnDirtyRevolver onDirtyRevolver;
	void OnDirtyRevolver() {onDirtyRevolver.Broadcast();}
	FOnDirtyShotgun onDirtyShotgun;
	void OnDirtyShotgun() {onDirtyShotgun.Broadcast();}
	FOnDirtySMG onDirtySMG;
	void OnDirtySMG() {onDirtySMG.Broadcast();}
	FOnDirtyRifle onDirtyRifle;
	void OnDirtyRifle() {onDirtyRifle.Broadcast();}
	FOnDirtyAutoRifle onDirtyAutoRifle;
	void OnDirtyAutoRifle() {onDirtyAutoRifle.Broadcast();}
	FOnDirtyRaygun onDirtyRaygun;
	void OnDirtyRaygun() {onDirtyRaygun.Broadcast();}
	FOnDirtyGrenadeLauncher onDirtyGrenadeLauncher;
	void OnDirtyGrenadeLauncher() {onDirtyGrenadeLauncher.Broadcast();}
#pragma endregion 
};
