// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_SMG.h"

#include "GameFramework/GameModeBase.h"
#include "GEPProject/GEPProjectGameMode.h"
#include "GEPProject/Interfaces/GetGEPGamemode.h"
#include "GEPProject/Upgrades/UpgradeSystem.h"
#include "Kismet/GameplayStatics.h"

void AWeapon_SMG::GetUpdatedDirties()
{
	UWorld* world = GetWorld();
	AGameModeBase* tempGamemode = UGameplayStatics::GetGameMode(world);
	
	if (tempGamemode->GetClass()->ImplementsInterface(UGetGEPGamemode::StaticClass()))
	{
		UUpgradeSystem* upgradeSystem = IGetGEPGamemode::Execute_GetGEPGamemode(tempGamemode)->GetUpgradeSystem();
		damage = baseDamage * upgradeSystem->GetUpgradeValue(Weapon_SMG_Damage);
		shootCooldown = baseShootCooldown * upgradeSystem->GetUpgradeValue(Weapon_SMG_Firerate);
	}
}
void AWeapon_SMG::BeginPlay()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->onDirtySMG.AddDynamic(this, &AWeapon_SMG::GetUpdatedDirties);
	Super::BeginPlay();
}