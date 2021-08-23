// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageActor/DamageActorBase.h"
#include "Kismet\KismetSystemLibrary.h"
#include "Kismet\KismetMathLibrary.h"
#include "Math/Color.h"
#include "Interface\IntelligentCrowdInterface.h"
#include "Kismet/GameplayStatics.h"

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

void ADamageActorBase::LineTraceDamage()
{
	FVector StartLocation = GetActorLocation();

	FVector EndLocation = UKismetMathLibrary::Normal(GetActorForwardVector()) * DamageArea;
	TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));
	TArray<AActor*> IgnoreActors;
	IgnoreActors.Add(this);
	FHitResult HitResult;
	bool IsVaild=UKismetSystemLibrary::LineTraceSingleForObjects(this, StartLocation, EndLocation, ObjectTypes, false, IgnoreActors, EDrawDebugTrace::ForDuration, HitResult,true,FLinearColor::Red, FLinearColor::Green, 0.5f);
	if (IsVaild)
	{
		AActor* HitActor = HitResult.Actor.Get();
		IIntelligentCrowdInterface* InterfaceActor = Cast<IIntelligentCrowdInterface>(HitActor);
		if (InterfaceActor)
		{
			UGameplayStatics::ApplyPointDamage(HitActor, DamageValue, HitResult.Location, HitResult, nullptr, this, UDamageType::StaticClass());
		}

	}
}

// Called every frame
void ADamageActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

