// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageActor/DamageProjectileActorBase.h"
#include "GameFramework\ProjectileMovementComponent.h"

// Sets default values
ADamageProjectileActorBase::ADamageProjectileActorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	//ProjectileMovementComponent->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ADamageProjectileActorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADamageProjectileActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

