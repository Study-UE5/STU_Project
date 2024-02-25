// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STU_PROJECT_STU_BaseCharacter_generated_h
#error "STU_BaseCharacter.generated.h already included, missing '#pragma once' in STU_BaseCharacter.h"
#endif
#define STU_PROJECT_STU_BaseCharacter_generated_h

#define STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_SPARSE_DATA
#define STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_RPC_WRAPPERS
#define STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTU_BaseCharacter(); \
	friend struct Z_Construct_UClass_ASTU_BaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ASTU_BaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/STU_Project"), NO_API) \
	DECLARE_SERIALIZER(ASTU_BaseCharacter)


#define STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASTU_BaseCharacter(); \
	friend struct Z_Construct_UClass_ASTU_BaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ASTU_BaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/STU_Project"), NO_API) \
	DECLARE_SERIALIZER(ASTU_BaseCharacter)


#define STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTU_BaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTU_BaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTU_BaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTU_BaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTU_BaseCharacter(ASTU_BaseCharacter&&); \
	NO_API ASTU_BaseCharacter(const ASTU_BaseCharacter&); \
public:


#define STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTU_BaseCharacter(ASTU_BaseCharacter&&); \
	NO_API ASTU_BaseCharacter(const ASTU_BaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTU_BaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTU_BaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTU_BaseCharacter)


#define STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArmComponent() { return STRUCT_OFFSET(ASTU_BaseCharacter, SpringArmComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ASTU_BaseCharacter, CameraComponent); }


#define STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_12_PROLOG
#define STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_SPARSE_DATA \
	STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_RPC_WRAPPERS \
	STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_INCLASS \
	STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_SPARSE_DATA \
	STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
	STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STU_PROJECT_API UClass* StaticClass<class ASTU_BaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID STU_Project_Source_STU_Project_Public_Player_STU_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
