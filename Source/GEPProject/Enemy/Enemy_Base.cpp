// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Base.h"



#include "ChaosInterfaceWrapperCore.h"
#include "GameFramework/Character.h"
#include "GEPProject/EventSystem.h"
#include "GEPProject/Component/HealthComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemy_Base::AEnemy_Base()
{
	boxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Box"));
	healthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	currencyToDrop = 100.;
}

void AEnemy_Base::GetShot_Implementation()
{
}

void AEnemy_Base::Init_Implementation()
{
	//Do Init Things
	healthComponent->Init();
	healthComponent->onDeath.AddDynamic(this, &AEnemy_Base::ShotDeath);
}

AEnemy_Base* AEnemy_Base::GetEnemyBase_Implementation()
{
	return this;
}

void AEnemy_Base::EndOfLifetime()
{
	//Take life from player
	AActor* player = UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetCharacter();
	UGameplayStatics::ApplyDamage(player, damage, this->GetInstigatorController(), this, TSubclassOf<UDamageType>(UDamageType::StaticClass()));
	Death();	
}



void AEnemy_Base::Death()
{
	OnDeath.Broadcast(this);
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), explosionSound, GetActorLocation());
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionParticles, GetActorLocation());
	Destroy(false,false);
	
}

void AEnemy_Base::ShotDeath()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->OnCurrencyGain(currencyToDrop);
	Death();
}


