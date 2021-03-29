// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Interfaces/InitableEnemySpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInitableEnemySpawner() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UInitableEnemySpawner_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UInitableEnemySpawner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IInitableEnemySpawner::execGetEnemySpawner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AEnemySpawner**)Z_Param__Result=P_THIS->GetEnemySpawner_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInitableEnemySpawner::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation();
		P_NATIVE_END;
	}
	AEnemySpawner* IInitableEnemySpawner::GetEnemySpawner()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEnemySpawner instead.");
		InitableEnemySpawner_eventGetEnemySpawner_Parms Parms;
		return Parms.ReturnValue;
	}
	void IInitableEnemySpawner::Init()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Init instead.");
	}
	void UInitableEnemySpawner::StaticRegisterNativesUInitableEnemySpawner()
	{
		UClass* Class = UInitableEnemySpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnemySpawner", &IInitableEnemySpawner::execGetEnemySpawner },
			{ "Init", &IInitableEnemySpawner::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInitableEnemySpawner_GetEnemySpawner_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitableEnemySpawner_GetEnemySpawner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InitableEnemySpawner_eventGetEnemySpawner_Parms, ReturnValue), Z_Construct_UClass_AEnemySpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInitableEnemySpawner_GetEnemySpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitableEnemySpawner_GetEnemySpawner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInitableEnemySpawner_GetEnemySpawner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/InitableEnemySpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitableEnemySpawner_GetEnemySpawner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitableEnemySpawner, nullptr, "GetEnemySpawner", nullptr, nullptr, sizeof(InitableEnemySpawner_eventGetEnemySpawner_Parms), Z_Construct_UFunction_UInitableEnemySpawner_GetEnemySpawner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitableEnemySpawner_GetEnemySpawner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInitableEnemySpawner_GetEnemySpawner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitableEnemySpawner_GetEnemySpawner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInitableEnemySpawner_GetEnemySpawner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInitableEnemySpawner_GetEnemySpawner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInitableEnemySpawner_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInitableEnemySpawner_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/InitableEnemySpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitableEnemySpawner_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitableEnemySpawner, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInitableEnemySpawner_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitableEnemySpawner_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInitableEnemySpawner_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInitableEnemySpawner_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInitableEnemySpawner_NoRegister()
	{
		return UInitableEnemySpawner::StaticClass();
	}
	struct Z_Construct_UClass_UInitableEnemySpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInitableEnemySpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInitableEnemySpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInitableEnemySpawner_GetEnemySpawner, "GetEnemySpawner" }, // 2232940481
		{ &Z_Construct_UFunction_UInitableEnemySpawner_Init, "Init" }, // 1115433614
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInitableEnemySpawner_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/InitableEnemySpawner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInitableEnemySpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInitableEnemySpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInitableEnemySpawner_Statics::ClassParams = {
		&UInitableEnemySpawner::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInitableEnemySpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInitableEnemySpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInitableEnemySpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInitableEnemySpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInitableEnemySpawner, 4486039);
	template<> GEPPROJECT_API UClass* StaticClass<UInitableEnemySpawner>()
	{
		return UInitableEnemySpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInitableEnemySpawner(Z_Construct_UClass_UInitableEnemySpawner, &UInitableEnemySpawner::StaticClass, TEXT("/Script/GEPProject"), TEXT("UInitableEnemySpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInitableEnemySpawner);
	static FName NAME_UInitableEnemySpawner_GetEnemySpawner = FName(TEXT("GetEnemySpawner"));
	AEnemySpawner* IInitableEnemySpawner::Execute_GetEnemySpawner(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInitableEnemySpawner::StaticClass()));
		InitableEnemySpawner_eventGetEnemySpawner_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInitableEnemySpawner_GetEnemySpawner);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInitableEnemySpawner*)(O->GetNativeInterfaceAddress(UInitableEnemySpawner::StaticClass())))
		{
			Parms.ReturnValue = I->GetEnemySpawner_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UInitableEnemySpawner_Init = FName(TEXT("Init"));
	void IInitableEnemySpawner::Execute_Init(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInitableEnemySpawner::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInitableEnemySpawner_Init);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInitableEnemySpawner*)(O->GetNativeInterfaceAddress(UInitableEnemySpawner::StaticClass())))
		{
			I->Init_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
