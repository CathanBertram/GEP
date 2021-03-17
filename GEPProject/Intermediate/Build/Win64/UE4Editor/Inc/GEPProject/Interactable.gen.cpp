// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Interfaces/Interactable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UInteractable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UClass* Z_Construct_UClass_AGEPProjectCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IInteractable::execOnInteract)
	{
		P_GET_OBJECT(AGEPProjectCharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract_Implementation(Z_Param_character);
		P_NATIVE_END;
	}
	void IInteractable::OnInteract(AGEPProjectCharacter* character)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteract instead.");
	}
	void UInteractable::StaticRegisterNativesUInteractable()
	{
		UClass* Class = UInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteract", &IInteractable::execOnInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractable_OnInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractable_OnInteract_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventOnInteract_Parms, character), Z_Construct_UClass_AGEPProjectCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractable_OnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractable_OnInteract_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractable_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractable_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractable, nullptr, "OnInteract", nullptr, nullptr, sizeof(Interactable_eventOnInteract_Parms), Z_Construct_UFunction_UInteractable_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_OnInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractable_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractable_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractable_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractable_NoRegister()
	{
		return UInteractable::StaticClass();
	}
	struct Z_Construct_UClass_UInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractable_OnInteract, "OnInteract" }, // 601470526
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Interactable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractable_Statics::ClassParams = {
		&UInteractable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractable, 2774200749);
	template<> GEPPROJECT_API UClass* StaticClass<UInteractable>()
	{
		return UInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractable(Z_Construct_UClass_UInteractable, &UInteractable::StaticClass, TEXT("/Script/GEPProject"), TEXT("UInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractable);
	static FName NAME_UInteractable_OnInteract = FName(TEXT("OnInteract"));
	void IInteractable::Execute_OnInteract(UObject* O, AGEPProjectCharacter* character)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
		Interactable_eventOnInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractable_OnInteract);
		if (Func)
		{
			Parms.character=character;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractable*)(O->GetNativeInterfaceAddress(UInteractable::StaticClass())))
		{
			I->OnInteract_Implementation(character);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
