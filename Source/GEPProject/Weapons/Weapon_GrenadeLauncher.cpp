// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_GrenadeLauncher.h"

#include "GameFramework/GameModeBase.h"
#include "GEPProject/GEPProjectGameMode.h"
#include "GEPProject/Interfaces/GetGEPGamemode.h"
#include "GEPProject/Upgrades/UpgradeSystem.h"
#include "Kismet/GameplayStatics.h"

void AWeapon_GrenadeLauncher::GetUpdatedDirties()
{
	const UWorld* world = GetWorld();
	AGameModeBase* tempGamemode = UGameplayStatics::GetGameMode(world);
	
	if (tempGamemode->GetClass()->ImplementsInterface(UGetGEPGamemode::StaticClass()))
	{
		UUpgradeSystem* upgradeSystem = IGetGEPGamemode::Execute_GetGEPGamemode(tempGamemode)->GetUpgradeSystem();
		damage = baseDamage * upgradeSystem->GetUpgradeValue(Weapon_GrenadeLauncher_Damage);
		shootCooldown = baseShootCooldown * upgradeSystem->GetUpgradeValue(Weapon_GrenadeLauncher_Firerate);
		damageRadius = baseDamageRadius * upgradeSystem->GetUpgradeValue(Weapon_GrenadeLauncher_ExplosionRadius);
	}
}
void AWeapon_GrenadeLauncher::BeginPlay()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->onDirtyGrenadeLauncher.AddDynamic(this, &AWeapon_GrenadeLauncher::GetUpdatedDirties);
	Super::BeginPlay();
}