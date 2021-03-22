// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Interfaces/FireReleaseable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireReleaseable() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UFireReleaseable_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UFireReleaseable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
// End Cross Module References
	DEFINE_FUNCTION(IFireReleaseable::execFireReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireReleased_Implementation();
		P_NATIVE_END;
	}
	void IFireReleaseable::FireReleased()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FireReleased instead.");
	}
	void UFireReleaseable::StaticRegisterNativesUFireReleaseable()
	{
		UClass* Class = UFireReleaseable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireReleased", &IFireReleaseable::execFireReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFireReleaseable_FireReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFireReleaseable_FireReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/FireReleaseable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFireReleaseable_FireReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFireReleaseable, nullptr, "FireReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFireReleaseable_FireReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFireReleaseable_FireReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFireReleaseable_FireReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFireReleaseable_FireReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFireReleaseable_NoRegister()
	{
		return UFireReleaseable::StaticClass();
	}
	struct Z_Construct_UClass_UFireReleaseable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireReleaseable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFireReleaseable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFireReleaseable_FireReleased, "FireReleased" }, // 3234575924
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireReleaseable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/FireReleaseable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireReleaseable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFireReleaseable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFireReleaseable_Statics::ClassParams = {
		&UFireReleaseable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFireReleaseable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFireReleaseable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFireReleaseable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFireReleaseable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFireReleaseable, 3791559779);
	template<> GEPPROJECT_API UClass* StaticClass<UFireReleaseable>()
	{
		return UFireReleaseable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFireReleaseable(Z_Construct_UClass_UFireReleaseable, &UFireReleaseable::StaticClass, TEXT("/Script/GEPProject"), TEXT("UFireReleaseable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireReleaseable);
	static FName NAME_UFireReleaseable_FireReleased = FName(TEXT("FireReleased"));
	void IFireReleaseable::Execute_FireReleased(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFireReleaseable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFireReleaseable_FireReleased);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFireReleaseable*)(O->GetNativeInterfaceAddress(UFireReleaseable::StaticClass())))
		{
			I->FireReleased_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
