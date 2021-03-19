// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Weapons/Weapon_Hitscan_Auto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_Hitscan_Auto() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Hitscan_Auto_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Hitscan_Auto();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Hitscan();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UClass* Z_Construct_UClass_UFireReleaseable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWeapon_Hitscan_Auto::execFireReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireReleased_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AWeapon_Hitscan_Auto_FireReleased = FName(TEXT("FireReleased"));
	void AWeapon_Hitscan_Auto::FireReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_Hitscan_Auto_FireReleased),NULL);
	}
	void AWeapon_Hitscan_Auto::StaticRegisterNativesAWeapon_Hitscan_Auto()
	{
		UClass* Class = AWeapon_Hitscan_Auto::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireReleased", &AWeapon_Hitscan_Auto::execFireReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_Hitscan_Auto_FireReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_Hitscan_Auto_FireReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/Weapon_Hitscan_Auto.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Hitscan_Auto_FireReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon_Hitscan_Auto, nullptr, "FireReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_Hitscan_Auto_FireReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Hitscan_Auto_FireReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_Hitscan_Auto_FireReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_Hitscan_Auto_FireReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeapon_Hitscan_Auto_NoRegister()
	{
		return AWeapon_Hitscan_Auto::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Hitscan_Auto_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Hitscan_Auto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon_Hitscan,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapon_Hitscan_Auto_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_Hitscan_Auto_FireReleased, "FireReleased" }, // 2951125734
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Hitscan_Auto_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/Weapon_Hitscan_Auto.h" },
		{ "ModuleRelativePath", "Weapons/Weapon_Hitscan_Auto.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeapon_Hitscan_Auto_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFireReleaseable_NoRegister, (int32)VTABLE_OFFSET(AWeapon_Hitscan_Auto, IFireReleaseable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Hitscan_Auto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_Hitscan_Auto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Hitscan_Auto_Statics::ClassParams = {
		&AWeapon_Hitscan_Auto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Hitscan_Auto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Auto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_Hitscan_Auto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_Hitscan_Auto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_Hitscan_Auto, 3332209752);
	template<> GEPPROJECT_API UClass* StaticClass<AWeapon_Hitscan_Auto>()
	{
		return AWeapon_Hitscan_Auto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_Hitscan_Auto(Z_Construct_UClass_AWeapon_Hitscan_Auto, &AWeapon_Hitscan_Auto::StaticClass, TEXT("/Script/GEPProject"), TEXT("AWeapon_Hitscan_Auto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_Hitscan_Auto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
