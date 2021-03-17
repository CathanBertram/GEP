// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/GEPSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGEPSaveGame() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UGEPSaveGame_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UGEPSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void UGEPSaveGame::StaticRegisterNativesUGEPSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UGEPSaveGame_NoRegister()
	{
		return UGEPSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UGEPSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unlockedWeapons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_unlockedWeapons;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_unlockedWeapons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGEPSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGEPSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GEPSaveGame.h" },
		{ "ModuleRelativePath", "GEPSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_unlockedWeapons_MetaData[] = {
		{ "Category", "GEPSaveGame" },
		{ "ModuleRelativePath", "GEPSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_unlockedWeapons = { "unlockedWeapons", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGEPSaveGame, unlockedWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_unlockedWeapons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_unlockedWeapons_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_unlockedWeapons_Inner = { "unlockedWeapons", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_currency_MetaData[] = {
		{ "Category", "GEPSaveGame" },
		{ "ModuleRelativePath", "GEPSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_currency = { "currency", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGEPSaveGame, currency), METADATA_PARAMS(Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_currency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_transform_MetaData[] = {
		{ "Category", "GEPSaveGame" },
		{ "ModuleRelativePath", "GEPSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGEPSaveGame, transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGEPSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_unlockedWeapons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_unlockedWeapons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGEPSaveGame_Statics::NewProp_transform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGEPSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGEPSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGEPSaveGame_Statics::ClassParams = {
		&UGEPSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGEPSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGEPSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGEPSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGEPSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGEPSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGEPSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGEPSaveGame, 2474329482);
	template<> GEPPROJECT_API UClass* StaticClass<UGEPSaveGame>()
	{
		return UGEPSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGEPSaveGame(Z_Construct_UClass_UGEPSaveGame, &UGEPSaveGame::StaticClass, TEXT("/Script/GEPProject"), TEXT("UGEPSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGEPSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
