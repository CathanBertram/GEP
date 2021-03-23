// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Weapons/Weapon_AutoRifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_AutoRifle() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_AutoRifle_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_AutoRifle();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Hitscan_Auto();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
// End Cross Module References
	void AWeapon_AutoRifle::StaticRegisterNativesAWeapon_AutoRifle()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_AutoRifle_NoRegister()
	{
		return AWeapon_AutoRifle::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_AutoRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_AutoRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon_Hitscan_Auto,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_AutoRifle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/Weapon_AutoRifle.h" },
		{ "ModuleRelativePath", "Weapons/Weapon_AutoRifle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_AutoRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_AutoRifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_AutoRifle_Statics::ClassParams = {
		&AWeapon_AutoRifle::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_AutoRifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_AutoRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_AutoRifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_AutoRifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_AutoRifle, 3271252132);
	template<> GEPPROJECT_API UClass* StaticClass<AWeapon_AutoRifle>()
	{
		return AWeapon_AutoRifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_AutoRifle(Z_Construct_UClass_AWeapon_AutoRifle, &AWeapon_AutoRifle::StaticClass, TEXT("/Script/GEPProject"), TEXT("AWeapon_AutoRifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_AutoRifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
