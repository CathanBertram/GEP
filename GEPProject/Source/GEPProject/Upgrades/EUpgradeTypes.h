// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EUpgradeTypes.generated.h"

UENUM()
enum class EUpgradeTypes : uint8
{
	Player_RegenAmount								UMETA(DisplayName = "PlayerRegenAmount"),
	Player_RegenTick								UMETA(DisplayName = "PlayerRegenTick"),
	Player_CurrencyDropped							UMETA(DisplayName = "PlayerCurrencyDropped"),
	Player_DoubleCurrencyChance						UMETA(DisplayName = "PlayerDoubleCurrencyChance"),
	Player_PassiveCurrencyGain						UMETA(DisplayName = "PlayerPassiveCurrencyGain"),
	Player_PassiveCurrencyTick						UMETA(DisplayName = "PlayerPassiveCurrencyTick"),
	Enemy_SpawnRate									UMETA(DisplayName = "EnemySpawnRate"),
	Enemy_SpawnAmount								UMETA(DisplayName = "EnemySpawnAmount"),
	Enemy_MaxAliveEnemies							UMETA(DisplayName = "EnemyMaxAliveEnemies"),
	Enemy_AdditionalEnemyLevel						UMETA(DisplayName = "EnemyAdditionalEnemyLevel"),
	Enemy_EpicEnemySpawnAttemptRate					UMETA(DisplayName = "EnemyEpicEnemySpawnAttemptRate"),
	Enemy_EpicEnemySpawnChance						UMETA(DisplayName = "EnemyEpicEnemySpawnChance"),
	Weapon_Pistol_Damage							UMETA(DisplayName = "Weapon_Pistol_Damage"),
	Weapon_Pistol_Firerate							UMETA(DisplayName = "Weapon_Pistol_Firerate"),
	Weapon_Revolver_Damage							UMETA(DisplayName = "Weapon_Revolver_Damage"),
	Weapon_Revolver_Firerate						UMETA(DisplayName = "Weapon_Revolver_Firerate"),
	Weapon_Revolver_ChargeTime						UMETA(DisplayName = "Weapon_Revolver_ChargeTime"),
	Weapon_Shotgun_Damage							UMETA(DisplayName = "Weapon_Shotgun_Damage"),
	Weapon_Shotgun_Firerate							UMETA(DisplayName = "Weapon_Shotgun_Firerate"),
	Weapon_Shotgun_PelletCount						UMETA(DisplayName = "Weapon_Shotgun_PelletCount"),
	Weapon_Shotgun_Spread							UMETA(DisplayName = "Weapon_Shotgun_Spread"),
	Weapon_SMG_Damage								UMETA(DisplayName = "Weapon_SMG_Damage"),
	Weapon_SMG_Firerate								UMETA(DisplayName = "Weapon_SMG_Firerate"),
	Weapon_Rifle_Damage								UMETA(DisplayName = "Weapon_Rifle_Damage"),
	Weapon_Rifle_Firerate							UMETA(DisplayName = "Weapon_Rifle_Firerate"),
	Weapon_AutoRifle_Damage							UMETA(DisplayName = "Weapon_AutoRifle_Damage"),
	Weapon_AutoRifle_Firerate						UMETA(DisplayName = "Weapon_AutoRifle_Firerate"),
	Weapon_RayGun_Damage							UMETA(DisplayName = "Weapon_RayGun_Damage"),
	Weapon_RayGun_Firerate							UMETA(DisplayName = "Weapon_RayGun_Firerate"),
	Weapon_GrenadeLauncher_Damage					UMETA(DisplayName = "Weapon_GrenadeLauncher_Damage"),
	Weapon_GrenadeLauncher_Firerate					UMETA(DisplayName = "Weapon_GrenadeLauncher_Firerate"),
	Weapon_GrenadeLauncher_ExplosionRadius			UMETA(DisplayName = "Weapon_GrenadeLauncher_ExplosionRadius"),
	End												UMETA(DisplayName = "End")
};