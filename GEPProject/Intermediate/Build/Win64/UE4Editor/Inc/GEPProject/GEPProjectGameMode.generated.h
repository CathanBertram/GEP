// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGEPProjectGameMode;
#ifdef GEPPROJECT_GEPProjectGameMode_generated_h
#error "GEPProjectGameMode.generated.h already included, missing '#pragma once' in GEPProjectGameMode.h"
#endif
#define GEPPROJECT_GEPProjectGameMode_generated_h

#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_SPARSE_DATA
#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_RPC_WRAPPERS \
	virtual AGEPProjectGameMode* GetGEPGamemode_Implementation(); \
 \
	DECLARE_FUNCTION(execUpdateHealthPercent); \
	DECLARE_FUNCTION(execUpdateCurrency); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execGetCurrency); \
	DECLARE_FUNCTION(execGetGEPGamemode);


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateHealthPercent); \
	DECLARE_FUNCTION(execUpdateCurrency); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execGetCurrency); \
	DECLARE_FUNCTION(execGetGEPGamemode);


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_EVENT_PARMS \
	struct GEPProjectGameMode_eventGetGEPGamemode_Parms \
	{ \
		AGEPProjectGameMode* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GEPProjectGameMode_eventGetGEPGamemode_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGEPProjectGameMode(); \
	friend struct Z_Construct_UClass_AGEPProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AGEPProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AGEPProjectGameMode) \
	virtual UObject* _getUObject() const override { return const_cast<AGEPProjectGameMode*>(this); }


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAGEPProjectGameMode(); \
	friend struct Z_Construct_UClass_AGEPProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AGEPProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AGEPProjectGameMode) \
	virtual UObject* _getUObject() const override { return const_cast<AGEPProjectGameMode*>(this); }


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGEPProjectGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGEPProjectGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGEPProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGEPProjectGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGEPProjectGameMode(AGEPProjectGameMode&&); \
	NO_API AGEPProjectGameMode(const AGEPProjectGameMode&); \
public:


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGEPProjectGameMode(AGEPProjectGameMode&&); \
	NO_API AGEPProjectGameMode(const AGEPProjectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGEPProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGEPProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGEPProjectGameMode)


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__playerControllers() { return STRUCT_OFFSET(AGEPProjectGameMode, playerControllers); } \
	FORCEINLINE static uint32 __PPO__upgradeSystem() { return STRUCT_OFFSET(AGEPProjectGameMode, upgradeSystem); }


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_15_PROLOG \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_EVENT_PARMS


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_SPARSE_DATA \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_INCLASS \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_SPARSE_DATA \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AGEPProjectGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_GEPProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
