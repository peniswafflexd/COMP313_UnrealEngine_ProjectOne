// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LoadWeaponMeshes.generated.h"

/**
 * 
 */
UCLASS()
class COMP313_CPP_API ULoadWeaponMeshes : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "MyNodes")
		static TArray<UObject*> DynamicLoadContentFromPath(FString PathFromContentFolder = "InfinityBladeWeapons/WeaponMeshes", UClass* AssetClass = nullptr, bool LoadFromSubFolders = false);
};
