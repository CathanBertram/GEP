// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AEnemy_Base;
#ifdef GEPPROJECT_EnemySpawner_generated_h
#error "EnemySpawner.generated.h already included, missing '#pragma once' in EnemySpawner.h"
#endif
#define GEPPROJECT_EnemySpawner_generated_h

#define GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_SPARSE_DATA
#define GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_RPC_WRAPPERS \
	virtual void Init_Implementation(); \
 \
	DECLARE_FUNCTION(execEnemyDied); \
	DECLARE_FUNCTION(execInit);


#define GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnemyDied); \
	DECLARE_FUNCTION(execInit);


#define GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_EVENT_PARMS
#define GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemySpawner(); \
	friend struct Z_Construct_UClass_AEnemySpawner_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawner) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemySpawner*>(this); }


#define GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemySpawner(); \
	friend struct Z_Construct_UClass_AEnemySpawner_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawner) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemySpawner*>(this); }


#define GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemySpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemySpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawner(AEnemySpawner&&); \
	NO_API AEnemySpawner(const AEnemySpawner&); \
public:


#define GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawner(AEnemySpawner&&); \
	NO_API AEnemySpawner(const AEnemySpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemySpawner)


#define GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__enemyList() { return STRUCT_OFFSET(AEnemySpawner, enemyList); } \
	FORCEINLINE static uint32 __PPO__maxEnemyCount() { return STRUCT_OFFSET(AEnemySpawner, maxEnemyCount); }


#define GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_12_PROLOG \
	GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_EVENT_PARMS


#define GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_SPARSE_DATA \
	GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_INCLASS \
	GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_SPARSE_DATA \
	GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Enemy_EnemySpawner_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AEnemySpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Enemy_EnemySpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
