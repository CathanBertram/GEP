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

#define GEPProject_Source_GEPProject_EventSystem_h_9_DELEGATE \
static inline void FEventName_DelegateWrapper(const FMulticastScriptDelegate& EventName) \
{ \
	EventName.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GEPProject_Source_GEPProject_EventSystem_h_14_SPARSE_DATA
#define GEPProject_Source_GEPProject_EventSystem_h_14_RPC_WRAPPERS
#define GEPProject_Source_GEPProject_EventSystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define GEPProject_Source_GEPProject_EventSystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventSystem(); \
	friend struct Z_Construct_UClass_UEventSystem_Statics; \
public: \
	DECLARE_CLASS(UEventSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(UEventSystem)


#define GEPProject_Source_GEPProject_EventSystem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUEventSystem(); \
	friend struct Z_Construct_UClass_UEventSystem_Statics; \
public: \
	DECLARE_CLASS(UEventSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(UEventSystem)


#define GEPProject_Source_GEPProject_EventSystem_h_14_STANDARD_CONSTRUCTORS \
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


#define GEPProject_Source_GEPProject_EventSystem_h_14_ENHANCED_CONSTRUCTORS \
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


#define GEPProject_Source_GEPProject_EventSystem_h_14_PRIVATE_PROPERTY_OFFSET
#define GEPProject_Source_GEPProject_EventSystem_h_11_PROLOG
#define GEPProject_Source_GEPProject_EventSystem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_EventSystem_h_14_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_EventSystem_h_14_SPARSE_DATA \
	GEPProject_Source_GEPProject_EventSystem_h_14_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_EventSystem_h_14_INCLASS \
	GEPProject_Source_GEPProject_EventSystem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_EventSystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_EventSystem_h_14_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_EventSystem_h_14_SPARSE_DATA \
	GEPProject_Source_GEPProject_EventSystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_EventSystem_h_14_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_EventSystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UEventSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_EventSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
