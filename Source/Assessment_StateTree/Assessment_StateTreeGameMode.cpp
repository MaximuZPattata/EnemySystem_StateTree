// Copyright Epic Games, Inc. All Rights Reserved.

#include "Assessment_StateTreeGameMode.h"
#include "Assessment_StateTreeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAssessment_StateTreeGameMode::AAssessment_StateTreeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
