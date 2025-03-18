// Copyright Epic Games, Inc. All Rights Reserved.

#include "portfolio1GameMode.h"
#include "portfolio1Character.h"
#include "UObject/ConstructorHelpers.h"

Aportfolio1GameMode::Aportfolio1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
