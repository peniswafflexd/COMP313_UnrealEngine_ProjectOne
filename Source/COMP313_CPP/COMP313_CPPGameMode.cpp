// Copyright Epic Games, Inc. All Rights Reserved.

#include "COMP313_CPPGameMode.h"
#include "COMP313_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACOMP313_CPPGameMode::ACOMP313_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
