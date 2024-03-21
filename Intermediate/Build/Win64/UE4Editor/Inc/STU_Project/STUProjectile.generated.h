// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STU_PROJECT_STUProjectile_generated_h
#error "STUProjectile.generated.h already included, missing '#pragma once' in STUProjectile.h"
#endif
#define STU_PROJECT_STUProjectile_generated_h

#define STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_SPARSE_DATA
#define STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_RPC_WRAPPERS
#define STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTUProjectile(); \
	friend struct Z_Construct_UClass_ASTUProjectile_Statics; \
public: \
	DECLARE_CLASS(ASTUProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/STU_Project"), NO_API) \
	DECLARE_SERIALIZER(ASTUProjectile)


#define STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASTUProjectile(); \
	friend struct Z_Construct_UClass_ASTUProjectile_Statics; \
public: \
	DECLARE_CLASS(ASTUProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/STU_Project"), NO_API) \
	DECLARE_SERIALIZER(ASTUProjectile)


#define STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTUProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUProjectile(ASTUProjectile&&); \
	NO_API ASTUProjectile(const ASTUProjectile&); \
public:


#define STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUProjectile(ASTUProjectile&&); \
	NO_API ASTUProjectile(const ASTUProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTUProjectile)


#define STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(ASTUProjectile, CollisionComponent); } \
	FORCEINLINE static uint32 __PPO__MovementComponent() { return STRUCT_OFFSET(ASTUProjectile, MovementComponent); }


#define STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_12_PROLOG
#define STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_SPARSE_DATA \
	STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_RPC_WRAPPERS \
	STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_INCLASS \
	STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_SPARSE_DATA \
	STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_INCLASS_NO_PURE_DECLS \
	STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STU_PROJECT_API UClass* StaticClass<class ASTUProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID STU_Project_Source_STU_Project_Public_Weapons_STUProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
