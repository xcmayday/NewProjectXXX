// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageProjectileActorBase.generated.h"

UCLASS()
class INTELLIGENTCROWD_API ADamageProjectileActorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADamageProjectileActorBase();

	void InitDamageInfo(const float NewDamageValue, const float NewDamageArea);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:

protected:
	UPROPERTY(EditAnywhere)
		class UProjectileMovementComponent* ProjectileMovementComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DamageInfo", meta = (DisplayName = "伤害"))
		float DamageValue;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DamageInfo", meta = (DisplayName = "伤害范围"))
		float DamageArea;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DamageInfo", meta = (DisplayName = "初始速度"))
		float InitSpeed;
private:

};
