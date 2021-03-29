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
	DEFINE_FUNCTION(AWeapon_SMG::execGetUpdatedDirties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUpdatedDirties();
		P_NATIVE_END;
	}
	void AWeapon_SMG::StaticRegisterNativesAWeapon_SMG()
	{
		UClass* Class = AWeapon_SMG::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUpdatedDirties", &AWeapon_SMG::execGetUpdatedDirties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_SMG_GetUpdatedDirties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_SMG_GetUpdatedDirties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/Weapon_SMG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_SMG_GetUpdatedDirties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon_SMG, nullptr, "GetUpdatedDirties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_SMG_GetUpdatedDirties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_SMG_GetUpdatedDirties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_SMG_GetUpdatedDirties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_SMG_GetUpdatedDirties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeapon_SMG_NoRegister()
	{
		return AWeapon_SMG::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_SMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapon_SMG_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_SMG_GetUpdatedDirties, "GetUpdatedDirties" }, // 2205138739
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AWeapon_SMG, 3370452789);
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
