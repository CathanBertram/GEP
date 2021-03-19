// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Props/PurchaseableWeaponStand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePurchaseableWeaponStand() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_APurchaseableWeaponStand_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_APurchaseableWeaponStand();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UClass* Z_Construct_UClass_UGEPSaveGame_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AGEPProjectCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APurchaseableWeaponStand::execCurrencyUpdate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_newCur);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CurrencyUpdate(Z_Param_newCur);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APurchaseableWeaponStand::execLoad)
	{
		P_GET_OBJECT(UGEPSaveGame,Z_Param_saveInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Load(Z_Param_saveInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APurchaseableWeaponStand::execOnInteract)
	{
		P_GET_OBJECT(AGEPProjectCharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract_Implementation(Z_Param_character);
		P_NATIVE_END;
	}
	static FName NAME_APurchaseableWeaponStand_OnInteract = FName(TEXT("OnInteract"));
	void APurchaseableWeaponStand::OnInteract(AGEPProjectCharacter* character)
	{
		PurchaseableWeaponStand_eventOnInteract_Parms Parms;
		Parms.character=character;
		ProcessEvent(FindFunctionChecked(NAME_APurchaseableWeaponStand_OnInteract),&Parms);
	}
	void APurchaseableWeaponStand::StaticRegisterNativesAPurchaseableWeaponStand()
	{
		UClass* Class = APurchaseableWeaponStand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CurrencyUpdate", &APurchaseableWeaponStand::execCurrencyUpdate },
			{ "Load", &APurchaseableWeaponStand::execLoad },
			{ "OnInteract", &APurchaseableWeaponStand::execOnInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APurchaseableWeaponStand_CurrencyUpdate_Statics
	{
		struct PurchaseableWeaponStand_eventCurrencyUpdate_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APurchaseableWeaponStand_CurrencyUpdate_Statics::NewProp_newCur = { "newCur", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PurchaseableWeaponStand_eventCurrencyUpdate_Parms, newCur), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APurchaseableWeaponStand_CurrencyUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APurchaseableWeaponStand_CurrencyUpdate_Statics::NewProp_newCur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APurchaseableWeaponStand_CurrencyUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Props/PurchaseableWeaponStand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APurchaseableWeaponStand_CurrencyUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APurchaseableWeaponStand, nullptr, "CurrencyUpdate", nullptr, nullptr, sizeof(PurchaseableWeaponStand_eventCurrencyUpdate_Parms), Z_Construct_UFunction_APurchaseableWeaponStand_CurrencyUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APurchaseableWeaponStand_CurrencyUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APurchaseableWeaponStand_CurrencyUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APurchaseableWeaponStand_CurrencyUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APurchaseableWeaponStand_CurrencyUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APurchaseableWeaponStand_CurrencyUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APurchaseableWeaponStand_Load_Statics
	{
		struct PurchaseableWeaponStand_eventLoad_Parms
		{
			UGEPSaveGame* saveInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_saveInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APurchaseableWeaponStand_Load_Statics::NewProp_saveInstance = { "saveInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PurchaseableWeaponStand_eventLoad_Parms, saveInstance), Z_Construct_UClass_UGEPSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APurchaseableWeaponStand_Load_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APurchaseableWeaponStand_Load_Statics::NewProp_saveInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APurchaseableWeaponStand_Load_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Props/PurchaseableWeaponStand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APurchaseableWeaponStand_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APurchaseableWeaponStand, nullptr, "Load", nullptr, nullptr, sizeof(PurchaseableWeaponStand_eventLoad_Parms), Z_Construct_UFunction_APurchaseableWeaponStand_Load_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APurchaseableWeaponStand_Load_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APurchaseableWeaponStand_Load_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APurchaseableWeaponStand_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APurchaseableWeaponStand_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APurchaseableWeaponStand_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APurchaseableWeaponStand_OnInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APurchaseableWeaponStand_OnInteract_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PurchaseableWeaponStand_eventOnInteract_Parms, character), Z_Construct_UClass_AGEPProjectCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APurchaseableWeaponStand_OnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APurchaseableWeaponStand_OnInteract_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APurchaseableWeaponStand_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Props/PurchaseableWeaponStand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APurchaseableWeaponStand_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APurchaseableWeaponStand, nullptr, "OnInteract", nullptr, nullptr, sizeof(PurchaseableWeaponStand_eventOnInteract_Parms), Z_Construct_UFunction_APurchaseableWeaponStand_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APurchaseableWeaponStand_OnInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APurchaseableWeaponStand_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APurchaseableWeaponStand_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APurchaseableWeaponStand_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APurchaseableWeaponStand_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APurchaseableWeaponStand_NoRegister()
	{
		return APurchaseableWeaponStand::StaticClass();
	}
	struct Z_Construct_UClass_APurchaseableWeaponStand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unlocked_MetaData[];
#endif
		static void NewProp_unlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_unlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_cost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spotLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spotLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_textSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weaponSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponStand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weaponStand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponToUnlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_weaponToUnlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APurchaseableWeaponStand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APurchaseableWeaponStand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APurchaseableWeaponStand_CurrencyUpdate, "CurrencyUpdate" }, // 2844648895
		{ &Z_Construct_UFunction_APurchaseableWeaponStand_Load, "Load" }, // 1896741917
		{ &Z_Construct_UFunction_APurchaseableWeaponStand_OnInteract, "OnInteract" }, // 1551293607
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APurchaseableWeaponStand_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Props/PurchaseableWeaponStand.h" },
		{ "ModuleRelativePath", "Props/PurchaseableWeaponStand.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_unlocked_MetaData[] = {
		{ "Category", "PurchaseableWeaponStand" },
		{ "ModuleRelativePath", "Props/PurchaseableWeaponStand.h" },
	};
#endif
	void Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_unlocked_SetBit(void* Obj)
	{
		((APurchaseableWeaponStand*)Obj)->unlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_unlocked = { "unlocked", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APurchaseableWeaponStand), &Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_unlocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_unlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_unlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_boxComp_MetaData[] = {
		{ "Category", "PurchaseableWeaponStand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Props/PurchaseableWeaponStand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APurchaseableWeaponStand, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_boxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_boxComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_cost_MetaData[] = {
		{ "Category", "PurchaseableWeaponStand" },
		{ "ModuleRelativePath", "Props/PurchaseableWeaponStand.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_cost = { "cost", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APurchaseableWeaponStand, cost), METADATA_PARAMS(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_cost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_spotLight_MetaData[] = {
		{ "Category", "PurchaseableWeaponStand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Props/PurchaseableWeaponStand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_spotLight = { "spotLight", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APurchaseableWeaponStand, spotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_spotLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_spotLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_text_MetaData[] = {
		{ "Category", "PurchaseableWeaponStand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Props/PurchaseableWeaponStand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APurchaseableWeaponStand, text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_textSocket_MetaData[] = {
		{ "Category", "PurchaseableWeaponStand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Props/PurchaseableWeaponStand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_textSocket = { "textSocket", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APurchaseableWeaponStand, textSocket), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_textSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_textSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weapon_MetaData[] = {
		{ "Category", "PurchaseableWeaponStand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Props/PurchaseableWeaponStand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weapon = { "weapon", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APurchaseableWeaponStand, weapon), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weaponSocket_MetaData[] = {
		{ "Category", "PurchaseableWeaponStand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Props/PurchaseableWeaponStand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weaponSocket = { "weaponSocket", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APurchaseableWeaponStand, weaponSocket), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weaponSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weaponSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weaponStand_MetaData[] = {
		{ "Category", "PurchaseableWeaponStand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Props/PurchaseableWeaponStand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weaponStand = { "weaponStand", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APurchaseableWeaponStand, weaponStand), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weaponStand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weaponStand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weaponToUnlock_MetaData[] = {
		{ "Category", "PurchaseableWeaponStand" },
		{ "ModuleRelativePath", "Props/PurchaseableWeaponStand.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weaponToUnlock = { "weaponToUnlock", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APurchaseableWeaponStand, weaponToUnlock), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weaponToUnlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weaponToUnlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APurchaseableWeaponStand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_unlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_boxComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_spotLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_textSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weaponSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weaponStand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APurchaseableWeaponStand_Statics::NewProp_weaponToUnlock,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APurchaseableWeaponStand_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(APurchaseableWeaponStand, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APurchaseableWeaponStand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APurchaseableWeaponStand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APurchaseableWeaponStand_Statics::ClassParams = {
		&APurchaseableWeaponStand::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APurchaseableWeaponStand_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APurchaseableWeaponStand_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APurchaseableWeaponStand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APurchaseableWeaponStand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APurchaseableWeaponStand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APurchaseableWeaponStand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APurchaseableWeaponStand, 3308325267);
	template<> GEPPROJECT_API UClass* StaticClass<APurchaseableWeaponStand>()
	{
		return APurchaseableWeaponStand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APurchaseableWeaponStand(Z_Construct_UClass_APurchaseableWeaponStand, &APurchaseableWeaponStand::StaticClass, TEXT("/Script/GEPProject"), TEXT("APurchaseableWeaponStand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APurchaseableWeaponStand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
