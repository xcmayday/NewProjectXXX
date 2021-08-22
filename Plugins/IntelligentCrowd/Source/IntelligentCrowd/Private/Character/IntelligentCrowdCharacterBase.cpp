// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/IntelligentCrowdCharacterBase.h"

DEFINE_LOG_CATEGORY_STATIC(IntelligentCrowdCharacterBaseLog, Log, All);

// Sets default values
AIntelligentCrowdCharacterBase::AIntelligentCrowdCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CurrentHealth = MaxHealth;

}

int32 AIntelligentCrowdCharacterBase::GetTeamID() const
{
	return TeamID;
}

float AIntelligentCrowdCharacterBase::GetActorHeath() const
{
	return CurrentHealth;
}

bool AIntelligentCrowdCharacterBase::GetIsDeadState() const
{
	return bIsDead;
}

// Called when the game starts or when spawned
void AIntelligentCrowdCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

ATargetPointActor* AIntelligentCrowdCharacterBase::FindTargetPoint()
{
	if (TargetPoints.Num()>0)
	{
		if (TargetPoints.Num()==1)
		{
			return TargetPoints[0];
		}
		else
		{
			int32 Index = FMath::RandRange(0, TargetPoints.Num()-1);
			return TargetPoints[Index];
		}
	}
	return nullptr;
}

void AIntelligentCrowdCharacterBase::TakeDmage(AActor* CauserActor, float DamageValue)
{
	CurrentHealth = CurrentHealth - DamageValue;
	UE_LOG(IntelligentCrowdCharacterBaseLog, Log, TEXT(">>>%s,DamageValue=%f"), *FString(__FUNCTION__), DamageValue);
	if (CurrentHealth<=0)
	{
		OnDeath(CauserActor);
	}
}

void AIntelligentCrowdCharacterBase::OnDeath(AActor* CauserActor)
{
	bIsDead = true;
	K2_OnDeath(CauserActor);
}

// Called every frame
void AIntelligentCrowdCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AIntelligentCrowdCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

