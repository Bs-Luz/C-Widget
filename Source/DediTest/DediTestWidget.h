// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DediTestWidget.generated.h"

/**
 * 
 */
UCLASS()
class DEDITEST_API UDediTestWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	class UEditabletext* ID;
	class UEditabletext* TestID;

	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category=Test)
	
	FString FID;

	UFUNCTION(BlueprintCallable, meta = (Keywords = "Log"))
	void LogTest();
};
