// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/EventSystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventSystem() {}
// Cross Module References
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature();
	GEPPROJECT_API UClass* Z_Construct_UClass_UGEPSaveGame_NoRegister();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnTrySave__DelegateSignature();
	GEPPROJECT_API UClass* Z_Construct_UClass_UEventSystem_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UEventSystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnUnlockWeapon_Parms
		{
			TSubclassOf<AActor>  weaponToUnlock;
			int32 cost;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_cost;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_weaponToUnlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::NewProp_cost = { "cost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnUnlockWeapon_Parms, cost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::NewProp_weaponToUnlock = { "weaponToUnlock", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnUnlockWeapon_Parms, weaponToUnlock), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::NewProp_cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::NewProp_weaponToUnlock,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnUnlockWeapon__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnUnlockWeapon_Parms), Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnUnlockWeapon__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnLoad_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::NewProp_saveInstance = { "saveInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnLoad_Parms, saveInstance), Z_Construct_UClass_UGEPSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::NewProp_saveInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnLoad__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnLoad_Parms), Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnLoad__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnSave_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::NewProp_saveInstance = { "saveInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnSave_Parms, saveInstance), Z_Construct_UClass_UGEPSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::NewProp_saveInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnSave__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnSave_Parms), Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnSave__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnCurrencyUpdate_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::NewProp_newCur = { "newCur", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnCurrencyUpdate_Parms, newCur), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::NewProp_newCur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnCurrencyUpdate__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnCurrencyUpdate_Parms), Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnCurrencyUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnCurrencyLoss_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::NewProp_curToLose = { "curToLose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnCurrencyLoss_Parms, curToLose), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::NewProp_curToLose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnCurrencyLoss__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnCurrencyLoss_Parms), Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnCurrencyGain_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::NewProp_curToGain = { "curToGain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnCurrencyGain_Parms, curToGain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::NewProp_curToGain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnCurrencyGain__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnCurrencyGain_Parms), Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GEPProject_OnTrySave__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnTrySave__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnTrySave__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnTrySave__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnTrySave__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnTrySave__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnTrySave__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnTrySave__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UEventSystem::StaticRegisterNativesUEventSystem()
	{
	}
	UClass* Z_Construct_UClass_UEventSystem_NoRegister()
	{
		return UEventSystem::StaticClass();
	}
	struct Z_Construct_UClass_UEventSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventSystem.h" },
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventSystem_Statics::ClassParams = {
		&UEventSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventSystem, 119540120);
	template<> GEPPROJECT_API UClass* StaticClass<UEventSystem>()
	{
		return UEventSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventSystem(Z_Construct_UClass_UEventSystem, &UEventSystem::StaticClass, TEXT("/Script/GEPProject"), TEXT("UEventSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
