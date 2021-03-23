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
	GEPPROJECT_API UEnum* Z_Construct_UEnum_GEPProject_EUpgradeTypes();
	GEPPROJECT_API UClass* Z_Construct_UClass_UUpgradeSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UGetGEPGamemode_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGEPProjectGameMode::execLoadGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectGameMode::execSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectGameMode::execUpdateEnergyPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newEnergyPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEnergyPercent(Z_Param_newEnergyPercent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectGameMode::execUpdateHealthPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newHealthPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHealthPercent(Z_Param_newHealthPercent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectGameMode::execUpdateCurrency)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newCur);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCurrency(Z_Param_newCur);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectGameMode::execGetUpgradeCost)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_upgradeType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetUpgradeCost(EUpgradeTypes(Z_Param_upgradeType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectGameMode::execGetEnergyPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnergyPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectGameMode::execGetHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
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
			{ "GetEnergyPercent", &AGEPProjectGameMode::execGetEnergyPercent },
			{ "GetGEPGamemode", &AGEPProjectGameMode::execGetGEPGamemode },
			{ "GetHealthPercent", &AGEPProjectGameMode::execGetHealthPercent },
			{ "GetUpgradeCost", &AGEPProjectGameMode::execGetUpgradeCost },
			{ "LoadGame", &AGEPProjectGameMode::execLoadGame },
			{ "SaveGame", &AGEPProjectGameMode::execSaveGame },
			{ "UpdateCurrency", &AGEPProjectGameMode::execUpdateCurrency },
			{ "UpdateEnergyPercent", &AGEPProjectGameMode::execUpdateEnergyPercent },
			{ "UpdateHealthPercent", &AGEPProjectGameMode::execUpdateHealthPercent },
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
	struct Z_Construct_UFunction_AGEPProjectGameMode_GetEnergyPercent_Statics
	{
		struct GEPProjectGameMode_eventGetEnergyPercent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGEPProjectGameMode_GetEnergyPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectGameMode_eventGetEnergyPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectGameMode_GetEnergyPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectGameMode_GetEnergyPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectGameMode_GetEnergyPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectGameMode_GetEnergyPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectGameMode, nullptr, "GetEnergyPercent", nullptr, nullptr, sizeof(GEPProjectGameMode_eventGetEnergyPercent_Parms), Z_Construct_UFunction_AGEPProjectGameMode_GetEnergyPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_GetEnergyPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectGameMode_GetEnergyPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_GetEnergyPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectGameMode_GetEnergyPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectGameMode_GetEnergyPercent_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AGEPProjectGameMode_GetHealthPercent_Statics
	{
		struct GEPProjectGameMode_eventGetHealthPercent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGEPProjectGameMode_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectGameMode_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectGameMode_GetHealthPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectGameMode_GetHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectGameMode_GetHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectGameMode_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectGameMode, nullptr, "GetHealthPercent", nullptr, nullptr, sizeof(GEPProjectGameMode_eventGetHealthPercent_Parms), Z_Construct_UFunction_AGEPProjectGameMode_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_GetHealthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectGameMode_GetHealthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_GetHealthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectGameMode_GetHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectGameMode_GetHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectGameMode_GetUpgradeCost_Statics
	{
		struct GEPProjectGameMode_eventGetUpgradeCost_Parms
		{
			TEnumAsByte<EUpgradeTypes> upgradeType;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_upgradeType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGEPProjectGameMode_GetUpgradeCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectGameMode_eventGetUpgradeCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGEPProjectGameMode_GetUpgradeCost_Statics::NewProp_upgradeType = { "upgradeType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectGameMode_eventGetUpgradeCost_Parms, upgradeType), Z_Construct_UEnum_GEPProject_EUpgradeTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectGameMode_GetUpgradeCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectGameMode_GetUpgradeCost_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectGameMode_GetUpgradeCost_Statics::NewProp_upgradeType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectGameMode_GetUpgradeCost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectGameMode_GetUpgradeCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectGameMode, nullptr, "GetUpgradeCost", nullptr, nullptr, sizeof(GEPProjectGameMode_eventGetUpgradeCost_Parms), Z_Construct_UFunction_AGEPProjectGameMode_GetUpgradeCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_GetUpgradeCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectGameMode_GetUpgradeCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_GetUpgradeCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectGameMode_GetUpgradeCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectGameMode_GetUpgradeCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectGameMode_LoadGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectGameMode_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectGameMode_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectGameMode, nullptr, "LoadGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectGameMode_LoadGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_LoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectGameMode_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectGameMode_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectGameMode_SaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectGameMode_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectGameMode_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectGameMode, nullptr, "SaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectGameMode_SaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectGameMode_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectGameMode_SaveGame_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AGEPProjectGameMode_UpdateEnergyPercent_Statics
	{
		struct GEPProjectGameMode_eventUpdateEnergyPercent_Parms
		{
			float newEnergyPercent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newEnergyPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGEPProjectGameMode_UpdateEnergyPercent_Statics::NewProp_newEnergyPercent = { "newEnergyPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectGameMode_eventUpdateEnergyPercent_Parms, newEnergyPercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectGameMode_UpdateEnergyPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectGameMode_UpdateEnergyPercent_Statics::NewProp_newEnergyPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectGameMode_UpdateEnergyPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectGameMode_UpdateEnergyPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectGameMode, nullptr, "UpdateEnergyPercent", nullptr, nullptr, sizeof(GEPProjectGameMode_eventUpdateEnergyPercent_Parms), Z_Construct_UFunction_AGEPProjectGameMode_UpdateEnergyPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_UpdateEnergyPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectGameMode_UpdateEnergyPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_UpdateEnergyPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectGameMode_UpdateEnergyPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectGameMode_UpdateEnergyPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectGameMode_UpdateHealthPercent_Statics
	{
		struct GEPProjectGameMode_eventUpdateHealthPercent_Parms
		{
			float newHealthPercent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newHealthPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGEPProjectGameMode_UpdateHealthPercent_Statics::NewProp_newHealthPercent = { "newHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectGameMode_eventUpdateHealthPercent_Parms, newHealthPercent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectGameMode_UpdateHealthPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectGameMode_UpdateHealthPercent_Statics::NewProp_newHealthPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectGameMode_UpdateHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectGameMode_UpdateHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectGameMode, nullptr, "UpdateHealthPercent", nullptr, nullptr, sizeof(GEPProjectGameMode_eventUpdateHealthPercent_Parms), Z_Construct_UFunction_AGEPProjectGameMode_UpdateHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_UpdateHealthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectGameMode_UpdateHealthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectGameMode_UpdateHealthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectGameMode_UpdateHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectGameMode_UpdateHealthPercent_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_upgradeSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_upgradeSystem;
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
		{ &Z_Construct_UFunction_AGEPProjectGameMode_GetEnergyPercent, "GetEnergyPercent" }, // 549832497
		{ &Z_Construct_UFunction_AGEPProjectGameMode_GetGEPGamemode, "GetGEPGamemode" }, // 1206584923
		{ &Z_Construct_UFunction_AGEPProjectGameMode_GetHealthPercent, "GetHealthPercent" }, // 2967859332
		{ &Z_Construct_UFunction_AGEPProjectGameMode_GetUpgradeCost, "GetUpgradeCost" }, // 3734256529
		{ &Z_Construct_UFunction_AGEPProjectGameMode_LoadGame, "LoadGame" }, // 2795752774
		{ &Z_Construct_UFunction_AGEPProjectGameMode_SaveGame, "SaveGame" }, // 2254868684
		{ &Z_Construct_UFunction_AGEPProjectGameMode_UpdateCurrency, "UpdateCurrency" }, // 1854567896
		{ &Z_Construct_UFunction_AGEPProjectGameMode_UpdateEnergyPercent, "UpdateEnergyPercent" }, // 1261758318
		{ &Z_Construct_UFunction_AGEPProjectGameMode_UpdateHealthPercent, "UpdateHealthPercent" }, // 2967461078
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_upgradeSystem_MetaData[] = {
		{ "Category", "GEPProjectGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GEPProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_upgradeSystem = { "upgradeSystem", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectGameMode, upgradeSystem), Z_Construct_UClass_UUpgradeSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_upgradeSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_upgradeSystem_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectGameMode_Statics::NewProp_upgradeSystem,
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
	IMPLEMENT_CLASS(AGEPProjectGameMode, 3476683440);
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
