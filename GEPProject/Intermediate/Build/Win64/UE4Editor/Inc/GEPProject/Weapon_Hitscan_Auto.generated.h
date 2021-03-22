// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEPPROJECT_Weapon_Hitscan_Auto_generated_h
#error "Weapon_Hitscan_Auto.generated.h already included, missing '#pragma once' in Weapon_Hitscan_Auto.h"
#endif
#define GEPPROJECT_Weapon_Hitscan_Auto_generated_h

#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_SPARSE_DATA
#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_RPC_WRAPPERS \
	virtual void FireReleased_Implementation(float curEnergy); \
 \
	DECLARE_FUNCTION(execFireReleased);


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireReleased);


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_EVENT_PARMS \
	struct Weapon_Hitscan_Auto_eventFireReleased_Parms \
	{ \
		float curEnergy; \
	};


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon_Hitscan_Auto(); \
	friend struct Z_Construct_UClass_AWeapon_Hitscan_Auto_Statics; \
public: \
	DECLARE_CLASS(AWeapon_Hitscan_Auto, AWeapon_Hitscan, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_Hitscan_Auto) \
	virtual UObject* _getUObject() const override { return const_cast<AWeapon_Hitscan_Auto*>(this); }


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon_Hitscan_Auto(); \
	friend struct Z_Construct_UClass_AWeapon_Hitscan_Auto_Statics; \
public: \
	DECLARE_CLASS(AWeapon_Hitscan_Auto, AWeapon_Hitscan, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_Hitscan_Auto) \
	virtual UObject* _getUObject() const override { return const_cast<AWeapon_Hitscan_Auto*>(this); }


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon_Hitscan_Auto(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon_Hitscan_Auto) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_Hitscan_Auto); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_Hitscan_Auto); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_Hitscan_Auto(AWeapon_Hitscan_Auto&&); \
	NO_API AWeapon_Hitscan_Auto(const AWeapon_Hitscan_Auto&); \
public:


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon_Hitscan_Auto() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_Hitscan_Auto(AWeapon_Hitscan_Auto&&); \
	NO_API AWeapon_Hitscan_Auto(const AWeapon_Hitscan_Auto&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_Hitscan_Auto); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_Hitscan_Auto); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon_Hitscan_Auto)


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_PRIVATE_PROPERTY_OFFSET
#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_15_PROLOG \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_EVENT_PARMS


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_INCLASS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AWeapon_Hitscan_Auto>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Auto_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
