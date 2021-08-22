// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntelligentCrowd/Public/Component/HealthActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthActorComponent() {}
// Cross Module References
	INTELLIGENTCROWD_API UClass* Z_Construct_UClass_UHealthActorComponent_NoRegister();
	INTELLIGENTCROWD_API UClass* Z_Construct_UClass_UHealthActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_IntelligentCrowd();
// End Cross Module References
	void UHealthActorComponent::StaticRegisterNativesUHealthActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UHealthActorComponent_NoRegister()
	{
		return UHealthActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHealthActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IntelligentCrowd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/HealthActorComponent.h" },
		{ "ModuleRelativePath", "Public/Component/HealthActorComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHealthActorComponent_Statics::ClassParams = {
		&UHealthActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHealthActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealthActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHealthActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHealthActorComponent, 3344339676);
	template<> INTELLIGENTCROWD_API UClass* StaticClass<UHealthActorComponent>()
	{
		return UHealthActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHealthActorComponent(Z_Construct_UClass_UHealthActorComponent, &UHealthActorComponent::StaticClass, TEXT("/Script/IntelligentCrowd"), TEXT("UHealthActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
