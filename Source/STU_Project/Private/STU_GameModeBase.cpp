// Shoot Them Up Game. All rights reserved.


#include "STU_GameModeBase.h"
#include "Player/STU_BaseCharacter.h"
#include "Player/STU_PlayerController.h"
#include "UI/STUGameHUD.h"
#include "AIController.h"

ASTU_GameModeBase::ASTU_GameModeBase()
{
	DefaultPawnClass = ASTU_BaseCharacter::StaticClass();
	PlayerControllerClass = ASTU_PlayerController::StaticClass();
	HUDClass = ASTUGameHUD::StaticClass();
}

void ASTU_GameModeBase::StartPlay()
{
	Super::StartPlay();

	SpawnBots();
}

UClass* ASTU_GameModeBase::GetDefaultPawnClassForController_Implementation(AController* InController)
{
	if (InController && InController->IsA<AAIController>())
	{
		return AIPawnClass;
	}
	return Super::GetDefaultPawnClassForController_Implementation(InController);
}

void ASTU_GameModeBase::SpawnBots()
{
	if (!GetWorld()) return;

	for (int32 i = 0; i < GameData.PlayersNum - 1; ++i)
	{
		FActorSpawnParameters SpawnInfo;
		SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		const auto STUAIController = GetWorld()->SpawnActor<AAIController>(AIControllerClass, SpawnInfo);
		RestartPlayer(STUAIController);
	}
}
