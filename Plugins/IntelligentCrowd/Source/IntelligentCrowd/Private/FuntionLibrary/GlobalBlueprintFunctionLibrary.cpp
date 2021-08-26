// Fill out your copyright notice in the Description page of Project Settings.


#include "FuntionLibrary/GlobalBlueprintFunctionLibrary.h"
#include "Interface/IntelligentCrowdInterface.h"




bool UGlobalBlueprintFunctionLibrary::IsEnemy(AActor* A, AActor* B)
{
	IIntelligentCrowdInterface* InterfaceA = Cast<IIntelligentCrowdInterface>(A);
	IIntelligentCrowdInterface* InterfaceB = Cast<IIntelligentCrowdInterface>(B);
	if (InterfaceA&&InterfaceB)
	{
		if (InterfaceA->GetTeamID()==InterfaceB->GetTeamID())
		{
			return false;
		}
		return true;
	}
	return true;
}
