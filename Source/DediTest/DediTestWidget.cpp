// Fill out your copyright notice in the Description page of Project Settings.


#include "DediTestWidget.h"

void UDediTestWidget::LogTest()
{
	UE_LOG(LogTemp, Warning, TEXT("%s"), *FID);
}
