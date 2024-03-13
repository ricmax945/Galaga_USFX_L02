// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L02/EnemyShipResupply.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyShipResupply() {}
// Cross Module References
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_AEnemyShipResupply_NoRegister();
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_AEnemyShipResupply();
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L02();
// End Cross Module References
	void AEnemyShipResupply::StaticRegisterNativesAEnemyShipResupply()
	{
	}
	UClass* Z_Construct_UClass_AEnemyShipResupply_NoRegister()
	{
		return AEnemyShipResupply::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyShipResupply_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyShipResupply_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShipResupply_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyShipResupply.h" },
		{ "ModuleRelativePath", "EnemyShipResupply.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyShipResupply_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyShipResupply>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyShipResupply_Statics::ClassParams = {
		&AEnemyShipResupply::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyShipResupply_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShipResupply_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyShipResupply()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyShipResupply_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyShipResupply, 3021965189);
	template<> GALAGA_USFX_L02_API UClass* StaticClass<AEnemyShipResupply>()
	{
		return AEnemyShipResupply::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyShipResupply(Z_Construct_UClass_AEnemyShipResupply, &AEnemyShipResupply::StaticClass, TEXT("/Script/Galaga_USFX_L02"), TEXT("AEnemyShipResupply"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyShipResupply);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
