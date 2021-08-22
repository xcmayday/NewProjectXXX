// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ATargetPointActor;
#ifdef INTELLIGENTCROWD_IntelligentCrowdCharacterBase_generated_h
#error "IntelligentCrowdCharacterBase.generated.h already included, missing '#pragma once' in IntelligentCrowdCharacterBase.h"
#endif
#define INTELLIGENTCROWD_IntelligentCrowdCharacterBase_generated_h

#define ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_SPARSE_DATA
#define ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDmage); \
	DECLARE_FUNCTION(execFindTargetPoint); \
	DECLARE_FUNCTION(execGetIsDeadState);


#define ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDmage); \
	DECLARE_FUNCTION(execFindTargetPoint); \
	DECLARE_FUNCTION(execGetIsDeadState);


#define ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_EVENT_PARMS \
	struct IntelligentCrowdCharacterBase_eventK2_OnDeath_Parms \
	{ \
		AActor* CauserActor; \
	};


#define ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_CALLBACK_WRAPPERS
#define ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntelligentCrowdCharacterBase(); \
	friend struct Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AIntelligentCrowdCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntelligentCrowd"), NO_API) \
	DECLARE_SERIALIZER(AIntelligentCrowdCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AIntelligentCrowdCharacterBase*>(this); }


#define ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAIntelligentCrowdCharacterBase(); \
	friend struct Z_Construct_UClass_AIntelligentCrowdCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AIntelligentCrowdCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntelligentCrowd"), NO_API) \
	DECLARE_SERIALIZER(AIntelligentCrowdCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AIntelligentCrowdCharacterBase*>(this); }


#define ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIntelligentCrowdCharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIntelligentCrowdCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntelligentCrowdCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntelligentCrowdCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIntelligentCrowdCharacterBase(AIntelligentCrowdCharacterBase&&); \
	NO_API AIntelligentCrowdCharacterBase(const AIntelligentCrowdCharacterBase&); \
public:


#define ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIntelligentCrowdCharacterBase(AIntelligentCrowdCharacterBase&&); \
	NO_API AIntelligentCrowdCharacterBase(const AIntelligentCrowdCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntelligentCrowdCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntelligentCrowdCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIntelligentCrowdCharacterBase)


#define ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TeamID() { return STRUCT_OFFSET(AIntelligentCrowdCharacterBase, TeamID); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(AIntelligentCrowdCharacterBase, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__AIModeType() { return STRUCT_OFFSET(AIntelligentCrowdCharacterBase, AIModeType); } \
	FORCEINLINE static uint32 __PPO__bIsDead() { return STRUCT_OFFSET(AIntelligentCrowdCharacterBase, bIsDead); } \
	FORCEINLINE static uint32 __PPO__TargetPoints() { return STRUCT_OFFSET(AIntelligentCrowdCharacterBase, TargetPoints); }


#define ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_26_PROLOG \
	ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_EVENT_PARMS


#define ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_PRIVATE_PROPERTY_OFFSET \
	ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_SPARSE_DATA \
	ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_RPC_WRAPPERS \
	ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_CALLBACK_WRAPPERS \
	ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_INCLASS \
	ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_PRIVATE_PROPERTY_OFFSET \
	ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_SPARSE_DATA \
	ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_CALLBACK_WRAPPERS \
	ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_INCLASS_NO_PURE_DECLS \
	ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTELLIGENTCROWD_API UClass* StaticClass<class AIntelligentCrowdCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectXOX_Plugins_IntelligentCrowd_Source_IntelligentCrowd_Public_Character_IntelligentCrowdCharacterBase_h


#define FOREACH_ENUM_EAIMODETYPE(op) \
	op(EAIModeType::AIMode_Point) \
	op(EAIModeType::AIMode_Random) \
	op(EAIModeType::AIMode_Intelligent) 

enum class EAIModeType : uint8;
template<> INTELLIGENTCROWD_API UEnum* StaticEnum<EAIModeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
