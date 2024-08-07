// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "STUGoToMenuWidget.generated.h"

class UButton;


UCLASS()
class STU_PROJECT_API USTUGoToMenuWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(meta =(BindWidget))
	UButton* GoToMenuButton;

	virtual void NativeOnInitialized() override;

private:
	UFUNCTION()
	void OnGoToMenu();
};
