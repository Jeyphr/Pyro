// Copyright Epic Games, Inc. All Rights Reserved.

#include "PyroGameMode.h"
#include "PyroCharacter.h"
#include "UObject/ConstructorHelpers.h"

APyroGameMode::APyroGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
