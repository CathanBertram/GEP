// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGEPSaveGame;
#ifdef GEPPROJECT_GetGEPSaveGame_generated_h
#error "GetGEPSaveGame.generated.h already included, missing '#pragma once' in GetGEPSaveGame.h"
#endif
#define GEPPROJECT_GetGEPSaveGame_generated_h

#define GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_SPARSE_DATA
#define GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_RPC_WRAPPERS \
	virtual UGEPSaveGame* GetGEPSave_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetGEPSave);


#define GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UGEPSaveGame* GetGEPSave_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetGEPSave);


#define GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_EVENT_PARMS \
	struct GetGEPSaveGame_eventGetGEPSave_Parms \
	{ \
		UGEPSaveGame* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GetGEPSaveGame_eventGetGEPSave_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UGetGEPSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetGEPSaveGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UGetGEPSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetGEPSaveGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UGetGEPSaveGame(UGetGEPSaveGame&&); \
	GEPPROJECT_API UGetGEPSaveGame(const UGetGEPSaveGame&); \
public:


#define GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UGetGEPSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UGetGEPSaveGame(UGetGEPSaveGame&&); \
	GEPPROJECT_API UGetGEPSaveGame(const UGetGEPSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UGetGEPSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetGEPSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetGEPSaveGame)


#define GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGetGEPSaveGame(); \
	friend struct Z_Construct_UClass_UGetGEPSaveGame_Statics; \
public: \
	DECLARE_CLASS(UGetGEPSaveGame, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GEPProject"), GEPPROJECT_API) \
	DECLARE_SERIALIZER(UGetGEPSaveGame)


#define GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGetGEPSaveGame() {} \
public: \
	typedef UGetGEPSaveGame UClassType; \
	typedef IGetGEPSaveGame ThisClass; \
	static UGEPSaveGame* Execute_GetGEPSave(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IGetGEPSaveGame() {} \
public: \
	typedef UGetGEPSaveGame UClassType; \
	typedef IGetGEPSaveGame ThisClass; \
	static UGEPSaveGame* Execute_GetGEPSave(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_10_PROLOG \
	GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_EVENT_PARMS


#define GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UGetGEPSaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Interfaces_GetGEPSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
