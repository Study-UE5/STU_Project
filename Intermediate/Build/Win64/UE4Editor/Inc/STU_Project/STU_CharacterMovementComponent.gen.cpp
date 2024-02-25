// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STU_Project/Public/Components/STU_CharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTU_CharacterMovementComponent() {}
// Cross Module References
	STU_PROJECT_API UClass* Z_Construct_UClass_USTU_CharacterMovementComponent_NoRegister();
	STU_PROJECT_API UClass* Z_Construct_UClass_USTU_CharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_STU_Project();
// End Cross Module References
	void USTU_CharacterMovementComponent::StaticRegisterNativesUSTU_CharacterMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_USTU_CharacterMovementComponent_NoRegister()
	{
		return USTU_CharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_USTU_CharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTU_CharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_STU_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTU_CharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Components/STU_CharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Components/STU_CharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTU_CharacterMovementComponent_Statics::NewProp_RunModifier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "1.5" },
		{ "ModuleRelativePath", "Public/Components/STU_CharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USTU_CharacterMovementComponent_Statics::NewProp_RunModifier = { "RunModifier", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTU_CharacterMovementComponent, RunModifier), METADATA_PARAMS(Z_Construct_UClass_USTU_CharacterMovementComponent_Statics::NewProp_RunModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTU_CharacterMovementComponent_Statics::NewProp_RunModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTU_CharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTU_CharacterMovementComponent_Statics::NewProp_RunModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTU_CharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTU_CharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTU_CharacterMovementComponent_Statics::ClassParams = {
		&USTU_CharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USTU_CharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USTU_CharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USTU_CharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTU_CharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTU_CharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTU_CharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTU_CharacterMovementComponent, 2592108181);
	template<> STU_PROJECT_API UClass* StaticClass<USTU_CharacterMovementComponent>()
	{
		return USTU_CharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTU_CharacterMovementComponent(Z_Construct_UClass_USTU_CharacterMovementComponent, &USTU_CharacterMovementComponent::StaticClass, TEXT("/Script/STU_Project"), TEXT("USTU_CharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTU_CharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
