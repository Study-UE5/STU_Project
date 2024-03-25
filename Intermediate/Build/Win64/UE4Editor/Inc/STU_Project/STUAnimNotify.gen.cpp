// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STU_Project/Public/Animations/STUAnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUAnimNotify() {}
// Cross Module References
	STU_PROJECT_API UClass* Z_Construct_UClass_USTUAnimNotify_NoRegister();
	STU_PROJECT_API UClass* Z_Construct_UClass_USTUAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_STU_Project();
// End Cross Module References
	void USTUAnimNotify::StaticRegisterNativesUSTUAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_USTUAnimNotify_NoRegister()
	{
		return USTUAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_USTUAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_STU_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animations/STUAnimNotify.h" },
		{ "ModuleRelativePath", "Public/Animations/STUAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUAnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUAnimNotify_Statics::ClassParams = {
		&USTUAnimNotify::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USTUAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUAnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUAnimNotify, 3430329276);
	template<> STU_PROJECT_API UClass* StaticClass<USTUAnimNotify>()
	{
		return USTUAnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUAnimNotify(Z_Construct_UClass_USTUAnimNotify, &USTUAnimNotify::StaticClass, TEXT("/Script/STU_Project"), TEXT("USTUAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
