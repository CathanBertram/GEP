// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/UpgradeTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpgradeTypes() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UUpgradeTypes_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UUpgradeTypes();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
// End Cross Module References
	void UUpgradeTypes::StaticRegisterNativesUUpgradeTypes()
	{
	}
	UClass* Z_Construct_UClass_UUpgradeTypes_NoRegister()
	{
		return UUpgradeTypes::StaticClass();
	}
	struct Z_Construct_UClass_UUpgradeTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpgradeTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedEnum,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgradeTypes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UpgradeTypes.h" },
		{ "ModuleRelativePath", "UpgradeTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpgradeTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpgradeTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUpgradeTypes_Statics::ClassParams = {
		&UUpgradeTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUpgradeTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUpgradeTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUpgradeTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUpgradeTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUpgradeTypes, 2328497110);
	template<> GEPPROJECT_API UClass* StaticClass<UUpgradeTypes>()
	{
		return UUpgradeTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUpgradeTypes(Z_Construct_UClass_UUpgradeTypes, &UUpgradeTypes::StaticClass, TEXT("/Script/GEPProject"), TEXT("UUpgradeTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpgradeTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
