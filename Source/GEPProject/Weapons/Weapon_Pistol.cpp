// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Pistol.h"



#include "GameFramework/GameModeBase.h"
#include "GEPProject/GEPProjectGameMode.h"
#include "GEPProject/Interfaces/GetGEPGamemode.h"
#include "GEPProject/Upgrades/UpgradeSystem.h"
#include "Kismet/GameplayStatics.h"

void AWeapon_Pistol::GetUpdatedDirties()
{
	const UWorld* world = GetWorld();
	AGameModeBase* tempGamemode = UGameplayStatics::GetGameMode(world);
	if (tempGamemode->GetClass()->ImplementsInterface(UGetGEPGamemode::StaticClass()))
	{
		UUpgradeSystem* upgradeSystem = IGetGEPGamemode::Execute_GetGEPGamemode(tempGamemode)->GetUpgradeSystem();
		damage = baseDamage * upgradeSystem->GetUpgradeValue(Weapon_Pistol_Damage);
		shootCooldown = baseShootCooldown * upgradeSystem->GetUpgradeValue(Weapon_Pistol_Firerate);
		//Need To Do Currency Stuff

	}
}
void AWeapon_Pistol::BeginPlay()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->onDirtyPistol.AddDynamic(this, &AWeapon_Pistol::GetUpdatedDirties);
	Super::BeginPlay();
}


