// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntelligentCrowd/Public/DamageActor/DamageActorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageActorBase() {}
// Cross Module References
	INTELLIGENTCROWD_API UClass* Z_Construct_UClass_ADamageActorBase_NoRegister();
	INTELLIGENTCROWD_API UClass* Z_Construct_UClass_ADamageActorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_IntelligentCrowd();
// End Cross Module References
	void ADamageActorBase::StaticRegisterNativesADamageActorBase()
	{
	}
	UClass* Z_Construct_UClass_ADamageActorBase_NoRegister()
	{
		return ADamageActorBase::StaticClass();
	}
	struct Z_Construct_UClass_ADamageActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADamageActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_IntelligentCrowd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageActorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DamageActor/DamageActorBase.h" },
		{ "ModuleRelativePath", "Public/DamageActor/DamageActorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageActorBase_Statics::NewProp_DamageValue_MetaData[] = {
		{ "Category", "Damage|Info" },
		{ "ModuleRelativePath", "Public/DamageActor/DamageActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADamageActorBase_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADamageActorBase, DamageValue), METADATA_PARAMS(Z_Construct_UClass_ADamageActorBase_Statics::NewProp_DamageValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageActorBase_Statics::NewProp_DamageValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageActorBase_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Damage|Info" },
		{ "ModuleRelativePath", "Public/DamageActor/DamageActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADamageActorBase_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADamageActorBase, Period), METADATA_PARAMS(Z_Construct_UClass_ADamageActorBase_Statics::NewProp_Period_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageActorBase_Statics::NewProp_Period_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageActorBase_Statics::NewProp_DelayDamage_MetaData[] = {
		{ "Category", "Damage|Info" },
		{ "ModuleRelativePath", "Public/DamageActor/DamageActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADamageActorBase_Statics::NewProp_DelayDamage = { "DelayDamage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADamageActorBase, DelayDamage), METADATA_PARAMS(Z_Construct_UClass_ADamageActorBase_Statics::NewProp_DelayDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageActorBase_Statics::NewProp_DelayDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADamageActorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageActorBase_Statics::NewProp_DamageValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageActorBase_Statics::NewProp_Period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageActorBase_Statics::NewProp_DelayDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADamageActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADamageActorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADamageActorBase_Statics::ClassParams = {
		&ADamageActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADamageActorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADamageActorBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADamageActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADamageActorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADamageActorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADamageActorBase, 528037299);
	template<> INTELLIGENTCROWD_API UClass* StaticClass<ADamageActorBase>()
	{
		return ADamageActorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADamageActorBase(Z_Construct_UClass_ADamageActorBase, &ADamageActorBase::StaticClass, TEXT("/Script/IntelligentCrowd"), TEXT("ADamageActorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADamageActorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
