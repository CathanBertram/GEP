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

	gunMuzzle = CreateDefaultSubobject<USceneComponent>(TEXT("GunMuzzle"));
	gunMuzzle->SetupAttachment(gunMesh);

}
void AWeapon_Base::ResetShoot()
{
	canShoot = true;
}

bool AWeapon_Base::Fire_Implementation()
{
	return true;
}

AWeapon_Base* AWeapon_Base::GetWeaponBase_Implementation()
{
	return this;
}





