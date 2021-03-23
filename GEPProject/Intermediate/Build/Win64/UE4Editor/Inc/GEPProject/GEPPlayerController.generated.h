// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGEPPlayerController;
#ifdef GEPPROJECT_GEPPlayerController_generated_h
#error "GEPPlayerController.generated.h already included, missing '#pragma once' in GEPPlayerController.h"
#endif
#define GEPPROJECT_GEPPlayerController_generated_h

#define GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_SPARSE_DATA
#define GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_RPC_WRAPPERS \
	virtual AGEPPlayerController* GetAsPC_Implementation(); \
	virtual void Init_Implementation(); \
 \
	DECLARE_FUNCTION(execGetAsPC); \
	DECLARE_FUNCTION(execInit);


#define GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAsPC); \
	DECLARE_FUNCTION(execInit);


#define GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_EVENT_PARMS \
	struct GEPPlayerController_eventGetAsPC_Parms \
	{ \
		AGEPPlayerController* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GEPPlayerController_eventGetAsPC_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGEPPlayerController(); \
	friend struct Z_Construct_UClass_AGEPPlayerController_Statics; \
public: \
	DECLARE_CLASS(AGEPPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AGEPPlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<AGEPPlayerController*>(this); }


#define GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGEPPlayerController(); \
	friend struct Z_Construct_UClass_AGEPPlayerController_Statics; \
public: \
	DECLARE_CLASS(AGEPPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(AGEPPlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<AGEPPlayerController*>(this); }


#define GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGEPPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGEPPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGEPPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGEPPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGEPPlayerController(AGEPPlayerController&&); \
	NO_API AGEPPlayerController(const AGEPPlayerController&); \
public:


#define GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGEPPlayerController(AGEPPlayerController&&); \
	NO_API AGEPPlayerController(const AGEPPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGEPPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGEPPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGEPPlayerController)


#define GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pawnToSpawn() { return STRUCT_OFFSET(AGEPPlayerController, pawnToSpawn); }


#define GEPProject_Source_GEPProject_Player_GEPPlayerController_h_13_PROLOG \
	GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_EVENT_PARMS


#define GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_SPARSE_DATA \
	GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_INCLASS \
	GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_SPARSE_DATA \
	GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Player_GEPPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class AGEPPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Player_GEPPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
