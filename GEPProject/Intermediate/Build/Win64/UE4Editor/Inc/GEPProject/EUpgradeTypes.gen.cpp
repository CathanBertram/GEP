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
	GEPPROJECT_API UEnum* Z_Construct_UEnum_GEPProject_EUpgradeTypes();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
// End Cross Module References
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
	uint32 Get_Z_Construct_UEnum_GEPProject_EUpgradeTypes_Hash() { return 2964624233U; }
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
				{ "EUpgradeTypes::Player_RegenAmount", (int64)EUpgradeTypes::Player_RegenAmount },
				{ "EUpgradeTypes::Player_RegenTick", (int64)EUpgradeTypes::Player_RegenTick },
				{ "EUpgradeTypes::Player_CurrencyDropped", (int64)EUpgradeTypes::Player_CurrencyDropped },
				{ "EUpgradeTypes::Player_DoubleCurrencyChance", (int64)EUpgradeTypes::Player_DoubleCurrencyChance },
				{ "EUpgradeTypes::Player_PassiveCurrencyGain", (int64)EUpgradeTypes::Player_PassiveCurrencyGain },
				{ "EUpgradeTypes::Player_PassiveCurrencyTick", (int64)EUpgradeTypes::Player_PassiveCurrencyTick },
				{ "EUpgradeTypes::Enemy_SpawnRate", (int64)EUpgradeTypes::Enemy_SpawnRate },
				{ "EUpgradeTypes::Enemy_SpawnAmount", (int64)EUpgradeTypes::Enemy_SpawnAmount },
				{ "EUpgradeTypes::Enemy_MaxAliveEnemies", (int64)EUpgradeTypes::Enemy_MaxAliveEnemies },
				{ "EUpgradeTypes::Enemy_AdditionalEnemyLevel", (int64)EUpgradeTypes::Enemy_AdditionalEnemyLevel },
				{ "EUpgradeTypes::Enemy_EpicEnemySpawnAttemptRate", (int64)EUpgradeTypes::Enemy_EpicEnemySpawnAttemptRate },
				{ "EUpgradeTypes::Enemy_EpicEnemySpawnChance", (int64)EUpgradeTypes::Enemy_EpicEnemySpawnChance },
				{ "EUpgradeTypes::Weapon_Pistol_Damage", (int64)EUpgradeTypes::Weapon_Pistol_Damage },
				{ "EUpgradeTypes::Weapon_Pistol_Firerate", (int64)EUpgradeTypes::Weapon_Pistol_Firerate },
				{ "EUpgradeTypes::Weapon_Revolver_Damage", (int64)EUpgradeTypes::Weapon_Revolver_Damage },
				{ "EUpgradeTypes::Weapon_Revolver_Firerate", (int64)EUpgradeTypes::Weapon_Revolver_Firerate },
				{ "EUpgradeTypes::Weapon_Revolver_ChargeTime", (int64)EUpgradeTypes::Weapon_Revolver_ChargeTime },
				{ "EUpgradeTypes::Weapon_Shotgun_Damage", (int64)EUpgradeTypes::Weapon_Shotgun_Damage },
				{ "EUpgradeTypes::Weapon_Shotgun_Firerate", (int64)EUpgradeTypes::Weapon_Shotgun_Firerate },
				{ "EUpgradeTypes::Weapon_Shotgun_PelletCount", (int64)EUpgradeTypes::Weapon_Shotgun_PelletCount },
				{ "EUpgradeTypes::Weapon_Shotgun_Spread", (int64)EUpgradeTypes::Weapon_Shotgun_Spread },
				{ "EUpgradeTypes::Weapon_SMG_Damage", (int64)EUpgradeTypes::Weapon_SMG_Damage },
				{ "EUpgradeTypes::Weapon_SMG_Firerate", (int64)EUpgradeTypes::Weapon_SMG_Firerate },
				{ "EUpgradeTypes::Weapon_Rifle_Damage", (int64)EUpgradeTypes::Weapon_Rifle_Damage },
				{ "EUpgradeTypes::Weapon_Rifle_Firerate", (int64)EUpgradeTypes::Weapon_Rifle_Firerate },
				{ "EUpgradeTypes::Weapon_AutoRifle_Damage", (int64)EUpgradeTypes::Weapon_AutoRifle_Damage },
				{ "EUpgradeTypes::Weapon_AutoRifle_Firerate", (int64)EUpgradeTypes::Weapon_AutoRifle_Firerate },
				{ "EUpgradeTypes::Weapon_RayGun_Damage", (int64)EUpgradeTypes::Weapon_RayGun_Damage },
				{ "EUpgradeTypes::Weapon_RayGun_Firerate", (int64)EUpgradeTypes::Weapon_RayGun_Firerate },
				{ "EUpgradeTypes::Weapon_GrenadeLauncher_Damage", (int64)EUpgradeTypes::Weapon_GrenadeLauncher_Damage },
				{ "EUpgradeTypes::Weapon_GrenadeLauncher_Firerate", (int64)EUpgradeTypes::Weapon_GrenadeLauncher_Firerate },
				{ "EUpgradeTypes::Weapon_GrenadeLauncher_ExplosionRadius", (int64)EUpgradeTypes::Weapon_GrenadeLauncher_ExplosionRadius },
				{ "EUpgradeTypes::End", (int64)EUpgradeTypes::End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "End.DisplayName", "End" },
				{ "End.Name", "EUpgradeTypes::End" },
				{ "Enemy_AdditionalEnemyLevel.DisplayName", "EnemyAdditionalEnemyLevel" },
				{ "Enemy_AdditionalEnemyLevel.Name", "EUpgradeTypes::Enemy_AdditionalEnemyLevel" },
				{ "Enemy_EpicEnemySpawnAttemptRate.DisplayName", "EnemyEpicEnemySpawnAttemptRate" },
				{ "Enemy_EpicEnemySpawnAttemptRate.Name", "EUpgradeTypes::Enemy_EpicEnemySpawnAttemptRate" },
				{ "Enemy_EpicEnemySpawnChance.DisplayName", "EnemyEpicEnemySpawnChance" },
				{ "Enemy_EpicEnemySpawnChance.Name", "EUpgradeTypes::Enemy_EpicEnemySpawnChance" },
				{ "Enemy_MaxAliveEnemies.DisplayName", "EnemyMaxAliveEnemies" },
				{ "Enemy_MaxAliveEnemies.Name", "EUpgradeTypes::Enemy_MaxAliveEnemies" },
				{ "Enemy_SpawnAmount.DisplayName", "EnemySpawnAmount" },
				{ "Enemy_SpawnAmount.Name", "EUpgradeTypes::Enemy_SpawnAmount" },
				{ "Enemy_SpawnRate.DisplayName", "EnemySpawnRate" },
				{ "Enemy_SpawnRate.Name", "EUpgradeTypes::Enemy_SpawnRate" },
				{ "ModuleRelativePath", "Upgrades/EUpgradeTypes.h" },
				{ "Player_CurrencyDropped.DisplayName", "PlayerCurrencyDropped" },
				{ "Player_CurrencyDropped.Name", "EUpgradeTypes::Player_CurrencyDropped" },
				{ "Player_DoubleCurrencyChance.DisplayName", "PlayerDoubleCurrencyChance" },
				{ "Player_DoubleCurrencyChance.Name", "EUpgradeTypes::Player_DoubleCurrencyChance" },
				{ "Player_PassiveCurrencyGain.DisplayName", "PlayerPassiveCurrencyGain" },
				{ "Player_PassiveCurrencyGain.Name", "EUpgradeTypes::Player_PassiveCurrencyGain" },
				{ "Player_PassiveCurrencyTick.DisplayName", "PlayerPassiveCurrencyTick" },
				{ "Player_PassiveCurrencyTick.Name", "EUpgradeTypes::Player_PassiveCurrencyTick" },
				{ "Player_RegenAmount.DisplayName", "PlayerRegenAmount" },
				{ "Player_RegenAmount.Name", "EUpgradeTypes::Player_RegenAmount" },
				{ "Player_RegenTick.DisplayName", "PlayerRegenTick" },
				{ "Player_RegenTick.Name", "EUpgradeTypes::Player_RegenTick" },
				{ "Weapon_AutoRifle_Damage.DisplayName", "Weapon_AutoRifle_Damage" },
				{ "Weapon_AutoRifle_Damage.Name", "EUpgradeTypes::Weapon_AutoRifle_Damage" },
				{ "Weapon_AutoRifle_Firerate.DisplayName", "Weapon_AutoRifle_Firerate" },
				{ "Weapon_AutoRifle_Firerate.Name", "EUpgradeTypes::Weapon_AutoRifle_Firerate" },
				{ "Weapon_GrenadeLauncher_Damage.DisplayName", "Weapon_GrenadeLauncher_Damage" },
				{ "Weapon_GrenadeLauncher_Damage.Name", "EUpgradeTypes::Weapon_GrenadeLauncher_Damage" },
				{ "Weapon_GrenadeLauncher_ExplosionRadius.DisplayName", "Weapon_GrenadeLauncher_ExplosionRadius" },
				{ "Weapon_GrenadeLauncher_ExplosionRadius.Name", "EUpgradeTypes::Weapon_GrenadeLauncher_ExplosionRadius" },
				{ "Weapon_GrenadeLauncher_Firerate.DisplayName", "Weapon_GrenadeLauncher_Firerate" },
				{ "Weapon_GrenadeLauncher_Firerate.Name", "EUpgradeTypes::Weapon_GrenadeLauncher_Firerate" },
				{ "Weapon_Pistol_Damage.DisplayName", "Weapon_Pistol_Damage" },
				{ "Weapon_Pistol_Damage.Name", "EUpgradeTypes::Weapon_Pistol_Damage" },
				{ "Weapon_Pistol_Firerate.DisplayName", "Weapon_Pistol_Firerate" },
				{ "Weapon_Pistol_Firerate.Name", "EUpgradeTypes::Weapon_Pistol_Firerate" },
				{ "Weapon_RayGun_Damage.DisplayName", "Weapon_RayGun_Damage" },
				{ "Weapon_RayGun_Damage.Name", "EUpgradeTypes::Weapon_RayGun_Damage" },
				{ "Weapon_RayGun_Firerate.DisplayName", "Weapon_RayGun_Firerate" },
				{ "Weapon_RayGun_Firerate.Name", "EUpgradeTypes::Weapon_RayGun_Firerate" },
				{ "Weapon_Revolver_ChargeTime.DisplayName", "Weapon_Revolver_ChargeTime" },
				{ "Weapon_Revolver_ChargeTime.Name", "EUpgradeTypes::Weapon_Revolver_ChargeTime" },
				{ "Weapon_Revolver_Damage.DisplayName", "Weapon_Revolver_Damage" },
				{ "Weapon_Revolver_Damage.Name", "EUpgradeTypes::Weapon_Revolver_Damage" },
				{ "Weapon_Revolver_Firerate.DisplayName", "Weapon_Revolver_Firerate" },
				{ "Weapon_Revolver_Firerate.Name", "EUpgradeTypes::Weapon_Revolver_Firerate" },
				{ "Weapon_Rifle_Damage.DisplayName", "Weapon_Rifle_Damage" },
				{ "Weapon_Rifle_Damage.Name", "EUpgradeTypes::Weapon_Rifle_Damage" },
				{ "Weapon_Rifle_Firerate.DisplayName", "Weapon_Rifle_Firerate" },
				{ "Weapon_Rifle_Firerate.Name", "EUpgradeTypes::Weapon_Rifle_Firerate" },
				{ "Weapon_Shotgun_Damage.DisplayName", "Weapon_Shotgun_Damage" },
				{ "Weapon_Shotgun_Damage.Name", "EUpgradeTypes::Weapon_Shotgun_Damage" },
				{ "Weapon_Shotgun_Firerate.DisplayName", "Weapon_Shotgun_Firerate" },
				{ "Weapon_Shotgun_Firerate.Name", "EUpgradeTypes::Weapon_Shotgun_Firerate" },
				{ "Weapon_Shotgun_PelletCount.DisplayName", "Weapon_Shotgun_PelletCount" },
				{ "Weapon_Shotgun_PelletCount.Name", "EUpgradeTypes::Weapon_Shotgun_PelletCount" },
				{ "Weapon_Shotgun_Spread.DisplayName", "Weapon_Shotgun_Spread" },
				{ "Weapon_Shotgun_Spread.Name", "EUpgradeTypes::Weapon_Shotgun_Spread" },
				{ "Weapon_SMG_Damage.DisplayName", "Weapon_SMG_Damage" },
				{ "Weapon_SMG_Damage.Name", "EUpgradeTypes::Weapon_SMG_Damage" },
				{ "Weapon_SMG_Firerate.DisplayName", "Weapon_SMG_Firerate" },
				{ "Weapon_SMG_Firerate.Name", "EUpgradeTypes::Weapon_SMG_Firerate" },
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
				(uint8)UEnum::ECppForm::EnumClass,
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