// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GEPPROJECT_GEPProjectProjectile_generated_h
#error "GEPProjectProjectile.generated.h already included, missing '#pragma once' in GEPProjectProjectile.h"
#endif
#define GEPPROJECT_GEPProjectProjectile_generated_h

#define GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_SPARSE_DATA
#define GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGEPProjectProjectile(); \
	friend struct Z_Construct_UClass_AGEPProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AGEPProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AGEPProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGEPProjectProjectile(); \
	friend struct Z_Construct_UClass_AGEPProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AGEPProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AGEPProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGEPProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGEPProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGEPProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGEPProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGEPProjectProjectile(AGEPProjectProjectile&&); \
	NO_API AGEPProjectProjectile(const AGEPProjectProjectile&); \
public:


#define GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGEPProjectProjectile(AGEPProjectProjectile&&); \
	NO_API AGEPProjectProjectile(const AGEPProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGEPProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGEPProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGEPProjectProjectile)


#define GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AGEPProjectProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGEPProjectProjectile, ProjectileMovement); }


#define GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_9_PROLOG
#define GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_INCLASS \
	GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AGEPProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Weapons_GEPProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
