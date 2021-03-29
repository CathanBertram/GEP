// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Weapons/Weapon_Raygun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_Raygun() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Raygun_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Raygun();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Hitscan_Auto();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
// End Cross Module References
	DEFINE_FUNCTION(AWeapon_Raygun::execGetUpdatedDirties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUpdatedDirties();
		P_NATIVE_END;
	}
	void AWeapon_Raygun::StaticRegisterNativesAWeapon_Raygun()
	{
		UClass* Class = AWeapon_Raygun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUpdatedDirties", &AWeapon_Raygun::execGetUpdatedDirties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_Raygun_GetUpdatedDirties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_Raygun_GetUpdatedDirties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/Weapon_Raygun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Raygun_GetUpdatedDirties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon_Raygun, nullptr, "GetUpdatedDirties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_Raygun_GetUpdatedDirties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Raygun_GetUpdatedDirties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_Raygun_GetUpdatedDirties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_Raygun_GetUpdatedDirties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeapon_Raygun_NoRegister()
	{
		return AWeapon_Raygun::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Raygun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Raygun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon_Hitscan_Auto,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapon_Raygun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_Raygun_GetUpdatedDirties, "GetUpdatedDirties" }, // 4181179880
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Raygun_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/Weapon_Raygun.h" },
		{ "ModuleRelativePath", "Weapons/Weapon_Raygun.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Raygun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_Raygun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Raygun_Statics::ClassParams = {
		&AWeapon_Raygun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Raygun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Raygun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_Raygun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_Raygun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_Raygun, 1005326651);
	template<> GEPPROJECT_API UClass* StaticClass<AWeapon_Raygun>()
	{
		return AWeapon_Raygun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_Raygun(Z_Construct_UClass_AWeapon_Raygun, &AWeapon_Raygun::StaticClass, TEXT("/Script/GEPProject"), TEXT("AWeapon_Raygun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_Raygun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
