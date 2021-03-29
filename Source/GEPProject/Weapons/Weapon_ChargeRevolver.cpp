// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon_ChargeRevolver.h"

#include "GameFramework/GameModeBase.h"
#include "GEPProject/GEPProjectGameMode.h"
#include "GEPProject/Interfaces/GetGEPGamemode.h"
#include "GEPProject/Upgrades/UpgradeSystem.h"
#include "Kismet/GameplayStatics.h"

void AWeapon_ChargeRevolver::GetUpdatedDirties()
{
	UWorld* world = GetWorld();
	AGameModeBase* tempGamemode = UGameplayStatics::GetGameMode(world);
	
	if (tempGamemode->GetClass()->ImplementsInterface(UGetGEPGamemode::StaticClass()))
	{
		UUpgradeSystem* upgradeSystem = IGetGEPGamemode::Execute_GetGEPGamemode(tempGamemode)->GetUpgradeSystem();
		damage = baseDamage * upgradeSystem->GetUpgradeValue(Weapon_Revolver_Damage);
		shootCooldown = baseShootCooldown * upgradeSystem->GetUpgradeValue(Weapon_Revolver_Firerate);
		chargeTime = baseChargeTime * upgradeSystem->GetUpgradeValue(Weapon_Revolver_ChargeTime);
		//Need To Do Currency Stuff
	}
}

void AWeapon_ChargeRevolver::BeginPlay()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->onDirtyRevolver.AddDynamic(this, &AWeapon_ChargeRevolver::GetUpdatedDirties);
	Super::BeginPlay();
}