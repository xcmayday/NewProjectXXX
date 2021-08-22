// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageActor/DamageActorBase.h"

// Sets default values
ADamageActorBase::ADamageActorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADamageActorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADamageActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

