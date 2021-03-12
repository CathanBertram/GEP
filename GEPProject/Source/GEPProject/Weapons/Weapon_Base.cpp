// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Base.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Engine/Engine.h"

// Sets default values
AWeapon_Base::AWeapon_Base()
{
	root = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneComponent"));
	RootComponent = root;

	gunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun"));
	gunMesh->SetupAttachment(root);

	gunMuzzle = CreateDefaultSubobject<UArrowComponent>(TEXT("GunMuzzle"));
	gunMuzzle->SetupAttachment(gunMesh);

}

// Called when the game starts or when spawned
void AWeapon_Base::BeginPlay()
{
	Super::BeginPlay();
}

bool AWeapon_Base::Fire_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,FString::Printf(TEXT("Firing base weapon class")));
	return true;
}





