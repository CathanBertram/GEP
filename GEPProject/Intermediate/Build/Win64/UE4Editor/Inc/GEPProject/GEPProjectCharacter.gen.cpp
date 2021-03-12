// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/GEPProjectCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGEPProjectCharacter() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_AGEPProjectCharacter_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AGEPProjectCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UInputable_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UInitableChar_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UPawnable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGEPProjectCharacter::execTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execLookUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUp_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execTurnAtRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnAtRate_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execLookUpAtRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUpAtRate_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execInteractReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractReleased_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execInteractPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractPressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execFireReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireReleased_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execFirePressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FirePressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execJumpReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpReleased_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execJumpPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpPressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execGetAsChar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGEPProjectCharacter**)Z_Param__Result=P_THIS->GetAsChar_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execGetAsPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetAsPawn_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AGEPProjectCharacter_FirePressed = FName(TEXT("FirePressed"));
	void AGEPProjectCharacter::FirePressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_FirePressed),NULL);
	}
	static FName NAME_AGEPProjectCharacter_FireReleased = FName(TEXT("FireReleased"));
	void AGEPProjectCharacter::FireReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_FireReleased),NULL);
	}
	static FName NAME_AGEPProjectCharacter_GetAsChar = FName(TEXT("GetAsChar"));
	AGEPProjectCharacter* AGEPProjectCharacter::GetAsChar()
	{
		GEPProjectCharacter_eventGetAsChar_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_GetAsChar),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGEPProjectCharacter_GetAsPawn = FName(TEXT("GetAsPawn"));
	APawn* AGEPProjectCharacter::GetAsPawn()
	{
		GEPProjectCharacter_eventGetAsPawn_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_GetAsPawn),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AGEPProjectCharacter_Init = FName(TEXT("Init"));
	void AGEPProjectCharacter::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_Init),NULL);
	}
	static FName NAME_AGEPProjectCharacter_InteractPressed = FName(TEXT("InteractPressed"));
	void AGEPProjectCharacter::InteractPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_InteractPressed),NULL);
	}
	static FName NAME_AGEPProjectCharacter_InteractReleased = FName(TEXT("InteractReleased"));
	void AGEPProjectCharacter::InteractReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_InteractReleased),NULL);
	}
	static FName NAME_AGEPProjectCharacter_JumpPressed = FName(TEXT("JumpPressed"));
	void AGEPProjectCharacter::JumpPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_JumpPressed),NULL);
	}
	static FName NAME_AGEPProjectCharacter_JumpReleased = FName(TEXT("JumpReleased"));
	void AGEPProjectCharacter::JumpReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_JumpReleased),NULL);
	}
	static FName NAME_AGEPProjectCharacter_LookUp = FName(TEXT("LookUp"));
	void AGEPProjectCharacter::LookUp(float value)
	{
		GEPProjectCharacter_eventLookUp_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_LookUp),&Parms);
	}
	static FName NAME_AGEPProjectCharacter_LookUpAtRate = FName(TEXT("LookUpAtRate"));
	void AGEPProjectCharacter::LookUpAtRate(float value)
	{
		GEPProjectCharacter_eventLookUpAtRate_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_LookUpAtRate),&Parms);
	}
	static FName NAME_AGEPProjectCharacter_MoveForward = FName(TEXT("MoveForward"));
	void AGEPProjectCharacter::MoveForward(float value)
	{
		GEPProjectCharacter_eventMoveForward_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_MoveForward),&Parms);
	}
	static FName NAME_AGEPProjectCharacter_MoveRight = FName(TEXT("MoveRight"));
	void AGEPProjectCharacter::MoveRight(float value)
	{
		GEPProjectCharacter_eventMoveRight_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_MoveRight),&Parms);
	}
	static FName NAME_AGEPProjectCharacter_Turn = FName(TEXT("Turn"));
	void AGEPProjectCharacter::Turn(float value)
	{
		GEPProjectCharacter_eventTurn_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_Turn),&Parms);
	}
	static FName NAME_AGEPProjectCharacter_TurnAtRate = FName(TEXT("TurnAtRate"));
	void AGEPProjectCharacter::TurnAtRate(float value)
	{
		GEPProjectCharacter_eventTurnAtRate_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_TurnAtRate),&Parms);
	}
	void AGEPProjectCharacter::StaticRegisterNativesAGEPProjectCharacter()
	{
		UClass* Class = AGEPProjectCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FirePressed", &AGEPProjectCharacter::execFirePressed },
			{ "FireReleased", &AGEPProjectCharacter::execFireReleased },
			{ "GetAsChar", &AGEPProjectCharacter::execGetAsChar },
			{ "GetAsPawn", &AGEPProjectCharacter::execGetAsPawn },
			{ "Init", &AGEPProjectCharacter::execInit },
			{ "InteractPressed", &AGEPProjectCharacter::execInteractPressed },
			{ "InteractReleased", &AGEPProjectCharacter::execInteractReleased },
			{ "JumpPressed", &AGEPProjectCharacter::execJumpPressed },
			{ "JumpReleased", &AGEPProjectCharacter::execJumpReleased },
			{ "LookUp", &AGEPProjectCharacter::execLookUp },
			{ "LookUpAtRate", &AGEPProjectCharacter::execLookUpAtRate },
			{ "MoveForward", &AGEPProjectCharacter::execMoveForward },
			{ "MoveRight", &AGEPProjectCharacter::execMoveRight },
			{ "Turn", &AGEPProjectCharacter::execTurn },
			{ "TurnAtRate", &AGEPProjectCharacter::execTurnAtRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_FirePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_FirePressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_FirePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "FirePressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_FirePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_FirePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_FirePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_FirePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_FireReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_FireReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_FireReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "FireReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_FireReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_FireReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_FireReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_FireReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_GetAsChar_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_GetAsChar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventGetAsChar_Parms, ReturnValue), Z_Construct_UClass_AGEPProjectCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_GetAsChar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_GetAsChar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_GetAsChar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_GetAsChar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "GetAsChar", nullptr, nullptr, sizeof(GEPProjectCharacter_eventGetAsChar_Parms), Z_Construct_UFunction_AGEPProjectCharacter_GetAsChar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_GetAsChar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_GetAsChar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_GetAsChar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_GetAsChar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_GetAsChar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_GetAsPawn_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_GetAsPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventGetAsPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_GetAsPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_GetAsPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_GetAsPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_GetAsPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "GetAsPawn", nullptr, nullptr, sizeof(GEPProjectCharacter_eventGetAsPawn_Parms), Z_Construct_UFunction_AGEPProjectCharacter_GetAsPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_GetAsPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_GetAsPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_GetAsPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_GetAsPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_GetAsPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_InteractPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_InteractPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_InteractPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "InteractPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_InteractPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_InteractPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_InteractPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_InteractPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_InteractReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_InteractReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_InteractReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "InteractReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_InteractReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_InteractReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_InteractReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_InteractReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_JumpPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_JumpPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_JumpPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "JumpPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_JumpPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_JumpPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_JumpPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_JumpPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_JumpReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_JumpReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_JumpReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "JumpReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_JumpReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_JumpReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_JumpReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_JumpReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_LookUp_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_LookUp_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventLookUp_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_LookUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_LookUp_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_LookUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_LookUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "LookUp", nullptr, nullptr, sizeof(GEPProjectCharacter_eventLookUp_Parms), Z_Construct_UFunction_AGEPProjectCharacter_LookUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_LookUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_LookUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_LookUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_LookUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_LookUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_LookUpAtRate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_LookUpAtRate_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventLookUpAtRate_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_LookUpAtRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_LookUpAtRate_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_LookUpAtRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_LookUpAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "LookUpAtRate", nullptr, nullptr, sizeof(GEPProjectCharacter_eventLookUpAtRate_Parms), Z_Construct_UFunction_AGEPProjectCharacter_LookUpAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_LookUpAtRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_LookUpAtRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_LookUpAtRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_LookUpAtRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_LookUpAtRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_MoveForward_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_MoveForward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventMoveForward_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_MoveForward_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "MoveForward", nullptr, nullptr, sizeof(GEPProjectCharacter_eventMoveForward_Parms), Z_Construct_UFunction_AGEPProjectCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_MoveRight_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_MoveRight_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventMoveRight_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_MoveRight_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "MoveRight", nullptr, nullptr, sizeof(GEPProjectCharacter_eventMoveRight_Parms), Z_Construct_UFunction_AGEPProjectCharacter_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_Turn_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_Turn_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventTurn_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_Turn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_Turn_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_Turn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "Turn", nullptr, nullptr, sizeof(GEPProjectCharacter_eventTurn_Parms), Z_Construct_UFunction_AGEPProjectCharacter_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_Turn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_Turn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_Turn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_TurnAtRate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_TurnAtRate_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventTurnAtRate_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_TurnAtRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_TurnAtRate_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_TurnAtRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_TurnAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "TurnAtRate", nullptr, nullptr, sizeof(GEPProjectCharacter_eventTurnAtRate_Parms), Z_Construct_UFunction_AGEPProjectCharacter_TurnAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_TurnAtRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_TurnAtRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_TurnAtRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_TurnAtRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_TurnAtRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGEPProjectCharacter_NoRegister()
	{
		return AGEPProjectCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGEPProjectCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interactRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_childActorGun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_childActorGun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGEPProjectCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGEPProjectCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGEPProjectCharacter_FirePressed, "FirePressed" }, // 216987458
		{ &Z_Construct_UFunction_AGEPProjectCharacter_FireReleased, "FireReleased" }, // 2813521072
		{ &Z_Construct_UFunction_AGEPProjectCharacter_GetAsChar, "GetAsChar" }, // 1302355011
		{ &Z_Construct_UFunction_AGEPProjectCharacter_GetAsPawn, "GetAsPawn" }, // 3865363755
		{ &Z_Construct_UFunction_AGEPProjectCharacter_Init, "Init" }, // 3077321008
		{ &Z_Construct_UFunction_AGEPProjectCharacter_InteractPressed, "InteractPressed" }, // 1098097176
		{ &Z_Construct_UFunction_AGEPProjectCharacter_InteractReleased, "InteractReleased" }, // 810588888
		{ &Z_Construct_UFunction_AGEPProjectCharacter_JumpPressed, "JumpPressed" }, // 1886981103
		{ &Z_Construct_UFunction_AGEPProjectCharacter_JumpReleased, "JumpReleased" }, // 242069255
		{ &Z_Construct_UFunction_AGEPProjectCharacter_LookUp, "LookUp" }, // 2556547732
		{ &Z_Construct_UFunction_AGEPProjectCharacter_LookUpAtRate, "LookUpAtRate" }, // 415414741
		{ &Z_Construct_UFunction_AGEPProjectCharacter_MoveForward, "MoveForward" }, // 1221755026
		{ &Z_Construct_UFunction_AGEPProjectCharacter_MoveRight, "MoveRight" }, // 2426553616
		{ &Z_Construct_UFunction_AGEPProjectCharacter_Turn, "Turn" }, // 3125702929
		{ &Z_Construct_UFunction_AGEPProjectCharacter_TurnAtRate, "TurnAtRate" }, // 1631093118
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GEPProjectCharacter.h" },
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_interactRange_MetaData[] = {
		{ "Category", "PlayerVariables" },
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_interactRange = { "interactRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectCharacter, interactRange), METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_interactRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_interactRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_childActorGun_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GEPProjectCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_childActorGun = { "childActorGun", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectCharacter, childActorGun), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_childActorGun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_childActorGun_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGEPProjectCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_interactRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_childActorGun,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGEPProjectCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInputable_NoRegister, (int32)VTABLE_OFFSET(AGEPProjectCharacter, IInputable), false },
			{ Z_Construct_UClass_UInitableChar_NoRegister, (int32)VTABLE_OFFSET(AGEPProjectCharacter, IInitableChar), false },
			{ Z_Construct_UClass_UPawnable_NoRegister, (int32)VTABLE_OFFSET(AGEPProjectCharacter, IPawnable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGEPProjectCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGEPProjectCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGEPProjectCharacter_Statics::ClassParams = {
		&AGEPProjectCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGEPProjectCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGEPProjectCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGEPProjectCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGEPProjectCharacter, 1718280529);
	template<> GEPPROJECT_API UClass* StaticClass<AGEPProjectCharacter>()
	{
		return AGEPProjectCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGEPProjectCharacter(Z_Construct_UClass_AGEPProjectCharacter, &AGEPProjectCharacter::StaticClass, TEXT("/Script/GEPProject"), TEXT("AGEPProjectCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGEPProjectCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
