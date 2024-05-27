// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "STUGameDataWidget.generated.h"


class ASTU_GameModeBase;
class ASTUPlayerState;

/**
 * 
 */
UCLASS()
class STU_PROJECT_API USTUGameDataWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "UI")
	int32 GetCurrentRoundNum() const;
	UFUNCTION(BlueprintCallable, Category = "UI")
	int32 GetTotalRoundsNum() const;
	UFUNCTION(BlueprintCallable, Category = "UI")
	int32 GetRoundSecondsRemaining() const;

private:
	ASTU_GameModeBase* GetSTUGameMode() const;
	ASTUPlayerState* GetSTUPlayerState() const;
};
