// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEPPROJECT_GEPProjectGameMode_generated_h
#error "GEPProjectGameMode.generated.h already included, missing '#pragma once' in GEPProjectGameMode.h"
#endif
#define GEPPROJECT_GEPProjectGameMode_generated_h

#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_SPARSE_DATA
#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoseCurrency); \
	DECLARE_FUNCTION(execGainCurrency);


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoseCurrency); \
	DECLARE_FUNCTION(execGainCurrency);


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGEPProjectGameMode(); \
	friend struct Z_Construct_UClass_AGEPProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AGEPProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AGEPProjectGameMode)


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGEPProjectGameMode(); \
	friend struct Z_Construct_UClass_AGEPProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(AGEPProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AGEPProjectGameMode)


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_STANDARD_CONSTRUCTORS \
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


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGEPProjectGameMode(AGEPProjectGameMode&&); \
	NO_API AGEPProjectGameMode(const AGEPProjectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGEPProjectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGEPProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGEPProjectGameMode)


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__playerControllers() { return STRUCT_OFFSET(AGEPProjectGameMode, playerControllers); }


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_9_PROLOG
#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_SPARSE_DATA \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_INCLASS \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_SPARSE_DATA \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_GEPProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AGEPProjectGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_GEPProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
