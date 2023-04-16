// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DediTestWidgetPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DEDITEST_API ADediTestWidgetPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	
};
