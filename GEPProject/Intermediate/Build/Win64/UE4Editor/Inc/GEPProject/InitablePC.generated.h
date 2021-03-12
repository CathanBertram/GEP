// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGEPPlayerController;
#ifdef GEPPROJECT_InitablePC_generated_h
#error "InitablePC.generated.h already included, missing '#pragma once' in InitablePC.h"
#endif
#define GEPPROJECT_InitablePC_generated_h

#define GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_SPARSE_DATA
#define GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_RPC_WRAPPERS \
	virtual AGEPPlayerController* GetAsPC_Implementation() { return NULL; }; \
	virtual void Init_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetAsPC); \
	DECLARE_FUNCTION(execInit);


#define GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual AGEPPlayerController* GetAsPC_Implementation() { return NULL; }; \
	virtual void Init_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetAsPC); \
	DECLARE_FUNCTION(execInit);


#define GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_EVENT_PARMS \
	struct InitablePC_eventGetAsPC_Parms \
	{ \
		AGEPPlayerController* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InitablePC_eventGetAsPC_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UInitablePC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitablePC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UInitablePC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitablePC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UInitablePC(UInitablePC&&); \
	GEPPROJECT_API UInitablePC(const UInitablePC&); \
public:


#define GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UInitablePC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UInitablePC(UInitablePC&&); \
	GEPPROJECT_API UInitablePC(const UInitablePC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UInitablePC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitablePC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitablePC)


#define GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInitablePC(); \
	friend struct Z_Construct_UClass_UInitablePC_Statics; \
public: \
	DECLARE_CLASS(UInitablePC, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GEPProject"), GEPPROJECT_API) \
	DECLARE_SERIALIZER(UInitablePC)


#define GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInitablePC() {} \
public: \
	typedef UInitablePC UClassType; \
	typedef IInitablePC ThisClass; \
	static AGEPPlayerController* Execute_GetAsPC(UObject* O); \
	static void Execute_Init(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInitablePC() {} \
public: \
	typedef UInitablePC UClassType; \
	typedef IInitablePC ThisClass; \
	static AGEPPlayerController* Execute_GetAsPC(UObject* O); \
	static void Execute_Init(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_InitablePC_h_10_PROLOG \
	GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_EVENT_PARMS


#define GEPProject_Source_GEPProject_Interfaces_InitablePC_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_InitablePC_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_InitablePC_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UInitablePC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Interfaces_InitablePC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
