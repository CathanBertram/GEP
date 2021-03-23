// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Component/PlayerHealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHealthComponent() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UPlayerHealthComponent_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UPlayerHealthComponent();
	GEPPROJECT_API UClass* Z_Construct_UClass_UHealthComponent();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
// End Cross Module References
	void UPlayerHealthComponent::StaticRegisterNativesUPlayerHealthComponent()
	{
	}
	UClass* Z_Construct_UClass_UPlayerHealthComponent_NoRegister()
	{
		return UPlayerHealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerHealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseHealthRegenAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseHealthRegenAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseHealthRegenCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseHealthRegenCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerHealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHealthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHealthComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Component/PlayerHealthComponent.h" },
		{ "ModuleRelativePath", "Component/PlayerHealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_baseHealthRegenAmount_MetaData[] = {
		{ "Category", "PlayerHealthComponent" },
		{ "ModuleRelativePath", "Component/PlayerHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_baseHealthRegenAmount = { "baseHealthRegenAmount", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHealthComponent, baseHealthRegenAmount), METADATA_PARAMS(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_baseHealthRegenAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_baseHealthRegenAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_baseHealthRegenCooldown_MetaData[] = {
		{ "Category", "PlayerHealthComponent" },
		{ "ModuleRelativePath", "Component/PlayerHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_baseHealthRegenCooldown = { "baseHealthRegenCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHealthComponent, baseHealthRegenCooldown), METADATA_PARAMS(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_baseHealthRegenCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_baseHealthRegenCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "PlayerHealthComponent" },
		{ "ModuleRelativePath", "Component/PlayerHealthComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerHealthComponent, maxHealth), METADATA_PARAMS(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_maxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_maxHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_baseHealthRegenAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_baseHealthRegenCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHealthComponent_Statics::NewProp_maxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerHealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHealthComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHealthComponent_Statics::ClassParams = {
		&UPlayerHealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerHealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerHealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerHealthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerHealthComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerHealthComponent, 3671587797);
	template<> GEPPROJECT_API UClass* StaticClass<UPlayerHealthComponent>()
	{
		return UPlayerHealthComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerHealthComponent(Z_Construct_UClass_UPlayerHealthComponent, &UPlayerHealthComponent::StaticClass, TEXT("/Script/GEPProject"), TEXT("UPlayerHealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
