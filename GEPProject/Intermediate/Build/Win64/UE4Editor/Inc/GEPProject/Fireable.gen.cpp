// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Fireable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireable() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UFireable_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UFireable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
// End Cross Module References
	DEFINE_FUNCTION(IFireable::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Fire_Implementation();
		P_NATIVE_END;
	}
	bool IFireable::Fire()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Fire instead.");
		Fireable_eventFire_Parms Parms;
		return Parms.ReturnValue;
	}
	void UFireable::StaticRegisterNativesUFireable()
	{
		UClass* Class = UFireable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &IFireable::execFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFireable_Fire_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFireable_Fire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Fireable_eventFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFireable_Fire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Fireable_eventFire_Parms), &Z_Construct_UFunction_UFireable_Fire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFireable_Fire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFireable_Fire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFireable_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Fireable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFireable_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFireable, nullptr, "Fire", nullptr, nullptr, sizeof(Fireable_eventFire_Parms), Z_Construct_UFunction_UFireable_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFireable_Fire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFireable_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFireable_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFireable_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFireable_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFireable_NoRegister()
	{
		return UFireable::StaticClass();
	}
	struct Z_Construct_UClass_UFireable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFireable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFireable_Fire, "Fire" }, // 4150757755
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Fireable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFireable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFireable_Statics::ClassParams = {
		&UFireable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFireable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFireable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFireable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFireable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFireable, 2805708155);
	template<> GEPPROJECT_API UClass* StaticClass<UFireable>()
	{
		return UFireable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFireable(Z_Construct_UClass_UFireable, &UFireable::StaticClass, TEXT("/Script/GEPProject"), TEXT("UFireable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireable);
	static FName NAME_UFireable_Fire = FName(TEXT("Fire"));
	bool IFireable::Execute_Fire(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFireable::StaticClass()));
		Fireable_eventFire_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFireable_Fire);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFireable*)(O->GetNativeInterfaceAddress(UFireable::StaticClass())))
		{
			Parms.ReturnValue = I->Fire_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
