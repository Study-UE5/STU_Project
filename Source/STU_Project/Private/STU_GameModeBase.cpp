// Shoot Them Up Game. All rights reserved.


#include "STU_GameModeBase.h"
#include "Player/STU_BaseCharacter.h"
#include "Player/STU_PlayerController.h"

ASTU_GameModeBase::ASTU_GameModeBase()
{
	DefaultPawnClass = ASTU_BaseCharacter::StaticClass();
	PlayerControllerClass = ASTU_PlayerController::StaticClass();
}