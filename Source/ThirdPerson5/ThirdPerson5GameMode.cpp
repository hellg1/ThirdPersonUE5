// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPerson5GameMode.h"
#include "ThirdPerson5Character.h"
#include "UObject/ConstructorHelpers.h"

AThirdPerson5GameMode::AThirdPerson5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
