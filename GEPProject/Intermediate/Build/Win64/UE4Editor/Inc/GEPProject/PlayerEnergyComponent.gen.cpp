// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Component/PlayerEnergyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerEnergyComponent() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UPlayerEnergyComponent_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UPlayerEnergyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
// End Cross Module References
	void UPlayerEnergyComponent::StaticRegisterNativesUPlayerEnergyComponent()
	{
	}
	UClass* Z_Construct_UClass_UPlayerEnergyComponent_NoRegister()
	{
		return UPlayerEnergyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerEnergyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_energyRegenResetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_energyRegenResetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_energyRegenAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_energyRegenAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_energyRegenCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_energyRegenCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxEnergy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerEnergyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerEnergyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/PlayerEnergyComponent.h" },
		{ "ModuleRelativePath", "Component/PlayerEnergyComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_energyRegenResetTime_MetaData[] = {
		{ "Category", "PlayerEnergyComponent" },
		{ "ModuleRelativePath", "Component/PlayerEnergyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_energyRegenResetTime = { "energyRegenResetTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerEnergyComponent, energyRegenResetTime), METADATA_PARAMS(Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_energyRegenResetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_energyRegenResetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_energyRegenAmount_MetaData[] = {
		{ "Category", "PlayerEnergyComponent" },
		{ "ModuleRelativePath", "Component/PlayerEnergyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_energyRegenAmount = { "energyRegenAmount", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerEnergyComponent, energyRegenAmount), METADATA_PARAMS(Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_energyRegenAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_energyRegenAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_energyRegenCooldown_MetaData[] = {
		{ "Category", "PlayerEnergyComponent" },
		{ "ModuleRelativePath", "Component/PlayerEnergyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_energyRegenCooldown = { "energyRegenCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerEnergyComponent, energyRegenCooldown), METADATA_PARAMS(Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_energyRegenCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_energyRegenCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_baseEnergy_MetaData[] = {
		{ "Category", "PlayerEnergyComponent" },
		{ "ModuleRelativePath", "Component/PlayerEnergyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_baseEnergy = { "baseEnergy", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerEnergyComponent, baseEnergy), METADATA_PARAMS(Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_baseEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_baseEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_currentEnergy_MetaData[] = {
		{ "Category", "PlayerEnergyComponent" },
		{ "ModuleRelativePath", "Component/PlayerEnergyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_currentEnergy = { "currentEnergy", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerEnergyComponent, currentEnergy), METADATA_PARAMS(Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_currentEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_currentEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_maxEnergy_MetaData[] = {
		{ "Category", "PlayerEnergyComponent" },
		{ "ModuleRelativePath", "Component/PlayerEnergyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_maxEnergy = { "maxEnergy", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerEnergyComponent, maxEnergy), METADATA_PARAMS(Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_maxEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_maxEnergy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerEnergyComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_energyRegenResetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_energyRegenAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_energyRegenCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_baseEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_currentEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerEnergyComponent_Statics::NewProp_maxEnergy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerEnergyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerEnergyComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerEnergyComponent_Statics::ClassParams = {
		&UPlayerEnergyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerEnergyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerEnergyComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerEnergyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerEnergyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerEnergyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerEnergyComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerEnergyComponent, 478608393);
	template<> GEPPROJECT_API UClass* StaticClass<UPlayerEnergyComponent>()
	{
		return UPlayerEnergyComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerEnergyComponent(Z_Construct_UClass_UPlayerEnergyComponent, &UPlayerEnergyComponent::StaticClass, TEXT("/Script/GEPProject"), TEXT("UPlayerEnergyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerEnergyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
