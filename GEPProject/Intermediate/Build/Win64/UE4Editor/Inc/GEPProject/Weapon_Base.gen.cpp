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
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Base_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AWeapon_Base();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UFireable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWeapon_Base::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Fire_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AWeapon_Base_Fire = FName(TEXT("Fire"));
	bool AWeapon_Base::Fire()
	{
		Weapon_Base_eventFire_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_Base_Fire),&Parms);
		return !!Parms.ReturnValue;
	}
	void AWeapon_Base::StaticRegisterNativesAWeapon_Base()
	{
		UClass* Class = AWeapon_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &AWeapon_Base::execFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_Base_Fire_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_Base_Fire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_Base_Fire_Statics::NewProp_ReturnValue,
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
		{ &Z_Construct_UFunction_AWeapon_Base_Fire, "Fire" }, // 1045537727
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/Weapon_Base.h" },
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMuzzle_MetaData[] = {
		{ "Category", "Weapon_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMuzzle = { "gunMuzzle", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Base, gunMuzzle), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMuzzle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMuzzle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMesh_MetaData[] = {
		{ "Category", "Weapon_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMesh = { "gunMesh", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Base, gunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Base_Statics::NewProp_root_MetaData[] = {
		{ "Category", "Weapon_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/Weapon_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Base_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon_Base, root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Base_Statics::NewProp_root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMuzzle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Base_Statics::NewProp_gunMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Base_Statics::NewProp_root,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeapon_Base_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFireable_NoRegister, (int32)VTABLE_OFFSET(AWeapon_Base, IFireable), false },
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
	IMPLEMENT_CLASS(AWeapon_Base, 3425808834);
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
