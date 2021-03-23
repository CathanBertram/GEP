// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Props/UpgradeStand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpgradeStand() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_AUpgradeStand_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AUpgradeStand();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UClass* Z_Construct_UClass_AGEPProjectCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUpgradeStand::execOnInteract)
	{
		P_GET_OBJECT(AGEPProjectCharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract_Implementation(Z_Param_character);
		P_NATIVE_END;
	}
	static FName NAME_AUpgradeStand_OnInteract = FName(TEXT("OnInteract"));
	void AUpgradeStand::OnInteract(AGEPProjectCharacter* character)
	{
		UpgradeStand_eventOnInteract_Parms Parms;
		Parms.character=character;
		ProcessEvent(FindFunctionChecked(NAME_AUpgradeStand_OnInteract),&Parms);
	}
	void AUpgradeStand::StaticRegisterNativesAUpgradeStand()
	{
		UClass* Class = AUpgradeStand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteract", &AUpgradeStand::execOnInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUpgradeStand_OnInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUpgradeStand_OnInteract_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UpgradeStand_eventOnInteract_Parms, character), Z_Construct_UClass_AGEPProjectCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUpgradeStand_OnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUpgradeStand_OnInteract_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUpgradeStand_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Props/UpgradeStand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUpgradeStand_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUpgradeStand, nullptr, "OnInteract", nullptr, nullptr, sizeof(UpgradeStand_eventOnInteract_Parms), Z_Construct_UFunction_AUpgradeStand_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUpgradeStand_OnInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUpgradeStand_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUpgradeStand_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUpgradeStand_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUpgradeStand_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUpgradeStand_NoRegister()
	{
		return AUpgradeStand::StaticClass();
	}
	struct Z_Construct_UClass_AUpgradeStand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wUpgradeMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_wUpgradeMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_machineMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_machineMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUpgradeStand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUpgradeStand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUpgradeStand_OnInteract, "OnInteract" }, // 2624165094
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpgradeStand_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Props/UpgradeStand.h" },
		{ "ModuleRelativePath", "Props/UpgradeStand.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpgradeStand_Statics::NewProp_wUpgradeMenu_MetaData[] = {
		{ "Category", "UpgradeStand" },
		{ "ModuleRelativePath", "Props/UpgradeStand.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUpgradeStand_Statics::NewProp_wUpgradeMenu = { "wUpgradeMenu", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUpgradeStand, wUpgradeMenu), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUpgradeStand_Statics::NewProp_wUpgradeMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUpgradeStand_Statics::NewProp_wUpgradeMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpgradeStand_Statics::NewProp_machineMesh_MetaData[] = {
		{ "Category", "UpgradeStand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Props/UpgradeStand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUpgradeStand_Statics::NewProp_machineMesh = { "machineMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUpgradeStand, machineMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUpgradeStand_Statics::NewProp_machineMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUpgradeStand_Statics::NewProp_machineMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUpgradeStand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUpgradeStand_Statics::NewProp_wUpgradeMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUpgradeStand_Statics::NewProp_machineMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AUpgradeStand_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AUpgradeStand, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUpgradeStand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUpgradeStand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUpgradeStand_Statics::ClassParams = {
		&AUpgradeStand::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUpgradeStand_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUpgradeStand_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUpgradeStand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUpgradeStand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUpgradeStand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUpgradeStand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUpgradeStand, 1821616069);
	template<> GEPPROJECT_API UClass* StaticClass<AUpgradeStand>()
	{
		return AUpgradeStand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUpgradeStand(Z_Construct_UClass_AUpgradeStand, &AUpgradeStand::StaticClass, TEXT("/Script/GEPProject"), TEXT("AUpgradeStand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUpgradeStand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
