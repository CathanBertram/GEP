// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGEPProject_init() {}
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnDeath__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnEvent__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature();
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GEPProject()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GEPProject_OnDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GEPProject_OnEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GEPProject_OnCurrencyGain__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GEPProject_OnCurrencyLoss__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/GEPProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD65E1DB0,
				0x61F15558,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
