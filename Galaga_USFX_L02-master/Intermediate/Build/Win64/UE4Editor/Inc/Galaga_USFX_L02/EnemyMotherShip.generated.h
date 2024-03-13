// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GALAGA_USFX_L02_EnemyMotherShip_generated_h
#error "EnemyMotherShip.generated.h already included, missing '#pragma once' in EnemyMotherShip.h"
#endif
#define GALAGA_USFX_L02_EnemyMotherShip_generated_h

#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_SPARSE_DATA
#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyMotherShip(); \
	friend struct Z_Construct_UClass_AEnemyMotherShip_Statics; \
public: \
	DECLARE_CLASS(AEnemyMotherShip, ANaveEnemiga, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX_L02"), NO_API) \
	DECLARE_SERIALIZER(AEnemyMotherShip)


#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyMotherShip(); \
	friend struct Z_Construct_UClass_AEnemyMotherShip_Statics; \
public: \
	DECLARE_CLASS(AEnemyMotherShip, ANaveEnemiga, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Galaga_USFX_L02"), NO_API) \
	DECLARE_SERIALIZER(AEnemyMotherShip)


#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyMotherShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyMotherShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyMotherShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyMotherShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyMotherShip(AEnemyMotherShip&&); \
	NO_API AEnemyMotherShip(const AEnemyMotherShip&); \
public:


#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyMotherShip(AEnemyMotherShip&&); \
	NO_API AEnemyMotherShip(const AEnemyMotherShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyMotherShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyMotherShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyMotherShip)


#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AEnemyMotherShip, ProjectileMesh); }


#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_10_PROLOG
#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_SPARSE_DATA \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_RPC_WRAPPERS \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_INCLASS \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_PRIVATE_PROPERTY_OFFSET \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_SPARSE_DATA \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_INCLASS_NO_PURE_DECLS \
	Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GALAGA_USFX_L02_API UClass* StaticClass<class AEnemyMotherShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Galaga_USFX_L02_master_Source_Galaga_USFX_L02_EnemyMotherShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
