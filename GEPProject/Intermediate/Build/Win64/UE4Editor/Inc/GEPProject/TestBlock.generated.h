// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEPPROJECT_TestBlock_generated_h
#error "TestBlock.generated.h already included, missing '#pragma once' in TestBlock.h"
#endif
#define GEPPROJECT_TestBlock_generated_h

#define GEPProject_Source_GEPProject_TestBlock_h_16_SPARSE_DATA
#define GEPProject_Source_GEPProject_TestBlock_h_16_RPC_WRAPPERS \
	virtual void OnInteract_Implementation(); \
	virtual void GetShot_Implementation(); \
 \
	DECLARE_FUNCTION(execOnInteract); \
	DECLARE_FUNCTION(execGetShot);


#define GEPProject_Source_GEPProject_TestBlock_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteract); \
	DECLARE_FUNCTION(execGetShot);


#define GEPProject_Source_GEPProject_TestBlock_h_16_EVENT_PARMS
#define GEPProject_Source_GEPProject_TestBlock_h_16_CALLBACK_WRAPPERS
#define GEPProject_Source_GEPProject_TestBlock_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestBlock(); \
	friend struct Z_Construct_UClass_ATestBlock_Statics; \
public: \
	DECLARE_CLASS(ATestBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(ATestBlock) \
	virtual UObject* _getUObject() const override { return const_cast<ATestBlock*>(this); }


#define GEPProject_Source_GEPProject_TestBlock_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATestBlock(); \
	friend struct Z_Construct_UClass_ATestBlock_Statics; \
public: \
	DECLARE_CLASS(ATestBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GEPProject"), NO_API) \
	DECLARE_SERIALIZER(ATestBlock) \
	virtual UObject* _getUObject() const override { return const_cast<ATestBlock*>(this); }


#define GEPProject_Source_GEPProject_TestBlock_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestBlock(ATestBlock&&); \
	NO_API ATestBlock(const ATestBlock&); \
public:


#define GEPProject_Source_GEPProject_TestBlock_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestBlock(ATestBlock&&); \
	NO_API ATestBlock(const ATestBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestBlock)


#define GEPProject_Source_GEPProject_TestBlock_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__boxMesh() { return STRUCT_OFFSET(ATestBlock, boxMesh); }


#define GEPProject_Source_GEPProject_TestBlock_h_13_PROLOG \
	GEPProject_Source_GEPProject_TestBlock_h_16_EVENT_PARMS


#define GEPProject_Source_GEPProject_TestBlock_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_TestBlock_h_16_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_TestBlock_h_16_SPARSE_DATA \
	GEPProject_Source_GEPProject_TestBlock_h_16_RPC_WRAPPERS \
	GEPProject_Source_GEPProject_TestBlock_h_16_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_TestBlock_h_16_INCLASS \
	GEPProject_Source_GEPProject_TestBlock_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GEPProject_Source_GEPProject_TestBlock_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GEPProject_Source_GEPProject_TestBlock_h_16_PRIVATE_PROPERTY_OFFSET \
	GEPProject_Source_GEPProject_TestBlock_h_16_SPARSE_DATA \
	GEPProject_Source_GEPProject_TestBlock_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_TestBlock_h_16_CALLBACK_WRAPPERS \
	GEPProject_Source_GEPProject_TestBlock_h_16_INCLASS_NO_PURE_DECLS \
	GEPProject_Source_GEPProject_TestBlock_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEPPROJECT_API UClass* StaticClass<class ATestBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GEPProject_Source_GEPProject_TestBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
