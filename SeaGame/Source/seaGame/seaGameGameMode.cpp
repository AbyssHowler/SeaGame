// Copyright Epic Games, Inc. All Rights Reserved.

#include "seaGameGameMode.h"
#include "seaGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AseaGameGameMode::AseaGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
