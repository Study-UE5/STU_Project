// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STU_Project/Public/Animations/STUReloadFinishedAnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUReloadFinishedAnimNotify() {}
// Cross Module References
	STU_PROJECT_API UClass* Z_Construct_UClass_USTUReloadFinishedAnimNotify_NoRegister();
	STU_PROJECT_API UClass* Z_Construct_UClass_USTUReloadFinishedAnimNotify();
	STU_PROJECT_API UClass* Z_Construct_UClass_USTUAnimNotify();
	UPackage* Z_Construct_UPackage__Script_STU_Project();
// End Cross Module References
	void USTUReloadFinishedAnimNotify::StaticRegisterNativesUSTUReloadFinishedAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_USTUReloadFinishedAnimNotify_NoRegister()
	{
		return USTUReloadFinishedAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_USTUReloadFinishedAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUReloadFinishedAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USTUAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_STU_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUReloadFinishedAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animations/STUReloadFinishedAnimNotify.h" },
		{ "ModuleRelativePath", "Public/Animations/STUReloadFinishedAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUReloadFinishedAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUReloadFinishedAnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUReloadFinishedAnimNotify_Statics::ClassParams = {
		&USTUReloadFinishedAnimNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USTUReloadFinishedAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUReloadFinishedAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUReloadFinishedAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUReloadFinishedAnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUReloadFinishedAnimNotify, 2211122537);
	template<> STU_PROJECT_API UClass* StaticClass<USTUReloadFinishedAnimNotify>()
	{
		return USTUReloadFinishedAnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUReloadFinishedAnimNotify(Z_Construct_UClass_USTUReloadFinishedAnimNotify, &USTUReloadFinishedAnimNotify::StaticClass, TEXT("/Script/STU_Project"), TEXT("USTUReloadFinishedAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUReloadFinishedAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
