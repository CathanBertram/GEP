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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UGetGEPGamemode_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGEPProjectGameMode::execUpdateCurrency)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newCur);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCurrency(Z_Param_newCur);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectGameMode::execGetCurrency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectGameMode::execGetGEPGamemode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGEPProjectGameMode**)Z_Param__Result=P_THIS->GetGEPGamemode_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AGEPProjectGameMode_GetGEPGamemode = FName(TEXT("GetGEPGamemode"));
	AGEPProjectGameMode* AGEPProjectGameMode::GetGEPGamemode()
	{
		GEPProjectGameMode_eventGetGEPGamemode_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectGameMode_GetGEPGamemode),&Parms);
		return Parms.ReturnValue;
	}
	void AGEPProjectGameMode::StaticRegisterNativesAGEPProjectGameMode()
	{
		UClass* Class = AGEPProjectGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrency", &AGEPProjectGameMode::execGetCurrency },
			{ "GetGEPGamemode", &AGEPProjectGameMode::execGetGEPGamemode },
			{ "UpdateCurrency", &AGEPProjectGameMode::execUpdateCurrency },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGEPProjectGameMode_GetCurrency_Statics
	{
		struct GEPProjectGameMode_eventGetCurrency_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGEPProjectGameMode_GetCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectGameMode_eventGetCurrency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectGameMode_GetCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectGameMode_GetCurrency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectGameMode_GetCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectGameMode_GetCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectGameMode, nullptr, "GetCurrency", nullptr, nullptr, sizeof(GEPProjectGameMode_eventGetCurrency_Parms), Z_Construct_UFunction_AGEPProjectGameMode_GetCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_GetCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectGameMode_GetCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_GetCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectGameMode_GetCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectGameMode_GetCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectGameMode_GetGEPGamemode_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGEPProjectGameMode_GetGEPGamemode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectGameMode_eventGetGEPGamemode_Parms, ReturnValue), Z_Construct_UClass_AGEPProjectGameMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectGameMode_GetGEPGamemode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectGameMode_GetGEPGamemode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectGameMode_GetGEPGamemode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectGameMode_GetGEPGamemode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectGameMode, nullptr, "GetGEPGamemode", nullptr, nullptr, sizeof(GEPProjectGameMode_eventGetGEPGamemode_Parms), Z_Construct_UFunction_AGEPProjectGameMode_GetGEPGamemode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_GetGEPGamemode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectGameMode_GetGEPGamemode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_GetGEPGamemode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectGameMode_GetGEPGamemode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectGameMode_GetGEPGamemode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectGameMode_UpdateCurrency_Statics
	{
		struct GEPProjectGameMode_eventUpdateCurrency_Parms
		{
			int32 newCur;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_newCur;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGEPProjectGameMode_UpdateCurrency_Statics::NewProp_newCur = { "newCur", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectGameMode_eventUpdateCurrency_Parms, newCur), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectGameMode_UpdateCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectGameMode_UpdateCurrency_Statics::NewProp_newCur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectGameMode_UpdateCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectGameMode_UpdateCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectGameMode, nullptr, "UpdateCurrency", nullptr, nullptr, sizeof(GEPProjectGameMode_eventUpdateCurrency_Parms), Z_Construct_UFunction_AGEPProjectGameMode_UpdateCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_UpdateCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectGameMode_UpdateCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_UpdateCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectGameMode_UpdateCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectGameMode_UpdateCurrency_Statics::FuncParams);
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mainUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mainUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGEPProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGEPProjectGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGEPProjectGameMode_GetCurrency, "GetCurrency" }, // 1988657405
		{ &Z_Construct_UFunction_AGEPProjectGameMode_GetGEPGamemode, "GetGEPGamemode" }, // 1206584923
		{ &Z_Construct_UFunction_AGEPProjectGameMode_UpdateCurrency, "UpdateCurrency" }, // 1854567896
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_mainUI_MetaData[] = {
		{ "Category", "Classes" },
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_mainUI = { "mainUI", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectGameMode, mainUI), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_mainUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_mainUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGEPProjectGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_playerControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_playerControllers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_mainUI,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGEPProjectGameMode_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGetGEPGamemode_NoRegister, (int32)VTABLE_OFFSET(AGEPProjectGameMode, IGetGEPGamemode), false },
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
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectGameMode_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(AGEPProjectGameMode, 1853016824);
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
