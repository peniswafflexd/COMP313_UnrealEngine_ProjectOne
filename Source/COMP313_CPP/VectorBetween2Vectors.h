// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VectorBetween2Vectors.generated.h"


/**
 * 
 */
UCLASS()
class COMP313_CPP_API UVectorBetween2Vectors : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "MyNodes")
		static FString MyTester();
	
		UFUNCTION(BlueprintPure, Category = "MyNodes")
		static FVector VectorBetweenTwoVectors(FVector startVec, FVector endVec, float distanceFromStart);
};
