// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STU_Project/Public/Player/STU_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTU_PlayerController() {}
// Cross Module References
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTU_PlayerController_NoRegister();
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTU_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_STU_Project();
// End Cross Module References
	void ASTU_PlayerController::StaticRegisterNativesASTU_PlayerController()
	{
	}
	UClass* Z_Construct_UClass_ASTU_PlayerController_NoRegister()
	{
		return ASTU_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASTU_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTU_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_STU_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTU_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/STU_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/STU_PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTU_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTU_PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTU_PlayerController_Statics::ClassParams = {
		&ASTU_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTU_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTU_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTU_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTU_PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTU_PlayerController, 2979318347);
	template<> STU_PROJECT_API UClass* StaticClass<ASTU_PlayerController>()
	{
		return ASTU_PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTU_PlayerController(Z_Construct_UClass_ASTU_PlayerController, &ASTU_PlayerController::StaticClass, TEXT("/Script/STU_Project"), TEXT("ASTU_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTU_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
