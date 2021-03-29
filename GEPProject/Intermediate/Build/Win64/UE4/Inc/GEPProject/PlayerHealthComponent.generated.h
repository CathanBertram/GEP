// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEPPROJECT_PlayerHealthComponent_generated_h
#error "PlayerHealthComponent.generated.h already included, missing '#pragma once' in PlayerHealthComponent.h"
#endif
#define GEPPROJECT_PlayerHealthComponent_generated_h

#define GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_SPARSE_DATA
#define GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_RPC_WRAPPERS
#define GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerHealthComponent(); \
	friend struct Z_Construct_UClass_UPlayerHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerHealthComponent, UHealthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHealthComponent)


#define GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerHealthComponent(); \
	friend struct Z_Construct_UClass_UPlayerHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerHealthComponent, UHealthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(UPlayerHealthComponent)


#define GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHealthComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerHealthComponent(UPlayerHealthComponent&&); \
	NO_API UPlayerHealthComponent(const UPlayerHealthComponent&); \
public:


#define GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerHealthComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerHealthComponent(UPlayerHealthComponent&&); \
	NO_API UPlayerHealthComponent(const UPlayerHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerHealthComponent)


#define GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__maxHealth() { return STRUCT_OFFSET(UPlayerHealthComponent, maxHealth); } \
	FORCEINLINE static uint32 __PPO__baseHealthRegenCooldown() { return STRUCT_OFFSET(UPlayerHealthComponent, baseHealthRegenCooldown); } \
	FORCEINLINE static uint32 __PPO__baseHealthRegenAmount() { return STRUCT_OFFSET(UPlayerHealthComponent, baseHealthRegenAmount); } \
	FORCEINLINE static uint32 __PPO__regenCooldownReset() { return STRUCT_OFFSET(UPlayerHealthComponent, regenCooldownReset); }


#define GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_14_PROLOG
#define GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_SPARSE_DATA \
	GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_INCLASS \
	GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_SPARSE_DATA \
	GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UPlayerHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Component_PlayerHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
