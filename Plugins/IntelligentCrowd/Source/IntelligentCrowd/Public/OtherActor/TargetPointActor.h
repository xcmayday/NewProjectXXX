// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface/IntelligentCrowdInterface.h"
#include "TargetPointActor.generated.h"

UCLASS()
class INTELLIGENTCROWD_API ATargetPointActor : public AActor,public IIntelligentCrowdInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATargetPointActor();

	virtual int32 GetTeamID()const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 TeamID;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
