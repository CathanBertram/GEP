// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GEPProject/Interfaces/Fireable.h"
#include "Sound/SoundCue.h"

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

	FORCEINLINE class USceneComponent* GetGunMuzzle() const {return gunMuzzle;}

protected:
	UPROPERTY(VisibleDefaultsOnly)
	class USceneComponent* root;

	UPROPERTY(VisibleDefaultsOnly)
	class USkeletalMeshComponent* gunMesh;

	UPROPERTY(VisibleDefaultsOnly)
	class USceneComponent* gunMuzzle;

	UPROPERTY(EditAnywhere, Category = "Weapon Variables")
	float damage;
	UPROPERTY(EditAnywhere)
	USoundCue* shootSound;
	UPROPERTY(EditAnywhere)
	UParticleSystem* muzzleFlash;
	UPROPERTY(EditAnywhere, Category = "Weapon Variables")
	float shootCooldown;
	bool canShoot = true;

	void ResetShoot();
	FTimerHandle WeaponResetTimerHandle;
};
