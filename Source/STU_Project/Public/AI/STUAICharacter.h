// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Player/STU_BaseCharacter.h"
#include "STUAICharacter.generated.h"

/**
 * 
 */
UCLASS()
class STU_PROJECT_API ASTUAICharacter : public ASTU_BaseCharacter
{
	GENERATED_BODY()
	
public:
	ASTUAICharacter(const FObjectInitializer& ObjInit);
};
