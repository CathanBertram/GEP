// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/EventSystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventSystem() {}
// Cross Module References
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_EventName__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UClass* Z_Construct_UClass_UEventSystem_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UEventSystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GEPProject_EventName__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_EventName__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_EventName__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "EventName__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_EventName__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_EventName__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_EventName__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_EventName__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UEventSystem::StaticRegisterNativesUEventSystem()
	{
	}
	UClass* Z_Construct_UClass_UEventSystem_NoRegister()
	{
		return UEventSystem::StaticClass();
	}
	struct Z_Construct_UClass_UEventSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventSystem.h" },
		{ "ModuleRelativePath", "EventSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventSystem_Statics::ClassParams = {
		&UEventSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventSystem, 119540120);
	template<> GEPPROJECT_API UClass* StaticClass<UEventSystem>()
	{
		return UEventSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventSystem(Z_Construct_UClass_UEventSystem, &UEventSystem::StaticClass, TEXT("/Script/GEPProject"), TEXT("UEventSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
