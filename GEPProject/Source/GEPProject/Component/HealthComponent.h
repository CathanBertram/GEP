// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GEPProject/Interfaces/Initable.h"

#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeath);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GEPPROJECT_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	UPROPERTY(EditAnywhere)
	float currentHealth;
	UPROPERTY(EditAnywhere)
	float baseHealth;
	UFUNCTION()
	virtual void TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
    AController* InstigatedBy, AActor* DamageCauser);

public:	

	UFUNCTION(BlueprintCallable)
	virtual void Init();
	
	FDeath onDeath;
	
	void SetCurHealth(float health) {currentHealth = health;}
	void SetBaseHealth(float health) {baseHealth = health;}
};
