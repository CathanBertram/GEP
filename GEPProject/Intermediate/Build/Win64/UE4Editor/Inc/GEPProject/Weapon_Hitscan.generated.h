// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEPPROJECT_Weapon_Hitscan_generated_h
#error "Weapon_Hitscan.generated.h already included, missing '#pragma once' in Weapon_Hitscan.h"
#endif
#define GEPPROJECT_Weapon_Hitscan_generated_h

#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_SPARSE_DATA
#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_RPC_WRAPPERS
#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon_Hitscan(); \
	friend struct Z_Construct_UClass_AWeapon_Hitscan_Statics; \
public: \
	DECLARE_CLASS(AWeapon_Hitscan, AWeapon_Base, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_Hitscan)


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon_Hitscan(); \
	friend struct Z_Construct_UClass_AWeapon_Hitscan_Statics; \
public: \
	DECLARE_CLASS(AWeapon_Hitscan, AWeapon_Base, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_Hitscan)


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon_Hitscan(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon_Hitscan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_Hitscan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_Hitscan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_Hitscan(AWeapon_Hitscan&&); \
	NO_API AWeapon_Hitscan(const AWeapon_Hitscan&); \
public:


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_Hitscan(AWeapon_Hitscan&&); \
	NO_API AWeapon_Hitscan(const AWeapon_Hitscan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_Hitscan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_Hitscan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon_Hitscan)


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__range() { return STRUCT_OFFSET(AWeapon_Hitscan, range); } \
	FORCEINLINE static uint32 __PPO__shootCooldown() { return STRUCT_OFFSET(AWeapon_Hitscan, shootCooldown); } \
	FORCEINLINE static uint32 __PPO__damage() { return STRUCT_OFFSET(AWeapon_Hitscan, damage); } \
	FORCEINLINE static uint32 __PPO__shootSound() { return STRUCT_OFFSET(AWeapon_Hitscan, shootSound); } \
	FORCEINLINE static uint32 __PPO__muzzleFlash() { return STRUCT_OFFSET(AWeapon_Hitscan, muzzleFlash); }


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_12_PROLOG
#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_INCLASS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AWeapon_Hitscan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
