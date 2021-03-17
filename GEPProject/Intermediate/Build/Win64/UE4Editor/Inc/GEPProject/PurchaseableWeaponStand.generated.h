// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGEPSaveGame;
class AGEPProjectCharacter;
#ifdef GEPPROJECT_PurchaseableWeaponStand_generated_h
#error "PurchaseableWeaponStand.generated.h already included, missing '#pragma once' in PurchaseableWeaponStand.h"
#endif
#define GEPPROJECT_PurchaseableWeaponStand_generated_h

#define GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_SPARSE_DATA
#define GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_RPC_WRAPPERS \
	virtual void OnInteract_Implementation(AGEPProjectCharacter* character); \
 \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execOnInteract);


#define GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execOnInteract);


#define GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_EVENT_PARMS \
	struct PurchaseableWeaponStand_eventOnInteract_Parms \
	{ \
		AGEPProjectCharacter* character; \
	};


#define GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPurchaseableWeaponStand(); \
	friend struct Z_Construct_UClass_APurchaseableWeaponStand_Statics; \
public: \
	DECLARE_CLASS(APurchaseableWeaponStand, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(APurchaseableWeaponStand) \
	virtual UObject* _getUObject() const override { return const_cast<APurchaseableWeaponStand*>(this); }


#define GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPurchaseableWeaponStand(); \
	friend struct Z_Construct_UClass_APurchaseableWeaponStand_Statics; \
public: \
	DECLARE_CLASS(APurchaseableWeaponStand, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(APurchaseableWeaponStand) \
	virtual UObject* _getUObject() const override { return const_cast<APurchaseableWeaponStand*>(this); }


#define GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APurchaseableWeaponStand(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APurchaseableWeaponStand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APurchaseableWeaponStand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APurchaseableWeaponStand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APurchaseableWeaponStand(APurchaseableWeaponStand&&); \
	NO_API APurchaseableWeaponStand(const APurchaseableWeaponStand&); \
public:


#define GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APurchaseableWeaponStand(APurchaseableWeaponStand&&); \
	NO_API APurchaseableWeaponStand(const APurchaseableWeaponStand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APurchaseableWeaponStand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APurchaseableWeaponStand); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APurchaseableWeaponStand)


#define GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__weaponToUnlock() { return STRUCT_OFFSET(APurchaseableWeaponStand, weaponToUnlock); } \
	FORCEINLINE static uint32 __PPO__weaponStand() { return STRUCT_OFFSET(APurchaseableWeaponStand, weaponStand); } \
	FORCEINLINE static uint32 __PPO__weaponSocket() { return STRUCT_OFFSET(APurchaseableWeaponStand, weaponSocket); } \
	FORCEINLINE static uint32 __PPO__weapon() { return STRUCT_OFFSET(APurchaseableWeaponStand, weapon); } \
	FORCEINLINE static uint32 __PPO__textSocket() { return STRUCT_OFFSET(APurchaseableWeaponStand, textSocket); } \
	FORCEINLINE static uint32 __PPO__text() { return STRUCT_OFFSET(APurchaseableWeaponStand, text); } \
	FORCEINLINE static uint32 __PPO__cost() { return STRUCT_OFFSET(APurchaseableWeaponStand, cost); } \
	FORCEINLINE static uint32 __PPO__boxComp() { return STRUCT_OFFSET(APurchaseableWeaponStand, boxComp); } \
	FORCEINLINE static uint32 __PPO__unlocked() { return STRUCT_OFFSET(APurchaseableWeaponStand, unlocked); }


#define GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_16_PROLOG \
	GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_EVENT_PARMS


#define GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_SPARSE_DATA \
	GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_INCLASS \
	GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_SPARSE_DATA \
	GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class APurchaseableWeaponStand>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Props_PurchaseableWeaponStand_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
