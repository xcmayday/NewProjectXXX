// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnDamageProjectileActorBase.generated.h"

UCLASS()
class INTELLIGENTCROWD_API ASpawnDamageProjectileActorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnDamageProjectileActorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
		void SpawnEvent();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DamageInfo", meta = (DisplayName = "投掷物类型"))
		TSubclassOf<class ADamageProjectileActorBase> DamageActorClass;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly,Category="DamageInfo",meta=(DisplayName="延迟生成"))
		float BeginPlayDelay;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "DamageInfo",meta=(DisplayName="频率"))
		float Period;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DamageInfo",meta=(DisplayName="伤害"))
		float DamageValue;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DamageInfo",meta = (DisplayName = "伤害范围"))
		float DamageArea;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DamageInfo", meta = (DisplayName = "初始速度"))
		float InitSpeed;

private:
	FTimerHandle TH_SpawnHandle;



};
