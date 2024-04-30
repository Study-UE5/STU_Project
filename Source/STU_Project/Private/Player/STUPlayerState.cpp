// Shoot Them Up Game. All rights reserved.


#include "Player/STUPlayerState.h"

DEFINE_LOG_CATEGORY_STATIC(LogGSTUPlayerState, All, All);


void ASTUPlayerState::LogInfo()
{
	UE_LOG(LogGSTUPlayerState, Display, TEXT("TeamID: %i, Kills: %i, Deaths: %i"), TeamID, KillsNun, DeathsNun);
}
