// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/GEPProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGEPProjectGameMode() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_AGEPProjectGameMode_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AGEPProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGEPProjectGameMode::execLoseCurrency)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_curToLose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoseCurrency(Z_Param_curToLose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectGameMode::execGainCurrency)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_curToGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GainCurrency(Z_Param_curToGain);
		P_NATIVE_END;
	}
	void AGEPProjectGameMode::StaticRegisterNativesAGEPProjectGameMode()
	{
		UClass* Class = AGEPProjectGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GainCurrency", &AGEPProjectGameMode::execGainCurrency },
			{ "LoseCurrency", &AGEPProjectGameMode::execLoseCurrency },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGEPProjectGameMode_GainCurrency_Statics
	{
		struct GEPProjectGameMode_eventGainCurrency_Parms
		{
			int32 curToGain;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_curToGain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGEPProjectGameMode_GainCurrency_Statics::NewProp_curToGain = { "curToGain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectGameMode_eventGainCurrency_Parms, curToGain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectGameMode_GainCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectGameMode_GainCurrency_Statics::NewProp_curToGain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectGameMode_GainCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectGameMode_GainCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectGameMode, nullptr, "GainCurrency", nullptr, nullptr, sizeof(GEPProjectGameMode_eventGainCurrency_Parms), Z_Construct_UFunction_AGEPProjectGameMode_GainCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_GainCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectGameMode_GainCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_GainCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectGameMode_GainCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectGameMode_GainCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectGameMode_LoseCurrency_Statics
	{
		struct GEPProjectGameMode_eventLoseCurrency_Parms
		{
			int32 curToLose;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_curToLose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGEPProjectGameMode_LoseCurrency_Statics::NewProp_curToLose = { "curToLose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectGameMode_eventLoseCurrency_Parms, curToLose), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectGameMode_LoseCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectGameMode_LoseCurrency_Statics::NewProp_curToLose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectGameMode_LoseCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectGameMode_LoseCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectGameMode, nullptr, "LoseCurrency", nullptr, nullptr, sizeof(GEPProjectGameMode_eventLoseCurrency_Parms), Z_Construct_UFunction_AGEPProjectGameMode_LoseCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_LoseCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectGameMode_LoseCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_LoseCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectGameMode_LoseCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectGameMode_LoseCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGEPProjectGameMode_NoRegister()
	{
		return AGEPProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGEPProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerControllers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_playerControllers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerControllers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGEPProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGEPProjectGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGEPProjectGameMode_GainCurrency, "GainCurrency" }, // 2657827471
		{ &Z_Construct_UFunction_AGEPProjectGameMode_LoseCurrency, "LoseCurrency" }, // 3678606881
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GEPProjectGameMode.h" },
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_playerControllers_MetaData[] = {
		{ "Category", "GEPProjectGameMode" },
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_playerControllers = { "playerControllers", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectGameMode, playerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_playerControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_playerControllers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_playerControllers_Inner = { "playerControllers", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGEPProjectGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_playerControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_playerControllers_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGEPProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGEPProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGEPProjectGameMode_Statics::ClassParams = {
		&AGEPProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGEPProjectGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectGameMode_Statics::PropPointers),
		0,
		0x008002ADu,
		METADATA_PARAMS(Z_Construct_UClass_AGEPProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGEPProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGEPProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGEPProjectGameMode, 3139146597);
	template<> GEPPROJECT_API UClass* StaticClass<AGEPProjectGameMode>()
	{
		return AGEPProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGEPProjectGameMode(Z_Construct_UClass_AGEPProjectGameMode, &AGEPProjectGameMode::StaticClass, TEXT("/Script/GEPProject"), TEXT("AGEPProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGEPProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
