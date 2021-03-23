// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/EventSystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventSystem() {}
// Cross Module References
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnUpgradeAttempt__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UEnum* Z_Construct_UEnum_GEPProject_EUpgradeTypes();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnEnergyUpdate__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnHealthUpdate__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDamagePlayer__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature();
	GEPPROJECT_API UClass* Z_Construct_UClass_UGEPSaveGame_NoRegister();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyGrenadeLauncher__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyRaygun__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyAutoRifle__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyRifle__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtySMG__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyShotgun__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyRevolver__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyPistol__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyDrone__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyEnemy__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyPlayer__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnStartLoad__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnStartSave__DelegateSignature();
	GEPPROJECT_API UClass* Z_Construct_UClass_UEventSystem_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UEventSystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GEPProject_OnUpgradeAttempt__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnUpgradeAttempt_Parms
		{
			TEnumAsByte<EUpgradeTypes> upgradeType;
			int32 currency;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currency;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_upgradeType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnUpgradeAttempt__DelegateSignature_Statics::NewProp_currency = { "currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnUpgradeAttempt_Parms, currency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GEPProject_OnUpgradeAttempt__DelegateSignature_Statics::NewProp_upgradeType = { "upgradeType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnUpgradeAttempt_Parms, upgradeType), Z_Construct_UEnum_GEPProject_EUpgradeTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnUpgradeAttempt__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnUpgradeAttempt__DelegateSignature_Statics::NewProp_currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnUpgradeAttempt__DelegateSignature_Statics::NewProp_upgradeType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnUpgradeAttempt__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnUpgradeAttempt__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnUpgradeAttempt__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnUpgradeAttempt_Parms), Z_Construct_UDelegateFunction_GEPProject_OnUpgradeAttempt__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnUpgradeAttempt__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnUpgradeAttempt__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnUpgradeAttempt__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnUpgradeAttempt__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnUpgradeAttempt__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnUnlockWeapon_Parms
		{
			TSubclassOf<AActor>  weaponToUnlock;
			int32 cost;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_cost;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_weaponToUnlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::NewProp_cost = { "cost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnUnlockWeapon_Parms, cost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::NewProp_weaponToUnlock = { "weaponToUnlock", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnUnlockWeapon_Parms, weaponToUnlock), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::NewProp_cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::NewProp_weaponToUnlock,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnUnlockWeapon__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnUnlockWeapon_Parms), Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnEnergyUpdate__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnEnergyUpdate_Parms
		{
			float energyPercent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_energyPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnEnergyUpdate__DelegateSignature_Statics::NewProp_energyPercent = { "energyPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnEnergyUpdate_Parms, energyPercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnEnergyUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnEnergyUpdate__DelegateSignature_Statics::NewProp_energyPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnEnergyUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnEnergyUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnEnergyUpdate__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnEnergyUpdate_Parms), Z_Construct_UDelegateFunction_GEPProject_OnEnergyUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnEnergyUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnEnergyUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnEnergyUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnEnergyUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnEnergyUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnHealthUpdate__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnHealthUpdate_Parms
		{
			float healthPercent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnHealthUpdate__DelegateSignature_Statics::NewProp_healthPercent = { "healthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnHealthUpdate_Parms, healthPercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnHealthUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnHealthUpdate__DelegateSignature_Statics::NewProp_healthPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnHealthUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnHealthUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnHealthUpdate__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnHealthUpdate_Parms), Z_Construct_UDelegateFunction_GEPProject_OnHealthUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnHealthUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnHealthUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnHealthUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnHealthUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnHealthUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnDamagePlayer__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnDamagePlayer_Parms
		{
			float damageAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnDamagePlayer__DelegateSignature_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnDamagePlayer_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnDamagePlayer__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnDamagePlayer__DelegateSignature_Statics::NewProp_damageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnDamagePlayer__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnDamagePlayer__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnDamagePlayer__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnDamagePlayer_Parms), Z_Construct_UDelegateFunction_GEPProject_OnDamagePlayer__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnDamagePlayer__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnDamagePlayer__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnDamagePlayer__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDamagePlayer__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnDamagePlayer__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnLoad_Parms
		{
			UGEPSaveGame* saveInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_saveInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::NewProp_saveInstance = { "saveInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnLoad_Parms, saveInstance), Z_Construct_UClass_UGEPSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::NewProp_saveInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnLoad__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnLoad_Parms), Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnSave_Parms
		{
			UGEPSaveGame* saveInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_saveInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::NewProp_saveInstance = { "saveInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnSave_Parms, saveInstance), Z_Construct_UClass_UGEPSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::NewProp_saveInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnSave__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnSave_Parms), Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnCurrencyUpdate_Parms
		{
			int32 newCur;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_newCur;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::NewProp_newCur = { "newCur", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnCurrencyUpdate_Parms, newCur), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::NewProp_newCur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnCurrencyUpdate__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnCurrencyUpdate_Parms), Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnCurrencyLoss_Parms
		{
			int32 curToLose;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_curToLose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::NewProp_curToLose = { "curToLose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnCurrencyLoss_Parms, curToLose), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::NewProp_curToLose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnCurrencyLoss__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnCurrencyLoss_Parms), Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnCurrencyGain_Parms
		{
			int32 curToGain;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_curToGain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::NewProp_curToGain = { "curToGain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnCurrencyGain_Parms, curToGain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::NewProp_curToGain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnCurrencyGain__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnCurrencyGain_Parms), Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnDirtyGrenadeLauncher__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnDirtyGrenadeLauncher__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnDirtyGrenadeLauncher__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnDirtyGrenadeLauncher__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnDirtyGrenadeLauncher__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnDirtyGrenadeLauncher__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyGrenadeLauncher__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnDirtyGrenadeLauncher__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnDirtyRaygun__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnDirtyRaygun__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnDirtyRaygun__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnDirtyRaygun__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnDirtyRaygun__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnDirtyRaygun__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyRaygun__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnDirtyRaygun__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnDirtyAutoRifle__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnDirtyAutoRifle__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnDirtyAutoRifle__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnDirtyAutoRifle__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnDirtyAutoRifle__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnDirtyAutoRifle__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyAutoRifle__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnDirtyAutoRifle__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnDirtyRifle__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnDirtyRifle__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnDirtyRifle__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnDirtyRifle__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnDirtyRifle__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnDirtyRifle__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyRifle__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnDirtyRifle__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnDirtySMG__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnDirtySMG__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnDirtySMG__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnDirtySMG__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnDirtySMG__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnDirtySMG__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtySMG__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnDirtySMG__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnDirtyShotgun__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnDirtyShotgun__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnDirtyShotgun__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnDirtyShotgun__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnDirtyShotgun__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnDirtyShotgun__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyShotgun__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnDirtyShotgun__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnDirtyRevolver__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnDirtyRevolver__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnDirtyRevolver__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnDirtyRevolver__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnDirtyRevolver__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnDirtyRevolver__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyRevolver__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnDirtyRevolver__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnDirtyPistol__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnDirtyPistol__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnDirtyPistol__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnDirtyPistol__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnDirtyPistol__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnDirtyPistol__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyPistol__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnDirtyPistol__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnDirtyDrone__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnDirtyDrone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnDirtyDrone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnDirtyDrone__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnDirtyDrone__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnDirtyDrone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyDrone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnDirtyDrone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnDirtyEnemy__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnDirtyEnemy__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnDirtyEnemy__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnDirtyEnemy__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnDirtyEnemy__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnDirtyEnemy__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyEnemy__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnDirtyEnemy__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnDirtyPlayer__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnDirtyPlayer__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnDirtyPlayer__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnDirtyPlayer__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnDirtyPlayer__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnDirtyPlayer__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDirtyPlayer__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnDirtyPlayer__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnStartLoad__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnStartLoad__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnStartLoad__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnStartLoad__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnStartLoad__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnStartLoad__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnStartLoad__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnStartLoad__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnStartSave__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnStartSave__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnStartSave__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnStartSave__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnStartSave__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnStartSave__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnStartSave__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnStartSave__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UEventSystem::execOnUpgradeAttempt)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_upgradeType);
		P_GET_PROPERTY(FIntProperty,Z_Param_currency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpgradeAttempt(EUpgradeTypes(Z_Param_upgradeType),Z_Param_currency);
		P_NATIVE_END;
	}
	void UEventSystem::StaticRegisterNativesUEventSystem()
	{
		UClass* Class = UEventSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnUpgradeAttempt", &UEventSystem::execOnUpgradeAttempt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEventSystem_OnUpgradeAttempt_Statics
	{
		struct EventSystem_eventOnUpgradeAttempt_Parms
		{
			TEnumAsByte<EUpgradeTypes> upgradeType;
			int32 currency;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currency;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_upgradeType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEventSystem_OnUpgradeAttempt_Statics::NewProp_currency = { "currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventSystem_eventOnUpgradeAttempt_Parms, currency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEventSystem_OnUpgradeAttempt_Statics::NewProp_upgradeType = { "upgradeType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EventSystem_eventOnUpgradeAttempt_Parms, upgradeType), Z_Construct_UEnum_GEPProject_EUpgradeTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEventSystem_OnUpgradeAttempt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventSystem_OnUpgradeAttempt_Statics::NewProp_currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEventSystem_OnUpgradeAttempt_Statics::NewProp_upgradeType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEventSystem_OnUpgradeAttempt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEventSystem_OnUpgradeAttempt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEventSystem, nullptr, "OnUpgradeAttempt", nullptr, nullptr, sizeof(EventSystem_eventOnUpgradeAttempt_Parms), Z_Construct_UFunction_UEventSystem_OnUpgradeAttempt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventSystem_OnUpgradeAttempt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEventSystem_OnUpgradeAttempt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEventSystem_OnUpgradeAttempt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEventSystem_OnUpgradeAttempt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEventSystem_OnUpgradeAttempt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEventSystem_NoRegister()
	{
		return UEventSystem::StaticClass();
	}
	struct Z_Construct_UClass_UEventSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEventSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEventSystem_OnUpgradeAttempt, "OnUpgradeAttempt" }, // 1984809054
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventSystem.h" },
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventSystem_Statics::ClassParams = {
		&UEventSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventSystem, 3308426655);
	template<> GEPPROJECT_API UClass* StaticClass<UEventSystem>()
	{
		return UEventSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventSystem(Z_Construct_UClass_UEventSystem, &UEventSystem::StaticClass, TEXT("/Script/GEPProject"), TEXT("UEventSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
