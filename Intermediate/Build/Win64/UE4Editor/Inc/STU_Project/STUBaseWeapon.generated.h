// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STU_PROJECT_STUBaseWeapon_generated_h
#error "STUBaseWeapon.generated.h already included, missing '#pragma once' in STUBaseWeapon.h"
#endif
#define STU_PROJECT_STUBaseWeapon_generated_h

#define STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_SPARSE_DATA
#define STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_RPC_WRAPPERS
#define STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTUBaseWeapon(); \
	friend struct Z_Construct_UClass_ASTUBaseWeapon_Statics; \
public: \
	DECLARE_CLASS(ASTUBaseWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/STU_Project"), NO_API) \
	DECLARE_SERIALIZER(ASTUBaseWeapon)


#define STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASTUBaseWeapon(); \
	friend struct Z_Construct_UClass_ASTUBaseWeapon_Statics; \
public: \
	DECLARE_CLASS(ASTUBaseWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/STU_Project"), NO_API) \
	DECLARE_SERIALIZER(ASTUBaseWeapon)


#define STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTUBaseWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUBaseWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUBaseWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUBaseWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUBaseWeapon(ASTUBaseWeapon&&); \
	NO_API ASTUBaseWeapon(const ASTUBaseWeapon&); \
public:


#define STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUBaseWeapon(ASTUBaseWeapon&&); \
	NO_API ASTUBaseWeapon(const ASTUBaseWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUBaseWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUBaseWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTUBaseWeapon)


#define STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(ASTUBaseWeapon, WeaponMesh); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(ASTUBaseWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__TraceMaxDistance() { return STRUCT_OFFSET(ASTUBaseWeapon, TraceMaxDistance); } \
	FORCEINLINE static uint32 __PPO__DamageAmount() { return STRUCT_OFFSET(ASTUBaseWeapon, DamageAmount); } \
	FORCEINLINE static uint32 __PPO__TimeBetweenShots() { return STRUCT_OFFSET(ASTUBaseWeapon, TimeBetweenShots); } \
	FORCEINLINE static uint32 __PPO__BulletSpred() { return STRUCT_OFFSET(ASTUBaseWeapon, BulletSpred); }


#define STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_11_PROLOG
#define STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_SPARSE_DATA \
	STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_RPC_WRAPPERS \
	STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_INCLASS \
	STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_SPARSE_DATA \
	STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_INCLASS_NO_PURE_DECLS \
	STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STU_PROJECT_API UClass* StaticClass<class ASTUBaseWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID STU_Project_Source_STU_Project_Public_Weapons_STUBaseWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
