// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEPPROJECT_Weapon_Projectile_generated_h
#error "Weapon_Projectile.generated.h already included, missing '#pragma once' in Weapon_Projectile.h"
#endif
#define GEPPROJECT_Weapon_Projectile_generated_h

#define GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_SPARSE_DATA
#define GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_RPC_WRAPPERS
#define GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon_Projectile(); \
	friend struct Z_Construct_UClass_AWeapon_Projectile_Statics; \
public: \
	DECLARE_CLASS(AWeapon_Projectile, AWeapon_Base, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_Projectile)


#define GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon_Projectile(); \
	friend struct Z_Construct_UClass_AWeapon_Projectile_Statics; \
public: \
	DECLARE_CLASS(AWeapon_Projectile, AWeapon_Base, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_Projectile)


#define GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon_Projectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon_Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_Projectile(AWeapon_Projectile&&); \
	NO_API AWeapon_Projectile(const AWeapon_Projectile&); \
public:


#define GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon_Projectile() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_Projectile(AWeapon_Projectile&&); \
	NO_API AWeapon_Projectile(const AWeapon_Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon_Projectile)


#define GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__projectile() { return STRUCT_OFFSET(AWeapon_Projectile, projectile); } \
	FORCEINLINE static uint32 __PPO__damageRadius() { return STRUCT_OFFSET(AWeapon_Projectile, damageRadius); }


#define GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_15_PROLOG
#define GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_INCLASS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AWeapon_Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Weapons_Weapon_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
