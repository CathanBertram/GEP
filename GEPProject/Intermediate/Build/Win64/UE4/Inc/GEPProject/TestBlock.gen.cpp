// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/TestBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBlock() {}
// Cross Module References
	GEPPROJECT_API UClass* Z_Construct_UClass_ATestBlock_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_ATestBlock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GEPPROJECT_API UClass* Z_Construct_UClass_UShootable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATestBlock::execGetShot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetShot_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ATestBlock_GetShot = FName(TEXT("GetShot"));
	void ATestBlock::GetShot()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATestBlock_GetShot),NULL);
	}
	void ATestBlock::StaticRegisterNativesATestBlock()
	{
		UClass* Class = ATestBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetShot", &ATestBlock::execGetShot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestBlock_GetShot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestBlock_GetShot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestBlock_GetShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestBlock, nullptr, "GetShot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestBlock_GetShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestBlock_GetShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestBlock_GetShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestBlock_GetShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATestBlock_NoRegister()
	{
		return ATestBlock::StaticClass();
	}
	struct Z_Construct_UClass_ATestBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boxMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boxMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GEPProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestBlock_GetShot, "GetShot" }, // 1146265828
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestBlock.h" },
		{ "ModuleRelativePath", "TestBlock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestBlock_Statics::NewProp_boxMesh_MetaData[] = {
		{ "Category", "TestBlock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestBlock_Statics::NewProp_boxMesh = { "boxMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATestBlock, boxMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestBlock_Statics::NewProp_boxMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestBlock_Statics::NewProp_boxMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestBlock_Statics::NewProp_boxMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATestBlock_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UShootable_NoRegister, (int32)VTABLE_OFFSET(ATestBlock, IShootable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestBlock_Statics::ClassParams = {
		&ATestBlock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATestBlock_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestBlock_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestBlock, 2395298046);
	template<> GEPPROJECT_API UClass* StaticClass<ATestBlock>()
	{
		return ATestBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestBlock(Z_Construct_UClass_ATestBlock, &ATestBlock::StaticClass, TEXT("/Script/GEPProject"), TEXT("ATestBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
