// Fill out your copyright notice in the Description page of Project Settings.


#include "PurchaseableWeaponStand.h"


#include "GEPProject/EventSystem.h"
#include "GEPProject/Player/GEPProjectCharacter.h"

// Sets default values
APurchaseableWeaponStand::APurchaseableWeaponStand()
{
	weaponStand = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponStand"));

	weaponSocket = CreateDefaultSubobject<USceneComponent>(TEXT("WeaponSocket"));
	weaponSocket->SetupAttachment(weaponStand);
	
	weapon = CreateDefaultSubobject<UChildActorComponent>(TEXT("Weapon"));
	weapon->SetupAttachment(weaponSocket);
	weapon->CreateChildActor();

	textSocket = CreateDefaultSubobject<USceneComponent>(TEXT("TextSocket"));
	textSocket->SetupAttachment(weaponStand);
	text = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));
	text->SetupAttachment(textSocket);
	
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	boxComp->SetupAttachment(weaponStand);
}

void APurchaseableWeaponStand::OnInteract_Implementation(AGEPProjectCharacter* character)
{
	if (unlocked) return;

	if (character->GetCurrency() > cost)
	{
		GetGameInstance()->GetSubsystem<UEventSystem>()->OnUnlockWeapon(weaponToUnlock, cost);
		Unlock();
	}
	
}
void APurchaseableWeaponStand::Unlock()
{
	weapon->DestroyChildActor();
	text->DestroyComponent();	
	unlocked = true;
}

void APurchaseableWeaponStand::BeginPlay()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->onLoad.AddDynamic(this, &APurchaseableWeaponStand::Load);
}


void APurchaseableWeaponStand::Load(UGEPSaveGame* saveInstance)
{
	for (TSubclassOf<AActor> unlockedWeapon : saveInstance->unlockedWeapons)
	{
		if (unlockedWeapon == weaponToUnlock)
		{
			unlocked = true;
			Unlock();
		}
	}
}






