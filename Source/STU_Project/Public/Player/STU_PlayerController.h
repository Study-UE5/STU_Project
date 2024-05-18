// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "STUCoreTypes.h"
#include "STU_PlayerController.generated.h"


class USTURespawnComponent;
/**
 * 
 */
UCLASS()
class STU_PROJECT_API ASTU_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ASTU_PlayerController();
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	USTURespawnComponent* RespawnComponent;

	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void SetupInputComponent() override;

private:
	void OnPauseGame();
	void OnMatchStateChanged(ESTUMatchState State);
};
