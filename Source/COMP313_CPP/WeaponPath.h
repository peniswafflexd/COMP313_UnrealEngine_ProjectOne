// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WeaponPath.generated.h"

/**
 * 
 */
UCLASS()
class COMP313_CPP_API UWeaponPath : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintPure, Category = "MyNodes")
		static FString getWeaponPath();
};
