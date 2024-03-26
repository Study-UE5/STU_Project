// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef STU_PROJECT_STUHealthComponent_generated_h
#error "STUHealthComponent.generated.h already included, missing '#pragma once' in STUHealthComponent.h"
#endif
#define STU_PROJECT_STUHealthComponent_generated_h

#define STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_SPARSE_DATA
#define STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamage); \
	DECLARE_FUNCTION(execIsDead);


#define STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamage); \
	DECLARE_FUNCTION(execIsDead);


#define STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTUHealthComponent(); \
	friend struct Z_Construct_UClass_USTUHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USTUHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/STU_Project"), NO_API) \
	DECLARE_SERIALIZER(USTUHealthComponent)


#define STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSTUHealthComponent(); \
	friend struct Z_Construct_UClass_USTUHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USTUHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/STU_Project"), NO_API) \
	DECLARE_SERIALIZER(USTUHealthComponent)


#define STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTUHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTUHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUHealthComponent(USTUHealthComponent&&); \
	NO_API USTUHealthComponent(const USTUHealthComponent&); \
public:


#define STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USTUHealthComponent(USTUHealthComponent&&); \
	NO_API USTUHealthComponent(const USTUHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTUHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTUHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USTUHealthComponent)


#define STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(USTUHealthComponent, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__AutoHeal() { return STRUCT_OFFSET(USTUHealthComponent, AutoHeal); } \
	FORCEINLINE static uint32 __PPO__HealUpdateTime() { return STRUCT_OFFSET(USTUHealthComponent, HealUpdateTime); } \
	FORCEINLINE static uint32 __PPO__HealDelay() { return STRUCT_OFFSET(USTUHealthComponent, HealDelay); } \
	FORCEINLINE static uint32 __PPO__HealModifier() { return STRUCT_OFFSET(USTUHealthComponent, HealModifier); }


#define STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_10_PROLOG
#define STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_SPARSE_DATA \
	STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_RPC_WRAPPERS \
	STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_INCLASS \
	STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_SPARSE_DATA \
	STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_INCLASS_NO_PURE_DECLS \
	STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STU_PROJECT_API UClass* StaticClass<class USTUHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID STU_Project_Source_STU_Project_Public_Components_STUHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
