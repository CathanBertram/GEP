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
#ifdef GEPPROJECT_GrenadeProjectile_generated_h
#error "GrenadeProjectile.generated.h already included, missing '#pragma once' in GrenadeProjectile.h"
#endif
#define GEPPROJECT_GrenadeProjectile_generated_h

#define GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_SPARSE_DATA
#define GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrenadeProjectile(); \
	friend struct Z_Construct_UClass_AGrenadeProjectile_Statics; \
public: \
	DECLARE_CLASS(AGrenadeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AGrenadeProjectile)


#define GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGrenadeProjectile(); \
	friend struct Z_Construct_UClass_AGrenadeProjectile_Statics; \
public: \
	DECLARE_CLASS(AGrenadeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AGrenadeProjectile)


#define GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrenadeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrenadeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrenadeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrenadeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrenadeProjectile(AGrenadeProjectile&&); \
	NO_API AGrenadeProjectile(const AGrenadeProjectile&); \
public:


#define GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrenadeProjectile(AGrenadeProjectile&&); \
	NO_API AGrenadeProjectile(const AGrenadeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrenadeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrenadeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrenadeProjectile)


#define GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__damage() { return STRUCT_OFFSET(AGrenadeProjectile, damage); } \
	FORCEINLINE static uint32 __PPO__damageRadius() { return STRUCT_OFFSET(AGrenadeProjectile, damageRadius); }


#define GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_11_PROLOG
#define GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_INCLASS \
	GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AGrenadeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Weapons_GrenadeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
