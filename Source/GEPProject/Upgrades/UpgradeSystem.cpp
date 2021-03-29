// Fill out your copyright notice in the Description page of Project Settings.


#include "UpgradeSystem.h"

#include "EUpgradeTypes.h"


UUpgradeSystem::UUpgradeSystem()
{
	//Create upgrades and add them to array
	for (int i = 0; i < static_cast<int>(EUpgradeTypes::End); ++i)
	{
		upgrades.Add(FUpgrade(0,0, static_cast<TEnumAsByte<EUpgradeTypes>>(i)));
	}
}

float UUpgradeSystem::GetUpgradeValue(TEnumAsByte<EUpgradeTypes> upgradeType)
{
	for (FUpgrade upgrade : upgrades)
	{
		if (upgrade.upgradeType == upgradeType)
		{
			if (upgrade.upgradeValueType == EUpgradeValueTypes::Add)
				return upgrade.valueMulti * upgrade.level;
			else if(upgrade.upgradeValueType == EUpgradeValueTypes::Multiply)
				return FMath::Pow(upgrade.valueMulti, upgrade.level);
			return upgrade.valueMulti;
		}
	}
	return 1;
}

void UUpgradeSystem::Init(UEventSystem* eventSystem)
{	
	eventInstance = eventSystem;
	eventSystem->onUpgradeAttempt.AddDynamic(this, &UUpgradeSystem::Upgrade);

	playerDirty = false;
	enemyDirty = false;
	droneDirty = false;
	pistolDirty = false;
	revolverDirty = false;
	shotgunDirty = false;
	smgDirty = false;
	rifleDirty = false;
	autoRifleDirty = false;
	rayGunDirty = false;
	grenadeLauncherDirty = false;
}

float UUpgradeSystem::GetUpgradeCost(TEnumAsByte<EUpgradeTypes> upgradeType)
{
	for (FUpgrade upgrade : upgrades)
	{
		if (upgrade.upgradeType == upgradeType)
		{
			return upgrade.cost;
		}
	}
	return 0;
}

void UUpgradeSystem::UpdateDirties()
{
	if(playerDirty)
		eventInstance->OnDirtyPlayer();
	if(enemyDirty)
		eventInstance->OnDirtyEnemy();
	if(droneDirty)
		eventInstance->OnDirtyDrone();
	if(pistolDirty)
		eventInstance->OnDirtyPistol();
	if(revolverDirty)
		eventInstance->OnDirtyRevolver();
	if(shotgunDirty)
		eventInstance->OnDirtyShotgun();
	if(smgDirty)
		eventInstance->OnDirtySMG();
	if(rifleDirty)
		eventInstance->OnDirtyRifle();
	if(autoRifleDirty)
		eventInstance->OnDirtyAutoRifle();
	if (rayGunDirty)
		eventInstance->OnDirtyRaygun();
	if(grenadeLauncherDirty)
		eventInstance->OnDirtyGrenadeLauncher();
}

void UUpgradeSystem::ForceUpdateDirties()
{
	eventInstance->OnDirtyPlayer();
	eventInstance->OnDirtyEnemy();
	eventInstance->OnDirtyDrone();
	eventInstance->OnDirtyPistol();
	eventInstance->OnDirtyRevolver();
	eventInstance->OnDirtyShotgun();
	eventInstance->OnDirtySMG();
	eventInstance->OnDirtyRifle();
	eventInstance->OnDirtyAutoRifle();
	eventInstance->OnDirtyRaygun();
	eventInstance->OnDirtyGrenadeLauncher();
}

void UUpgradeSystem::Upgrade(TEnumAsByte<EUpgradeTypes> upgradeType, int currency)
{
	for (int i = 0; i < upgrades.Num(); ++i)
	{
		if (upgrades[i].upgradeType == upgradeType)
		{
			if (currency >= upgrades[i].cost)
			{
				if(upgrades[i].level >= upgrades[i].maxLevel)
					return;
				
				upgrades[i].level++;
				SetDirty(upgrades[i].upgradeType);
				eventInstance->OnCurrencyLoss(upgrades[i].cost);
			}	
		}
	}
}

void UUpgradeSystem::SetDirty(EUpgradeTypes upgradeType)
{
	switch (upgradeType)
	{
	case Player_RegenAmount: playerDirty = true;
		break;
	case Player_RegenTick: playerDirty = true;
		break;
	case Player_CurrencyDropped: playerDirty = true;
		break;
	case Player_DoubleCurrencyChance: playerDirty = true;
		break;
	case Player_PassiveCurrencyGain: playerDirty = true;
		break;
	case Player_PassiveCurrencyTick: playerDirty = true;
		break;
	case Player_PassiveEnergyRegen: playerDirty = true;
		break;
	case Player_PassiveEnergyTick: playerDirty = true;
		break;
	case Enemy_SpawnRate: enemyDirty = true;
		break;
	case Enemy_SpawnAmount: enemyDirty = true;
		break;
	case Enemy_MaxAliveEnemies: enemyDirty = true;
		break;
	case Enemy_AdditionalEnemyLevel: enemyDirty = true;
		break;
	case Enemy_EpicEnemySpawnAttemptRate: enemyDirty = true;
		break;
	case Enemy_EpicEnemySpawnChance: enemyDirty = true;
		break;
	case Weapon_Pistol_Damage: pistolDirty = true;
		break;
	case Weapon_Pistol_Firerate: pistolDirty = true;
		break;
	case Weapon_Revolver_Damage: revolverDirty = true;
		break;
	case Weapon_Revolver_Firerate: revolverDirty = true;
		break;
	case Weapon_Revolver_ChargeTime: revolverDirty = true;
		break;
	case Weapon_Shotgun_Damage: shotgunDirty = true;
		break;
	case Weapon_Shotgun_Firerate: shotgunDirty = true;
		break;
	case Weapon_Shotgun_PelletCount: shotgunDirty = true;
		break;
	case Weapon_Shotgun_Spread: shotgunDirty = true;
		break;
	case Weapon_SMG_Damage: smgDirty = true;
		break;
	case Weapon_SMG_Firerate: smgDirty = true;
		break;
	case Weapon_Rifle_Damage: rifleDirty = true;
		break;
	case Weapon_Rifle_Firerate: rifleDirty = true;
		break;
	case Weapon_AutoRifle_Damage: autoRifleDirty = true;
		break;
	case Weapon_AutoRifle_Firerate: autoRifleDirty = true;
		break;
	case Weapon_RayGun_Damage: rayGunDirty = true;
		break;
	case Weapon_RayGun_Firerate: rayGunDirty = true;
		break;
	case Weapon_GrenadeLauncher_Damage: grenadeLauncherDirty = true;
		break;
	case Weapon_GrenadeLauncher_Firerate: grenadeLauncherDirty = true;
		break;
	case Weapon_GrenadeLauncher_ExplosionRadius: grenadeLauncherDirty = true;
		break;
	case Drone_AttackDamage: droneDirty = true;
		break;
	case Drone_AttackCooldown: droneDirty = true;
		break;
	case Drone_MovementSpeed: droneDirty = true;
		break;
	case Drone_Amount: droneDirty = true;
		break;
	case End: break;
	case Player_ConstantEnergyRegen: playerDirty = true; break;
	case Player_Invincible: playerDirty = true; break;
	default: ;
	}
}

