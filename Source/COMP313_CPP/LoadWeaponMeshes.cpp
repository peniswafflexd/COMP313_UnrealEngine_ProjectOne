// Fill out your copyright notice in the Description page of Project Settings.

#include <iostream>
#include <fstream>
#include "LoadWeaponMeshes.h"
#include "Misc/Paths.h"

TArray<UObject*> ULoadWeaponMeshes::DynamicLoadContentFromPath(FString PathFromContentFolder, UClass* AssetClass, bool LoadFromSubfolders)
{
	TArray<UObject*> Array;

	FString RootFolderFullPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir()) + "Content/" + PathFromContentFolder + "/";

	//FPaths::NormalizeDirectoryName(RootFolderFullPath);
	//Print("Normalized RootFolderPath = " + RootFolderFullPath);

	IFileManager& FileManager = IFileManager::Get();

	TArray<FString> Files;

	FString Ext;

	if (LoadFromSubfolders)
	{
		if (!Ext.Contains(TEXT("*")))
		{
			if (Ext == "")
			{
				Ext = "*.*";
			}
			else
			{
				Ext = (Ext.Left(1) == ".") ? "*" + Ext : "*." + Ext;
			}
		}

		FileManager.FindFilesRecursive(Files, *RootFolderFullPath, *Ext, true, false);
	}
	else
	{
		if (!Ext.Contains(TEXT("*")))
		{
			if (Ext == "")
			{
				Ext = "*.*";
			}
			else
			{
				Ext = (Ext.Left(1) == ".") ? "*" + Ext : "*." + Ext;
			}
		}

		FileManager.FindFiles(Files, *(RootFolderFullPath + Ext), true, false);
	}

	for (int32 i = 0; i < Files.Num(); i++)
	{
		FString Path;
		FString CurrentString = Files[i];
		if (LoadFromSubfolders)
		{
			int32 LastForwardSlash = CurrentString.Find("/", ESearchCase::IgnoreCase, ESearchDir::FromEnd);
			FString File = CurrentString.RightChop(LastForwardSlash + 1);
			FString Folder = CurrentString.RightChop(CurrentString.Find(PathFromContentFolder, ESearchCase::CaseSensitive, ESearchDir::FromEnd) + PathFromContentFolder.Len());
			Folder = Folder.LeftChop(File.Len() + 1);
			File = File.Left(File.Find(".", ESearchCase::IgnoreCase, ESearchDir::FromEnd));
			Path = AssetClass->GetFName().ToString() + "'/Game/" + PathFromContentFolder + Folder + "/" + File + "." + File + "'";
		}
		else
		{
			Path = AssetClass->GetFName().ToString() + "'/Game/" + PathFromContentFolder + "/" + CurrentString.LeftChop(7) + "." + CurrentString.LeftChop(7) + "'";
		}
		UObject* LoadedObj = StaticLoadObject(AssetClass, NULL, *Path);

		Array.Add(LoadedObj);
	}


	return Array;
}