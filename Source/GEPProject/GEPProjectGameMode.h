// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"


#include "Drone/DroneManager.h"
#include "Components/Widget.h"
#include "Enemy/EnemySpawner.h"
#include "GameFramework/GameModeBase.h"
#include "Interfaces/GetGEPGamemode.h"
#include "Upgrades/UpgradeSystem.h"


#include "GEPProjectGameMode.generated.h"

UCLASS(Abstract)
class AGEPProjectGameMode : public AGameModeBase, public IGetGEPGamemode
{
	GENERATED_BODY()

public:
	AGEPProjectGameMode();

	virtual AActor* FindPlayerStart_Implementation(AController* Player, const FString& IncomingName) override;

	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Classes)
	TSubclassOf<UUserWidget> mainUI;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AGEPProjectGameMode* GetGEPGamemode();
	virtual AGEPProjectGameMode* GetGEPGamemode_Implementation() override;

	UFUNCTION(BlueprintCallable)
	int GetCurrency(){return currency;}
	UFUNCTION(BlueprintCallable)
	float GetHealthPercent(){return healthPercent;}
	UFUNCTION(BlueprintCallable)
    float GetEnergyPercent(){return energyPercent;}
	UFUNCTION(BlueprintCallable)
	float GetUpgradeCost(TEnumAsByte<EUpgradeTypes> upgradeType);
	UFUNCTION(BlueprintCallable)
	void UpdateDirties();
	UUpgradeSystem* GetUpgradeSystem(){return upgradeSystem;}

protected:
	TArray<AActor*> playerStarts;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<AController*> playerControllers;
	
	AEnemySpawner* enemySpawner;
	ADroneManager* droneManager;
	
	virtual void BeginPlay() override;
	int currency;
	float healthPercent;
	float energyPercent;
	UFUNCTION()
	void UpdateCurrency(int newCur);
	UFUNCTION()
	void UpdateHealthPercent(float newHealthPercent);
	UFUNCTION()
    void UpdateEnergyPercent(float newEnergyPercent);

	UFUNCTION()
	void SaveGame();
	UFUNCTION()
	void LoadGame();
	UFUNCTION()
	void EnemyDied(AEnemy_Base* enemy);
	UFUNCTION()
	void EnemySpawned(AActor* enemy);
	
	UPROPERTY(EditAnywhere)
	UUpgradeSystem* upgradeSystem;
};



