// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STU_Project/Public/UI/STUGameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUGameHUD() {}
// Cross Module References
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTUGameHUD_NoRegister();
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTUGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_STU_Project();
// End Cross Module References
	void ASTUGameHUD::StaticRegisterNativesASTUGameHUD()
	{
	}
	UClass* Z_Construct_UClass_ASTUGameHUD_NoRegister()
	{
		return ASTUGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_ASTUGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTUGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_STU_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTUGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/STUGameHUD.h" },
		{ "ModuleRelativePath", "Public/UI/STUGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTUGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTUGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTUGameHUD_Statics::ClassParams = {
		&ASTUGameHUD::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASTUGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTUGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTUGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTUGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTUGameHUD, 2565742427);
	template<> STU_PROJECT_API UClass* StaticClass<ASTUGameHUD>()
	{
		return ASTUGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTUGameHUD(Z_Construct_UClass_ASTUGameHUD, &ASTUGameHUD::StaticClass, TEXT("/Script/STU_Project"), TEXT("ASTUGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTUGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
