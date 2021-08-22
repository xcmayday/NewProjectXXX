// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageActorBase.generated.h"

UCLASS()
class INTELLIGENTCROWD_API ADamageActorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADamageActorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//virtual void DamageAction()override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage|Info")
		float DamageValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage|Info")
		float Period;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage|Info")
		float DelayDamage;
private:



};
