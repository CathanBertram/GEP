// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEPPROJECT_Shootable_generated_h
#error "Shootable.generated.h already included, missing '#pragma once' in Shootable.h"
#endif
#define GEPPROJECT_Shootable_generated_h

#define GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_SPARSE_DATA
#define GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_RPC_WRAPPERS \
	virtual void GetShot_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetShot);


#define GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetShot_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetShot);


#define GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_EVENT_PARMS
#define GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UShootable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShootable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UShootable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShootable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UShootable(UShootable&&); \
	GEPPROJECT_API UShootable(const UShootable&); \
public:


#define GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UShootable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UShootable(UShootable&&); \
	GEPPROJECT_API UShootable(const UShootable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UShootable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShootable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShootable)


#define GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUShootable(); \
	friend struct Z_Construct_UClass_UShootable_Statics; \
public: \
	DECLARE_CLASS(UShootable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GEPProject"), GEPPROJECT_API) \
	DECLARE_SERIALIZER(UShootable)


#define GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IShootable() {} \
public: \
	typedef UShootable UClassType; \
	typedef IShootable ThisClass; \
	static void Execute_GetShot(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IShootable() {} \
public: \
	typedef UShootable UClassType; \
	typedef IShootable ThisClass; \
	static void Execute_GetShot(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_Shootable_h_10_PROLOG \
	GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_EVENT_PARMS


#define GEPProject_Source_GEPProject_Interfaces_Shootable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_Shootable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_Shootable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UShootable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Interfaces_Shootable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
