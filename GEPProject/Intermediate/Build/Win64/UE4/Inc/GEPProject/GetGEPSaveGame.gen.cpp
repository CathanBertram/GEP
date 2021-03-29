// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Interfaces/GetGEPSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetGEPSaveGame() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UGetGEPSaveGame_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UGetGEPSaveGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UClass* Z_Construct_UClass_UGEPSaveGame_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IGetGEPSaveGame::execGetGEPSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGEPSaveGame**)Z_Param__Result=P_THIS->GetGEPSave_Implementation();
		P_NATIVE_END;
	}
	UGEPSaveGame* IGetGEPSaveGame::GetGEPSave()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGEPSave instead.");
		GetGEPSaveGame_eventGetGEPSave_Parms Parms;
		return Parms.ReturnValue;
	}
	void UGetGEPSaveGame::StaticRegisterNativesUGetGEPSaveGame()
	{
		UClass* Class = UGetGEPSaveGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGEPSave", &IGetGEPSaveGame::execGetGEPSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetGEPSaveGame_GetGEPSave_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetGEPSaveGame_GetGEPSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetGEPSaveGame_eventGetGEPSave_Parms, ReturnValue), Z_Construct_UClass_UGEPSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetGEPSaveGame_GetGEPSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetGEPSaveGame_GetGEPSave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetGEPSaveGame_GetGEPSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/GetGEPSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetGEPSaveGame_GetGEPSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetGEPSaveGame, nullptr, "GetGEPSave", nullptr, nullptr, sizeof(GetGEPSaveGame_eventGetGEPSave_Parms), Z_Construct_UFunction_UGetGEPSaveGame_GetGEPSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetGEPSaveGame_GetGEPSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetGEPSaveGame_GetGEPSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetGEPSaveGame_GetGEPSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetGEPSaveGame_GetGEPSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetGEPSaveGame_GetGEPSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetGEPSaveGame_NoRegister()
	{
		return UGetGEPSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UGetGEPSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetGEPSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetGEPSaveGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetGEPSaveGame_GetGEPSave, "GetGEPSave" }, // 658992399
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetGEPSaveGame_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/GetGEPSaveGame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetGEPSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGetGEPSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetGEPSaveGame_Statics::ClassParams = {
		&UGetGEPSaveGame::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGetGEPSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetGEPSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetGEPSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetGEPSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetGEPSaveGame, 1924909129);
	template<> GEPPROJECT_API UClass* StaticClass<UGetGEPSaveGame>()
	{
		return UGetGEPSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetGEPSaveGame(Z_Construct_UClass_UGetGEPSaveGame, &UGetGEPSaveGame::StaticClass, TEXT("/Script/GEPProject"), TEXT("UGetGEPSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetGEPSaveGame);
	static FName NAME_UGetGEPSaveGame_GetGEPSave = FName(TEXT("GetGEPSave"));
	UGEPSaveGame* IGetGEPSaveGame::Execute_GetGEPSave(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGetGEPSaveGame::StaticClass()));
		GetGEPSaveGame_eventGetGEPSave_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGetGEPSaveGame_GetGEPSave);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGetGEPSaveGame*)(O->GetNativeInterfaceAddress(UGetGEPSaveGame::StaticClass())))
		{
			Parms.ReturnValue = I->GetGEPSave_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
