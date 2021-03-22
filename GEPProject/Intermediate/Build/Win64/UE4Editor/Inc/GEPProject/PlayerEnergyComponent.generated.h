// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEPPROJECT_PlayerEnergyComponent_generated_h
#error "PlayerEnergyComponent.generated.h already included, missing '#pragma once' in PlayerEnergyComponent.h"
#endif
#define GEPPROJECT_PlayerEnergyComponent_generated_h

#define GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_SPARSE_DATA
#define GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_RPC_WRAPPERS
#define GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerEnergyComponent(); \
	friend struct Z_Construct_UClass_UPlayerEnergyComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerEnergyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerEnergyComponent)


#define GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerEnergyComponent(); \
	friend struct Z_Construct_UClass_UPlayerEnergyComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerEnergyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerEnergyComponent)


#define GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerEnergyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerEnergyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerEnergyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerEnergyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerEnergyComponent(UPlayerEnergyComponent&&); \
	NO_API UPlayerEnergyComponent(const UPlayerEnergyComponent&); \
public:


#define GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerEnergyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerEnergyComponent(UPlayerEnergyComponent&&); \
	NO_API UPlayerEnergyComponent(const UPlayerEnergyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerEnergyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerEnergyComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerEnergyComponent)


#define GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__maxEnergy() { return STRUCT_OFFSET(UPlayerEnergyComponent, maxEnergy); } \
	FORCEINLINE static uint32 __PPO__currentEnergy() { return STRUCT_OFFSET(UPlayerEnergyComponent, currentEnergy); } \
	FORCEINLINE static uint32 __PPO__baseEnergy() { return STRUCT_OFFSET(UPlayerEnergyComponent, baseEnergy); } \
	FORCEINLINE static uint32 __PPO__energyRegenCooldown() { return STRUCT_OFFSET(UPlayerEnergyComponent, energyRegenCooldown); } \
	FORCEINLINE static uint32 __PPO__energyRegenAmount() { return STRUCT_OFFSET(UPlayerEnergyComponent, energyRegenAmount); } \
	FORCEINLINE static uint32 __PPO__energyRegenResetTime() { return STRUCT_OFFSET(UPlayerEnergyComponent, energyRegenResetTime); }


#define GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_14_PROLOG
#define GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_SPARSE_DATA \
	GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_INCLASS \
	GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_SPARSE_DATA \
	GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UPlayerEnergyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Component_PlayerEnergyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
