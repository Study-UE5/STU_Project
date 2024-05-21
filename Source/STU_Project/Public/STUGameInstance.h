// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "STUGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class STU_PROJECT_API USTUGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	FString TestString = "Hello Game!";
};
