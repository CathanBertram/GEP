// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeapon_Base;
#ifdef GEPPROJECT_GetWeaponBase_generated_h
#error "GetWeaponBase.generated.h already included, missing '#pragma once' in GetWeaponBase.h"
#endif
#define GEPPROJECT_GetWeaponBase_generated_h

#define GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_SPARSE_DATA
#define GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_RPC_WRAPPERS \
	virtual AWeapon_Base* GetWeaponBase_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetWeaponBase);


#define GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual AWeapon_Base* GetWeaponBase_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetWeaponBase);


#define GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_EVENT_PARMS \
	struct GetWeaponBase_eventGetWeaponBase_Parms \
	{ \
		AWeapon_Base* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GetWeaponBase_eventGetWeaponBase_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UGetWeaponBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UGetWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UGetWeaponBase(UGetWeaponBase&&); \
	GEPPROJECT_API UGetWeaponBase(const UGetWeaponBase&); \
public:


#define GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UGetWeaponBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UGetWeaponBase(UGetWeaponBase&&); \
	GEPPROJECT_API UGetWeaponBase(const UGetWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UGetWeaponBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetWeaponBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetWeaponBase)


#define GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGetWeaponBase(); \
	friend struct Z_Construct_UClass_UGetWeaponBase_Statics; \
public: \
	DECLARE_CLASS(UGetWeaponBase, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GEPProject"), GEPPROJECT_API) \
	DECLARE_SERIALIZER(UGetWeaponBase)


#define GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGetWeaponBase() {} \
public: \
	typedef UGetWeaponBase UClassType; \
	typedef IGetWeaponBase ThisClass; \
	static AWeapon_Base* Execute_GetWeaponBase(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IGetWeaponBase() {} \
public: \
	typedef UGetWeaponBase UClassType; \
	typedef IGetWeaponBase ThisClass; \
	static AWeapon_Base* Execute_GetWeaponBase(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_10_PROLOG \
	GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_EVENT_PARMS


#define GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UGetWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Interfaces_GetWeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
