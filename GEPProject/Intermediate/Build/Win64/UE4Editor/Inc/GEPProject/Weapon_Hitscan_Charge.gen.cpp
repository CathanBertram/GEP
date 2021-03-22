// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Weapons/Weapon_Hitscan_Charge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_Hitscan_Charge() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Hitscan_Charge_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Hitscan_Charge();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Hitscan();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UFireReleaseable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWeapon_Hitscan_Charge::execFireReleased)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_curEnergy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireReleased_Implementation(Z_Param_curEnergy);
		P_NATIVE_END;
	}
	static FName NAME_AWeapon_Hitscan_Charge_FireReleased = FName(TEXT("FireReleased"));
	void AWeapon_Hitscan_Charge::FireReleased(float curEnergy)
	{
		Weapon_Hitscan_Charge_eventFireReleased_Parms Parms;
		Parms.curEnergy=curEnergy;
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_Hitscan_Charge_FireReleased),&Parms);
	}
	void AWeapon_Hitscan_Charge::StaticRegisterNativesAWeapon_Hitscan_Charge()
	{
		UClass* Class = AWeapon_Hitscan_Charge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireReleased", &AWeapon_Hitscan_Charge::execFireReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_Hitscan_Charge_FireReleased_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_curEnergy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeapon_Hitscan_Charge_FireReleased_Statics::NewProp_curEnergy = { "curEnergy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_Hitscan_Charge_eventFireReleased_Parms, curEnergy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_Hitscan_Charge_FireReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_Hitscan_Charge_FireReleased_Statics::NewProp_curEnergy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_Hitscan_Charge_FireReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/Weapon_Hitscan_Charge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Hitscan_Charge_FireReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon_Hitscan_Charge, nullptr, "FireReleased", nullptr, nullptr, sizeof(Weapon_Hitscan_Charge_eventFireReleased_Parms), Z_Construct_UFunction_AWeapon_Hitscan_Charge_FireReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Hitscan_Charge_FireReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_Hitscan_Charge_FireReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Hitscan_Charge_FireReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_Hitscan_Charge_FireReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_Hitscan_Charge_FireReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeapon_Hitscan_Charge_NoRegister()
	{
		return AWeapon_Hitscan_Charge::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chargeSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chargeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_chargeTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon_Hitscan,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_Hitscan_Charge_FireReleased, "FireReleased" }, // 30910286
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/Weapon_Hitscan_Charge.h" },
		{ "ModuleRelativePath", "Weapons/Weapon_Hitscan_Charge.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::NewProp_chargeSound_MetaData[] = {
		{ "Category", "Weapon_Hitscan_Charge" },
		{ "ModuleRelativePath", "Weapons/Weapon_Hitscan_Charge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::NewProp_chargeSound = { "chargeSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Hitscan_Charge, chargeSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::NewProp_chargeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::NewProp_chargeSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::NewProp_chargeTime_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Weapons/Weapon_Hitscan_Charge.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::NewProp_chargeTime = { "chargeTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Hitscan_Charge, chargeTime), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::NewProp_chargeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::NewProp_chargeTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::NewProp_chargeSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::NewProp_chargeTime,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFireReleaseable_NoRegister, (int32)VTABLE_OFFSET(AWeapon_Hitscan_Charge, IFireReleaseable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_Hitscan_Charge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::ClassParams = {
		&AWeapon_Hitscan_Charge::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_Hitscan_Charge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_Hitscan_Charge, 3212976783);
	template<> GEPPROJECT_API UClass* StaticClass<AWeapon_Hitscan_Charge>()
	{
		return AWeapon_Hitscan_Charge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_Hitscan_Charge(Z_Construct_UClass_AWeapon_Hitscan_Charge, &AWeapon_Hitscan_Charge::StaticClass, TEXT("/Script/GEPProject"), TEXT("AWeapon_Hitscan_Charge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_Hitscan_Charge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
