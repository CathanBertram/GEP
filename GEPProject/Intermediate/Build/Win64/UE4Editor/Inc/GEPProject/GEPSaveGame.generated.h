// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGEPSaveGame;
#ifdef GEPPROJECT_GEPSaveGame_generated_h
#error "GEPSaveGame.generated.h already included, missing '#pragma once' in GEPSaveGame.h"
#endif
#define GEPPROJECT_GEPSaveGame_generated_h

#define GEPProject_Source_GEPProject_GEPSaveGame_h_19_SPARSE_DATA
#define GEPProject_Source_GEPProject_GEPSaveGame_h_19_RPC_WRAPPERS \
	virtual UGEPSaveGame* GetGEPSave_Implementation(); \
 \
	DECLARE_FUNCTION(execGetGEPSave);


#define GEPProject_Source_GEPProject_GEPSaveGame_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGEPSave);


#define GEPProject_Source_GEPProject_GEPSaveGame_h_19_EVENT_PARMS \
	struct GEPSaveGame_eventGetGEPSave_Parms \
	{ \
		UGEPSaveGame* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GEPSaveGame_eventGetGEPSave_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GEPProject_Source_GEPProject_GEPSaveGame_h_19_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_GEPSaveGame_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGEPSaveGame(); \
	friend struct Z_Construct_UClass_UGEPSaveGame_Statics; \
public: \
	DECLARE_CLASS(UGEPSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(UGEPSaveGame) \
	virtual UObject* _getUObject() const override { return const_cast<UGEPSaveGame*>(this); }


#define GEPProject_Source_GEPProject_GEPSaveGame_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUGEPSaveGame(); \
	friend struct Z_Construct_UClass_UGEPSaveGame_Statics; \
public: \
	DECLARE_CLASS(UGEPSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(UGEPSaveGame) \
	virtual UObject* _getUObject() const override { return const_cast<UGEPSaveGame*>(this); }


#define GEPProject_Source_GEPProject_GEPSaveGame_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGEPSaveGame(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGEPSaveGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGEPSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGEPSaveGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGEPSaveGame(UGEPSaveGame&&); \
	NO_API UGEPSaveGame(const UGEPSaveGame&); \
public:


#define GEPProject_Source_GEPProject_GEPSaveGame_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGEPSaveGame(UGEPSaveGame&&); \
	NO_API UGEPSaveGame(const UGEPSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGEPSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGEPSaveGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGEPSaveGame)


#define GEPProject_Source_GEPProject_GEPSaveGame_h_19_PRIVATE_PROPERTY_OFFSET
#define GEPProject_Source_GEPProject_GEPSaveGame_h_16_PROLOG \
	GEPProject_Source_GEPProject_GEPSaveGame_h_19_EVENT_PARMS


#define GEPProject_Source_GEPProject_GEPSaveGame_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_GEPSaveGame_h_19_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_GEPSaveGame_h_19_SPARSE_DATA \
	GEPProject_Source_GEPProject_GEPSaveGame_h_19_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_GEPSaveGame_h_19_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_GEPSaveGame_h_19_INCLASS \
	GEPProject_Source_GEPProject_GEPSaveGame_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_GEPSaveGame_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_GEPSaveGame_h_19_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_GEPSaveGame_h_19_SPARSE_DATA \
	GEPProject_Source_GEPProject_GEPSaveGame_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_GEPSaveGame_h_19_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_GEPSaveGame_h_19_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_GEPSaveGame_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UGEPSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_GEPSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
