// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EUpgradeTypes.generated.h"

UENUM(BlueprintType)
enum EUpgradeTypes
{
	Player_RegenAmount								UMETA(DisplayName = "PlayerRegenAmount"),
	Player_RegenTick								UMETA(DisplayName = "PlayerRegenTick"),
	Player_CurrencyDropped							UMETA(DisplayName = "CurrencyDropped"),
	Player_DoubleCurrencyChance						UMETA(DisplayName = "DoubleCurrencyChance"),
	Player_PassiveCurrencyGain						UMETA(DisplayName = "PassiveCurrencyGain"),
	Player_PassiveCurrencyTick						UMETA(DisplayName = "PassiveCurrencyTick"),
	Player_PassiveEnergyRegen						UMETA(DisplayName = "PassiveEnergyRegen"),
	Player_PassiveEnergyTick						UMETA(DisplayName = "PassiveEnergyTick"),
	Enemy_SpawnRate									UMETA(DisplayName = "EnemySpawnRate"),
	Enemy_SpawnAmount								UMETA(DisplayName = "EnemySpawnAmount"),
	Enemy_MaxAliveEnemies							UMETA(DisplayName = "MaxAliveEnemies"),
	Enemy_AdditionalEnemyLevel						UMETA(DisplayName = "AdditionalEnemyLevel"),
	Enemy_EpicEnemySpawnAttemptRate					UMETA(DisplayName = "EpicEnemySpawnAttemptRate"),
	Enemy_EpicEnemySpawnChance						UMETA(DisplayName = "EpicEnemySpawnChance"),
	Weapon_Pistol_Damage							UMETA(DisplayName = "Pistol_Damage"),
	Weapon_Pistol_Firerate							UMETA(DisplayName = "Pistol_Firerate"),
	Weapon_Revolver_Damage							UMETA(DisplayName = "Revolver_Damage"),
	Weapon_Revolver_Firerate						UMETA(DisplayName = "Revolver_Firerate"),
	Weapon_Revolver_ChargeTime						UMETA(DisplayName = "Revolver_ChargeTime"),
	Weapon_Shotgun_Damage							UMETA(DisplayName = "Shotgun_Damage"),
	Weapon_Shotgun_Firerate							UMETA(DisplayName = "Shotgun_Firerate"),
	Weapon_Shotgun_PelletCount						UMETA(DisplayName = "Shotgun_PelletCount"),
	Weapon_Shotgun_Spread							UMETA(DisplayName = "Shotgun_Spread"),
	Weapon_SMG_Damage								UMETA(DisplayName = "SMG_Damage"),
	Weapon_SMG_Firerate								UMETA(DisplayName = "SMG_Firerate"),
	Weapon_Rifle_Damage								UMETA(DisplayName = "Rifle_Damage"),
	Weapon_Rifle_Firerate							UMETA(DisplayName = "Rifle_Firerate"),
	Weapon_AutoRifle_Damage							UMETA(DisplayName = "AutoRifle_Damage"),
	Weapon_AutoRifle_Firerate						UMETA(DisplayName = "AutoRifle_Firerate"),
	Weapon_RayGun_Damage							UMETA(DisplayName = "RayGun_Damage"),
	Weapon_RayGun_Firerate							UMETA(DisplayName = "RayGun_Firerate"),
	Weapon_GrenadeLauncher_Damage					UMETA(DisplayName = "GrenadeLauncher_Damage"),
	Weapon_GrenadeLauncher_Firerate					UMETA(DisplayName = "GrenadeLauncher_Firerate"),
	Weapon_GrenadeLauncher_ExplosionRadius			UMETA(DisplayName = "GrenadeLauncher_ExplosionRadius"),
	Drone_AttackDamage								UMETA(DisplayName = "DroneAttackDamage"),
	Drone_AttackCooldown							UMETA(DisplayName = "DroneAttackCooldown"),
	Drone_MovementSpeed								UMETA(DisplayName = "DroneMovementSpeed"),
	Drone_Amount									UMETA(DisplayName = "DroneAmount"),
	End												UMETA(DisplayName = "End")
};

UENUM()
enum EUpgradeValueTypes
{
	Add,
	Multiply
};