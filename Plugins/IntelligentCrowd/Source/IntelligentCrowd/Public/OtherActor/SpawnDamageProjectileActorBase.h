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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TSubclassOf<class ADamageProjectileActorBase> DamageActorClass;
};
