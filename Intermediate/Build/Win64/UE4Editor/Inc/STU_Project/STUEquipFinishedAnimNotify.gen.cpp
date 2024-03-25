// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STU_Project/Public/Animations/STUEquipFinishedAnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUEquipFinishedAnimNotify() {}
// Cross Module References
	STU_PROJECT_API UClass* Z_Construct_UClass_USTUEquipFinishedAnimNotify_NoRegister();
	STU_PROJECT_API UClass* Z_Construct_UClass_USTUEquipFinishedAnimNotify();
	STU_PROJECT_API UClass* Z_Construct_UClass_USTUAnimNotify();
	UPackage* Z_Construct_UPackage__Script_STU_Project();
// End Cross Module References
	void USTUEquipFinishedAnimNotify::StaticRegisterNativesUSTUEquipFinishedAnimNotify()
	{
	}
	UClass* Z_Construct_UClass_USTUEquipFinishedAnimNotify_NoRegister()
	{
		return USTUEquipFinishedAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USTUAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_STU_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animations/STUEquipFinishedAnimNotify.h" },
		{ "ModuleRelativePath", "Public/Animations/STUEquipFinishedAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUEquipFinishedAnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics::ClassParams = {
		&USTUEquipFinishedAnimNotify::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUEquipFinishedAnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUEquipFinishedAnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUEquipFinishedAnimNotify, 1984524067);
	template<> STU_PROJECT_API UClass* StaticClass<USTUEquipFinishedAnimNotify>()
	{
		return USTUEquipFinishedAnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUEquipFinishedAnimNotify(Z_Construct_UClass_USTUEquipFinishedAnimNotify, &USTUEquipFinishedAnimNotify::StaticClass, TEXT("/Script/STU_Project"), TEXT("USTUEquipFinishedAnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUEquipFinishedAnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
