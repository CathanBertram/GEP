// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_Raygun.h"

#include "GameFramework/GameModeBase.h"
#include "GEPProject/GEPProjectGameMode.h"
#include "GEPProject/Interfaces/GetGEPGamemode.h"
#include "GEPProject/Upgrades/UpgradeSystem.h"
#include "Kismet/GameplayStatics.h"

void AWeapon_Raygun::GetUpdatedDirties()
{
	UWorld* world = GetWorld();
	AGameModeBase* tempGamemode = UGameplayStatics::GetGameMode(world);
	
	if (tempGamemode->GetClass()->ImplementsInterface(UGetGEPGamemode::StaticClass()))
	{
		UUpgradeSystem* upgradeSystem = IGetGEPGamemode::Execute_GetGEPGamemode(tempGamemode)->GetUpgradeSystem();
		damage = baseDamage * upgradeSystem->GetUpgradeValue(Weapon_RayGun_Damage);
		shootCooldown = baseShootCooldown * upgradeSystem->GetUpgradeValue(Weapon_RayGun_Firerate);
		//Need To Do Currency Stuff
	}
}
void AWeapon_Raygun::BeginPlay()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->onDirtyRaygun.AddDynamic(this, &AWeapon_Raygun::GetUpdatedDirties);
	Super::BeginPlay();
}