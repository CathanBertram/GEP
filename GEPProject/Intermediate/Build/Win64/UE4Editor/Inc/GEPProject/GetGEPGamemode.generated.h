// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGEPProjectGameMode;
#ifdef GEPPROJECT_GetGEPGamemode_generated_h
#error "GetGEPGamemode.generated.h already included, missing '#pragma once' in GetGEPGamemode.h"
#endif
#define GEPPROJECT_GetGEPGamemode_generated_h

#define GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_SPARSE_DATA
#define GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_RPC_WRAPPERS \
	virtual AGEPProjectGameMode* GetGEPGamemode_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetGEPGamemode);


#define GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual AGEPProjectGameMode* GetGEPGamemode_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetGEPGamemode);


#define GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_EVENT_PARMS \
	struct GetGEPGamemode_eventGetGEPGamemode_Parms \
	{ \
		AGEPProjectGameMode* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GetGEPGamemode_eventGetGEPGamemode_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UGetGEPGamemode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetGEPGamemode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UGetGEPGamemode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetGEPGamemode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UGetGEPGamemode(UGetGEPGamemode&&); \
	GEPPROJECT_API UGetGEPGamemode(const UGetGEPGamemode&); \
public:


#define GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UGetGEPGamemode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UGetGEPGamemode(UGetGEPGamemode&&); \
	GEPPROJECT_API UGetGEPGamemode(const UGetGEPGamemode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UGetGEPGamemode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetGEPGamemode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetGEPGamemode)


#define GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGetGEPGamemode(); \
	friend struct Z_Construct_UClass_UGetGEPGamemode_Statics; \
public: \
	DECLARE_CLASS(UGetGEPGamemode, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GEPProject"), GEPPROJECT_API) \
	DECLARE_SERIALIZER(UGetGEPGamemode)


#define GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGetGEPGamemode() {} \
public: \
	typedef UGetGEPGamemode UClassType; \
	typedef IGetGEPGamemode ThisClass; \
	static AGEPProjectGameMode* Execute_GetGEPGamemode(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IGetGEPGamemode() {} \
public: \
	typedef UGetGEPGamemode UClassType; \
	typedef IGetGEPGamemode ThisClass; \
	static AGEPProjectGameMode* Execute_GetGEPGamemode(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_10_PROLOG \
	GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_EVENT_PARMS


#define GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UGetGEPGamemode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Interfaces_GetGEPGamemode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
