// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Player/GEPPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGEPPlayerController() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_AGEPPlayerController_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AGEPPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UInitablePC_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGEPPlayerController::execGetAsPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGEPPlayerController**)Z_Param__Result=P_THIS->GetAsPC_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPPlayerController::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AGEPPlayerController_GetAsPC = FName(TEXT("GetAsPC"));
	AGEPPlayerController* AGEPPlayerController::GetAsPC()
	{
		GEPPlayerController_eventGetAsPC_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGEPPlayerController_GetAsPC),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGEPPlayerController_Init = FName(TEXT("Init"));
	void AGEPPlayerController::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPPlayerController_Init),NULL);
	}
	void AGEPPlayerController::StaticRegisterNativesAGEPPlayerController()
	{
		UClass* Class = AGEPPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAsPC", &AGEPPlayerController::execGetAsPC },
			{ "Init", &AGEPPlayerController::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGEPPlayerController_GetAsPC_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGEPPlayerController_GetAsPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPPlayerController_eventGetAsPC_Parms, ReturnValue), Z_Construct_UClass_AGEPPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPPlayerController_GetAsPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPPlayerController_GetAsPC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPPlayerController_GetAsPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPPlayerController_GetAsPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPPlayerController, nullptr, "GetAsPC", nullptr, nullptr, sizeof(GEPPlayerController_eventGetAsPC_Parms), Z_Construct_UFunction_AGEPPlayerController_GetAsPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPPlayerController_GetAsPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPPlayerController_GetAsPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPPlayerController_GetAsPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPPlayerController_GetAsPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPPlayerController_GetAsPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPPlayerController_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPPlayerController_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPPlayerController_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPPlayerController, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPPlayerController_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPPlayerController_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPPlayerController_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPPlayerController_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGEPPlayerController_NoRegister()
	{
		return AGEPPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGEPPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pawnToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_pawnToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGEPPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGEPPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGEPPlayerController_GetAsPC, "GetAsPC" }, // 2774112060
		{ &Z_Construct_UFunction_AGEPPlayerController_Init, "Init" }, // 1555184307
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/GEPPlayerController.h" },
		{ "ModuleRelativePath", "Player/GEPPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPPlayerController_Statics::NewProp_pawnToSpawn_MetaData[] = {
		{ "Category", "GEPPlayerController" },
		{ "ModuleRelativePath", "Player/GEPPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGEPPlayerController_Statics::NewProp_pawnToSpawn = { "pawnToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPPlayerController, pawnToSpawn), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGEPPlayerController_Statics::NewProp_pawnToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPPlayerController_Statics::NewProp_pawnToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGEPPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPPlayerController_Statics::NewProp_pawnToSpawn,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGEPPlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInitablePC_NoRegister, (int32)VTABLE_OFFSET(AGEPPlayerController, IInitablePC), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGEPPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGEPPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGEPPlayerController_Statics::ClassParams = {
		&AGEPPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGEPPlayerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGEPPlayerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AGEPPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGEPPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGEPPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGEPPlayerController, 591841571);
	template<> GEPPROJECT_API UClass* StaticClass<AGEPPlayerController>()
	{
		return AGEPPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGEPPlayerController(Z_Construct_UClass_AGEPPlayerController, &AGEPPlayerController::StaticClass, TEXT("/Script/GEPProject"), TEXT("AGEPPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGEPPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
