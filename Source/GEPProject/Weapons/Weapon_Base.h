// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "EWeaponTypes.h"
#include "GameFramework/Actor.h"
#include "GEPProject/Interfaces/Fireable.h"
#include "GEPProject/Interfaces/GetWeaponBase.h"
#include "Sound/SoundCue.h"

#include "Weapon_Base.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShoot, float, shootCost);

UCLASS(Abstract)
class GEPPROJECT_API AWeapon_Base : public AActor, public IFireable, public IGetWeaponBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon_Base();

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	bool Fire();
	virtual bool Fire_Implementation() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AWeapon_Base* GetWeaponBase();
	virtual AWeapon_Base* GetWeaponBase_Implementation()  override;
	
	FORCEINLINE class USceneComponent* GetGunMuzzle() const {return gunMuzzle;}

	UFUNCTION()
    void UpdateCurEnergy(float newEnergy) {curEnergy = newEnergy;}
	
	FOnShoot onShoot;
	
	UPROPERTY(EditAnywhere)
	TEnumAsByte<EWeaponTypes> weaponType;
protected:
	UPROPERTY(VisibleDefaultsOnly)
	class USceneComponent* root;

	UPROPERTY(VisibleDefaultsOnly)
	class USkeletalMeshComponent* gunMesh;

	UPROPERTY(BlueprintReadWrite)
	class USceneComponent* gunMuzzle;

	UPROPERTY(EditAnywhere, Category = "Weapon Variables")
	float damage;
	UPROPERTY(EditAnywhere, Category = "Weapon Variables")
	float baseDamage;
	UPROPERTY(EditAnywhere)
	USoundCue* shootSound;
	UPROPERTY(EditAnywhere)
	UParticleSystem* muzzleFlash;
	UPROPERTY(EditAnywhere, Category = "Weapon Variables")
	float shootCooldown;
	UPROPERTY(EditAnywhere, Category = "Weapon Variables")
	float baseShootCooldown;
	bool canShoot = true;
	UPROPERTY(EditAnywhere, Category = "Weapon Variables")
	float energyCost;

	
	float curEnergy;
	void ResetShoot();
	FTimerHandle WeaponResetTimerHandle;
};
