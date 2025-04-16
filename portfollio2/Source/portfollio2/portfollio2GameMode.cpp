// Copyright Epic Games, Inc. All Rights Reserved.

#include "portfollio2GameMode.h"
#include "portfollio2Character.h"
#include "UObject/ConstructorHelpers.h"

Aportfollio2GameMode::Aportfollio2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
