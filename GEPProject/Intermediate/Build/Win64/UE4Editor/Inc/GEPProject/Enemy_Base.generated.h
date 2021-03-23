// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AEnemy_Base;
#ifdef GEPPROJECT_Enemy_Base_generated_h
#error "Enemy_Base.generated.h already included, missing '#pragma once' in Enemy_Base.h"
#endif
#define GEPPROJECT_Enemy_Base_generated_h

#define GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_12_DELEGATE \
struct _Script_GEPProject_eventOnDeath_Parms \
{ \
	AEnemy_Base* enemy; \
}; \
static inline void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath, AEnemy_Base* enemy) \
{ \
	_Script_GEPProject_eventOnDeath_Parms Parms; \
	Parms.enemy=enemy; \
	OnDeath.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_SPARSE_DATA
#define GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_RPC_WRAPPERS \
	virtual AEnemy_Base* GetEnemyBase_Implementation(); \
	virtual void Init_Implementation(); \
	virtual void GetShot_Implementation(); \
 \
	DECLARE_FUNCTION(execShotDeath); \
	DECLARE_FUNCTION(execEndOfLifetime); \
	DECLARE_FUNCTION(execGetEnemyBase); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetShot);


#define GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShotDeath); \
	DECLARE_FUNCTION(execEndOfLifetime); \
	DECLARE_FUNCTION(execGetEnemyBase); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetShot);


#define GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_EVENT_PARMS \
	struct Enemy_Base_eventGetEnemyBase_Parms \
	{ \
		AEnemy_Base* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Enemy_Base_eventGetEnemyBase_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy_Base(); \
	friend struct Z_Construct_UClass_AEnemy_Base_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Base, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Base) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemy_Base*>(this); }


#define GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy_Base(); \
	friend struct Z_Construct_UClass_AEnemy_Base_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Base, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Base) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemy_Base*>(this); }


#define GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Base(AEnemy_Base&&); \
	NO_API AEnemy_Base(const AEnemy_Base&); \
public:


#define GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Base(AEnemy_Base&&); \
	NO_API AEnemy_Base(const AEnemy_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy_Base)


#define GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__boxMesh() { return STRUCT_OFFSET(AEnemy_Base, boxMesh); } \
	FORCEINLINE static uint32 __PPO__explosionSound() { return STRUCT_OFFSET(AEnemy_Base, explosionSound); } \
	FORCEINLINE static uint32 __PPO__explosionParticles() { return STRUCT_OFFSET(AEnemy_Base, explosionParticles); } \
	FORCEINLINE static uint32 __PPO__currencyToDrop() { return STRUCT_OFFSET(AEnemy_Base, currencyToDrop); } \
	FORCEINLINE static uint32 __PPO__damage() { return STRUCT_OFFSET(AEnemy_Base, damage); }


#define GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_14_PROLOG \
	GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_EVENT_PARMS


#define GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_SPARSE_DATA \
	GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_INCLASS \
	GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_SPARSE_DATA \
	GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Enemy_Enemy_Base_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AEnemy_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Enemy_Enemy_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
