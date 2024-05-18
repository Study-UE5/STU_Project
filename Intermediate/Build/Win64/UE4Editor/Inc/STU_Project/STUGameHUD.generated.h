// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STU_PROJECT_STUGameHUD_generated_h
#error "STUGameHUD.generated.h already included, missing '#pragma once' in STUGameHUD.h"
#endif
#define STU_PROJECT_STUGameHUD_generated_h

#define STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_SPARSE_DATA
#define STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_RPC_WRAPPERS
#define STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTUGameHUD(); \
	friend struct Z_Construct_UClass_ASTUGameHUD_Statics; \
public: \
	DECLARE_CLASS(ASTUGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/STU_Project"), NO_API) \
	DECLARE_SERIALIZER(ASTUGameHUD)


#define STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASTUGameHUD(); \
	friend struct Z_Construct_UClass_ASTUGameHUD_Statics; \
public: \
	DECLARE_CLASS(ASTUGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/STU_Project"), NO_API) \
	DECLARE_SERIALIZER(ASTUGameHUD)


#define STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTUGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUGameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUGameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUGameHUD(ASTUGameHUD&&); \
	NO_API ASTUGameHUD(const ASTUGameHUD&); \
public:


#define STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTUGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTUGameHUD(ASTUGameHUD&&); \
	NO_API ASTUGameHUD(const ASTUGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUGameHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTUGameHUD)


#define STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerHUDWidgetClass() { return STRUCT_OFFSET(ASTUGameHUD, PlayerHUDWidgetClass); } \
	FORCEINLINE static uint32 __PPO__PauseWidgetClass() { return STRUCT_OFFSET(ASTUGameHUD, PauseWidgetClass); } \
	FORCEINLINE static uint32 __PPO__GameWidgets() { return STRUCT_OFFSET(ASTUGameHUD, GameWidgets); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(ASTUGameHUD, CurrentWidget); }


#define STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_13_PROLOG
#define STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_SPARSE_DATA \
	STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_RPC_WRAPPERS \
	STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_INCLASS \
	STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_SPARSE_DATA \
	STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_INCLASS_NO_PURE_DECLS \
	STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STU_PROJECT_API UClass* StaticClass<class ASTUGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID STU_Project_Source_STU_Project_Public_UI_STUGameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
