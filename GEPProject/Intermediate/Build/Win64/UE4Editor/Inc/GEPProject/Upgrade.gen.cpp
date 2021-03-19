// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Upgrades/Upgrade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpgrade() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UUpgrade_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UUpgrade();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
// End Cross Module References
	void UUpgrade::StaticRegisterNativesUUpgrade()
	{
	}
	UClass* Z_Construct_UClass_UUpgrade_NoRegister()
	{
		return UUpgrade::StaticClass();
	}
	struct Z_Construct_UClass_UUpgrade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_valueMulti_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_valueMulti;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpgrade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedStruct,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgrade_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Upgrades/Upgrade.h" },
		{ "ModuleRelativePath", "Upgrades/Upgrade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgrade_Statics::NewProp_valueMulti_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Upgrades/Upgrade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUpgrade_Statics::NewProp_valueMulti = { "valueMulti", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUpgrade, valueMulti), METADATA_PARAMS(Z_Construct_UClass_UUpgrade_Statics::NewProp_valueMulti_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUpgrade_Statics::NewProp_valueMulti_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgrade_Statics::NewProp_cost_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Upgrades/Upgrade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUpgrade_Statics::NewProp_cost = { "cost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUpgrade, cost), METADATA_PARAMS(Z_Construct_UClass_UUpgrade_Statics::NewProp_cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUpgrade_Statics::NewProp_cost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgrade_Statics::NewProp_level_MetaData[] = {
		{ "Category", "Upgrade" },
		{ "ModuleRelativePath", "Upgrades/Upgrade.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UUpgrade_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUpgrade, level), METADATA_PARAMS(Z_Construct_UClass_UUpgrade_Statics::NewProp_level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUpgrade_Statics::NewProp_level_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUpgrade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgrade_Statics::NewProp_valueMulti,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgrade_Statics::NewProp_cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgrade_Statics::NewProp_level,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpgrade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpgrade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUpgrade_Statics::ClassParams = {
		&UUpgrade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUpgrade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUpgrade_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUpgrade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUpgrade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUpgrade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUpgrade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUpgrade, 2610372);
	template<> GEPPROJECT_API UClass* StaticClass<UUpgrade>()
	{
		return UUpgrade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUpgrade(Z_Construct_UClass_UUpgrade, &UUpgrade::StaticClass, TEXT("/Script/GEPProject"), TEXT("UUpgrade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpgrade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
