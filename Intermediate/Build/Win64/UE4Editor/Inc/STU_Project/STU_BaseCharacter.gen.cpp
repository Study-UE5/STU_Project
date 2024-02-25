// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STU_Project/Public/Player/STU_BaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTU_BaseCharacter() {}
// Cross Module References
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTU_BaseCharacter_NoRegister();
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTU_BaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_STU_Project();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ASTU_BaseCharacter::StaticRegisterNativesASTU_BaseCharacter()
	{
	}
	UClass* Z_Construct_UClass_ASTU_BaseCharacter_NoRegister()
	{
		return ASTU_BaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASTU_BaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTU_BaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_STU_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTU_BaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/STU_BaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/STU_BaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTU_BaseCharacter_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/STU_BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTU_BaseCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTU_BaseCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTU_BaseCharacter_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTU_BaseCharacter_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTU_BaseCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/STU_BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTU_BaseCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTU_BaseCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTU_BaseCharacter_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTU_BaseCharacter_Statics::NewProp_CameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTU_BaseCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTU_BaseCharacter_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTU_BaseCharacter_Statics::NewProp_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTU_BaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTU_BaseCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTU_BaseCharacter_Statics::ClassParams = {
		&ASTU_BaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTU_BaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTU_BaseCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTU_BaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTU_BaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTU_BaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTU_BaseCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTU_BaseCharacter, 1347990611);
	template<> STU_PROJECT_API UClass* StaticClass<ASTU_BaseCharacter>()
	{
		return ASTU_BaseCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTU_BaseCharacter(Z_Construct_UClass_ASTU_BaseCharacter, &ASTU_BaseCharacter::StaticClass, TEXT("/Script/STU_Project"), TEXT("ASTU_BaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTU_BaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
