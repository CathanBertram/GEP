// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Interfaces/InitableChar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInitableChar() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UInitableChar_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UInitableChar();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UClass* Z_Construct_UClass_AGEPProjectCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IInitableChar::execGetAsChar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGEPProjectCharacter**)Z_Param__Result=P_THIS->GetAsChar_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInitableChar::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation();
		P_NATIVE_END;
	}
	AGEPProjectCharacter* IInitableChar::GetAsChar()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAsChar instead.");
		InitableChar_eventGetAsChar_Parms Parms;
		return Parms.ReturnValue;
	}
	void IInitableChar::Init()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Init instead.");
	}
	void UInitableChar::StaticRegisterNativesUInitableChar()
	{
		UClass* Class = UInitableChar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAsChar", &IInitableChar::execGetAsChar },
			{ "Init", &IInitableChar::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInitableChar_GetAsChar_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInitableChar_GetAsChar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InitableChar_eventGetAsChar_Parms, ReturnValue), Z_Construct_UClass_AGEPProjectCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInitableChar_GetAsChar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInitableChar_GetAsChar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInitableChar_GetAsChar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/InitableChar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitableChar_GetAsChar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitableChar, nullptr, "GetAsChar", nullptr, nullptr, sizeof(InitableChar_eventGetAsChar_Parms), Z_Construct_UFunction_UInitableChar_GetAsChar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitableChar_GetAsChar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInitableChar_GetAsChar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitableChar_GetAsChar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInitableChar_GetAsChar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInitableChar_GetAsChar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInitableChar_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInitableChar_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/InitableChar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInitableChar_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInitableChar, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInitableChar_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInitableChar_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInitableChar_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInitableChar_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInitableChar_NoRegister()
	{
		return UInitableChar::StaticClass();
	}
	struct Z_Construct_UClass_UInitableChar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInitableChar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInitableChar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInitableChar_GetAsChar, "GetAsChar" }, // 1383172331
		{ &Z_Construct_UFunction_UInitableChar_Init, "Init" }, // 1190427653
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInitableChar_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/InitableChar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInitableChar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInitableChar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInitableChar_Statics::ClassParams = {
		&UInitableChar::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInitableChar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInitableChar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInitableChar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInitableChar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInitableChar, 3565144366);
	template<> GEPPROJECT_API UClass* StaticClass<UInitableChar>()
	{
		return UInitableChar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInitableChar(Z_Construct_UClass_UInitableChar, &UInitableChar::StaticClass, TEXT("/Script/GEPProject"), TEXT("UInitableChar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInitableChar);
	static FName NAME_UInitableChar_GetAsChar = FName(TEXT("GetAsChar"));
	AGEPProjectCharacter* IInitableChar::Execute_GetAsChar(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInitableChar::StaticClass()));
		InitableChar_eventGetAsChar_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInitableChar_GetAsChar);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInitableChar*)(O->GetNativeInterfaceAddress(UInitableChar::StaticClass())))
		{
			Parms.ReturnValue = I->GetAsChar_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UInitableChar_Init = FName(TEXT("Init"));
	void IInitableChar::Execute_Init(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInitableChar::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInitableChar_Init);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInitableChar*)(O->GetNativeInterfaceAddress(UInitableChar::StaticClass())))
		{
			I->Init_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
