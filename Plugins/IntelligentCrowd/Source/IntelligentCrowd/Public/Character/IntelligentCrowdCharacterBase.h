// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IntelligentCrowd\Public\Interface\IntelligentCrowdInterface.h"
#include "IntelligentCrowdCharacterBase.generated.h"

class ATargetPointActor;

UENUM(BlueprintType)
enum class EAIModeType:uint8
{

	AIMode_Point UMETA(DisplayName="寻找固定点位模式"),
	AIMode_Random UMETA(DisplayName="随机模式"),
	AIMode_Intelligent UMETA(DisplayName="智能模式")

};





UCLASS()
class INTELLIGENTCROWD_API AIntelligentCrowdCharacterBase : public ACharacter,public IIntelligentCrowdInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AIntelligentCrowdCharacterBase();

	virtual int32 GetTeamID()const override;
	virtual float GetActorHeath()const override;

	UFUNCTION(BlueprintPure)
		bool GetIsDeadState()const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintPure)
	ATargetPointActor* FindTargetPoint();

	UFUNCTION(BlueprintCallable, Category = "Damage")
		virtual void TakeDmage(AActor* CauserActor,float DamageValue);
	
	virtual void OnDeath(AActor* CauserActor);

	UFUNCTION(BlueprintImplementableEvent)
		void K2_OnDeath(AActor* CauserActor);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


public:

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character|Info")
		int32 TeamID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character|Info")
		float MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IntelligentInfo")
		EAIModeType AIModeType;

	UPROPERTY()
		bool bIsDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IntelligentInfo")
		TArray<class ATargetPointActor*> TargetPoints;

private:
	float CurrentHealth;

};
