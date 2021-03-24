// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Weapons/Weapon_ChargeRevolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_ChargeRevolver() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_ChargeRevolver_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_ChargeRevolver();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Hitscan_Charge();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
// End Cross Module References
	DEFINE_FUNCTION(AWeapon_ChargeRevolver::execGetUpdatedDirties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUpdatedDirties();
		P_NATIVE_END;
	}
	void AWeapon_ChargeRevolver::StaticRegisterNativesAWeapon_ChargeRevolver()
	{
		UClass* Class = AWeapon_ChargeRevolver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUpdatedDirties", &AWeapon_ChargeRevolver::execGetUpdatedDirties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_ChargeRevolver_GetUpdatedDirties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_ChargeRevolver_GetUpdatedDirties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/Weapon_ChargeRevolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_ChargeRevolver_GetUpdatedDirties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon_ChargeRevolver, nullptr, "GetUpdatedDirties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_ChargeRevolver_GetUpdatedDirties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_ChargeRevolver_GetUpdatedDirties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_ChargeRevolver_GetUpdatedDirties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_ChargeRevolver_GetUpdatedDirties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeapon_ChargeRevolver_NoRegister()
	{
		return AWeapon_ChargeRevolver::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_ChargeRevolver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_ChargeRevolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon_Hitscan_Charge,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapon_ChargeRevolver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_ChargeRevolver_GetUpdatedDirties, "GetUpdatedDirties" }, // 3786786639
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_ChargeRevolver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/Weapon_ChargeRevolver.h" },
		{ "ModuleRelativePath", "Weapons/Weapon_ChargeRevolver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_ChargeRevolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_ChargeRevolver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_ChargeRevolver_Statics::ClassParams = {
		&AWeapon_ChargeRevolver::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_ChargeRevolver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_ChargeRevolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_ChargeRevolver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_ChargeRevolver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_ChargeRevolver, 3968057939);
	template<> GEPPROJECT_API UClass* StaticClass<AWeapon_ChargeRevolver>()
	{
		return AWeapon_ChargeRevolver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_ChargeRevolver(Z_Construct_UClass_AWeapon_ChargeRevolver, &AWeapon_ChargeRevolver::StaticClass, TEXT("/Script/GEPProject"), TEXT("AWeapon_ChargeRevolver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_ChargeRevolver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
