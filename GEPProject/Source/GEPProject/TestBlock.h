// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Interactable.h"
#include "Shootable.h"
#include "GameFramework/Actor.h"
#include "TestBlock.generated.h"


UCLASS()
class GEPPROJECT_API ATestBlock : public AActor, public IShootable, public IInteractable
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* boxMesh;
	
public:	
	// Sets default values for this actor's properties
	ATestBlock();

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void GetShot();
	virtual void GetShot_Implementation() override;

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
    void OnInteract();
	virtual void OnInteract_Implementation() override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
