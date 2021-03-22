// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Upgrades/EUpgradeTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUpgradeTypes() {}
// Cross Module References
	GEPPROJECT_API UEnum* Z_Construct_UEnum_GEPProject_EUpgradeValueTypes();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UEnum* Z_Construct_UEnum_GEPProject_EUpgradeTypes();
// End Cross Module References
	static UEnum* EUpgradeValueTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GEPProject_EUpgradeValueTypes, Z_Construct_UPackage__Script_GEPProject(), TEXT("EUpgradeValueTypes"));
		}
		return Singleton;
	}
	template<> GEPPROJECT_API UEnum* StaticEnum<EUpgradeValueTypes>()
	{
		return EUpgradeValueTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUpgradeValueTypes(EUpgradeValueTypes_StaticEnum, TEXT("/Script/GEPProject"), TEXT("EUpgradeValueTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GEPProject_EUpgradeValueTypes_Hash() { return 2744910720U; }
	UEnum* Z_Construct_UEnum_GEPProject_EUpgradeValueTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GEPProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUpgradeValueTypes"), 0, Get_Z_Construct_UEnum_GEPProject_EUpgradeValueTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Add", (int64)Add },
				{ "Multiply", (int64)Multiply },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Add.Name", "Add" },
				{ "ModuleRelativePath", "Upgrades/EUpgradeTypes.h" },
				{ "Multiply.Name", "Multiply" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GEPProject,
				nullptr,
				"EUpgradeValueTypes",
				"EUpgradeValueTypes",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUpgradeTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GEPProject_EUpgradeTypes, Z_Construct_UPackage__Script_GEPProject(), TEXT("EUpgradeTypes"));
		}
		return Singleton;
	}
	template<> GEPPROJECT_API UEnum* StaticEnum<EUpgradeTypes>()
	{
		return EUpgradeTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUpgradeTypes(EUpgradeTypes_StaticEnum, TEXT("/Script/GEPProject"), TEXT("EUpgradeTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GEPProject_EUpgradeTypes_Hash() { return 1196791237U; }
	UEnum* Z_Construct_UEnum_GEPProject_EUpgradeTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GEPProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUpgradeTypes"), 0, Get_Z_Construct_UEnum_GEPProject_EUpgradeTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Player_RegenAmount", (int64)Player_RegenAmount },
				{ "Player_RegenTick", (int64)Player_RegenTick },
				{ "Player_CurrencyDropped", (int64)Player_CurrencyDropped },
				{ "Player_DoubleCurrencyChance", (int64)Player_DoubleCurrencyChance },
				{ "Player_PassiveCurrencyGain", (int64)Player_PassiveCurrencyGain },
				{ "Player_PassiveCurrencyTick", (int64)Player_PassiveCurrencyTick },
				{ "Player_PassiveEnergyRegen", (int64)Player_PassiveEnergyRegen },
				{ "Player_PassiveEnergyTick", (int64)Player_PassiveEnergyTick },
				{ "Enemy_SpawnRate", (int64)Enemy_SpawnRate },
				{ "Enemy_SpawnAmount", (int64)Enemy_SpawnAmount },
				{ "Enemy_MaxAliveEnemies", (int64)Enemy_MaxAliveEnemies },
				{ "Enemy_AdditionalEnemyLevel", (int64)Enemy_AdditionalEnemyLevel },
				{ "Enemy_EpicEnemySpawnAttemptRate", (int64)Enemy_EpicEnemySpawnAttemptRate },
				{ "Enemy_EpicEnemySpawnChance", (int64)Enemy_EpicEnemySpawnChance },
				{ "Weapon_Pistol_Damage", (int64)Weapon_Pistol_Damage },
				{ "Weapon_Pistol_Firerate", (int64)Weapon_Pistol_Firerate },
				{ "Weapon_Revolver_Damage", (int64)Weapon_Revolver_Damage },
				{ "Weapon_Revolver_Firerate", (int64)Weapon_Revolver_Firerate },
				{ "Weapon_Revolver_ChargeTime", (int64)Weapon_Revolver_ChargeTime },
				{ "Weapon_Shotgun_Damage", (int64)Weapon_Shotgun_Damage },
				{ "Weapon_Shotgun_Firerate", (int64)Weapon_Shotgun_Firerate },
				{ "Weapon_Shotgun_PelletCount", (int64)Weapon_Shotgun_PelletCount },
				{ "Weapon_Shotgun_Spread", (int64)Weapon_Shotgun_Spread },
				{ "Weapon_SMG_Damage", (int64)Weapon_SMG_Damage },
				{ "Weapon_SMG_Firerate", (int64)Weapon_SMG_Firerate },
				{ "Weapon_Rifle_Damage", (int64)Weapon_Rifle_Damage },
				{ "Weapon_Rifle_Firerate", (int64)Weapon_Rifle_Firerate },
				{ "Weapon_AutoRifle_Damage", (int64)Weapon_AutoRifle_Damage },
				{ "Weapon_AutoRifle_Firerate", (int64)Weapon_AutoRifle_Firerate },
				{ "Weapon_RayGun_Damage", (int64)Weapon_RayGun_Damage },
				{ "Weapon_RayGun_Firerate", (int64)Weapon_RayGun_Firerate },
				{ "Weapon_GrenadeLauncher_Damage", (int64)Weapon_GrenadeLauncher_Damage },
				{ "Weapon_GrenadeLauncher_Firerate", (int64)Weapon_GrenadeLauncher_Firerate },
				{ "Weapon_GrenadeLauncher_ExplosionRadius", (int64)Weapon_GrenadeLauncher_ExplosionRadius },
				{ "Drone_AttackDamage", (int64)Drone_AttackDamage },
				{ "Drone_AttackCooldown", (int64)Drone_AttackCooldown },
				{ "Drone_MovementSpeed", (int64)Drone_MovementSpeed },
				{ "Drone_Amount", (int64)Drone_Amount },
				{ "End", (int64)End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Drone_Amount.DisplayName", "DroneAmount" },
				{ "Drone_Amount.Name", "Drone_Amount" },
				{ "Drone_AttackCooldown.DisplayName", "DroneAttackCooldown" },
				{ "Drone_AttackCooldown.Name", "Drone_AttackCooldown" },
				{ "Drone_AttackDamage.DisplayName", "DroneAttackDamage" },
				{ "Drone_AttackDamage.Name", "Drone_AttackDamage" },
				{ "Drone_MovementSpeed.DisplayName", "DroneMovementSpeed" },
				{ "Drone_MovementSpeed.Name", "Drone_MovementSpeed" },
				{ "End.DisplayName", "End" },
				{ "End.Name", "End" },
				{ "Enemy_AdditionalEnemyLevel.DisplayName", "AdditionalEnemyLevel" },
				{ "Enemy_AdditionalEnemyLevel.Name", "Enemy_AdditionalEnemyLevel" },
				{ "Enemy_EpicEnemySpawnAttemptRate.DisplayName", "EpicEnemySpawnAttemptRate" },
				{ "Enemy_EpicEnemySpawnAttemptRate.Name", "Enemy_EpicEnemySpawnAttemptRate" },
				{ "Enemy_EpicEnemySpawnChance.DisplayName", "EpicEnemySpawnChance" },
				{ "Enemy_EpicEnemySpawnChance.Name", "Enemy_EpicEnemySpawnChance" },
				{ "Enemy_MaxAliveEnemies.DisplayName", "MaxAliveEnemies" },
				{ "Enemy_MaxAliveEnemies.Name", "Enemy_MaxAliveEnemies" },
				{ "Enemy_SpawnAmount.DisplayName", "EnemySpawnAmount" },
				{ "Enemy_SpawnAmount.Name", "Enemy_SpawnAmount" },
				{ "Enemy_SpawnRate.DisplayName", "EnemySpawnRate" },
				{ "Enemy_SpawnRate.Name", "Enemy_SpawnRate" },
				{ "ModuleRelativePath", "Upgrades/EUpgradeTypes.h" },
				{ "Player_CurrencyDropped.DisplayName", "CurrencyDropped" },
				{ "Player_CurrencyDropped.Name", "Player_CurrencyDropped" },
				{ "Player_DoubleCurrencyChance.DisplayName", "DoubleCurrencyChance" },
				{ "Player_DoubleCurrencyChance.Name", "Player_DoubleCurrencyChance" },
				{ "Player_PassiveCurrencyGain.DisplayName", "PassiveCurrencyGain" },
				{ "Player_PassiveCurrencyGain.Name", "Player_PassiveCurrencyGain" },
				{ "Player_PassiveCurrencyTick.DisplayName", "PassiveCurrencyTick" },
				{ "Player_PassiveCurrencyTick.Name", "Player_PassiveCurrencyTick" },
				{ "Player_PassiveEnergyRegen.DisplayName", "PassiveEnergyRegen" },
				{ "Player_PassiveEnergyRegen.Name", "Player_PassiveEnergyRegen" },
				{ "Player_PassiveEnergyTick.DisplayName", "PassiveEnergyTick" },
				{ "Player_PassiveEnergyTick.Name", "Player_PassiveEnergyTick" },
				{ "Player_RegenAmount.DisplayName", "PlayerRegenAmount" },
				{ "Player_RegenAmount.Name", "Player_RegenAmount" },
				{ "Player_RegenTick.DisplayName", "PlayerRegenTick" },
				{ "Player_RegenTick.Name", "Player_RegenTick" },
				{ "Weapon_AutoRifle_Damage.DisplayName", "AutoRifle_Damage" },
				{ "Weapon_AutoRifle_Damage.Name", "Weapon_AutoRifle_Damage" },
				{ "Weapon_AutoRifle_Firerate.DisplayName", "AutoRifle_Firerate" },
				{ "Weapon_AutoRifle_Firerate.Name", "Weapon_AutoRifle_Firerate" },
				{ "Weapon_GrenadeLauncher_Damage.DisplayName", "GrenadeLauncher_Damage" },
				{ "Weapon_GrenadeLauncher_Damage.Name", "Weapon_GrenadeLauncher_Damage" },
				{ "Weapon_GrenadeLauncher_ExplosionRadius.DisplayName", "GrenadeLauncher_ExplosionRadius" },
				{ "Weapon_GrenadeLauncher_ExplosionRadius.Name", "Weapon_GrenadeLauncher_ExplosionRadius" },
				{ "Weapon_GrenadeLauncher_Firerate.DisplayName", "GrenadeLauncher_Firerate" },
				{ "Weapon_GrenadeLauncher_Firerate.Name", "Weapon_GrenadeLauncher_Firerate" },
				{ "Weapon_Pistol_Damage.DisplayName", "Pistol_Damage" },
				{ "Weapon_Pistol_Damage.Name", "Weapon_Pistol_Damage" },
				{ "Weapon_Pistol_Firerate.DisplayName", "Pistol_Firerate" },
				{ "Weapon_Pistol_Firerate.Name", "Weapon_Pistol_Firerate" },
				{ "Weapon_RayGun_Damage.DisplayName", "RayGun_Damage" },
				{ "Weapon_RayGun_Damage.Name", "Weapon_RayGun_Damage" },
				{ "Weapon_RayGun_Firerate.DisplayName", "RayGun_Firerate" },
				{ "Weapon_RayGun_Firerate.Name", "Weapon_RayGun_Firerate" },
				{ "Weapon_Revolver_ChargeTime.DisplayName", "Revolver_ChargeTime" },
				{ "Weapon_Revolver_ChargeTime.Name", "Weapon_Revolver_ChargeTime" },
				{ "Weapon_Revolver_Damage.DisplayName", "Revolver_Damage" },
				{ "Weapon_Revolver_Damage.Name", "Weapon_Revolver_Damage" },
				{ "Weapon_Revolver_Firerate.DisplayName", "Revolver_Firerate" },
				{ "Weapon_Revolver_Firerate.Name", "Weapon_Revolver_Firerate" },
				{ "Weapon_Rifle_Damage.DisplayName", "Rifle_Damage" },
				{ "Weapon_Rifle_Damage.Name", "Weapon_Rifle_Damage" },
				{ "Weapon_Rifle_Firerate.DisplayName", "Rifle_Firerate" },
				{ "Weapon_Rifle_Firerate.Name", "Weapon_Rifle_Firerate" },
				{ "Weapon_Shotgun_Damage.DisplayName", "Shotgun_Damage" },
				{ "Weapon_Shotgun_Damage.Name", "Weapon_Shotgun_Damage" },
				{ "Weapon_Shotgun_Firerate.DisplayName", "Shotgun_Firerate" },
				{ "Weapon_Shotgun_Firerate.Name", "Weapon_Shotgun_Firerate" },
				{ "Weapon_Shotgun_PelletCount.DisplayName", "Shotgun_PelletCount" },
				{ "Weapon_Shotgun_PelletCount.Name", "Weapon_Shotgun_PelletCount" },
				{ "Weapon_Shotgun_Spread.DisplayName", "Shotgun_Spread" },
				{ "Weapon_Shotgun_Spread.Name", "Weapon_Shotgun_Spread" },
				{ "Weapon_SMG_Damage.DisplayName", "SMG_Damage" },
				{ "Weapon_SMG_Damage.Name", "Weapon_SMG_Damage" },
				{ "Weapon_SMG_Firerate.DisplayName", "SMG_Firerate" },
				{ "Weapon_SMG_Firerate.Name", "Weapon_SMG_Firerate" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GEPProject,
				nullptr,
				"EUpgradeTypes",
				"EUpgradeTypes",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
