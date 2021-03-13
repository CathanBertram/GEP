// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Interfaces/Inputable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputable() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_UInputable_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UInputable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
// End Cross Module References
	DEFINE_FUNCTION(IInputable::execTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execLookUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUp_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execTurnAtRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnAtRate_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execLookUpAtRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUpAtRate_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execKey5Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Key5Pressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execKey4Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Key4Pressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execKey3Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Key3Pressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execKey2Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Key2Pressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execKey1Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Key1Pressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execInteractReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractReleased_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execInteractPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractPressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execFireReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireReleased_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execFirePressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FirePressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execJumpReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpReleased_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInputable::execJumpPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpPressed_Implementation();
		P_NATIVE_END;
	}
	void IInputable::FirePressed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FirePressed instead.");
	}
	void IInputable::FireReleased()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FireReleased instead.");
	}
	void IInputable::InteractPressed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InteractPressed instead.");
	}
	void IInputable::InteractReleased()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InteractReleased instead.");
	}
	void IInputable::JumpPressed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JumpPressed instead.");
	}
	void IInputable::JumpReleased()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_JumpReleased instead.");
	}
	void IInputable::Key1Pressed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Key1Pressed instead.");
	}
	void IInputable::Key2Pressed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Key2Pressed instead.");
	}
	void IInputable::Key3Pressed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Key3Pressed instead.");
	}
	void IInputable::Key4Pressed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Key4Pressed instead.");
	}
	void IInputable::Key5Pressed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Key5Pressed instead.");
	}
	void IInputable::LookUp(float value)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LookUp instead.");
	}
	void IInputable::LookUpAtRate(float value)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LookUpAtRate instead.");
	}
	void IInputable::MoveForward(float value)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_MoveForward instead.");
	}
	void IInputable::MoveRight(float value)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_MoveRight instead.");
	}
	void IInputable::Turn(float value)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Turn instead.");
	}
	void IInputable::TurnAtRate(float value)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TurnAtRate instead.");
	}
	void UInputable::StaticRegisterNativesUInputable()
	{
		UClass* Class = UInputable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FirePressed", &IInputable::execFirePressed },
			{ "FireReleased", &IInputable::execFireReleased },
			{ "InteractPressed", &IInputable::execInteractPressed },
			{ "InteractReleased", &IInputable::execInteractReleased },
			{ "JumpPressed", &IInputable::execJumpPressed },
			{ "JumpReleased", &IInputable::execJumpReleased },
			{ "Key1Pressed", &IInputable::execKey1Pressed },
			{ "Key2Pressed", &IInputable::execKey2Pressed },
			{ "Key3Pressed", &IInputable::execKey3Pressed },
			{ "Key4Pressed", &IInputable::execKey4Pressed },
			{ "Key5Pressed", &IInputable::execKey5Pressed },
			{ "LookUp", &IInputable::execLookUp },
			{ "LookUpAtRate", &IInputable::execLookUpAtRate },
			{ "MoveForward", &IInputable::execMoveForward },
			{ "MoveRight", &IInputable::execMoveRight },
			{ "Turn", &IInputable::execTurn },
			{ "TurnAtRate", &IInputable::execTurnAtRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputable_FirePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_FirePressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_FirePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "FirePressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_FirePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_FirePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_FirePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_FirePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_FireReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_FireReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_FireReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "FireReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_FireReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_FireReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_FireReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_FireReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_InteractPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_InteractPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_InteractPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "InteractPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_InteractPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_InteractPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_InteractPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_InteractPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_InteractReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_InteractReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_InteractReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "InteractReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_InteractReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_InteractReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_InteractReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_InteractReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_JumpPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_JumpPressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Action Mappings\n" },
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
		{ "ToolTip", "Action Mappings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_JumpPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "JumpPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_JumpPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_JumpPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_JumpPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_JumpPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_JumpReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_JumpReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_JumpReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "JumpReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_JumpReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_JumpReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_JumpReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_JumpReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_Key1Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_Key1Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_Key1Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "Key1Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_Key1Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_Key1Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_Key1Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_Key1Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_Key2Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_Key2Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_Key2Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "Key2Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_Key2Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_Key2Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_Key2Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_Key2Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_Key3Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_Key3Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_Key3Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "Key3Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_Key3Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_Key3Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_Key3Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_Key3Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_Key4Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_Key4Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_Key4Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "Key4Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_Key4Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_Key4Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_Key4Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_Key4Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_Key5Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_Key5Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_Key5Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "Key5Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_Key5Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_Key5Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_Key5Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_Key5Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_LookUp_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputable_LookUp_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inputable_eventLookUp_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputable_LookUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputable_LookUp_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_LookUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_LookUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "LookUp", nullptr, nullptr, sizeof(Inputable_eventLookUp_Parms), Z_Construct_UFunction_UInputable_LookUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_LookUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_LookUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_LookUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_LookUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_LookUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_LookUpAtRate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputable_LookUpAtRate_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inputable_eventLookUpAtRate_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputable_LookUpAtRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputable_LookUpAtRate_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_LookUpAtRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_LookUpAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "LookUpAtRate", nullptr, nullptr, sizeof(Inputable_eventLookUpAtRate_Parms), Z_Construct_UFunction_UInputable_LookUpAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_LookUpAtRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_LookUpAtRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_LookUpAtRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_LookUpAtRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_LookUpAtRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_MoveForward_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputable_MoveForward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inputable_eventMoveForward_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputable_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputable_MoveForward_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Axis Mappings\n" },
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
		{ "ToolTip", "Axis Mappings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "MoveForward", nullptr, nullptr, sizeof(Inputable_eventMoveForward_Parms), Z_Construct_UFunction_UInputable_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_MoveRight_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputable_MoveRight_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inputable_eventMoveRight_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputable_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputable_MoveRight_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "MoveRight", nullptr, nullptr, sizeof(Inputable_eventMoveRight_Parms), Z_Construct_UFunction_UInputable_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_Turn_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputable_Turn_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inputable_eventTurn_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputable_Turn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputable_Turn_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_Turn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "Turn", nullptr, nullptr, sizeof(Inputable_eventTurn_Parms), Z_Construct_UFunction_UInputable_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_Turn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_Turn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_Turn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputable_TurnAtRate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputable_TurnAtRate_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inputable_eventTurnAtRate_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputable_TurnAtRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputable_TurnAtRate_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputable_TurnAtRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputable_TurnAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputable, nullptr, "TurnAtRate", nullptr, nullptr, sizeof(Inputable_eventTurnAtRate_Parms), Z_Construct_UFunction_UInputable_TurnAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_TurnAtRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputable_TurnAtRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputable_TurnAtRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputable_TurnAtRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputable_TurnAtRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputable_NoRegister()
	{
		return UInputable::StaticClass();
	}
	struct Z_Construct_UClass_UInputable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputable_FirePressed, "FirePressed" }, // 4252152871
		{ &Z_Construct_UFunction_UInputable_FireReleased, "FireReleased" }, // 2188871841
		{ &Z_Construct_UFunction_UInputable_InteractPressed, "InteractPressed" }, // 3090892377
		{ &Z_Construct_UFunction_UInputable_InteractReleased, "InteractReleased" }, // 3879000600
		{ &Z_Construct_UFunction_UInputable_JumpPressed, "JumpPressed" }, // 3247159624
		{ &Z_Construct_UFunction_UInputable_JumpReleased, "JumpReleased" }, // 442075331
		{ &Z_Construct_UFunction_UInputable_Key1Pressed, "Key1Pressed" }, // 3659692625
		{ &Z_Construct_UFunction_UInputable_Key2Pressed, "Key2Pressed" }, // 2190902828
		{ &Z_Construct_UFunction_UInputable_Key3Pressed, "Key3Pressed" }, // 4008342584
		{ &Z_Construct_UFunction_UInputable_Key4Pressed, "Key4Pressed" }, // 854580678
		{ &Z_Construct_UFunction_UInputable_Key5Pressed, "Key5Pressed" }, // 2600907487
		{ &Z_Construct_UFunction_UInputable_LookUp, "LookUp" }, // 4286820
		{ &Z_Construct_UFunction_UInputable_LookUpAtRate, "LookUpAtRate" }, // 2458505921
		{ &Z_Construct_UFunction_UInputable_MoveForward, "MoveForward" }, // 1291555142
		{ &Z_Construct_UFunction_UInputable_MoveRight, "MoveRight" }, // 1426520829
		{ &Z_Construct_UFunction_UInputable_Turn, "Turn" }, // 3853534625
		{ &Z_Construct_UFunction_UInputable_TurnAtRate, "TurnAtRate" }, // 2078171963
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/Inputable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInputable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputable_Statics::ClassParams = {
		&UInputable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInputable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputable, 3815758001);
	template<> GEPPROJECT_API UClass* StaticClass<UInputable>()
	{
		return UInputable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputable(Z_Construct_UClass_UInputable, &UInputable::StaticClass, TEXT("/Script/GEPProject"), TEXT("UInputable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputable);
	static FName NAME_UInputable_FirePressed = FName(TEXT("FirePressed"));
	void IInputable::Execute_FirePressed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_FirePressed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->FirePressed_Implementation();
		}
	}
	static FName NAME_UInputable_FireReleased = FName(TEXT("FireReleased"));
	void IInputable::Execute_FireReleased(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_FireReleased);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->FireReleased_Implementation();
		}
	}
	static FName NAME_UInputable_InteractPressed = FName(TEXT("InteractPressed"));
	void IInputable::Execute_InteractPressed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_InteractPressed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->InteractPressed_Implementation();
		}
	}
	static FName NAME_UInputable_InteractReleased = FName(TEXT("InteractReleased"));
	void IInputable::Execute_InteractReleased(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_InteractReleased);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->InteractReleased_Implementation();
		}
	}
	static FName NAME_UInputable_JumpPressed = FName(TEXT("JumpPressed"));
	void IInputable::Execute_JumpPressed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_JumpPressed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->JumpPressed_Implementation();
		}
	}
	static FName NAME_UInputable_JumpReleased = FName(TEXT("JumpReleased"));
	void IInputable::Execute_JumpReleased(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_JumpReleased);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->JumpReleased_Implementation();
		}
	}
	static FName NAME_UInputable_Key1Pressed = FName(TEXT("Key1Pressed"));
	void IInputable::Execute_Key1Pressed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_Key1Pressed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->Key1Pressed_Implementation();
		}
	}
	static FName NAME_UInputable_Key2Pressed = FName(TEXT("Key2Pressed"));
	void IInputable::Execute_Key2Pressed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_Key2Pressed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->Key2Pressed_Implementation();
		}
	}
	static FName NAME_UInputable_Key3Pressed = FName(TEXT("Key3Pressed"));
	void IInputable::Execute_Key3Pressed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_Key3Pressed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->Key3Pressed_Implementation();
		}
	}
	static FName NAME_UInputable_Key4Pressed = FName(TEXT("Key4Pressed"));
	void IInputable::Execute_Key4Pressed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_Key4Pressed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->Key4Pressed_Implementation();
		}
	}
	static FName NAME_UInputable_Key5Pressed = FName(TEXT("Key5Pressed"));
	void IInputable::Execute_Key5Pressed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInputable_Key5Pressed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->Key5Pressed_Implementation();
		}
	}
	static FName NAME_UInputable_LookUp = FName(TEXT("LookUp"));
	void IInputable::Execute_LookUp(UObject* O, float value)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		Inputable_eventLookUp_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInputable_LookUp);
		if (Func)
		{
			Parms.value=value;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->LookUp_Implementation(value);
		}
	}
	static FName NAME_UInputable_LookUpAtRate = FName(TEXT("LookUpAtRate"));
	void IInputable::Execute_LookUpAtRate(UObject* O, float value)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		Inputable_eventLookUpAtRate_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInputable_LookUpAtRate);
		if (Func)
		{
			Parms.value=value;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->LookUpAtRate_Implementation(value);
		}
	}
	static FName NAME_UInputable_MoveForward = FName(TEXT("MoveForward"));
	void IInputable::Execute_MoveForward(UObject* O, float value)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		Inputable_eventMoveForward_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInputable_MoveForward);
		if (Func)
		{
			Parms.value=value;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->MoveForward_Implementation(value);
		}
	}
	static FName NAME_UInputable_MoveRight = FName(TEXT("MoveRight"));
	void IInputable::Execute_MoveRight(UObject* O, float value)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		Inputable_eventMoveRight_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInputable_MoveRight);
		if (Func)
		{
			Parms.value=value;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->MoveRight_Implementation(value);
		}
	}
	static FName NAME_UInputable_Turn = FName(TEXT("Turn"));
	void IInputable::Execute_Turn(UObject* O, float value)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		Inputable_eventTurn_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInputable_Turn);
		if (Func)
		{
			Parms.value=value;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->Turn_Implementation(value);
		}
	}
	static FName NAME_UInputable_TurnAtRate = FName(TEXT("TurnAtRate"));
	void IInputable::Execute_TurnAtRate(UObject* O, float value)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInputable::StaticClass()));
		Inputable_eventTurnAtRate_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInputable_TurnAtRate);
		if (Func)
		{
			Parms.value=value;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInputable*)(O->GetNativeInterfaceAddress(UInputable::StaticClass())))
		{
			I->TurnAtRate_Implementation(value);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
