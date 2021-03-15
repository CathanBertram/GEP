// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEPPROJECT_EventSystem_generated_h
#error "EventSystem.generated.h already included, missing '#pragma once' in EventSystem.h"
#endif
#define GEPPROJECT_EventSystem_generated_h

#define GEPProject_Source_GEPProject_EventSystem_h_12_DELEGATE \
struct _Script_GEPProject_eventOnCurrencyLoss_Parms \
{ \
	int32 curToLose; \
}; \
static inline void FOnCurrencyLoss_DelegateWrapper(const FMulticastScriptDelegate& OnCurrencyLoss, int32 curToLose) \
{ \
	_Script_GEPProject_eventOnCurrencyLoss_Parms Parms; \
	Parms.curToLose=curToLose; \
	OnCurrencyLoss.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GEPProject_Source_GEPProject_EventSystem_h_11_DELEGATE \
struct _Script_GEPProject_eventOnCurrencyGain_Parms \
{ \
	int32 curToGain; \
}; \
static inline void FOnCurrencyGain_DelegateWrapper(const FMulticastScriptDelegate& OnCurrencyGain, int32 curToGain) \
{ \
	_Script_GEPProject_eventOnCurrencyGain_Parms Parms; \
	Parms.curToGain=curToGain; \
	OnCurrencyGain.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GEPProject_Source_GEPProject_EventSystem_h_9_DELEGATE \
static inline void FOnEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEvent) \
{ \
	OnEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GEPProject_Source_GEPProject_EventSystem_h_16_SPARSE_DATA
#define GEPProject_Source_GEPProject_EventSystem_h_16_RPC_WRAPPERS
#define GEPProject_Source_GEPProject_EventSystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define GEPProject_Source_GEPProject_EventSystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventSystem(); \
	friend struct Z_Construct_UClass_UEventSystem_Statics; \
public: \
	DECLARE_CLASS(UEventSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(UEventSystem)


#define GEPProject_Source_GEPProject_EventSystem_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUEventSystem(); \
	friend struct Z_Construct_UClass_UEventSystem_Statics; \
public: \
	DECLARE_CLASS(UEventSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(UEventSystem)


#define GEPProject_Source_GEPProject_EventSystem_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventSystem(UEventSystem&&); \
	NO_API UEventSystem(const UEventSystem&); \
public:


#define GEPProject_Source_GEPProject_EventSystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventSystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventSystem(UEventSystem&&); \
	NO_API UEventSystem(const UEventSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEventSystem)


#define GEPProject_Source_GEPProject_EventSystem_h_16_PRIVATE_PROPERTY_OFFSET
#define GEPProject_Source_GEPProject_EventSystem_h_13_PROLOG
#define GEPProject_Source_GEPProject_EventSystem_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_EventSystem_h_16_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_EventSystem_h_16_SPARSE_DATA \
	GEPProject_Source_GEPProject_EventSystem_h_16_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_EventSystem_h_16_INCLASS \
	GEPProject_Source_GEPProject_EventSystem_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_EventSystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_EventSystem_h_16_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_EventSystem_h_16_SPARSE_DATA \
	GEPProject_Source_GEPProject_EventSystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_EventSystem_h_16_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_EventSystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UEventSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_EventSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
