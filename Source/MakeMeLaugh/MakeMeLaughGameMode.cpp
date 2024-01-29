// Copyright Epic Games, Inc. All Rights Reserved.

#include "MakeMeLaughGameMode.h"
#include "MakeMeLaughCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMakeMeLaughGameMode::AMakeMeLaughGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
