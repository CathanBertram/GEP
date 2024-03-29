// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HealthComponent.h"
#include "GEPProject/EventSystem.h"

#include "PlayerHealthComponent.generated.h"

/**
 * 
 */
UCLASS()
class GEPPROJECT_API UPlayerHealthComponent : public UHealthComponent
{
	GENERATED_BODY()
public:
	float GetHealthPercent() {return currentHealth/maxHealth;}
	void SetMaxHealth(float health) {maxHealth = health;}
	float GetMaxHealth(){return maxHealth;}
	float GetCurHealth(){return currentHealth;}
	virtual void Init() override;

	void SetEventInstance(UEventSystem* instance) {eventInstance = instance;}
	void UpdateHealthRegenAmount(float multi){healthRegenAmount = baseHealthRegenAmount * multi;}
	void UpdateHealthRegenCooldown(float multi){healthRegenCooldown = baseHealthRegenCooldown * multi;}
	bool canBeDamaged = true;
protected:
	UPROPERTY(EditAnywhere)
	float maxHealth;

	UEventSystem* eventInstance;

	void Regen();
	UPROPERTY(EditAnywhere)
	float baseHealthRegenCooldown;
	float healthRegenCooldown;
	UPROPERTY(EditAnywhere)
	float baseHealthRegenAmount;
	float healthRegenAmount;
	UPROPERTY(EditAnywhere)
	float regenCooldownReset;
	virtual void TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
    AController* InstigatedBy, AActor* DamageCauser) override;

	FTimerHandle RegenTimerHandle;
};
