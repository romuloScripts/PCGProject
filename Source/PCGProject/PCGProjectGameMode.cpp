// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGProjectGameMode.h"
#include "PCGProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

APCGProjectGameMode::APCGProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
