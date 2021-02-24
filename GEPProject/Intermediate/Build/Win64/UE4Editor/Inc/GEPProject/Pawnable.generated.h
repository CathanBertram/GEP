// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef GEPPROJECT_Pawnable_generated_h
#error "Pawnable.generated.h already included, missing '#pragma once' in Pawnable.h"
#endif
#define GEPPROJECT_Pawnable_generated_h

#define GEPProject_Source_GEPProject_Pawnable_h_13_SPARSE_DATA
#define GEPProject_Source_GEPProject_Pawnable_h_13_RPC_WRAPPERS \
	virtual APawn* GetAsPawn_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetAsPawn);


#define GEPProject_Source_GEPProject_Pawnable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual APawn* GetAsPawn_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetAsPawn);


#define GEPProject_Source_GEPProject_Pawnable_h_13_EVENT_PARMS \
	struct Pawnable_eventGetAsPawn_Parms \
	{ \
		APawn* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Pawnable_eventGetAsPawn_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GEPProject_Source_GEPProject_Pawnable_h_13_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Pawnable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UPawnable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UPawnable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UPawnable(UPawnable&&); \
	GEPPROJECT_API UPawnable(const UPawnable&); \
public:


#define GEPProject_Source_GEPProject_Pawnable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UPawnable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UPawnable(UPawnable&&); \
	GEPPROJECT_API UPawnable(const UPawnable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UPawnable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnable)


#define GEPProject_Source_GEPProject_Pawnable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPawnable(); \
	friend struct Z_Construct_UClass_UPawnable_Statics; \
public: \
	DECLARE_CLASS(UPawnable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GEPProject"), GEPPROJECT_API) \
	DECLARE_SERIALIZER(UPawnable)


#define GEPProject_Source_GEPProject_Pawnable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Pawnable_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Pawnable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Pawnable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Pawnable_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Pawnable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Pawnable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPawnable() {} \
public: \
	typedef UPawnable UClassType; \
	typedef IPawnable ThisClass; \
	static APawn* Execute_GetAsPawn(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Pawnable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPawnable() {} \
public: \
	typedef UPawnable UClassType; \
	typedef IPawnable ThisClass; \
	static APawn* Execute_GetAsPawn(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Pawnable_h_10_PROLOG \
	GEPProject_Source_GEPProject_Pawnable_h_13_EVENT_PARMS


#define GEPProject_Source_GEPProject_Pawnable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Pawnable_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Pawnable_h_13_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Pawnable_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Pawnable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Pawnable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Pawnable_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Pawnable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Pawnable_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Pawnable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UPawnable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Pawnable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
