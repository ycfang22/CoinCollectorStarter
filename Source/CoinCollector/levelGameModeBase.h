// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "levelGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class COINCOLLECTOR_API AlevelGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AlevelGameModeBase();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Coins = 0;


};
