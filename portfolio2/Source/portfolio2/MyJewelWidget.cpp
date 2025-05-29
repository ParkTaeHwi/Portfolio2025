// Fill out your copyright notice in the Description page of Project Settings.


#include "MyJewelWidget.h"

#include "MyGameInstance.h"


void UMyJewelWidget::addJewel()
{
    if (UGameInstance* GI = GetGameInstance())
    {
        if (UMyGameInstance* MyGI = Cast<UMyGameInstance>(GI))
        {
            MyGI->AddJewel();
            UpdateJewelText(MyGI->Jewel);
            UE_LOG(LogTemp, Warning, TEXT("UMyJewelWidget::addJewel::CurrentJewel = %d"), MyGI->Jewel);
        }
    }
}
