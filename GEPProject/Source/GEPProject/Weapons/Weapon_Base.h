// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GEPProject/Interfaces/Fireable.h"
#include "Weapon_Base.generated.h"

UCLASS(Abstract   )
class GEPPROJECT_API AWeapon_Base : public AActor, public IFireable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon_Base();

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	bool Fire();
	virtual bool Fire_Implementation() override;

	FORCEINLINE class UArrowComponent* GetGunMuzzle() const {return gunMuzzle;}
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleDefaultsOnly)
	class USceneComponent* root;

	UPROPERTY(VisibleDefaultsOnly)
	class USkeletalMeshComponent* gunMesh;

	UPROPERTY(VisibleDefaultsOnly)
	class UArrowComponent* gunMuzzle;

};
