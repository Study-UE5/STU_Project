// Shoot Them Up Game. All rights reserved.


#include "Player/STU_PlayerController.h"
#include "Components/STURespawnComponent.h"


ASTU_PlayerController::ASTU_PlayerController()
{
	RespawnComponent = CreateDefaultSubobject<USTURespawnComponent>("RespawnComponent");
}
