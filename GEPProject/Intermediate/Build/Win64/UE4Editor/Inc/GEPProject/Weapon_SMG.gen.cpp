// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Weapons/Weapon_SMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_SMG() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_SMG_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_SMG();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Hitscan_Auto();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
// End Cross Module References
	void AWeapon_SMG::StaticRegisterNativesAWeapon_SMG()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_SMG_NoRegister()
	{
		return AWeapon_SMG::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_SMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_SMG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon_Hitscan_Auto,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_SMG_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/Weapon_SMG.h" },
		{ "ModuleRelativePath", "Weapons/Weapon_SMG.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_SMG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_SMG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_SMG_Statics::ClassParams = {
		&AWeapon_SMG::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_SMG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_SMG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_SMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_SMG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_SMG, 897185267);
	template<> GEPPROJECT_API UClass* StaticClass<AWeapon_SMG>()
	{
		return AWeapon_SMG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_SMG(Z_Construct_UClass_AWeapon_SMG, &AWeapon_SMG::StaticClass, TEXT("/Script/GEPProject"), TEXT("AWeapon_SMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_SMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif