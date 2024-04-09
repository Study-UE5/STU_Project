// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Player/STU_BaseCharacter.h"
#include "STUAICharacter.generated.h"

class UBehaviorTree;


UCLASS()
class STU_PROJECT_API ASTUAICharacter : public ASTU_BaseCharacter
{
	GENERATED_BODY()
	
public:
	ASTUAICharacter(const FObjectInitializer& ObjInit);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "AI")
	UBehaviorTree* BehaviorTreeAsset;
};
