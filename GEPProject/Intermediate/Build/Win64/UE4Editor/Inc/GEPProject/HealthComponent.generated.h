// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef GEPPROJECT_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define GEPPROJECT_HealthComponent_generated_h

#define GEPProject_Source_GEPProject_Component_HealthComponent_h_11_DELEGATE \
static inline void FDeath_DelegateWrapper(const FMulticastScriptDelegate& Death) \
{ \
	Death.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GEPProject_Source_GEPProject_Component_HealthComponent_h_16_SPARSE_DATA
#define GEPProject_Source_GEPProject_Component_HealthComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execTakeDamage);


#define GEPProject_Source_GEPProject_Component_HealthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execTakeDamage);


#define GEPProject_Source_GEPProject_Component_HealthComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define GEPProject_Source_GEPProject_Component_HealthComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define GEPProject_Source_GEPProject_Component_HealthComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define GEPProject_Source_GEPProject_Component_HealthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define GEPProject_Source_GEPProject_Component_HealthComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__currentHealth() { return STRUCT_OFFSET(UHealthComponent, currentHealth); } \
	FORCEINLINE static uint32 __PPO__baseHealth() { return STRUCT_OFFSET(UHealthComponent, baseHealth); }


#define GEPProject_Source_GEPProject_Component_HealthComponent_h_13_PROLOG
#define GEPProject_Source_GEPProject_Component_HealthComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Component_HealthComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Component_HealthComponent_h_16_SPARSE_DATA \
	GEPProject_Source_GEPProject_Component_HealthComponent_h_16_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Component_HealthComponent_h_16_INCLASS \
	GEPProject_Source_GEPProject_Component_HealthComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Component_HealthComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Component_HealthComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Component_HealthComponent_h_16_SPARSE_DATA \
	GEPProject_Source_GEPProject_Component_HealthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Component_HealthComponent_h_16_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Component_HealthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Component_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
