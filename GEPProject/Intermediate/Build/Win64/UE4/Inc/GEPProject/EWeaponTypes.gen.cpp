// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GEPProject/Weapons/EWeaponTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWeaponTypes() {}
// Cross Module References
	GEPPROJECT_API UEnum* Z_Construct_UEnum_GEPProject_EWeaponTypes();
	UPackage* Z_Construct_UPackage__Script_GEPProject();
// End Cross Module References
	static UEnum* EWeaponTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GEPProject_EWeaponTypes, Z_Construct_UPackage__Script_GEPProject(), TEXT("EWeaponTypes"));
		}
		return Singleton;
	}
	template<> GEPPROJECT_API UEnum* StaticEnum<EWeaponTypes>()
	{
		return EWeaponTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponTypes(EWeaponTypes_StaticEnum, TEXT("/Script/GEPProject"), TEXT("EWeaponTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GEPProject_EWeaponTypes_Hash() { return 2468044065U; }
	UEnum* Z_Construct_UEnum_GEPProject_EWeaponTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GEPProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponTypes"), 0, Get_Z_Construct_UEnum_GEPProject_EWeaponTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Pistol", (int64)Pistol },
				{ "Revolver", (int64)Revolver },
				{ "Shotgun", (int64)Shotgun },
				{ "SMG", (int64)SMG },
				{ "Rifle", (int64)Rifle },
				{ "AutoRifle", (int64)AutoRifle },
				{ "RayGun", (int64)RayGun },
				{ "GrenadeLauncher", (int64)GrenadeLauncher },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AutoRifle.Comment", "/**\n * \n */" },
				{ "AutoRifle.Name", "AutoRifle" },
				{ "Comment", "/**\n * \n */" },
				{ "GrenadeLauncher.Comment", "/**\n * \n */" },
				{ "GrenadeLauncher.Name", "GrenadeLauncher" },
				{ "ModuleRelativePath", "Weapons/EWeaponTypes.h" },
				{ "Pistol.Comment", "/**\n * \n */" },
				{ "Pistol.Name", "Pistol" },
				{ "RayGun.Comment", "/**\n * \n */" },
				{ "RayGun.Name", "RayGun" },
				{ "Revolver.Comment", "/**\n * \n */" },
				{ "Revolver.Name", "Revolver" },
				{ "Rifle.Comment", "/**\n * \n */" },
				{ "Rifle.Name", "Rifle" },
				{ "Shotgun.Comment", "/**\n * \n */" },
				{ "Shotgun.Name", "Shotgun" },
				{ "SMG.Comment", "/**\n * \n */" },
				{ "SMG.Name", "SMG" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GEPProject,
				nullptr,
				"EWeaponTypes",
				"EWeaponTypes",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
