// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Enemy/Enemy_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Base() {}
// Cross Module References
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDeath__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UClass* Z_Construct_UClass_AEnemy_Base_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AEnemy_Base();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UShootable_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UInitableEnemy_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GEPProject_OnDeath__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnDeath__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnDeath__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnDeath__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnDeath__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDeath__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnDeath__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AEnemy_Base::execEndOfLifetime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndOfLifetime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemy_Base::execGetEnemyBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AEnemy_Base**)Z_Param__Result=P_THIS->GetEnemyBase_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemy_Base::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemy_Base::execGetShot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetShot_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AEnemy_Base_GetEnemyBase = FName(TEXT("GetEnemyBase"));
	AEnemy_Base* AEnemy_Base::GetEnemyBase()
	{
		Enemy_Base_eventGetEnemyBase_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AEnemy_Base_GetEnemyBase),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AEnemy_Base_GetShot = FName(TEXT("GetShot"));
	void AEnemy_Base::GetShot()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemy_Base_GetShot),NULL);
	}
	static FName NAME_AEnemy_Base_Init = FName(TEXT("Init"));
	void AEnemy_Base::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemy_Base_Init),NULL);
	}
	void AEnemy_Base::StaticRegisterNativesAEnemy_Base()
	{
		UClass* Class = AEnemy_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndOfLifetime", &AEnemy_Base::execEndOfLifetime },
			{ "GetEnemyBase", &AEnemy_Base::execGetEnemyBase },
			{ "GetShot", &AEnemy_Base::execGetShot },
			{ "Init", &AEnemy_Base::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemy_Base_EndOfLifetime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Base_EndOfLifetime_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyFunctions" },
		{ "ModuleRelativePath", "Enemy/Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Base_EndOfLifetime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Base, nullptr, "EndOfLifetime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Base_EndOfLifetime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_EndOfLifetime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Base_EndOfLifetime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Base_EndOfLifetime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_Base_GetEnemyBase_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_Base_GetEnemyBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_Base_eventGetEnemyBase_Parms, ReturnValue), Z_Construct_UClass_AEnemy_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_Base_GetEnemyBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_Base_GetEnemyBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Base_GetEnemyBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Base_GetEnemyBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Base, nullptr, "GetEnemyBase", nullptr, nullptr, sizeof(Enemy_Base_eventGetEnemyBase_Parms), Z_Construct_UFunction_AEnemy_Base_GetEnemyBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_GetEnemyBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Base_GetEnemyBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_GetEnemyBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Base_GetEnemyBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Base_GetEnemyBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_Base_GetShot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Base_GetShot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Base_GetShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Base, nullptr, "GetShot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Base_GetShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_GetShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Base_GetShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Base_GetShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_Base_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Base_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Base_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Base, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Base_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Base_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Base_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemy_Base_NoRegister()
	{
		return AEnemy_Base::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyToDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currencyToDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_explosionParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_explosionSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemy_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_Base_EndOfLifetime, "EndOfLifetime" }, // 4016115613
		{ &Z_Construct_UFunction_AEnemy_Base_GetEnemyBase, "GetEnemyBase" }, // 3826034000
		{ &Z_Construct_UFunction_AEnemy_Base_GetShot, "GetShot" }, // 2137493694
		{ &Z_Construct_UFunction_AEnemy_Base_Init, "Init" }, // 945405902
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy/Enemy_Base.h" },
		{ "ModuleRelativePath", "Enemy/Enemy_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp_currencyToDrop_MetaData[] = {
		{ "Category", "Enemy_Base" },
		{ "ModuleRelativePath", "Enemy/Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_currencyToDrop = { "currencyToDrop", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Base, currencyToDrop), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_currencyToDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_currencyToDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp_explosionParticles_MetaData[] = {
		{ "Category", "Enemy_Base" },
		{ "ModuleRelativePath", "Enemy/Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_explosionParticles = { "explosionParticles", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Base, explosionParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_explosionParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_explosionParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp_explosionSound_MetaData[] = {
		{ "Category", "Enemy_Base" },
		{ "ModuleRelativePath", "Enemy/Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_explosionSound = { "explosionSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Base, explosionSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_explosionSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_explosionSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp_boxMesh_MetaData[] = {
		{ "Category", "Enemy_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_boxMesh = { "boxMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Base, boxMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_boxMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_boxMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_currencyToDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_explosionParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_explosionSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_boxMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemy_Base_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UShootable_NoRegister, (int32)VTABLE_OFFSET(AEnemy_Base, IShootable), false },
			{ Z_Construct_UClass_UInitableEnemy_NoRegister, (int32)VTABLE_OFFSET(AEnemy_Base, IInitableEnemy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Base_Statics::ClassParams = {
		&AEnemy_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemy_Base_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy_Base, 831891500);
	template<> GEPPROJECT_API UClass* StaticClass<AEnemy_Base>()
	{
		return AEnemy_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy_Base(Z_Construct_UClass_AEnemy_Base, &AEnemy_Base::StaticClass, TEXT("/Script/GEPProject"), TEXT("AEnemy_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
