// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Weapons/Weapon_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_Base() {}
// Cross Module References
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnShoot__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Base_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Base();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UFireable_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UGetWeaponBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GEPProject_OnShoot__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnShoot_Parms
		{
			float shootCost;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_shootCost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnShoot__DelegateSignature_Statics::NewProp_shootCost = { "shootCost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnShoot_Parms, shootCost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnShoot__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnShoot__DelegateSignature_Statics::NewProp_shootCost,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnShoot__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnShoot__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnShoot__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnShoot_Parms), Z_Construct_UDelegateFunction_GEPProject_OnShoot__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnShoot__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnShoot__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnShoot__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnShoot__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnShoot__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AWeapon_Base::execGetWeaponBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeapon_Base**)Z_Param__Result=P_THIS->GetWeaponBase_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon_Base::execFire)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_curEnergy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Fire_Implementation(Z_Param_curEnergy);
		P_NATIVE_END;
	}
	static FName NAME_AWeapon_Base_Fire = FName(TEXT("Fire"));
	bool AWeapon_Base::Fire(float curEnergy)
	{
		Weapon_Base_eventFire_Parms Parms;
		Parms.curEnergy=curEnergy;
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_Base_Fire),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AWeapon_Base_GetWeaponBase = FName(TEXT("GetWeaponBase"));
	AWeapon_Base* AWeapon_Base::GetWeaponBase()
	{
		Weapon_Base_eventGetWeaponBase_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_Base_GetWeaponBase),&Parms);
		return Parms.ReturnValue;
	}
	void AWeapon_Base::StaticRegisterNativesAWeapon_Base()
	{
		UClass* Class = AWeapon_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &AWeapon_Base::execFire },
			{ "GetWeaponBase", &AWeapon_Base::execGetWeaponBase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_Base_Fire_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_curEnergy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWeapon_Base_Fire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Weapon_Base_eventFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeapon_Base_Fire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Weapon_Base_eventFire_Parms), &Z_Construct_UFunction_AWeapon_Base_Fire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeapon_Base_Fire_Statics::NewProp_curEnergy = { "curEnergy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_Base_eventFire_Parms, curEnergy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_Base_Fire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_Base_Fire_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_Base_Fire_Statics::NewProp_curEnergy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_Base_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Base_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon_Base, nullptr, "Fire", nullptr, nullptr, sizeof(Weapon_Base_eventFire_Parms), Z_Construct_UFunction_AWeapon_Base_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Base_Fire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_Base_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Base_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_Base_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_Base_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_Base_GetWeaponBase_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_Base_GetWeaponBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Weapon_Base_eventGetWeaponBase_Parms, ReturnValue), Z_Construct_UClass_AWeapon_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_Base_GetWeaponBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_Base_GetWeaponBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_Base_GetWeaponBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Base_GetWeaponBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon_Base, nullptr, "GetWeaponBase", nullptr, nullptr, sizeof(Weapon_Base_eventGetWeaponBase_Parms), Z_Construct_UFunction_AWeapon_Base_GetWeaponBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Base_GetWeaponBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeapon_Base_GetWeaponBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Base_GetWeaponBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeapon_Base_GetWeaponBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeapon_Base_GetWeaponBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeapon_Base_NoRegister()
	{
		return AWeapon_Base::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_energyCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_energyCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shootCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_shootCooldown;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gunMuzzle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gunMuzzle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gunMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gunMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapon_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_Base_Fire, "Fire" }, // 983643937
		{ &Z_Construct_UFunction_AWeapon_Base_GetWeaponBase, "GetWeaponBase" }, // 2293977674
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/Weapon_Base.h" },
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::NewProp_energyCost_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Base_Statics::NewProp_energyCost = { "energyCost", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Base, energyCost), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_energyCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_energyCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::NewProp_shootCooldown_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Base_Statics::NewProp_shootCooldown = { "shootCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Base, shootCooldown), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_shootCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_shootCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::NewProp_muzzleFlash_MetaData[] = {
		{ "Category", "Weapon_Base" },
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Base_Statics::NewProp_muzzleFlash = { "muzzleFlash", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Base, muzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_muzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_muzzleFlash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::NewProp_shootSound_MetaData[] = {
		{ "Category", "Weapon_Base" },
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Base_Statics::NewProp_shootSound = { "shootSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Base, shootSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_shootSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_shootSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "Weapon Variables" },
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Base_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Base, damage), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMuzzle_MetaData[] = {
		{ "Category", "Weapon_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMuzzle = { "gunMuzzle", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Base, gunMuzzle), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMuzzle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMuzzle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMesh_MetaData[] = {
		{ "Category", "Weapon_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMesh = { "gunMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Base, gunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::NewProp_root_MetaData[] = {
		{ "Category", "Weapon_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Base_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Base, root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Base_Statics::NewProp_energyCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Base_Statics::NewProp_shootCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Base_Statics::NewProp_muzzleFlash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Base_Statics::NewProp_shootSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Base_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMuzzle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Base_Statics::NewProp_root,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeapon_Base_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFireable_NoRegister, (int32)VTABLE_OFFSET(AWeapon_Base, IFireable), false },
			{ Z_Construct_UClass_UGetWeaponBase_NoRegister, (int32)VTABLE_OFFSET(AWeapon_Base, IGetWeaponBase), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Base_Statics::ClassParams = {
		&AWeapon_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeapon_Base_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeapon_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_Base, 584591863);
	template<> GEPPROJECT_API UClass* StaticClass<AWeapon_Base>()
	{
		return AWeapon_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_Base(Z_Construct_UClass_AWeapon_Base, &AWeapon_Base::StaticClass, TEXT("/Script/GEPProject"), TEXT("AWeapon_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
