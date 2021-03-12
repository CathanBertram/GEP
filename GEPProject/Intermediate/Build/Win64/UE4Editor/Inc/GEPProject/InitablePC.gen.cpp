// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Interfaces/InitablePC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInitablePC() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UInitablePC_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UInitablePC();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UClass* Z_Construct_UClass_AGEPPlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IInitablePC::execGetAsPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGEPPlayerController**)Z_Param__Result=P_THIS->GetAsPC_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInitablePC::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation();
		P_NATIVE_END;
	}
	AGEPPlayerController* IInitablePC::GetAsPC()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAsPC instead.");
		InitablePC_eventGetAsPC_Parms Parms;
		return Parms.ReturnValue;
	}
	void IInitablePC::Init()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Init instead.");
	}
	void UInitablePC::StaticRegisterNativesUInitablePC()
	{
		UClass* Class = UInitablePC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAsPC", &IInitablePC::execGetAsPC },
			{ "Init", &IInitablePC::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInitablePC_GetAsPC_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitablePC_GetAsPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InitablePC_eventGetAsPC_Parms, ReturnValue), Z_Construct_UClass_AGEPPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInitablePC_GetAsPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitablePC_GetAsPC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInitablePC_GetAsPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/InitablePC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitablePC_GetAsPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitablePC, nullptr, "GetAsPC", nullptr, nullptr, sizeof(InitablePC_eventGetAsPC_Parms), Z_Construct_UFunction_UInitablePC_GetAsPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitablePC_GetAsPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInitablePC_GetAsPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitablePC_GetAsPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInitablePC_GetAsPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInitablePC_GetAsPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInitablePC_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInitablePC_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/InitablePC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitablePC_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitablePC, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInitablePC_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitablePC_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInitablePC_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInitablePC_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInitablePC_NoRegister()
	{
		return UInitablePC::StaticClass();
	}
	struct Z_Construct_UClass_UInitablePC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInitablePC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInitablePC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInitablePC_GetAsPC, "GetAsPC" }, // 3500895394
		{ &Z_Construct_UFunction_UInitablePC_Init, "Init" }, // 1038730530
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInitablePC_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/InitablePC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInitablePC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInitablePC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInitablePC_Statics::ClassParams = {
		&UInitablePC::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInitablePC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInitablePC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInitablePC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInitablePC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInitablePC, 687986640);
	template<> GEPPROJECT_API UClass* StaticClass<UInitablePC>()
	{
		return UInitablePC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInitablePC(Z_Construct_UClass_UInitablePC, &UInitablePC::StaticClass, TEXT("/Script/GEPProject"), TEXT("UInitablePC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInitablePC);
	static FName NAME_UInitablePC_GetAsPC = FName(TEXT("GetAsPC"));
	AGEPPlayerController* IInitablePC::Execute_GetAsPC(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInitablePC::StaticClass()));
		InitablePC_eventGetAsPC_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInitablePC_GetAsPC);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInitablePC*)(O->GetNativeInterfaceAddress(UInitablePC::StaticClass())))
		{
			Parms.ReturnValue = I->GetAsPC_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UInitablePC_Init = FName(TEXT("Init"));
	void IInitablePC::Execute_Init(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInitablePC::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInitablePC_Init);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInitablePC*)(O->GetNativeInterfaceAddress(UInitablePC::StaticClass())))
		{
			I->Init_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
