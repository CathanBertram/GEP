// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GEPProject/Interfaces/Interactable.h"
#include "GEPProject/Player/GEPProjectCharacter.h"

#include "UpgradeStand.generated.h"

UCLASS()
class GEPPROJECT_API AUpgradeStand : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUpgradeStand();
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
    void OnInteract(AGEPProjectCharacter* character);
	virtual void OnInteract_Implementation(AGEPProjectCharacter* character) override;
protected:
	UPROPERTY(EditAnywhere)
    class UStaticMeshComponent* machineMesh;
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> wUpgradeMenu;

	UUserWidget* upgradeMenu;
};
