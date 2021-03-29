// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AEnemy_Base;
#ifdef GEPPROJECT_InitableEnemy_generated_h
#error "InitableEnemy.generated.h already included, missing '#pragma once' in InitableEnemy.h"
#endif
#define GEPPROJECT_InitableEnemy_generated_h

#define GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_SPARSE_DATA
#define GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_RPC_WRAPPERS \
	virtual AEnemy_Base* GetEnemyBase_Implementation() { return NULL; }; \
	virtual void Init_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetEnemyBase); \
	DECLARE_FUNCTION(execInit);


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual AEnemy_Base* GetEnemyBase_Implementation() { return NULL; }; \
	virtual void Init_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetEnemyBase); \
	DECLARE_FUNCTION(execInit);


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_EVENT_PARMS \
	struct InitableEnemy_eventGetEnemyBase_Parms \
	{ \
		AEnemy_Base* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InitableEnemy_eventGetEnemyBase_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UInitableEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitableEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UInitableEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitableEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UInitableEnemy(UInitableEnemy&&); \
	GEPPROJECT_API UInitableEnemy(const UInitableEnemy&); \
public:


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UInitableEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UInitableEnemy(UInitableEnemy&&); \
	GEPPROJECT_API UInitableEnemy(const UInitableEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UInitableEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitableEnemy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitableEnemy)


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInitableEnemy(); \
	friend struct Z_Construct_UClass_UInitableEnemy_Statics; \
public: \
	DECLARE_CLASS(UInitableEnemy, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GEPProject"), GEPPROJECT_API) \
	DECLARE_SERIALIZER(UInitableEnemy)


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInitableEnemy() {} \
public: \
	typedef UInitableEnemy UClassType; \
	typedef IInitableEnemy ThisClass; \
	static AEnemy_Base* Execute_GetEnemyBase(UObject* O); \
	static void Execute_Init(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInitableEnemy() {} \
public: \
	typedef UInitableEnemy UClassType; \
	typedef IInitableEnemy ThisClass; \
	static AEnemy_Base* Execute_GetEnemyBase(UObject* O); \
	static void Execute_Init(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_10_PROLOG \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_EVENT_PARMS


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UInitableEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Interfaces_InitableEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
