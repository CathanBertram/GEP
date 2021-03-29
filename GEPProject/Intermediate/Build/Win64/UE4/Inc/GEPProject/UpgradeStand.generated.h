// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGEPProjectCharacter;
#ifdef GEPPROJECT_UpgradeStand_generated_h
#error "UpgradeStand.generated.h already included, missing '#pragma once' in UpgradeStand.h"
#endif
#define GEPPROJECT_UpgradeStand_generated_h

#define GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_SPARSE_DATA
#define GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_RPC_WRAPPERS \
	virtual void OnInteract_Implementation(AGEPProjectCharacter* character); \
 \
	DECLARE_FUNCTION(execOnInteract);


#define GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteract);


#define GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_EVENT_PARMS \
	struct UpgradeStand_eventOnInteract_Parms \
	{ \
		AGEPProjectCharacter* character; \
	};


#define GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUpgradeStand(); \
	friend struct Z_Construct_UClass_AUpgradeStand_Statics; \
public: \
	DECLARE_CLASS(AUpgradeStand, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AUpgradeStand) \
	virtual UObject* _getUObject() const override { return const_cast<AUpgradeStand*>(this); }


#define GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUpgradeStand(); \
	friend struct Z_Construct_UClass_AUpgradeStand_Statics; \
public: \
	DECLARE_CLASS(AUpgradeStand, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AUpgradeStand) \
	virtual UObject* _getUObject() const override { return const_cast<AUpgradeStand*>(this); }


#define GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUpgradeStand(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUpgradeStand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUpgradeStand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUpgradeStand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUpgradeStand(AUpgradeStand&&); \
	NO_API AUpgradeStand(const AUpgradeStand&); \
public:


#define GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUpgradeStand(AUpgradeStand&&); \
	NO_API AUpgradeStand(const AUpgradeStand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUpgradeStand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUpgradeStand); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUpgradeStand)


#define GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__machineMesh() { return STRUCT_OFFSET(AUpgradeStand, machineMesh); } \
	FORCEINLINE static uint32 __PPO__wUpgradeMenu() { return STRUCT_OFFSET(AUpgradeStand, wUpgradeMenu); }


#define GEPProject_Source_GEPProject_Props_UpgradeStand_h_12_PROLOG \
	GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_EVENT_PARMS


#define GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_SPARSE_DATA \
	GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_INCLASS \
	GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_SPARSE_DATA \
	GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Props_UpgradeStand_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AUpgradeStand>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Props_UpgradeStand_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
