// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Base.h"


#include "GEPProject/EventSystem.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemy_Base::AEnemy_Base()
{
	boxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Box"));
	currencyToDrop = 100.;
}

void AEnemy_Base::GetShot_Implementation()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->OnCurrencyGain(currencyToDrop);
	Death();
}

void AEnemy_Base::Init_Implementation()
{
	//Do Init Things
}

AEnemy_Base* AEnemy_Base::GetEnemyBase_Implementation()
{
	return this;
}

void AEnemy_Base::EndOfLifetime()
{
	//Take life from player
	Death();	
}

void AEnemy_Base::Death()
{
	OnDeath.Broadcast();
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), explosionSound, GetActorLocation());
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionParticles, GetActorLocation());
	Destroy(false,false);
}


