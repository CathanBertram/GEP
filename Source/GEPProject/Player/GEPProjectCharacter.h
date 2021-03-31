// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GEPProject/Interfaces/InitableChar.h"
#include "GEPProject/Interfaces/Inputable.h"
#include "GEPProject/Interfaces/Pawnable.h"
#include "GameFramework/Character.h"
#include "GEPProject/GEPSaveGame.h"
#include "GEPProject/Component/CurrencyComponent.h"
#include "GEPProject/Component/PlayerHealthComponent.h"



#include "GEPProjectCharacter.generated.h"
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLocalEnergyUpdate, float, newEnergy);
UCLASS(config=Game)
class AGEPProjectCharacter : public ACharacter, public IInputable, public IInitableChar, public IPawnable
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UChildActorComponent* equippedWeapon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TArray<TSubclassOf<AActor>> unlockedWeaponArray;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

	UPROPERTY(EditAnywhere)
	class UPlayerHealthComponent* healthComponent;
	UPROPERTY(EditAnywhere)
	class UPlayerEnergyComponent* energyComponent;
	UPROPERTY(EditAnywhere)
	class UCurrencyComponent* currencyComponent;

public:
	AGEPProjectCharacter();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	APawn* GetAsPawn();
	virtual APawn* GetAsPawn_Implementation() override;

	int GetCurrency(){return currencyComponent->GetCurrency();}

	UFUNCTION()
	void UseEnergy(float energyToUse);
	
#pragma region InitableChar_Interface
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void Init();
	virtual void Init_Implementation() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AGEPProjectCharacter* GetAsChar();
	virtual AGEPProjectCharacter* GetAsChar_Implementation() override;
#pragma endregion

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

	void OnInteract();
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

private:
	UPROPERTY(EditAnywhere, Category = "PlayerVariables")
	float interactRange;
	
	void SwitchWeapon(int i);
	int curWeapon;

	UFUNCTION()
	void Save(UGEPSaveGame* saveInstance);
	UFUNCTION()
    void Load(UGEPSaveGame* saveInstance);

	UFUNCTION()
	void UnlockWeapon(TSubclassOf<AActor> weaponToUnlock, int cost);

	UFUNCTION()
	void UpdateEnergy(float newEnergy);
	FOnLocalEnergyUpdate onLocalEnergyUpdate;

	UFUNCTION()
	void GetUpdatedMultipliers();

public:
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};

