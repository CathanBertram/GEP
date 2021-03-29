// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AEnemySpawner;
#ifdef GEPPROJECT_InitableEnemySpawner_generated_h
#error "InitableEnemySpawner.generated.h already included, missing '#pragma once' in InitableEnemySpawner.h"
#endif
#define GEPPROJECT_InitableEnemySpawner_generated_h

#define GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_SPARSE_DATA
#define GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_RPC_WRAPPERS \
	virtual AEnemySpawner* GetEnemySpawner_Implementation() { return NULL; }; \
	virtual void Init_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetEnemySpawner); \
	DECLARE_FUNCTION(execInit);


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual AEnemySpawner* GetEnemySpawner_Implementation() { return NULL; }; \
	virtual void Init_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetEnemySpawner); \
	DECLARE_FUNCTION(execInit);


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_EVENT_PARMS \
	struct InitableEnemySpawner_eventGetEnemySpawner_Parms \
	{ \
		AEnemySpawner* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InitableEnemySpawner_eventGetEnemySpawner_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UInitableEnemySpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitableEnemySpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UInitableEnemySpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitableEnemySpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UInitableEnemySpawner(UInitableEnemySpawner&&); \
	GEPPROJECT_API UInitableEnemySpawner(const UInitableEnemySpawner&); \
public:


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UInitableEnemySpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UInitableEnemySpawner(UInitableEnemySpawner&&); \
	GEPPROJECT_API UInitableEnemySpawner(const UInitableEnemySpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UInitableEnemySpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitableEnemySpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitableEnemySpawner)


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInitableEnemySpawner(); \
	friend struct Z_Construct_UClass_UInitableEnemySpawner_Statics; \
public: \
	DECLARE_CLASS(UInitableEnemySpawner, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GEPProject"), GEPPROJECT_API) \
	DECLARE_SERIALIZER(UInitableEnemySpawner)


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInitableEnemySpawner() {} \
public: \
	typedef UInitableEnemySpawner UClassType; \
	typedef IInitableEnemySpawner ThisClass; \
	static AEnemySpawner* Execute_GetEnemySpawner(UObject* O); \
	static void Execute_Init(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInitableEnemySpawner() {} \
public: \
	typedef UInitableEnemySpawner UClassType; \
	typedef IInitableEnemySpawner ThisClass; \
	static AEnemySpawner* Execute_GetEnemySpawner(UObject* O); \
	static void Execute_Init(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_10_PROLOG \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_EVENT_PARMS


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UInitableEnemySpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Interfaces_InitableEnemySpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
