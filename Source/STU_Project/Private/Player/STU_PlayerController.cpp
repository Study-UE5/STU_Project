// Shoot Them Up Game. All rights reserved.


#include "Player/STU_PlayerController.h"
#include "Components/STURespawnComponent.h"
#include "STU_GameModeBase.h"
#include "STUGameInstance.h"


ASTU_PlayerController::ASTU_PlayerController()
{
	RespawnComponent = CreateDefaultSubobject<USTURespawnComponent>("RespawnComponent");
}

void ASTU_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (GetWorld())
	{
		if (const auto GameMode = Cast<ASTU_GameModeBase>(GetWorld()->GetAuthGameMode()))
		{
			GameMode->OnMatchStateChanged.AddUObject(this, &ASTU_PlayerController::OnMatchStateChanged);
		}
	}
}

void ASTU_PlayerController::OnMatchStateChanged(ESTUMatchState State)
{
	if (State == ESTUMatchState::InProgress)
	{
		SetInputMode(FInputModeGameOnly());
		bShowMouseCursor = false;
	}
	else
	{
		SetInputMode(FInputModeUIOnly());
		bShowMouseCursor = true;
	}
}

void ASTU_PlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	OnNewPawn.Broadcast(InPawn);
}

void ASTU_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (!InputComponent)return;

	InputComponent->BindAction("PauseGame", IE_Pressed, this, &ASTU_PlayerController::OnPauseGame);
	InputComponent->BindAction("Mute", IE_Pressed, this, &ASTU_PlayerController::OnMuteSound);
}

void ASTU_PlayerController::OnPauseGame()
{
	if (!GetWorld() || !GetWorld()->GetAuthGameMode()) return;

	GetWorld()->GetAuthGameMode()->SetPause(this);
}

void ASTU_PlayerController::OnMuteSound()
{
	if (!GetWorld()) return;

	const auto STUGameInstance = GetWorld()->GetGameInstance<USTUGameInstance>();
	if (!STUGameInstance) return;

	STUGameInstance->ToggleVolume();
}