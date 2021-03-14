// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEPPROJECT_Weapon_Shotgun_generated_h
#error "Weapon_Shotgun.generated.h already included, missing '#pragma once' in Weapon_Shotgun.h"
#endif
#define GEPPROJECT_Weapon_Shotgun_generated_h

#define GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_SPARSE_DATA
#define GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_RPC_WRAPPERS
#define GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon_Shotgun(); \
	friend struct Z_Construct_UClass_AWeapon_Shotgun_Statics; \
public: \
	DECLARE_CLASS(AWeapon_Shotgun, AWeapon_Hitscan, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_Shotgun)


#define GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon_Shotgun(); \
	friend struct Z_Construct_UClass_AWeapon_Shotgun_Statics; \
public: \
	DECLARE_CLASS(AWeapon_Shotgun, AWeapon_Hitscan, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_Shotgun)


#define GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon_Shotgun(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon_Shotgun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_Shotgun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_Shotgun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_Shotgun(AWeapon_Shotgun&&); \
	NO_API AWeapon_Shotgun(const AWeapon_Shotgun&); \
public:


#define GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon_Shotgun() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_Shotgun(AWeapon_Shotgun&&); \
	NO_API AWeapon_Shotgun(const AWeapon_Shotgun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_Shotgun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_Shotgun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon_Shotgun)


#define GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pelletCount() { return STRUCT_OFFSET(AWeapon_Shotgun, pelletCount); } \
	FORCEINLINE static uint32 __PPO__spread() { return STRUCT_OFFSET(AWeapon_Shotgun, spread); }


#define GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_12_PROLOG
#define GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_INCLASS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AWeapon_Shotgun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Weapons_Weapon_Shotgun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
