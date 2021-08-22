// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntelligentCrowd/Public/Character/IntelligentCrowdCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntelligentCrowdCharacterBase() {}
// Cross Module References
	INTELLIGENTCROWD_API UEnum* Z_Construct_UEnum_IntelligentCrowd_EAIModeType();
	UPackage* Z_Construct_UPackage__Script_IntelligentCrowd();
	INTELLIGENTCROWD_API UClass* Z_Construct_UClass_AIntelligentCrowdCharacterBase_NoRegister();
	INTELLIGENTCROWD_API UClass* Z_Construct_UClass_AIntelligentCrowdCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	INTELLIGENTCROWD_API UClass* Z_Construct_UClass_ATargetPointActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INTELLIGENTCROWD_API UClass* Z_Construct_UClass_UIntelligentCrowdInterface_NoRegister();
// End Cross Module References
	static UEnum* EAIModeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_IntelligentCrowd_EAIModeType, Z_Construct_UPackage__Script_IntelligentCrowd(), TEXT("EAIModeType"));
		}
		return Singleton;
	}
	template<> INTELLIGENTCROWD_API UEnum* StaticEnum<EAIModeType>()
	{
		return EAIModeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIModeType(EAIModeType_StaticEnum, TEXT("/Script/IntelligentCrowd"), TEXT("EAIModeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_IntelligentCrowd_EAIModeType_Hash() { return 293765415U; }
	UEnum* Z_Construct_UEnum_IntelligentCrowd_EAIModeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_IntelligentCrowd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIModeType"), 0, Get_Z_Construct_UEnum_IntelligentCrowd_EAIModeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIModeType::AIMode_Point", (int64)EAIModeType::AIMode_Point },
				{ "EAIModeType::AIMode_Random", (int64)EAIModeType::AIMode_Random },
				{ "EAIModeType::AIMode_Intelligent", (int64)EAIModeType::AIMode_Intelligent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AIMode_Intelligent.DisplayName", "\xe6\x99\xba\xe8\x83\xbd\xe6\xa8\xa1\xe5\xbc\x8f" },
				{ "AIMode_Intelligent.Name", "EAIModeType::AIMode_Intelligent" },
				{ "AIMode_Point.DisplayName", "\xe5\xaf\xbb\xe6\x89\xbe\xe5\x9b\xba\xe5\xae\x9a\xe7\x82\xb9\xe4\xbd\x8d\xe6\xa8\xa1\xe5\xbc\x8f" },
				{ "AIMode_Point.Name", "EAIModeType::AIMode_Point" },
				{ "AIMode_Random.DisplayName", "\xe9\x9a\x8f\xe6\x9c\xba\xe6\xa8\xa1\xe5\xbc\x8f" },
				{ "AIMode_Random.Name", "EAIModeType::AIMode_Random" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Character/IntelligentCrowdCharacterBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_IntelligentCrowd,
				nullptr,
				"EAIModeType",
				"EAIModeType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AIntelligentCrowdCharacterBase::execTakeDmage)
	{
		P_GET_OBJECT(AActor,Z_Param_CauserActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDmage(Z_Param_CauserActor,Z_Param_DamageValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AIntelligentCrowdCharacterBase::execFindTargetPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATargetPointActor**)Z_Param__Result=P_THIS->FindTargetPoint();
		P_NATIVE_END;
	}
	static FName NAME_AIntelligentCrowdCharacterBase_K2_OnDeath = FName(TEXT("K2_OnDeath"));
	void AIntelligentCrowdCharacterBase::K2_OnDeath(AActor* CauserActor)
	{
		IntelligentCrowdCharacterBase_eventK2_OnDeath_Parms Parms;
		Parms.CauserActor=CauserActor;
		ProcessEvent(FindFunctionChecked(NAME_AIntelligentCrowdCharacterBase_K2_OnDeath),&Parms);
	}
	void AIntelligentCrowdCharacterBase::StaticRegisterNativesAIntelligentCrowdCharacterBase()
	{
		UClass* Class = AIntelligentCrowdCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindTargetPoint", &AIntelligentCrowdCharacterBase::execFindTargetPoint },
			{ "TakeDmage", &AIntelligentCrowdCharacterBase::execTakeDmage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AIntelligentCrowdCharacterBase_FindTargetPoint_Statics
	{
		struct IntelligentCrowdCharacterBase_eventFindTargetPoint_Parms
		{
			ATargetPointActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIntelligentCrowdCharacterBase_FindTargetPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IntelligentCrowdCharacterBase_eventFindTargetPoint_Parms, ReturnValue), Z_Construct_UClass_ATargetPointActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIntelligentCrowdCharacterBase_FindTargetPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIntelligentCrowdCharacterBase_FindTargetPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIntelligentCrowdCharacterBase_FindTargetPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/IntelligentCrowdCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIntelligentCrowdCharacterBase_FindTargetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIntelligentCrowdCharacterBase, nullptr, "FindTargetPoint", nullptr, nullptr, sizeof(IntelligentCrowdCharacterBase_eventFindTargetPoint_Parms), Z_Construct_UFunction_AIntelligentCrowdCharacterBase_FindTargetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIntelligentCrowdCharacterBase_FindTargetPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIntelligentCrowdCharacterBase_FindTargetPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIntelligentCrowdCharacterBase_FindTargetPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIntelligentCrowdCharacterBase_FindTargetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIntelligentCrowdCharacterBase_FindTargetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIntelligentCrowdCharacterBase_K2_OnDeath_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CauserActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIntelligentCrowdCharacterBase_K2_OnDeath_Statics::NewProp_CauserActor = { "CauserActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IntelligentCrowdCharacterBase_eventK2_OnDeath_Parms, CauserActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIntelligentCrowdCharacterBase_K2_OnDeath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIntelligentCrowdCharacterBase_K2_OnDeath_Statics::NewProp_CauserActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIntelligentCrowdCharacterBase_K2_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/IntelligentCrowdCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIntelligentCrowdCharacterBase_K2_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIntelligentCrowdCharacterBase, nullptr, "K2_OnDeath", nullptr, nullptr, sizeof(IntelligentCrowdCharacterBase_eventK2_OnDeath_Parms), Z_Construct_UFunction_AIntelligentCrowdCharacterBase_K2_OnDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIntelligentCrowdCharacterBase_K2_OnDeath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIntelligentCrowdCharacterBase_K2_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIntelligentCrowdCharacterBase_K2_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIntelligentCrowdCharacterBase_K2_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIntelligentCrowdCharacterBase_K2_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIntelligentCrowdCharacterBase_TakeDmage_Statics
	{
		struct IntelligentCrowdCharacterBase_eventTakeDmage_Parms
		{
			AActor* CauserActor;
			float DamageValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CauserActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIntelligentCrowdCharacterBase_TakeDmage_Statics::NewProp_CauserActor = { "CauserActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IntelligentCrowdCharacterBase_eventTakeDmage_Parms, CauserActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AIntelligentCrowdCharacterBase_TakeDmage_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IntelligentCrowdCharacterBase_eventTakeDmage_Parms, DamageValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIntelligentCrowdCharacterBase_TakeDmage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIntelligentCrowdCharacterBase_TakeDmage_Statics::NewProp_CauserActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIntelligentCrowdCharacterBase_TakeDmage_Statics::NewProp_DamageValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIntelligentCrowdCharacterBase_TakeDmage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/Character/IntelligentCrowdCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIntelligentCrowdCharacterBase_TakeDmage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIntelligentCrowdCharacterBase, nullptr, "TakeDmage", nullptr, nullptr, sizeof(IntelligentCrowdCharacterBase_eventTakeDmage_Parms), Z_Construct_UFunction_AIntelligentCrowdCharacterBase_TakeDmage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIntelligentCrowdCharacterBase_TakeDmage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIntelligentCrowdCharacterBase_TakeDmage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIntelligentCrowdCharacterBase_TakeDmage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIntelligentCrowdCharacterBase_TakeDmage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIntelligentCrowdCharacterBase_TakeDmage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AIntelligentCrowdCharacterBase_NoRegister()
	{
		return AIntelligentCrowdCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AIModeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIModeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AIModeType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_IntelligentCrowd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AIntelligentCrowdCharacterBase_FindTargetPoint, "FindTargetPoint" }, // 1260294147
		{ &Z_Construct_UFunction_AIntelligentCrowdCharacterBase_K2_OnDeath, "K2_OnDeath" }, // 3560177848
		{ &Z_Construct_UFunction_AIntelligentCrowdCharacterBase_TakeDmage, "TakeDmage" }, // 3393388881
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/IntelligentCrowdCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Character/IntelligentCrowdCharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_TeamID_MetaData[] = {
		{ "Category", "Character|Info" },
		{ "ModuleRelativePath", "Public/Character/IntelligentCrowdCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIntelligentCrowdCharacterBase, TeamID), METADATA_PARAMS(Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_TeamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_TeamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Character|Info" },
		{ "ModuleRelativePath", "Public/Character/IntelligentCrowdCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIntelligentCrowdCharacterBase, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_MaxHealth_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_AIModeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_AIModeType_MetaData[] = {
		{ "Category", "IntelligentInfo" },
		{ "ModuleRelativePath", "Public/Character/IntelligentCrowdCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_AIModeType = { "AIModeType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIntelligentCrowdCharacterBase, AIModeType), Z_Construct_UEnum_IntelligentCrowd_EAIModeType, METADATA_PARAMS(Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_AIModeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_AIModeType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_TargetPoints_Inner = { "TargetPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATargetPointActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_TargetPoints_MetaData[] = {
		{ "Category", "IntelligentInfo" },
		{ "ModuleRelativePath", "Public/Character/IntelligentCrowdCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_TargetPoints = { "TargetPoints", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIntelligentCrowdCharacterBase, TargetPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_TargetPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_TargetPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_TeamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_AIModeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_AIModeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_TargetPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::NewProp_TargetPoints,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIntelligentCrowdInterface_NoRegister, (int32)VTABLE_OFFSET(AIntelligentCrowdCharacterBase, IIntelligentCrowdInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntelligentCrowdCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::ClassParams = {
		&AIntelligentCrowdCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIntelligentCrowdCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIntelligentCrowdCharacterBase, 782063217);
	template<> INTELLIGENTCROWD_API UClass* StaticClass<AIntelligentCrowdCharacterBase>()
	{
		return AIntelligentCrowdCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIntelligentCrowdCharacterBase(Z_Construct_UClass_AIntelligentCrowdCharacterBase, &AIntelligentCrowdCharacterBase::StaticClass, TEXT("/Script/IntelligentCrowd"), TEXT("AIntelligentCrowdCharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIntelligentCrowdCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
