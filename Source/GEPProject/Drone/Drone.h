// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Character.h"
#include "DroneAIParameters.h"
#include "BehaviorTree/BehaviorTree.h"
#include "GEPProject/Interfaces/GetDrone.h"
#include "GEPProject/Interfaces/Interactable.h"
#include "GEPProject/Player/GEPProjectCharacter.h"



#include "Drone.generated.h"

UCLASS()
class GEPPROJECT_API ADrone : public ACharacter, public IInteractable, public IInputable, public IGetDrone
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADrone();

	UPROPERTY(EditAnywhere)
	UDroneAIParameters* droneAIParameters;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* staticMesh;
	// UPROPERTY(EditAnywhere)
	// UArrowComponent* arrowComponent;
	
	APawn* player;
	AActor* curTarget;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;
	
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
    void OnInteract(AGEPProjectCharacter* character);
	virtual void OnInteract_Implementation(AGEPProjectCharacter* character) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	ADrone* GetDrone();
	virtual ADrone* GetDrone_Implementation() override;
	bool GetTargettingEnemy() {return targettingEnemy;}
	bool GetCanTargetEnemy() {return canTargetEnemy;}
	void UpdateTarget(AActor* newTarget, bool enemy = false);
	
	void Init();
	void EnemyDied();

	void UpdateValues(float damage, float cooldown, float moveSpeed);
protected:

	UPROPERTY(EditAnywhere)
	USoundCue* shootSound;
	UPROPERTY(EditAnywhere)
	UParticleSystem* muzzleFlash;
	UPROPERTY(VisibleDefaultsOnly)
	class USceneComponent* projSpawn;
	UPROPERTY(EditAnywhere)
	UParticleSystem* hitParticle;
	UPROPERTY(EditAnywhere)
	float range;
	
	void ResetCanTarget();
	
	float attackDamage;
	float targetCooldown; 
	UPROPERTY(EditAnywhere)
	float attackCooldown; 
	UFUNCTION(BlueprintCallable)
	void Shoot();

	UPROPERTY(EditAnywhere)
	UBehaviorTree* bt;

	UPROPERTY(EditAnywhere)
	float elevationRate;

	bool crouching;
	bool jumping;
	bool targettingEnemy;
	bool canTargetEnemy;
	bool canAttack;
	void Crouching();
	void Jumping();

	void ResetCanAttack();
	class ADroneAIC* aiController;
	
#pragma region Inputable_Interface
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void JumpPressed();
	virtual void JumpPressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void JumpReleased();
	virtual void JumpReleased_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void FirePressed();
	virtual void FirePressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void FireReleased();
	virtual void FireReleased_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InteractPressed();
	virtual void InteractPressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InteractReleased();
	virtual void InteractReleased_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Key1Pressed();
	virtual void Key1Pressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Key2Pressed();
	virtual void Key2Pressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Key3Pressed();
	virtual void Key3Pressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Key4Pressed();
	virtual void Key4Pressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Key5Pressed();
	virtual void Key5Pressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Key6Pressed();
	virtual void Key6Pressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Key7Pressed();
	virtual void Key7Pressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Key8Pressed();
	virtual void Key8Pressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NextWeaponPressed();
	virtual void NextWeaponPressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrevWeaponPressed();
	virtual void PrevWeaponPressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CrouchPressed();
	virtual void CrouchPressed_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CrouchReleased();
	virtual void CrouchReleased_Implementation() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void MoveForward(float value);
	virtual void MoveForward_Implementation(float value) override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void MoveRight(float value);
	virtual void MoveRight_Implementation(float value) override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void LookUpAtRate(float value);
	virtual void LookUpAtRate_Implementation(float value) override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TurnAtRate(float value);
	virtual void TurnAtRate_Implementation(float value) override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void LookUp(float value);
	virtual void LookUp_Implementation(float value) override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Turn(float value);
	virtual void Turn_Implementation(float value) override;
#pragma endregion 
};
