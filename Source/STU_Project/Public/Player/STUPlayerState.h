// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "STUPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class STU_PROJECT_API ASTUPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	void SetTeamID(int32 ID) { TeamID = ID; }
	int32 GetTeamID() const { return TeamID; }

	void SetTeamColor(const FLinearColor& Color) { TeamColor = Color; }
	FLinearColor GetTeamColor() const { return TeamColor; }

private:
	int32 TeamID;
	FLinearColor TeamColor;
};
