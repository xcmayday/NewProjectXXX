// Fill out your copyright notice in the Description page of Project Settings.


#include "OtherActor/TargetPointActor.h"

// Sets default values
ATargetPointActor::ATargetPointActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

int32 ATargetPointActor::GetTeamID() const
{
	return TeamID;
}

// Called when the game starts or when spawned
void ATargetPointActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATargetPointActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

