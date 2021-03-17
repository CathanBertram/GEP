// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGEPSaveGame;
class AGEPProjectCharacter;
class APawn;
#ifdef GEPPROJECT_GEPProjectCharacter_generated_h
#error "GEPProjectCharacter.generated.h already included, missing '#pragma once' in GEPProjectCharacter.h"
#endif
#define GEPPROJECT_GEPProjectCharacter_generated_h

#define GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_SPARSE_DATA
#define GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_RPC_WRAPPERS \
	virtual void Turn_Implementation(float value); \
	virtual void LookUp_Implementation(float value); \
	virtual void TurnAtRate_Implementation(float value); \
	virtual void LookUpAtRate_Implementation(float value); \
	virtual void MoveRight_Implementation(float value); \
	virtual void MoveForward_Implementation(float value); \
	virtual void Key5Pressed_Implementation(); \
	virtual void Key4Pressed_Implementation(); \
	virtual void Key3Pressed_Implementation(); \
	virtual void Key2Pressed_Implementation(); \
	virtual void Key1Pressed_Implementation(); \
	virtual void InteractReleased_Implementation(); \
	virtual void InteractPressed_Implementation(); \
	virtual void FireReleased_Implementation(); \
	virtual void FirePressed_Implementation(); \
	virtual void JumpReleased_Implementation(); \
	virtual void JumpPressed_Implementation(); \
	virtual AGEPProjectCharacter* GetAsChar_Implementation(); \
	virtual void Init_Implementation(); \
	virtual APawn* GetAsPawn_Implementation(); \
 \
	DECLARE_FUNCTION(execUnlockWeapon); \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execLoseCurrency); \
	DECLARE_FUNCTION(execGainCurrency); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execTurnAtRate); \
	DECLARE_FUNCTION(execLookUpAtRate); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execKey5Pressed); \
	DECLARE_FUNCTION(execKey4Pressed); \
	DECLARE_FUNCTION(execKey3Pressed); \
	DECLARE_FUNCTION(execKey2Pressed); \
	DECLARE_FUNCTION(execKey1Pressed); \
	DECLARE_FUNCTION(execInteractReleased); \
	DECLARE_FUNCTION(execInteractPressed); \
	DECLARE_FUNCTION(execFireReleased); \
	DECLARE_FUNCTION(execFirePressed); \
	DECLARE_FUNCTION(execJumpReleased); \
	DECLARE_FUNCTION(execJumpPressed); \
	DECLARE_FUNCTION(execGetAsChar); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetAsPawn);


#define GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnlockWeapon); \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execLoseCurrency); \
	DECLARE_FUNCTION(execGainCurrency); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execTurnAtRate); \
	DECLARE_FUNCTION(execLookUpAtRate); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execKey5Pressed); \
	DECLARE_FUNCTION(execKey4Pressed); \
	DECLARE_FUNCTION(execKey3Pressed); \
	DECLARE_FUNCTION(execKey2Pressed); \
	DECLARE_FUNCTION(execKey1Pressed); \
	DECLARE_FUNCTION(execInteractReleased); \
	DECLARE_FUNCTION(execInteractPressed); \
	DECLARE_FUNCTION(execFireReleased); \
	DECLARE_FUNCTION(execFirePressed); \
	DECLARE_FUNCTION(execJumpReleased); \
	DECLARE_FUNCTION(execJumpPressed); \
	DECLARE_FUNCTION(execGetAsChar); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetAsPawn);


#define GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_EVENT_PARMS \
	struct GEPProjectCharacter_eventGetAsChar_Parms \
	{ \
		AGEPProjectCharacter* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GEPProjectCharacter_eventGetAsChar_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GEPProjectCharacter_eventGetAsPawn_Parms \
	{ \
		APawn* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GEPProjectCharacter_eventGetAsPawn_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GEPProjectCharacter_eventLookUp_Parms \
	{ \
		float value; \
	}; \
	struct GEPProjectCharacter_eventLookUpAtRate_Parms \
	{ \
		float value; \
	}; \
	struct GEPProjectCharacter_eventMoveForward_Parms \
	{ \
		float value; \
	}; \
	struct GEPProjectCharacter_eventMoveRight_Parms \
	{ \
		float value; \
	}; \
	struct GEPProjectCharacter_eventTurn_Parms \
	{ \
		float value; \
	}; \
	struct GEPProjectCharacter_eventTurnAtRate_Parms \
	{ \
		float value; \
	};


#define GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGEPProjectCharacter(); \
	friend struct Z_Construct_UClass_AGEPProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AGEPProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AGEPProjectCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AGEPProjectCharacter*>(this); }


#define GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAGEPProjectCharacter(); \
	friend struct Z_Construct_UClass_AGEPProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AGEPProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AGEPProjectCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AGEPProjectCharacter*>(this); }


#define GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGEPProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGEPProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGEPProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGEPProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGEPProjectCharacter(AGEPProjectCharacter&&); \
	NO_API AGEPProjectCharacter(const AGEPProjectCharacter&); \
public:


#define GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGEPProjectCharacter(AGEPProjectCharacter&&); \
	NO_API AGEPProjectCharacter(const AGEPProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGEPProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGEPProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGEPProjectCharacter)


#define GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__equippedWeapon() { return STRUCT_OFFSET(AGEPProjectCharacter, equippedWeapon); } \
	FORCEINLINE static uint32 __PPO__unlockedWeaponArray() { return STRUCT_OFFSET(AGEPProjectCharacter, unlockedWeaponArray); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AGEPProjectCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__interactRange() { return STRUCT_OFFSET(AGEPProjectCharacter, interactRange); } \
	FORCEINLINE static uint32 __PPO__maxHealth() { return STRUCT_OFFSET(AGEPProjectCharacter, maxHealth); } \
	FORCEINLINE static uint32 __PPO__currentHealth() { return STRUCT_OFFSET(AGEPProjectCharacter, currentHealth); }


#define GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_14_PROLOG \
	GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_EVENT_PARMS


#define GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_SPARSE_DATA \
	GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_INCLASS \
	GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_SPARSE_DATA \
	GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AGEPProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Player_GEPProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
