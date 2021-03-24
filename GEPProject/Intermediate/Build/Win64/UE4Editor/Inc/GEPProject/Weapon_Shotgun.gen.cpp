// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Weapons/Weapon_Shotgun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_Shotgun() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Shotgun_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Shotgun();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Hitscan();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
// End Cross Module References
	DEFINE_FUNCTION(AWeapon_Shotgun::execGetUpdatedDirties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUpdatedDirties();
		P_NATIVE_END;
	}
	void AWeapon_Shotgun::StaticRegisterNativesAWeapon_Shotgun()
	{
		UClass* Class = AWeapon_Shotgun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUpdatedDirties", &AWeapon_Shotgun::execGetUpdatedDirties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_Shotgun_GetUpdatedDirties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_Shotgun_GetUpdatedDirties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/Weapon_Shotgun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Shotgun_GetUpdatedDirties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon_Shotgun, nullptr, "GetUpdatedDirties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_Shotgun_GetUpdatedDirties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Shotgun_GetUpdatedDirties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_Shotgun_GetUpdatedDirties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_Shotgun_GetUpdatedDirties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeapon_Shotgun_NoRegister()
	{
		return AWeapon_Shotgun::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Shotgun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_basePelletCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_basePelletCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pelletCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_pelletCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Shotgun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon_Hitscan,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapon_Shotgun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_Shotgun_GetUpdatedDirties, "GetUpdatedDirties" }, // 979840131
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Shotgun_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/Weapon_Shotgun.h" },
		{ "ModuleRelativePath", "Weapons/Weapon_Shotgun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_baseSpread_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Weapons/Weapon_Shotgun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_baseSpread = { "baseSpread", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Shotgun, baseSpread), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_baseSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_baseSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_basePelletCount_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Weapons/Weapon_Shotgun.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_basePelletCount = { "basePelletCount", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Shotgun, basePelletCount), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_basePelletCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_basePelletCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_spread_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Weapons/Weapon_Shotgun.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_spread = { "spread", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Shotgun, spread), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_spread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_spread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_pelletCount_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Weapons/Weapon_Shotgun.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_pelletCount = { "pelletCount", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Shotgun, pelletCount), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_pelletCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_pelletCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Shotgun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_baseSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_basePelletCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_spread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Shotgun_Statics::NewProp_pelletCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Shotgun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_Shotgun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Shotgun_Statics::ClassParams = {
		&AWeapon_Shotgun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeapon_Shotgun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Shotgun_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Shotgun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Shotgun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_Shotgun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_Shotgun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_Shotgun, 839526709);
	template<> GEPPROJECT_API UClass* StaticClass<AWeapon_Shotgun>()
	{
		return AWeapon_Shotgun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_Shotgun(Z_Construct_UClass_AWeapon_Shotgun, &AWeapon_Shotgun::StaticClass, TEXT("/Script/GEPProject"), TEXT("AWeapon_Shotgun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_Shotgun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
