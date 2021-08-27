// Fill out your copyright notice in the Description page of Project Settings.


#include "OtherActor/SpawnDamageProjectileActorBase.h"
#include "TimerManager.h"
#include "DamageActor/DamageProjectileActorBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ASpawnDamageProjectileActorBase::ASpawnDamageProjectileActorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnDamageProjectileActorBase::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(TH_SpawnHandle, this,&ASpawnDamageProjectileActorBase::SpawnEvent, Period, true, BeginPlayDelay);
	
}

void ASpawnDamageProjectileActorBase::SpawnEvent()
{
	//FActorSpawnParameters Params;
	//Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	////AActor* SpawnActor = GetWorld()->SpawnActor<AActor>(CrystalStoneClass, mPawn->GetActorTransform(), Params);
	////掉落身上的宝石
	//ACrystalStone* SpawnActor = GetWorld()->SpawnActorDeferred<ACrystalStone>(CrystalStoneClass, SpawnTransform, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	//if (SpawnActor)
	//{
	//	SpawnActor->Init(FVector(180, 180, 500), true);
	//	UGameplayStatics::FinishSpawningActor(SpawnActor, SpawnTransform);
	//	UE_LOG(GameModeOnline3V3Log, Log, TEXT(">>>%s,SpawnStone>>>FinishSpawn"), *FString(__FUNCTION__));
	//}
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	ADamageProjectileActorBase* DamageActor=GetWorld()->SpawnActorDeferred<ADamageProjectileActorBase>(DamageActorClass, GetActorTransform(), this, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	if (DamageActor)
	{
		DamageActor->InitDamageInfo(DamageValue, DamageArea);
		UGameplayStatics::FinishSpawningActor(DamageActor, GetActorTransform());
	}
}

// Called every frame
void ASpawnDamageProjectileActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

