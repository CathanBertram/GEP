// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Weapons/Weapon_GrenadeLauncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_GrenadeLauncher() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_GrenadeLauncher_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_GrenadeLauncher();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Projectile();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
// End Cross Module References
	void AWeapon_GrenadeLauncher::StaticRegisterNativesAWeapon_GrenadeLauncher()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_GrenadeLauncher_NoRegister()
	{
		return AWeapon_GrenadeLauncher::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_GrenadeLauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_GrenadeLauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon_Projectile,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_GrenadeLauncher_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/Weapon_GrenadeLauncher.h" },
		{ "ModuleRelativePath", "Weapons/Weapon_GrenadeLauncher.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_GrenadeLauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_GrenadeLauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_GrenadeLauncher_Statics::ClassParams = {
		&AWeapon_GrenadeLauncher::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_GrenadeLauncher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_GrenadeLauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_GrenadeLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_GrenadeLauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_GrenadeLauncher, 1474004301);
	template<> GEPPROJECT_API UClass* StaticClass<AWeapon_GrenadeLauncher>()
	{
		return AWeapon_GrenadeLauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_GrenadeLauncher(Z_Construct_UClass_AWeapon_GrenadeLauncher, &AWeapon_GrenadeLauncher::StaticClass, TEXT("/Script/GEPProject"), TEXT("AWeapon_GrenadeLauncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_GrenadeLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
