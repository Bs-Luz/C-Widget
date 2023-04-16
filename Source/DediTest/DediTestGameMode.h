// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DediTestGameMode.generated.h"

UCLASS(minimalapi)
class ADediTestGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADediTestGameMode();

//public:
//    UFUNCTION(BlueprintCallable, Category = "UMG_Test")
//        void ChangeMenuWidget(TSubclassOf NewWidgetClass);
//
//protected:
//    virtual void BeginPlay() override;
//
//    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG_Test")
//        TSubclassOf StartingWidgetClass;
//
//    UPROPERTY()
//        UUserWidget* CurrentWidget;

public:
    UFUNCTION(BlueprintCallable, Category = "UMG_Test")
        void JoinMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG_Test")
        TSubclassOf<UUserWidget> StartingWidgetClass;
    UPROPERTY()
        UUserWidget* CurrentWidget;
};



