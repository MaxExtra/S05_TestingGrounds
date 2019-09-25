// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PatrollingGuards.generated.h"

UCLASS()
class S05_TESTINGGROUNDS_API APatrollingGuards : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY (EditInstanceOnly, Category = "Patrol Route")
	TArray<AActor*> PatrolPointsCPP;


};
