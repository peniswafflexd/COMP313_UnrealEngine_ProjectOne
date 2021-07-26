// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponPath.h"
#include "Misc/Paths.h"

FString UWeaponPath::getWeaponPath()
{
	FString contentFolderPath = FPaths::ProjectContentDir();
	FString pathToWeapons = FString(TEXT("InfinityBladeWeapons/Weapons"));
	FString fullPath = contentFolderPath.Append(pathToWeapons);
	return fullPath;
}
