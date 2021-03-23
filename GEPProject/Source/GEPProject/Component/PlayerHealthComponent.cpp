// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHealthComponent.h"

#include <string>

void UPlayerHealthComponent::Init()
{
	AActor* owner = GetOwner();
	if(owner)
		owner->OnTakeAnyDamage.AddDynamic(this, &UPlayerHealthComponent::TakeDamage);

	currentHealth = baseHealth;
	maxHealth = baseHealth;
	healthRegenCooldown = baseHealthRegenCooldown;
	healthRegenAmount = baseHealthRegenAmount;
	
	Regen();
}

void UPlayerHealthComponent::Regen()
{
	currentHealth += healthRegenAmount;
	if (currentHealth > maxHealth)
		currentHealth = maxHealth;
	eventInstance->OnHealthUpdate(GetHealthPercent());

	GetWorld()->GetTimerManager().SetTimer(RegenTimerHandle, this, &UPlayerHealthComponent::Regen, healthRegenCooldown);
}

void UPlayerHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
                                        AController* InstigatedBy, AActor* DamageCauser)
{
	Super::TakeDamage(DamagedActor, Damage, DamageType, InstigatedBy, DamageCauser);
	eventInstance->OnHealthUpdate(GetHealthPercent());
}
