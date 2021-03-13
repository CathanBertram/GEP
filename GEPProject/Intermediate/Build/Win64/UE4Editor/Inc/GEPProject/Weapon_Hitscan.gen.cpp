// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Weapons/Weapon_Hitscan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_Hitscan() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Hitscan_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Hitscan();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Base();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void AWeapon_Hitscan::StaticRegisterNativesAWeapon_Hitscan()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_Hitscan_NoRegister()
	{
		return AWeapon_Hitscan::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Hitscan_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_muzzleFlash_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_muzzleFlash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shootSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shootSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shootCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_shootCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_range;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Hitscan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Hitscan_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/Weapon_Hitscan.h" },
		{ "ModuleRelativePath", "Weapons/Weapon_Hitscan.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_muzzleFlash_MetaData[] = {
		{ "Category", "Weapon_Hitscan" },
		{ "ModuleRelativePath", "Weapons/Weapon_Hitscan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_muzzleFlash = { "muzzleFlash", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Hitscan, muzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_muzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_muzzleFlash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_shootSound_MetaData[] = {
		{ "Category", "Weapon_Hitscan" },
		{ "ModuleRelativePath", "Weapons/Weapon_Hitscan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_shootSound = { "shootSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Hitscan, shootSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_shootSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_shootSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Weapons/Weapon_Hitscan.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Hitscan, damage), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_shootCooldown_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Weapons/Weapon_Hitscan.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_shootCooldown = { "shootCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Hitscan, shootCooldown), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_shootCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_shootCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_range_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Weapons/Weapon_Hitscan.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Hitscan, range), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_range_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Hitscan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_muzzleFlash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_shootSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_shootCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Hitscan_Statics::NewProp_range,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Hitscan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_Hitscan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Hitscan_Statics::ClassParams = {
		&AWeapon_Hitscan::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeapon_Hitscan_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Hitscan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_Hitscan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_Hitscan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_Hitscan, 1992000043);
	template<> GEPPROJECT_API UClass* StaticClass<AWeapon_Hitscan>()
	{
		return AWeapon_Hitscan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_Hitscan(Z_Construct_UClass_AWeapon_Hitscan, &AWeapon_Hitscan::StaticClass, TEXT("/Script/GEPProject"), TEXT("AWeapon_Hitscan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_Hitscan);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
