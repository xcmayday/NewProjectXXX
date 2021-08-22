// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntelligentCrowd/Public/OtherActor/TargetPointActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetPointActor() {}
// Cross Module References
	INTELLIGENTCROWD_API UClass* Z_Construct_UClass_ATargetPointActor_NoRegister();
	INTELLIGENTCROWD_API UClass* Z_Construct_UClass_ATargetPointActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_IntelligentCrowd();
	INTELLIGENTCROWD_API UClass* Z_Construct_UClass_UIntelligentCrowdInterface_NoRegister();
// End Cross Module References
	void ATargetPointActor::StaticRegisterNativesATargetPointActor()
	{
	}
	UClass* Z_Construct_UClass_ATargetPointActor_NoRegister()
	{
		return ATargetPointActor::StaticClass();
	}
	struct Z_Construct_UClass_ATargetPointActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATargetPointActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_IntelligentCrowd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPointActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OtherActor/TargetPointActor.h" },
		{ "ModuleRelativePath", "Public/OtherActor/TargetPointActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPointActor_Statics::NewProp_TeamID_MetaData[] = {
		{ "Category", "TargetPointActor" },
		{ "ModuleRelativePath", "Public/OtherActor/TargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATargetPointActor_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATargetPointActor, TeamID), METADATA_PARAMS(Z_Construct_UClass_ATargetPointActor_Statics::NewProp_TeamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPointActor_Statics::NewProp_TeamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetPointActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPointActor_Statics::NewProp_TeamID,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATargetPointActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIntelligentCrowdInterface_NoRegister, (int32)VTABLE_OFFSET(ATargetPointActor, IIntelligentCrowdInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATargetPointActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetPointActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATargetPointActor_Statics::ClassParams = {
		&ATargetPointActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATargetPointActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPointActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATargetPointActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPointActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATargetPointActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATargetPointActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATargetPointActor, 581032136);
	template<> INTELLIGENTCROWD_API UClass* StaticClass<ATargetPointActor>()
	{
		return ATargetPointActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATargetPointActor(Z_Construct_UClass_ATargetPointActor, &ATargetPointActor::StaticClass, TEXT("/Script/IntelligentCrowd"), TEXT("ATargetPointActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetPointActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
