// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UI/STUBaseWidget.h"
#include "STUCoreTypes.h"
#include "STUGameOverWidget.generated.h"

class UVerticalBox;


UCLASS()
class STU_PROJECT_API USTUGameOverWidget : public USTUBaseWidget
{
	GENERATED_BODY()

public:
	virtual bool Initialize() override;

protected:
	UPROPERTY(meta = (BindWidget))
	UVerticalBox* PlayerStateBox;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> PlayerStateRowWidgetClass;

private:
	void OnMatchStateChanged(ESTUMatchState State);
	void UpdatePlayerState();
};
