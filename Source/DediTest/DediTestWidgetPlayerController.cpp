// Fill out your copyright notice in the Description page of Project Settings.


#include "DediTestWidgetPlayerController.h"

void ADediTestWidgetPlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetInputMode(FInputModeGameAndUI());
}
