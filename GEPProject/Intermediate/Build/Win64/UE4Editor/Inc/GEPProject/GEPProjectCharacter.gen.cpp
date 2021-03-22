// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Player/GEPProjectCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGEPProjectCharacter() {}
// Cross Module References
	GEPPROJECT_API UFunction* Z_Construct_UDelegateFunction_GEPProject_OnLocalEnergyUpdate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	GEPPROJECT_API UClass* Z_Construct_UClass_AGEPProjectCharacter_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_AGEPProjectCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UGEPSaveGame_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UPlayerEnergyComponent_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UPlayerHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UInputable_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UInitableChar_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UPawnable_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GEPProject_OnLocalEnergyUpdate__DelegateSignature_Statics
	{
		struct _Script_GEPProject_eventOnLocalEnergyUpdate_Parms
		{
			float newEnergy;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newEnergy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GEPProject_OnLocalEnergyUpdate__DelegateSignature_Statics::NewProp_newEnergy = { "newEnergy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GEPProject_eventOnLocalEnergyUpdate_Parms, newEnergy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GEPProject_OnLocalEnergyUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GEPProject_OnLocalEnergyUpdate__DelegateSignature_Statics::NewProp_newEnergy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GEPProject_OnLocalEnergyUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GEPProject_OnLocalEnergyUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GEPProject, nullptr, "OnLocalEnergyUpdate__DelegateSignature", nullptr, nullptr, sizeof(_Script_GEPProject_eventOnLocalEnergyUpdate_Parms), Z_Construct_UDelegateFunction_GEPProject_OnLocalEnergyUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnLocalEnergyUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GEPProject_OnLocalEnergyUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GEPProject_OnLocalEnergyUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GEPProject_OnLocalEnergyUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GEPProject_OnLocalEnergyUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execUpdateEnergy)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newEnergy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEnergy(Z_Param_newEnergy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execUnlockWeapon)
	{
		P_GET_OBJECT(UClass,Z_Param_weaponToUnlock);
		P_GET_PROPERTY(FIntProperty,Z_Param_cost);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockWeapon(Z_Param_weaponToUnlock,Z_Param_cost);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execLoad)
	{
		P_GET_OBJECT(UGEPSaveGame,Z_Param_saveInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Load(Z_Param_saveInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execSave)
	{
		P_GET_OBJECT(UGEPSaveGame,Z_Param_saveInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Save(Z_Param_saveInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execDamagePlayer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamagePlayer(Z_Param_damageAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execLoseCurrency)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_curToLose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoseCurrency(Z_Param_curToLose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execGainCurrency)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_curToGain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GainCurrency(Z_Param_curToGain);
		P_NATIVE_END;
	}
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
	DEFINE_FUNCTION(AGEPProjectCharacter::execPrevWeaponPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrevWeaponPressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execNextWeaponPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextWeaponPressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execKey8Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Key8Pressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execKey7Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Key7Pressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execKey6Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Key6Pressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execKey5Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Key5Pressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execKey4Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Key4Pressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execKey3Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Key3Pressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execKey2Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Key2Pressed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGEPProjectCharacter::execKey1Pressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Key1Pressed_Implementation();
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
	DEFINE_FUNCTION(AGEPProjectCharacter::execUseEnergy)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_energyToUse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseEnergy(Z_Param_energyToUse);
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
	static FName NAME_AGEPProjectCharacter_Key1Pressed = FName(TEXT("Key1Pressed"));
	void AGEPProjectCharacter::Key1Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_Key1Pressed),NULL);
	}
	static FName NAME_AGEPProjectCharacter_Key2Pressed = FName(TEXT("Key2Pressed"));
	void AGEPProjectCharacter::Key2Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_Key2Pressed),NULL);
	}
	static FName NAME_AGEPProjectCharacter_Key3Pressed = FName(TEXT("Key3Pressed"));
	void AGEPProjectCharacter::Key3Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_Key3Pressed),NULL);
	}
	static FName NAME_AGEPProjectCharacter_Key4Pressed = FName(TEXT("Key4Pressed"));
	void AGEPProjectCharacter::Key4Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_Key4Pressed),NULL);
	}
	static FName NAME_AGEPProjectCharacter_Key5Pressed = FName(TEXT("Key5Pressed"));
	void AGEPProjectCharacter::Key5Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_Key5Pressed),NULL);
	}
	static FName NAME_AGEPProjectCharacter_Key6Pressed = FName(TEXT("Key6Pressed"));
	void AGEPProjectCharacter::Key6Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_Key6Pressed),NULL);
	}
	static FName NAME_AGEPProjectCharacter_Key7Pressed = FName(TEXT("Key7Pressed"));
	void AGEPProjectCharacter::Key7Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_Key7Pressed),NULL);
	}
	static FName NAME_AGEPProjectCharacter_Key8Pressed = FName(TEXT("Key8Pressed"));
	void AGEPProjectCharacter::Key8Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_Key8Pressed),NULL);
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
	static FName NAME_AGEPProjectCharacter_NextWeaponPressed = FName(TEXT("NextWeaponPressed"));
	void AGEPProjectCharacter::NextWeaponPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_NextWeaponPressed),NULL);
	}
	static FName NAME_AGEPProjectCharacter_PrevWeaponPressed = FName(TEXT("PrevWeaponPressed"));
	void AGEPProjectCharacter::PrevWeaponPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGEPProjectCharacter_PrevWeaponPressed),NULL);
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
			{ "DamagePlayer", &AGEPProjectCharacter::execDamagePlayer },
			{ "FirePressed", &AGEPProjectCharacter::execFirePressed },
			{ "FireReleased", &AGEPProjectCharacter::execFireReleased },
			{ "GainCurrency", &AGEPProjectCharacter::execGainCurrency },
			{ "GetAsChar", &AGEPProjectCharacter::execGetAsChar },
			{ "GetAsPawn", &AGEPProjectCharacter::execGetAsPawn },
			{ "Init", &AGEPProjectCharacter::execInit },
			{ "InteractPressed", &AGEPProjectCharacter::execInteractPressed },
			{ "InteractReleased", &AGEPProjectCharacter::execInteractReleased },
			{ "JumpPressed", &AGEPProjectCharacter::execJumpPressed },
			{ "JumpReleased", &AGEPProjectCharacter::execJumpReleased },
			{ "Key1Pressed", &AGEPProjectCharacter::execKey1Pressed },
			{ "Key2Pressed", &AGEPProjectCharacter::execKey2Pressed },
			{ "Key3Pressed", &AGEPProjectCharacter::execKey3Pressed },
			{ "Key4Pressed", &AGEPProjectCharacter::execKey4Pressed },
			{ "Key5Pressed", &AGEPProjectCharacter::execKey5Pressed },
			{ "Key6Pressed", &AGEPProjectCharacter::execKey6Pressed },
			{ "Key7Pressed", &AGEPProjectCharacter::execKey7Pressed },
			{ "Key8Pressed", &AGEPProjectCharacter::execKey8Pressed },
			{ "Load", &AGEPProjectCharacter::execLoad },
			{ "LookUp", &AGEPProjectCharacter::execLookUp },
			{ "LookUpAtRate", &AGEPProjectCharacter::execLookUpAtRate },
			{ "LoseCurrency", &AGEPProjectCharacter::execLoseCurrency },
			{ "MoveForward", &AGEPProjectCharacter::execMoveForward },
			{ "MoveRight", &AGEPProjectCharacter::execMoveRight },
			{ "NextWeaponPressed", &AGEPProjectCharacter::execNextWeaponPressed },
			{ "PrevWeaponPressed", &AGEPProjectCharacter::execPrevWeaponPressed },
			{ "Save", &AGEPProjectCharacter::execSave },
			{ "Turn", &AGEPProjectCharacter::execTurn },
			{ "TurnAtRate", &AGEPProjectCharacter::execTurnAtRate },
			{ "UnlockWeapon", &AGEPProjectCharacter::execUnlockWeapon },
			{ "UpdateEnergy", &AGEPProjectCharacter::execUpdateEnergy },
			{ "UseEnergy", &AGEPProjectCharacter::execUseEnergy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_DamagePlayer_Statics
	{
		struct GEPProjectCharacter_eventDamagePlayer_Parms
		{
			float damageAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_DamagePlayer_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventDamagePlayer_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_DamagePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_DamagePlayer_Statics::NewProp_damageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_DamagePlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_DamagePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "DamagePlayer", nullptr, nullptr, sizeof(GEPProjectCharacter_eventDamagePlayer_Parms), Z_Construct_UFunction_AGEPProjectCharacter_DamagePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_DamagePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_DamagePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_DamagePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_DamagePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_DamagePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
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
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
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
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
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
	struct Z_Construct_UFunction_AGEPProjectCharacter_GainCurrency_Statics
	{
		struct GEPProjectCharacter_eventGainCurrency_Parms
		{
			int32 curToGain;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_curToGain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_GainCurrency_Statics::NewProp_curToGain = { "curToGain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventGainCurrency_Parms, curToGain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_GainCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_GainCurrency_Statics::NewProp_curToGain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_GainCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_GainCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "GainCurrency", nullptr, nullptr, sizeof(GEPProjectCharacter_eventGainCurrency_Parms), Z_Construct_UFunction_AGEPProjectCharacter_GainCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_GainCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_GainCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_GainCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_GainCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_GainCurrency_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
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
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
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
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
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
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
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
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
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
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
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
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
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
	struct Z_Construct_UFunction_AGEPProjectCharacter_Key1Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_Key1Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_Key1Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "Key1Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_Key1Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_Key1Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_Key1Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_Key1Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_Key2Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_Key2Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_Key2Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "Key2Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_Key2Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_Key2Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_Key2Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_Key2Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_Key3Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_Key3Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_Key3Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "Key3Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_Key3Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_Key3Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_Key3Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_Key3Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_Key4Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_Key4Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_Key4Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "Key4Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_Key4Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_Key4Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_Key4Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_Key4Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_Key5Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_Key5Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_Key5Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "Key5Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_Key5Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_Key5Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_Key5Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_Key5Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_Key6Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_Key6Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_Key6Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "Key6Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_Key6Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_Key6Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_Key6Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_Key6Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_Key7Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_Key7Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_Key7Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "Key7Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_Key7Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_Key7Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_Key7Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_Key7Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_Key8Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_Key8Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_Key8Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "Key8Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_Key8Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_Key8Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_Key8Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_Key8Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_Load_Statics
	{
		struct GEPProjectCharacter_eventLoad_Parms
		{
			UGEPSaveGame* saveInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_saveInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_Load_Statics::NewProp_saveInstance = { "saveInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventLoad_Parms, saveInstance), Z_Construct_UClass_UGEPSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_Load_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_Load_Statics::NewProp_saveInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_Load_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "Load", nullptr, nullptr, sizeof(GEPProjectCharacter_eventLoad_Parms), Z_Construct_UFunction_AGEPProjectCharacter_Load_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_Load_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_Load_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_Load_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
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
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
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
	struct Z_Construct_UFunction_AGEPProjectCharacter_LoseCurrency_Statics
	{
		struct GEPProjectCharacter_eventLoseCurrency_Parms
		{
			int32 curToLose;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_curToLose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_LoseCurrency_Statics::NewProp_curToLose = { "curToLose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventLoseCurrency_Parms, curToLose), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_LoseCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_LoseCurrency_Statics::NewProp_curToLose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_LoseCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_LoseCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "LoseCurrency", nullptr, nullptr, sizeof(GEPProjectCharacter_eventLoseCurrency_Parms), Z_Construct_UFunction_AGEPProjectCharacter_LoseCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_LoseCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_LoseCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_LoseCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_LoseCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_LoseCurrency_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
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
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
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
	struct Z_Construct_UFunction_AGEPProjectCharacter_NextWeaponPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_NextWeaponPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_NextWeaponPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "NextWeaponPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_NextWeaponPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_NextWeaponPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_NextWeaponPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_NextWeaponPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_PrevWeaponPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_PrevWeaponPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_PrevWeaponPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "PrevWeaponPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_PrevWeaponPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_PrevWeaponPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_PrevWeaponPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_PrevWeaponPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_Save_Statics
	{
		struct GEPProjectCharacter_eventSave_Parms
		{
			UGEPSaveGame* saveInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_saveInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_Save_Statics::NewProp_saveInstance = { "saveInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventSave_Parms, saveInstance), Z_Construct_UClass_UGEPSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_Save_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_Save_Statics::NewProp_saveInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_Save_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "Save", nullptr, nullptr, sizeof(GEPProjectCharacter_eventSave_Parms), Z_Construct_UFunction_AGEPProjectCharacter_Save_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_Save_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_Save_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_Save_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_Save()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_Save_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
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
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
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
	struct Z_Construct_UFunction_AGEPProjectCharacter_UnlockWeapon_Statics
	{
		struct GEPProjectCharacter_eventUnlockWeapon_Parms
		{
			TSubclassOf<AActor>  weaponToUnlock;
			int32 cost;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_cost;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_weaponToUnlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_UnlockWeapon_Statics::NewProp_cost = { "cost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventUnlockWeapon_Parms, cost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_UnlockWeapon_Statics::NewProp_weaponToUnlock = { "weaponToUnlock", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventUnlockWeapon_Parms, weaponToUnlock), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_UnlockWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_UnlockWeapon_Statics::NewProp_cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_UnlockWeapon_Statics::NewProp_weaponToUnlock,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_UnlockWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_UnlockWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "UnlockWeapon", nullptr, nullptr, sizeof(GEPProjectCharacter_eventUnlockWeapon_Parms), Z_Construct_UFunction_AGEPProjectCharacter_UnlockWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_UnlockWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_UnlockWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_UnlockWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_UnlockWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_UnlockWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_UpdateEnergy_Statics
	{
		struct GEPProjectCharacter_eventUpdateEnergy_Parms
		{
			float newEnergy;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newEnergy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_UpdateEnergy_Statics::NewProp_newEnergy = { "newEnergy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventUpdateEnergy_Parms, newEnergy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_UpdateEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_UpdateEnergy_Statics::NewProp_newEnergy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_UpdateEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_UpdateEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "UpdateEnergy", nullptr, nullptr, sizeof(GEPProjectCharacter_eventUpdateEnergy_Parms), Z_Construct_UFunction_AGEPProjectCharacter_UpdateEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_UpdateEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_UpdateEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_UpdateEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_UpdateEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_UpdateEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGEPProjectCharacter_UseEnergy_Statics
	{
		struct GEPProjectCharacter_eventUseEnergy_Parms
		{
			float energyToUse;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_energyToUse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGEPProjectCharacter_UseEnergy_Statics::NewProp_energyToUse = { "energyToUse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GEPProjectCharacter_eventUseEnergy_Parms, energyToUse), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGEPProjectCharacter_UseEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGEPProjectCharacter_UseEnergy_Statics::NewProp_energyToUse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGEPProjectCharacter_UseEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGEPProjectCharacter_UseEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGEPProjectCharacter, nullptr, "UseEnergy", nullptr, nullptr, sizeof(GEPProjectCharacter_eventUseEnergy_Parms), Z_Construct_UFunction_AGEPProjectCharacter_UseEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_UseEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGEPProjectCharacter_UseEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGEPProjectCharacter_UseEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGEPProjectCharacter_UseEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGEPProjectCharacter_UseEnergy_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canBeDamaged_MetaData[];
#endif
		static void NewProp_canBeDamaged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canBeDamaged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interactRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ControllerLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ControllerTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_energyComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_energyComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_healthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unlockedWeaponArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_unlockedWeaponArray;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_unlockedWeaponArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_equippedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_equippedWeapon;
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
		{ &Z_Construct_UFunction_AGEPProjectCharacter_DamagePlayer, "DamagePlayer" }, // 2136736278
		{ &Z_Construct_UFunction_AGEPProjectCharacter_FirePressed, "FirePressed" }, // 1437299718
		{ &Z_Construct_UFunction_AGEPProjectCharacter_FireReleased, "FireReleased" }, // 998928494
		{ &Z_Construct_UFunction_AGEPProjectCharacter_GainCurrency, "GainCurrency" }, // 2601200540
		{ &Z_Construct_UFunction_AGEPProjectCharacter_GetAsChar, "GetAsChar" }, // 4271833556
		{ &Z_Construct_UFunction_AGEPProjectCharacter_GetAsPawn, "GetAsPawn" }, // 3918148831
		{ &Z_Construct_UFunction_AGEPProjectCharacter_Init, "Init" }, // 1984092060
		{ &Z_Construct_UFunction_AGEPProjectCharacter_InteractPressed, "InteractPressed" }, // 3168914344
		{ &Z_Construct_UFunction_AGEPProjectCharacter_InteractReleased, "InteractReleased" }, // 641448505
		{ &Z_Construct_UFunction_AGEPProjectCharacter_JumpPressed, "JumpPressed" }, // 402378054
		{ &Z_Construct_UFunction_AGEPProjectCharacter_JumpReleased, "JumpReleased" }, // 3791557464
		{ &Z_Construct_UFunction_AGEPProjectCharacter_Key1Pressed, "Key1Pressed" }, // 2228155099
		{ &Z_Construct_UFunction_AGEPProjectCharacter_Key2Pressed, "Key2Pressed" }, // 2653410446
		{ &Z_Construct_UFunction_AGEPProjectCharacter_Key3Pressed, "Key3Pressed" }, // 3349214231
		{ &Z_Construct_UFunction_AGEPProjectCharacter_Key4Pressed, "Key4Pressed" }, // 382216466
		{ &Z_Construct_UFunction_AGEPProjectCharacter_Key5Pressed, "Key5Pressed" }, // 1654963871
		{ &Z_Construct_UFunction_AGEPProjectCharacter_Key6Pressed, "Key6Pressed" }, // 1735308327
		{ &Z_Construct_UFunction_AGEPProjectCharacter_Key7Pressed, "Key7Pressed" }, // 1490309478
		{ &Z_Construct_UFunction_AGEPProjectCharacter_Key8Pressed, "Key8Pressed" }, // 3554641558
		{ &Z_Construct_UFunction_AGEPProjectCharacter_Load, "Load" }, // 3964633293
		{ &Z_Construct_UFunction_AGEPProjectCharacter_LookUp, "LookUp" }, // 1369221430
		{ &Z_Construct_UFunction_AGEPProjectCharacter_LookUpAtRate, "LookUpAtRate" }, // 2965759498
		{ &Z_Construct_UFunction_AGEPProjectCharacter_LoseCurrency, "LoseCurrency" }, // 362465955
		{ &Z_Construct_UFunction_AGEPProjectCharacter_MoveForward, "MoveForward" }, // 4285191866
		{ &Z_Construct_UFunction_AGEPProjectCharacter_MoveRight, "MoveRight" }, // 2025856939
		{ &Z_Construct_UFunction_AGEPProjectCharacter_NextWeaponPressed, "NextWeaponPressed" }, // 1536957091
		{ &Z_Construct_UFunction_AGEPProjectCharacter_PrevWeaponPressed, "PrevWeaponPressed" }, // 4183989051
		{ &Z_Construct_UFunction_AGEPProjectCharacter_Save, "Save" }, // 391844029
		{ &Z_Construct_UFunction_AGEPProjectCharacter_Turn, "Turn" }, // 1831284628
		{ &Z_Construct_UFunction_AGEPProjectCharacter_TurnAtRate, "TurnAtRate" }, // 3157397947
		{ &Z_Construct_UFunction_AGEPProjectCharacter_UnlockWeapon, "UnlockWeapon" }, // 2894649146
		{ &Z_Construct_UFunction_AGEPProjectCharacter_UpdateEnergy, "UpdateEnergy" }, // 2650445027
		{ &Z_Construct_UFunction_AGEPProjectCharacter_UseEnergy, "UseEnergy" }, // 2925409253
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/GEPProjectCharacter.h" },
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_canBeDamaged_MetaData[] = {
		{ "Category", "PlayerVariables" },
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_canBeDamaged_SetBit(void* Obj)
	{
		((AGEPProjectCharacter*)Obj)->canBeDamaged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_canBeDamaged = { "canBeDamaged", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGEPProjectCharacter), &Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_canBeDamaged_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_canBeDamaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_canBeDamaged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_interactRange_MetaData[] = {
		{ "Category", "PlayerVariables" },
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_interactRange = { "interactRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectCharacter, interactRange), METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_interactRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_interactRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_MouseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_MouseLookUpRate = { "MouseLookUpRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectCharacter, MouseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_MouseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_MouseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_MouseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_MouseTurnRate = { "MouseTurnRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectCharacter, MouseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_MouseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_MouseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_ControllerLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_ControllerLookUpRate = { "ControllerLookUpRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectCharacter, ControllerLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_ControllerLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_ControllerLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_ControllerTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_ControllerTurnRate = { "ControllerTurnRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectCharacter, ControllerTurnRate), METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_ControllerTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_ControllerTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_energyComponent_MetaData[] = {
		{ "Category", "GEPProjectCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_energyComponent = { "energyComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectCharacter, energyComponent), Z_Construct_UClass_UPlayerEnergyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_energyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_energyComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_healthComponent_MetaData[] = {
		{ "Category", "GEPProjectCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_healthComponent = { "healthComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectCharacter, healthComponent), Z_Construct_UClass_UPlayerHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_healthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_healthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_unlockedWeaponArray_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GEPProjectCharacter" },
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_unlockedWeaponArray = { "unlockedWeaponArray", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectCharacter, unlockedWeaponArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_unlockedWeaponArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_unlockedWeaponArray_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_unlockedWeaponArray_Inner = { "unlockedWeaponArray", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_equippedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GEPProjectCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/GEPProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_equippedWeapon = { "equippedWeapon", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGEPProjectCharacter, equippedWeapon), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_equippedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_equippedWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGEPProjectCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_canBeDamaged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_interactRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_MouseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_MouseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_ControllerLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_ControllerTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_energyComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_healthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_unlockedWeaponArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_unlockedWeaponArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGEPProjectCharacter_Statics::NewProp_equippedWeapon,
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
	IMPLEMENT_CLASS(AGEPProjectCharacter, 962084174);
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
