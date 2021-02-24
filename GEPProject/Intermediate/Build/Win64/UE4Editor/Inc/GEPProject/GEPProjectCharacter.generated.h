// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef GEPPROJECT_GEPProjectCharacter_generated_h
#error "GEPProjectCharacter.generated.h already included, missing '#pragma once' in GEPProjectCharacter.h"
#endif
#define GEPPROJECT_GEPProjectCharacter_generated_h

#define GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_SPARSE_DATA
#define GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_RPC_WRAPPERS \
	virtual APawn* GetAsPawn_Implementation(); \
 \
	DECLARE_FUNCTION(execGetAsPawn);


#define GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAsPawn);


#define GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_EVENT_PARMS \
	struct GEPProjectCharacter_eventGetAsPawn_Parms \
	{ \
		APawn* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GEPProjectCharacter_eventGetAsPawn_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGEPProjectCharacter(); \
	friend struct Z_Construct_UClass_AGEPProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AGEPProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AGEPProjectCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AGEPProjectCharacter*>(this); }


#define GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGEPProjectCharacter(); \
	friend struct Z_Construct_UClass_AGEPProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AGEPProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AGEPProjectCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AGEPProjectCharacter*>(this); }


#define GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_STANDARD_CONSTRUCTORS \
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


#define GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGEPProjectCharacter(AGEPProjectCharacter&&); \
	NO_API AGEPProjectCharacter(const AGEPProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGEPProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGEPProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGEPProjectCharacter)


#define GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__childActorGun() { return STRUCT_OFFSET(AGEPProjectCharacter, childActorGun); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AGEPProjectCharacter, FirstPersonCameraComponent); }


#define GEPProject_Source_GEPProject_GEPProjectCharacter_h_13_PROLOG \
	GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_EVENT_PARMS


#define GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_SPARSE_DATA \
	GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_INCLASS \
	GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_SPARSE_DATA \
	GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_GEPProjectCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AGEPProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_GEPProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
