// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Upgrades/FUpgrade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFUpgrade() {}
// Cross Module References
	GEPPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FUpgrade();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UEnum* Z_Construct_UEnum_GEPProject_EUpgradeValueTypes();
	GEPPROJECT_API UEnum* Z_Construct_UEnum_GEPProject_EUpgradeTypes();
// End Cross Module References
class UScriptStruct* FUpgrade::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEPPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FUpgrade_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpgrade, Z_Construct_UPackage__Script_GEPProject(), TEXT("Upgrade"), sizeof(FUpgrade), Get_Z_Construct_UScriptStruct_FUpgrade_Hash());
	}
	return Singleton;
}
template<> GEPPROJECT_API UScriptStruct* StaticStruct<FUpgrade>()
{
	return FUpgrade::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUpgrade(FUpgrade::StaticStruct, TEXT("/Script/GEPProject"), TEXT("Upgrade"), false, nullptr, nullptr);
static struct FScriptStruct_GEPProject_StaticRegisterNativesFUpgrade
{
	FScriptStruct_GEPProject_StaticRegisterNativesFUpgrade()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Upgrade")),new UScriptStruct::TCppStructOps<FUpgrade>);
	}
} ScriptStruct_GEPProject_StaticRegisterNativesFUpgrade;
	struct Z_Construct_UScriptStruct_FUpgrade_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_upgradeValueType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_upgradeValueType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_upgradeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_upgradeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_valueMulti_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_valueMulti;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgrade_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Upgrades/FUpgrade.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpgrade_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpgrade>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_upgradeValueType_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Upgrades/FUpgrade.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_upgradeValueType = { "upgradeValueType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpgrade, upgradeValueType), Z_Construct_UEnum_GEPProject_EUpgradeValueTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_upgradeValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_upgradeValueType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_upgradeType_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Upgrades/FUpgrade.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_upgradeType = { "upgradeType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpgrade, upgradeType), Z_Construct_UEnum_GEPProject_EUpgradeTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_upgradeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_upgradeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_valueMulti_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Upgrades/FUpgrade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_valueMulti = { "valueMulti", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpgrade, valueMulti), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_valueMulti_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_valueMulti_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_cost_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Upgrades/FUpgrade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_cost = { "cost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpgrade, cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_cost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_maxLevel_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Upgrades/FUpgrade.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_maxLevel = { "maxLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpgrade, maxLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_maxLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_maxLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_level_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Upgrades/FUpgrade.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpgrade, level), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_level_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpgrade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_upgradeValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_upgradeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_valueMulti,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_maxLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpgrade_Statics::NewProp_level,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpgrade_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
		nullptr,
		&NewStructOps,
		"Upgrade",
		sizeof(FUpgrade),
		alignof(FUpgrade),
		Z_Construct_UScriptStruct_FUpgrade_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgrade_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpgrade_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpgrade_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpgrade()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUpgrade_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GEPProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Upgrade"), sizeof(FUpgrade), Get_Z_Construct_UScriptStruct_FUpgrade_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUpgrade_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUpgrade_Hash() { return 313897410U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif