// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEPPROJECT_Weapon_Base_generated_h
#error "Weapon_Base.generated.h already included, missing '#pragma once' in Weapon_Base.h"
#endif
#define GEPPROJECT_Weapon_Base_generated_h

#define GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_SPARSE_DATA
#define GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_RPC_WRAPPERS \
	virtual bool Fire_Implementation(); \
 \
	DECLARE_FUNCTION(execFire);


#define GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire);


#define GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_EVENT_PARMS \
	struct Weapon_Base_eventFire_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Weapon_Base_eventFire_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon_Base(); \
	friend struct Z_Construct_UClass_AWeapon_Base_Statics; \
public: \
	DECLARE_CLASS(AWeapon_Base, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_Base) \
	virtual UObject* _getUObject() const override { return const_cast<AWeapon_Base*>(this); }


#define GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon_Base(); \
	friend struct Z_Construct_UClass_AWeapon_Base_Statics; \
public: \
	DECLARE_CLASS(AWeapon_Base, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_Base) \
	virtual UObject* _getUObject() const override { return const_cast<AWeapon_Base*>(this); }


#define GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_Base(AWeapon_Base&&); \
	NO_API AWeapon_Base(const AWeapon_Base&); \
public:


#define GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_Base(AWeapon_Base&&); \
	NO_API AWeapon_Base(const AWeapon_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon_Base)


#define GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__root() { return STRUCT_OFFSET(AWeapon_Base, root); } \
	FORCEINLINE static uint32 __PPO__gunMesh() { return STRUCT_OFFSET(AWeapon_Base, gunMesh); } \
	FORCEINLINE static uint32 __PPO__gunMuzzle() { return STRUCT_OFFSET(AWeapon_Base, gunMuzzle); }


#define GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_10_PROLOG \
	GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_EVENT_PARMS


#define GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_INCLASS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Weapons_Weapon_Base_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AWeapon_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Weapons_Weapon_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
