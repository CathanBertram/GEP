// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGEPProjectCharacter;
#ifdef GEPPROJECT_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define GEPPROJECT_Interactable_generated_h

#define GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_SPARSE_DATA
#define GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_RPC_WRAPPERS \
	virtual void OnInteract_Implementation(AGEPProjectCharacter* character) {}; \
 \
	DECLARE_FUNCTION(execOnInteract);


#define GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInteract_Implementation(AGEPProjectCharacter* character) {}; \
 \
	DECLARE_FUNCTION(execOnInteract);


#define GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_EVENT_PARMS \
	struct Interactable_eventOnInteract_Parms \
	{ \
		AGEPProjectCharacter* character; \
	};


#define GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UInteractable(UInteractable&&); \
	GEPPROJECT_API UInteractable(const UInteractable&); \
public:


#define GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEPPROJECT_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GEPPROJECT_API UInteractable(UInteractable&&); \
	GEPPROJECT_API UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEPPROJECT_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable)


#define GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GEPProject"), GEPPROJECT_API) \
	DECLARE_SERIALIZER(UInteractable)


#define GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static void Execute_OnInteract(UObject* O, AGEPProjectCharacter* character); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static void Execute_OnInteract(UObject* O, AGEPProjectCharacter* character); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GEPProject_Source_GEPProject_Interfaces_Interactable_h_10_PROLOG \
	GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_EVENT_PARMS


#define GEPProject_Source_GEPProject_Interfaces_Interactable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_Interfaces_Interactable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_SPARSE_DATA \
	GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_Interfaces_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_Interfaces_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
