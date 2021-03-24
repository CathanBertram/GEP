// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Rifle.h"

#include "GameFramework/GameModeBase.h"
#include "GEPProject/GEPProjectGameMode.h"
#include "GEPProject/Interfaces/GetGEPGamemode.h"
#include "GEPProject/Upgrades/UpgradeSystem.h"
#include "Kismet/GameplayStatics.h"

void AWeapon_Rifle::GetUpdatedDirties()
{
	UWorld* world = GetWorld();
	AGameModeBase* tempGamemode = UGameplayStatics::GetGameMode(world);

	if (tempGamemode->GetClass()->ImplementsInterface(UGetGEPGamemode::StaticClass()))
	{
		UUpgradeSystem* upgradeSystem = IGetGEPGamemode::Execute_GetGEPGamemode(tempGamemode)->GetUpgradeSystem();
		damage = baseDamage * upgradeSystem->GetUpgradeValue(Weapon_Rifle_Damage);
		shootCooldown = baseShootCooldown * upgradeSystem->GetUpgradeValue(Weapon_Rifle_Firerate);
		//Need To Do Currency Stuff
	}
}
void AWeapon_Rifle::BeginPlay()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->onDirtyRifle.AddDynamic(this, &AWeapon_Rifle::GetUpdatedDirties);
	Super::BeginPlay();
}