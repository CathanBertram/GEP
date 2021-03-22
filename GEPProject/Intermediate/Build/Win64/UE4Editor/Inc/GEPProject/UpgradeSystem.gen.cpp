// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Upgrades/UpgradeSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpgradeSystem() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UUpgradeSystem_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UUpgradeSystem();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FUpgrade();
// End Cross Module References
	void UUpgradeSystem::StaticRegisterNativesUUpgradeSystem()
	{
	}
	UClass* Z_Construct_UClass_UUpgradeSystem_NoRegister()
	{
		return UUpgradeSystem::StaticClass();
	}
	struct Z_Construct_UClass_UUpgradeSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_upgrades_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_upgrades;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_upgrades_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpgradeSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgradeSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Upgrades/UpgradeSystem.h" },
		{ "ModuleRelativePath", "Upgrades/UpgradeSystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgradeSystem_Statics::NewProp_upgrades_MetaData[] = {
		{ "Category", "UpgradeSystem" },
		{ "ModuleRelativePath", "Upgrades/UpgradeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUpgradeSystem_Statics::NewProp_upgrades = { "upgrades", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUpgradeSystem, upgrades), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUpgradeSystem_Statics::NewProp_upgrades_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeSystem_Statics::NewProp_upgrades_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUpgradeSystem_Statics::NewProp_upgrades_Inner = { "upgrades", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUpgrade, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUpgradeSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeSystem_Statics::NewProp_upgrades,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgradeSystem_Statics::NewProp_upgrades_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpgradeSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpgradeSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUpgradeSystem_Statics::ClassParams = {
		&UUpgradeSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUpgradeSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeSystem_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUpgradeSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUpgradeSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUpgradeSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUpgradeSystem, 1067791988);
	template<> GEPPROJECT_API UClass* StaticClass<UUpgradeSystem>()
	{
		return UUpgradeSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUpgradeSystem(Z_Construct_UClass_UUpgradeSystem, &UUpgradeSystem::StaticClass, TEXT("/Script/GEPProject"), TEXT("UUpgradeSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpgradeSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
