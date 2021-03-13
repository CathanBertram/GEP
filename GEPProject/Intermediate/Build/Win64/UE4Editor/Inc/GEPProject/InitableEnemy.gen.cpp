// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Interfaces/InitableEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInitableEnemy() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UInitableEnemy_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UInitableEnemy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UClass* Z_Construct_UClass_AEnemy_Base_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IInitableEnemy::execGetEnemyBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AEnemy_Base**)Z_Param__Result=P_THIS->GetEnemyBase_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInitableEnemy::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation();
		P_NATIVE_END;
	}
	AEnemy_Base* IInitableEnemy::GetEnemyBase()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEnemyBase instead.");
		InitableEnemy_eventGetEnemyBase_Parms Parms;
		return Parms.ReturnValue;
	}
	void IInitableEnemy::Init()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Init instead.");
	}
	void UInitableEnemy::StaticRegisterNativesUInitableEnemy()
	{
		UClass* Class = UInitableEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnemyBase", &IInitableEnemy::execGetEnemyBase },
			{ "Init", &IInitableEnemy::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInitableEnemy_GetEnemyBase_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitableEnemy_GetEnemyBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InitableEnemy_eventGetEnemyBase_Parms, ReturnValue), Z_Construct_UClass_AEnemy_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInitableEnemy_GetEnemyBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitableEnemy_GetEnemyBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInitableEnemy_GetEnemyBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/InitableEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitableEnemy_GetEnemyBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitableEnemy, nullptr, "GetEnemyBase", nullptr, nullptr, sizeof(InitableEnemy_eventGetEnemyBase_Parms), Z_Construct_UFunction_UInitableEnemy_GetEnemyBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitableEnemy_GetEnemyBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInitableEnemy_GetEnemyBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitableEnemy_GetEnemyBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInitableEnemy_GetEnemyBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInitableEnemy_GetEnemyBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInitableEnemy_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInitableEnemy_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/InitableEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitableEnemy_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitableEnemy, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInitableEnemy_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitableEnemy_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInitableEnemy_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInitableEnemy_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInitableEnemy_NoRegister()
	{
		return UInitableEnemy::StaticClass();
	}
	struct Z_Construct_UClass_UInitableEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInitableEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInitableEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInitableEnemy_GetEnemyBase, "GetEnemyBase" }, // 2915451512
		{ &Z_Construct_UFunction_UInitableEnemy_Init, "Init" }, // 1079107918
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInitableEnemy_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/InitableEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInitableEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInitableEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInitableEnemy_Statics::ClassParams = {
		&UInitableEnemy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInitableEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInitableEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInitableEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInitableEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInitableEnemy, 2784737496);
	template<> GEPPROJECT_API UClass* StaticClass<UInitableEnemy>()
	{
		return UInitableEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInitableEnemy(Z_Construct_UClass_UInitableEnemy, &UInitableEnemy::StaticClass, TEXT("/Script/GEPProject"), TEXT("UInitableEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInitableEnemy);
	static FName NAME_UInitableEnemy_GetEnemyBase = FName(TEXT("GetEnemyBase"));
	AEnemy_Base* IInitableEnemy::Execute_GetEnemyBase(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInitableEnemy::StaticClass()));
		InitableEnemy_eventGetEnemyBase_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInitableEnemy_GetEnemyBase);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInitableEnemy*)(O->GetNativeInterfaceAddress(UInitableEnemy::StaticClass())))
		{
			Parms.ReturnValue = I->GetEnemyBase_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UInitableEnemy_Init = FName(TEXT("Init"));
	void IInitableEnemy::Execute_Init(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInitableEnemy::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInitableEnemy_Init);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInitableEnemy*)(O->GetNativeInterfaceAddress(UInitableEnemy::StaticClass())))
		{
			I->Init_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
