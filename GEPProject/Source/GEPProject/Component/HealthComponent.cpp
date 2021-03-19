// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
}

void UHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
	AController* InstigatedBy, AActor* DamageCauser)
{
	currentHealth -= Damage;
	if (currentHealth <= 0)
		onDeath.Broadcast();
}

void UHealthComponent::Init()
{
	AActor* owner = GetOwner();
	if(owner)
		owner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::TakeDamage);
	
	currentHealth = baseHealth;
}


