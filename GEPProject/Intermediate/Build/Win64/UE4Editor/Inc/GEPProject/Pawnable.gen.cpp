// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Pawnable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnable() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UPawnable_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UPawnable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IPawnable::execGetAsPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetAsPawn_Implementation();
		P_NATIVE_END;
	}
	APawn* IPawnable::GetAsPawn()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAsPawn instead.");
		Pawnable_eventGetAsPawn_Parms Parms;
		return Parms.ReturnValue;
	}
	void UPawnable::StaticRegisterNativesUPawnable()
	{
		UClass* Class = UPawnable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAsPawn", &IPawnable::execGetAsPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPawnable_GetAsPawn_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnable_GetAsPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pawnable_eventGetAsPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnable_GetAsPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnable_GetAsPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnable_GetAsPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pawnable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnable_GetAsPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnable, nullptr, "GetAsPawn", nullptr, nullptr, sizeof(Pawnable_eventGetAsPawn_Parms), Z_Construct_UFunction_UPawnable_GetAsPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnable_GetAsPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnable_GetAsPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnable_GetAsPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnable_GetAsPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnable_GetAsPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnable_NoRegister()
	{
		return UPawnable::StaticClass();
	}
	struct Z_Construct_UClass_UPawnable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPawnable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnable_GetAsPawn, "GetAsPawn" }, // 1301038161
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pawnable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPawnable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnable_Statics::ClassParams = {
		&UPawnable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPawnable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnable, 2601682870);
	template<> GEPPROJECT_API UClass* StaticClass<UPawnable>()
	{
		return UPawnable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnable(Z_Construct_UClass_UPawnable, &UPawnable::StaticClass, TEXT("/Script/GEPProject"), TEXT("UPawnable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnable);
	static FName NAME_UPawnable_GetAsPawn = FName(TEXT("GetAsPawn"));
	APawn* IPawnable::Execute_GetAsPawn(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPawnable::StaticClass()));
		Pawnable_eventGetAsPawn_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPawnable_GetAsPawn);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPawnable*)(O->GetNativeInterfaceAddress(UPawnable::StaticClass())))
		{
			Parms.ReturnValue = I->GetAsPawn_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
