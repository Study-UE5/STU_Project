// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STU_Project/Public/Dev/STUDevDamageActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUDevDamageActor() {}
// Cross Module References
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTUDevDamageActor_NoRegister();
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTUDevDamageActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_STU_Project();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void ASTUDevDamageActor::StaticRegisterNativesASTUDevDamageActor()
	{
	}
	UClass* Z_Construct_UClass_ASTUDevDamageActor_NoRegister()
	{
		return ASTUDevDamageActor::StaticClass();
	}
	struct Z_Construct_UClass_ASTUDevDamageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoFullDamage_MetaData[];
#endif
		static void NewProp_DoFullDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoFullDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTUDevDamageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_STU_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUDevDamageActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dev/STUDevDamageActor.h" },
		{ "ModuleRelativePath", "Public/Dev/STUDevDamageActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "STUDevDamageActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dev/STUDevDamageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUDevDamageActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "STUDevDamageActor" },
		{ "ModuleRelativePath", "Public/Dev/STUDevDamageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUDevDamageActor, Radius), METADATA_PARAMS(Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SphereColor_MetaData[] = {
		{ "Category", "STUDevDamageActor" },
		{ "ModuleRelativePath", "Public/Dev/STUDevDamageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SphereColor = { "SphereColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUDevDamageActor, SphereColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SphereColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SphereColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "STUDevDamageActor" },
		{ "ModuleRelativePath", "Public/Dev/STUDevDamageActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTUDevDamageActor, Damage), METADATA_PARAMS(Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_DoFullDamage_MetaData[] = {
		{ "Category", "STUDevDamageActor" },
		{ "ModuleRelativePath", "Public/Dev/STUDevDamageActor.h" },
	};
#endif
	void Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_DoFullDamage_SetBit(void* Obj)
	{
		((ASTUDevDamageActor*)Obj)->DoFullDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_DoFullDamage = { "DoFullDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASTUDevDamageActor), &Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_DoFullDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_DoFullDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_DoFullDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTUDevDamageActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_SphereColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTUDevDamageActor_Statics::NewProp_DoFullDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTUDevDamageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTUDevDamageActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTUDevDamageActor_Statics::ClassParams = {
		&ASTUDevDamageActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTUDevDamageActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTUDevDamageActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUDevDamageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTUDevDamageActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTUDevDamageActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTUDevDamageActor, 3049782595);
	template<> STU_PROJECT_API UClass* StaticClass<ASTUDevDamageActor>()
	{
		return ASTUDevDamageActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTUDevDamageActor(Z_Construct_UClass_ASTUDevDamageActor, &ASTUDevDamageActor::StaticClass, TEXT("/Script/STU_Project"), TEXT("ASTUDevDamageActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTUDevDamageActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
