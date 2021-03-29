// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Interfaces/GetGEPGamemode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetGEPGamemode() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UGetGEPGamemode_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UGetGEPGamemode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UClass* Z_Construct_UClass_AGEPProjectGameMode_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IGetGEPGamemode::execGetGEPGamemode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGEPProjectGameMode**)Z_Param__Result=P_THIS->GetGEPGamemode_Implementation();
		P_NATIVE_END;
	}
	AGEPProjectGameMode* IGetGEPGamemode::GetGEPGamemode()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGEPGamemode instead.");
		GetGEPGamemode_eventGetGEPGamemode_Parms Parms;
		return Parms.ReturnValue;
	}
	void UGetGEPGamemode::StaticRegisterNativesUGetGEPGamemode()
	{
		UClass* Class = UGetGEPGamemode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGEPGamemode", &IGetGEPGamemode::execGetGEPGamemode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetGEPGamemode_GetGEPGamemode_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetGEPGamemode_GetGEPGamemode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetGEPGamemode_eventGetGEPGamemode_Parms, ReturnValue), Z_Construct_UClass_AGEPProjectGameMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetGEPGamemode_GetGEPGamemode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetGEPGamemode_GetGEPGamemode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetGEPGamemode_GetGEPGamemode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/GetGEPGamemode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetGEPGamemode_GetGEPGamemode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetGEPGamemode, nullptr, "GetGEPGamemode", nullptr, nullptr, sizeof(GetGEPGamemode_eventGetGEPGamemode_Parms), Z_Construct_UFunction_UGetGEPGamemode_GetGEPGamemode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetGEPGamemode_GetGEPGamemode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetGEPGamemode_GetGEPGamemode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetGEPGamemode_GetGEPGamemode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetGEPGamemode_GetGEPGamemode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetGEPGamemode_GetGEPGamemode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetGEPGamemode_NoRegister()
	{
		return UGetGEPGamemode::StaticClass();
	}
	struct Z_Construct_UClass_UGetGEPGamemode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetGEPGamemode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetGEPGamemode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetGEPGamemode_GetGEPGamemode, "GetGEPGamemode" }, // 1259654393
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetGEPGamemode_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/GetGEPGamemode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetGEPGamemode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGetGEPGamemode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetGEPGamemode_Statics::ClassParams = {
		&UGetGEPGamemode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGetGEPGamemode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetGEPGamemode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetGEPGamemode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetGEPGamemode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetGEPGamemode, 2549946205);
	template<> GEPPROJECT_API UClass* StaticClass<UGetGEPGamemode>()
	{
		return UGetGEPGamemode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetGEPGamemode(Z_Construct_UClass_UGetGEPGamemode, &UGetGEPGamemode::StaticClass, TEXT("/Script/GEPProject"), TEXT("UGetGEPGamemode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetGEPGamemode);
	static FName NAME_UGetGEPGamemode_GetGEPGamemode = FName(TEXT("GetGEPGamemode"));
	AGEPProjectGameMode* IGetGEPGamemode::Execute_GetGEPGamemode(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGetGEPGamemode::StaticClass()));
		GetGEPGamemode_eventGetGEPGamemode_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGetGEPGamemode_GetGEPGamemode);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGetGEPGamemode*)(O->GetNativeInterfaceAddress(UGetGEPGamemode::StaticClass())))
		{
			Parms.ReturnValue = I->GetGEPGamemode_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
