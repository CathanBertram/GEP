// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEPPROJECT_Inputable_generated_h
#error "Inputable.generated.h already included, missing '#pragma once' in Inputable.h"
#endif
#define GEPPROJECT_Inputable_generated_h

#define GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_SPARSE_DATA
#define GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_RPC_WRAPPERS \
	virtual void Turn_Implementation(float value) {}; \
	virtual void LookUp_Implementation(float value) {}; \
	virtual void TurnAtRate_Implementation(float value) {}; \
	virtual void LookUpAtRate_Implementation(float value) {}; \
	virtual void MoveRight_Implementation(float value) {}; \
	virtual void MoveForward_Implementation(float value) {}; \
	virtual void InteractReleased_Implementation() {}; \
	virtual void InteractPressed_Implementation() {}; \
	virtual void FireReleased_Implementation() {}; \
	virtual void FirePressed_Implementation() {}; \
	virtual void JumpReleased_Implementation() {}; \
	virtual void JumpPressed_Implementation() {}; \
 \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execTurnAtRate); \
	DECLARE_FUNCTION(execLookUpAtRate); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execInteractReleased); \
	DECLARE_FUNCTION(execInteractPressed); \
	DECLARE_FUNCTION(execFireReleased); \
	DECLARE_FUNCTION(execFirePressed); \
	DECLARE_FUNCTION(execJumpReleased); \
	DECLARE_FUNCTION(execJumpPressed);


#define GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Turn_Implementation(float value) {}; \
	virtual void LookUp_Implementation(float value) {}; \
	virtual void TurnAtRate_Implementation(float value) {}; \
	virtual void LookUpAtRate_Implementation(float value) {}; \
	virtual void MoveRight_Implementation(float value) {}; \
	virtual void MoveForward_Implementation(float value) {}; \
	virtual void InteractReleased_Implementation() {}; \
	virtual void InteractPressed_Implementation() {}; \
	virtual void FireReleased_Implementation() {}; \
	virtual void FirePressed_Implementation() {}; \
	virtual void JumpReleased_Implementation() {}; \
	virtual void JumpPressed_Implementation() {}; \
 \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execTurnAtRate); \
	DECLARE_FUNCTION(execLookUpAtRate); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execInteractReleased); \
	DECLARE_FUNCTION(execInteractPressed); \
	DECLARE_FUNCTION(execFireReleased); \
	DECLARE_FUNCTION(execFirePressed); \
	DECLARE_FUNCTION(execJumpReleased); \
	DECLARE_FUNCTION(execJumpPressed);


#define GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_EVENT_PARMS \
	struct Inputable_eventLookUp_Parms \
	{ \
		float value; \
	}; \
	struct Inputable_eventLookUpAtRate_Parms \
	{ \
		float value; \
	}; \
	struct Inputable_eventMoveForward_Parms \
	{ \
		float value; \
	}; \
	struct Inputable_eventMoveRight_Parms \
	{ \
		float value; \
	}; \
	struct Inputable_eventTurn_Parms \
	{ \
		float value; \
	}; \
	struct Inputable_eventTurnAtRate_Parms \
	{ \
		float value; \
	};


#define GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UInputable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UInputable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UInputable(UInputable&&); \
	GEPPROJECT_API UInputable(const UInputable&); \
public:


#define GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UInputable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UInputable(UInputable&&); \
	GEPPROJECT_API UInputable(const UInputable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UInputable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputable)


#define GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInputable(); \
	friend struct Z_Construct_UClass_UInputable_Statics; \
public: \
	DECLARE_CLASS(UInputable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GEPProject"), GEPPROJECT_API) \
	DECLARE_SERIALIZER(UInputable)


#define GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInputable() {} \
public: \
	typedef UInputable UClassType; \
	typedef IInputable ThisClass; \
	static void Execute_FirePressed(UObject* O); \
	static void Execute_FireReleased(UObject* O); \
	static void Execute_InteractPressed(UObject* O); \
	static void Execute_InteractReleased(UObject* O); \
	static void Execute_JumpPressed(UObject* O); \
	static void Execute_JumpReleased(UObject* O); \
	static void Execute_LookUp(UObject* O, float value); \
	static void Execute_LookUpAtRate(UObject* O, float value); \
	static void Execute_MoveForward(UObject* O, float value); \
	static void Execute_MoveRight(UObject* O, float value); \
	static void Execute_Turn(UObject* O, float value); \
	static void Execute_TurnAtRate(UObject* O, float value); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInputable() {} \
public: \
	typedef UInputable UClassType; \
	typedef IInputable ThisClass; \
	static void Execute_FirePressed(UObject* O); \
	static void Execute_FireReleased(UObject* O); \
	static void Execute_InteractPressed(UObject* O); \
	static void Execute_InteractReleased(UObject* O); \
	static void Execute_JumpPressed(UObject* O); \
	static void Execute_JumpReleased(UObject* O); \
	static void Execute_LookUp(UObject* O, float value); \
	static void Execute_LookUpAtRate(UObject* O, float value); \
	static void Execute_MoveForward(UObject* O, float value); \
	static void Execute_MoveRight(UObject* O, float value); \
	static void Execute_Turn(UObject* O, float value); \
	static void Execute_TurnAtRate(UObject* O, float value); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_Inputable_h_10_PROLOG \
	GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_EVENT_PARMS


#define GEPProject_Source_GEPProject_Interfaces_Inputable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_Inputable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_Inputable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UInputable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Interfaces_Inputable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
