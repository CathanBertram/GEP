// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEPPROJECT_Weapon_Hitscan_Charge_generated_h
#error "Weapon_Hitscan_Charge.generated.h already included, missing '#pragma once' in Weapon_Hitscan_Charge.h"
#endif
#define GEPPROJECT_Weapon_Hitscan_Charge_generated_h

#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_SPARSE_DATA
#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_RPC_WRAPPERS \
	virtual void FireReleased_Implementation(float curEnergy); \
 \
	DECLARE_FUNCTION(execFireReleased);


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireReleased);


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_EVENT_PARMS \
	struct Weapon_Hitscan_Charge_eventFireReleased_Parms \
	{ \
		float curEnergy; \
	};


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon_Hitscan_Charge(); \
	friend struct Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics; \
public: \
	DECLARE_CLASS(AWeapon_Hitscan_Charge, AWeapon_Hitscan, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_Hitscan_Charge) \
	virtual UObject* _getUObject() const override { return const_cast<AWeapon_Hitscan_Charge*>(this); }


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon_Hitscan_Charge(); \
	friend struct Z_Construct_UClass_AWeapon_Hitscan_Charge_Statics; \
public: \
	DECLARE_CLASS(AWeapon_Hitscan_Charge, AWeapon_Hitscan, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_Hitscan_Charge) \
	virtual UObject* _getUObject() const override { return const_cast<AWeapon_Hitscan_Charge*>(this); }


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon_Hitscan_Charge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon_Hitscan_Charge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_Hitscan_Charge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_Hitscan_Charge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_Hitscan_Charge(AWeapon_Hitscan_Charge&&); \
	NO_API AWeapon_Hitscan_Charge(const AWeapon_Hitscan_Charge&); \
public:


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon_Hitscan_Charge() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_Hitscan_Charge(AWeapon_Hitscan_Charge&&); \
	NO_API AWeapon_Hitscan_Charge(const AWeapon_Hitscan_Charge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_Hitscan_Charge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_Hitscan_Charge); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon_Hitscan_Charge)


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__chargeTime() { return STRUCT_OFFSET(AWeapon_Hitscan_Charge, chargeTime); } \
	FORCEINLINE static uint32 __PPO__chargeSound() { return STRUCT_OFFSET(AWeapon_Hitscan_Charge, chargeSound); }


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_14_PROLOG \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_EVENT_PARMS


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_INCLASS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AWeapon_Hitscan_Charge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Weapons_Weapon_Hitscan_Charge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
