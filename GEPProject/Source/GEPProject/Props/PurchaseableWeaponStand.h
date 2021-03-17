// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/Actor.h"
#include "GEPProject/Interfaces/Interactable.h"
#include "GEPProject/Player/GEPProjectCharacter.h"


#include "PurchaseableWeaponStand.generated.h"

UCLASS()
class GEPPROJECT_API APurchaseableWeaponStand : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APurchaseableWeaponStand();
	
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
    void OnInteract(AGEPProjectCharacter* character);
	virtual void OnInteract_Implementation(AGEPProjectCharacter* character) override;

	virtual void BeginPlay() override;
protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> weaponToUnlock;
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* weaponStand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* weaponSocket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UChildActorComponent* weapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* textSocket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTextRenderComponent* text;
	
	UPROPERTY(EditAnywhere)
	int cost;
	
	UPROPERTY(EditAnywhere)
	UBoxComponent* boxComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool unlocked = false;

	UFUNCTION()
	void Load(UGEPSaveGame* saveInstance);

	void Unlock();
};
