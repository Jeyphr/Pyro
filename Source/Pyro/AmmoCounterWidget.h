// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "AmmoCounterWidget.generated.h"


/**
 * 
 */
UCLASS()
class PYRO_API UAmmoCounterWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(BindWidget))
	UTextBlock* ammoCounterTextBlock;
};
