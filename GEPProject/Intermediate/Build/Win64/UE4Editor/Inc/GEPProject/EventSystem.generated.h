// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGEPSaveGame;
#ifdef GEPPROJECT_EventSystem_generated_h
#error "EventSystem.generated.h already included, missing '#pragma once' in EventSystem.h"
#endif
#define GEPPROJECT_EventSystem_generated_h

#define GEPProject_Source_GEPProject_EventSystem_h_18_DELEGATE \
struct _Script_GEPProject_eventOnUnlockWeapon_Parms \
{ \
	TSubclassOf<AActor>  weaponToUnlock; \
	int32 cost; \
}; \
static inline void FOnUnlockWeapon_DelegateWrapper(const FMulticastScriptDelegate& OnUnlockWeapon, TSubclassOf<AActor>  weaponToUnlock, int32 cost) \
{ \
	_Script_GEPProject_eventOnUnlockWeapon_Parms Parms; \
	Parms.weaponToUnlock=weaponToUnlock; \
	Parms.cost=cost; \
	OnUnlockWeapon.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GEPProject_Source_GEPProject_EventSystem_h_17_DELEGATE \
struct _Script_GEPProject_eventOnLoad_Parms \
{ \
	UGEPSaveGame* saveInstance; \
}; \
static inline void FOnLoad_DelegateWrapper(const FMulticastScriptDelegate& OnLoad, UGEPSaveGame* saveInstance) \
{ \
	_Script_GEPProject_eventOnLoad_Parms Parms; \
	Parms.saveInstance=saveInstance; \
	OnLoad.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GEPProject_Source_GEPProject_EventSystem_h_16_DELEGATE \
struct _Script_GEPProject_eventOnSave_Parms \
{ \
	UGEPSaveGame* saveInstance; \
}; \
static inline void FOnSave_DelegateWrapper(const FMulticastScriptDelegate& OnSave, UGEPSaveGame* saveInstance) \
{ \
	_Script_GEPProject_eventOnSave_Parms Parms; \
	Parms.saveInstance=saveInstance; \
	OnSave.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GEPProject_Source_GEPProject_EventSystem_h_15_DELEGATE \
struct _Script_GEPProject_eventOnCurrencyUpdate_Parms \
{ \
	int32 newCur; \
}; \
static inline void FOnCurrencyUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnCurrencyUpdate, int32 newCur) \
{ \
	_Script_GEPProject_eventOnCurrencyUpdate_Parms Parms; \
	Parms.newCur=newCur; \
	OnCurrencyUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define GEPProject_Source_GEPProject_EventSystem_h_14_DELEGATE \
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


#define GEPProject_Source_GEPProject_EventSystem_h_13_DELEGATE \
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


#define GEPProject_Source_GEPProject_EventSystem_h_11_DELEGATE \
static inline void FOnTrySave_DelegateWrapper(const FMulticastScriptDelegate& OnTrySave) \
{ \
	OnTrySave.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GEPProject_Source_GEPProject_EventSystem_h_22_SPARSE_DATA
#define GEPProject_Source_GEPProject_EventSystem_h_22_RPC_WRAPPERS
#define GEPProject_Source_GEPProject_EventSystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define GEPProject_Source_GEPProject_EventSystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventSystem(); \
	friend struct Z_Construct_UClass_UEventSystem_Statics; \
public: \
	DECLARE_CLASS(UEventSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(UEventSystem)


#define GEPProject_Source_GEPProject_EventSystem_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUEventSystem(); \
	friend struct Z_Construct_UClass_UEventSystem_Statics; \
public: \
	DECLARE_CLASS(UEventSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(UEventSystem)


#define GEPProject_Source_GEPProject_EventSystem_h_22_STANDARD_CONSTRUCTORS \
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


#define GEPProject_Source_GEPProject_EventSystem_h_22_ENHANCED_CONSTRUCTORS \
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


#define GEPProject_Source_GEPProject_EventSystem_h_22_PRIVATE_PROPERTY_OFFSET
#define GEPProject_Source_GEPProject_EventSystem_h_19_PROLOG
#define GEPProject_Source_GEPProject_EventSystem_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_EventSystem_h_22_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_EventSystem_h_22_SPARSE_DATA \
	GEPProject_Source_GEPProject_EventSystem_h_22_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_EventSystem_h_22_INCLASS \
	GEPProject_Source_GEPProject_EventSystem_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_EventSystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_EventSystem_h_22_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_EventSystem_h_22_SPARSE_DATA \
	GEPProject_Source_GEPProject_EventSystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_EventSystem_h_22_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_EventSystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UEventSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_EventSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
