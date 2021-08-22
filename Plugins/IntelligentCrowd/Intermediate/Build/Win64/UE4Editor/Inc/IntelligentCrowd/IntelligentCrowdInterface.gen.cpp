// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntelligentCrowd/Public/Interface/IntelligentCrowdInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntelligentCrowdInterface() {}
// Cross Module References
	INTELLIGENTCROWD_API UClass* Z_Construct_UClass_UIntelligentCrowdInterface_NoRegister();
	INTELLIGENTCROWD_API UClass* Z_Construct_UClass_UIntelligentCrowdInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_IntelligentCrowd();
// End Cross Module References
	void UIntelligentCrowdInterface::StaticRegisterNativesUIntelligentCrowdInterface()
	{
	}
	UClass* Z_Construct_UClass_UIntelligentCrowdInterface_NoRegister()
	{
		return UIntelligentCrowdInterface::StaticClass();
	}
	struct Z_Construct_UClass_UIntelligentCrowdInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIntelligentCrowdInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_IntelligentCrowd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIntelligentCrowdInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/IntelligentCrowdInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIntelligentCrowdInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIntelligentCrowdInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIntelligentCrowdInterface_Statics::ClassParams = {
		&UIntelligentCrowdInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIntelligentCrowdInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIntelligentCrowdInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIntelligentCrowdInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIntelligentCrowdInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIntelligentCrowdInterface, 274726765);
	template<> INTELLIGENTCROWD_API UClass* StaticClass<UIntelligentCrowdInterface>()
	{
		return UIntelligentCrowdInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIntelligentCrowdInterface(Z_Construct_UClass_UIntelligentCrowdInterface, &UIntelligentCrowdInterface::StaticClass, TEXT("/Script/IntelligentCrowd"), TEXT("UIntelligentCrowdInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIntelligentCrowdInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
