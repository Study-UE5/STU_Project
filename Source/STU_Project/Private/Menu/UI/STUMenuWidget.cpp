// Shoot Them Up Game. All rights reserved.


#include "Menu/UI/STUMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void USTUMenuWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (StartGameButton)
	{
		StartGameButton->OnClicked.AddDynamic(this, &USTUMenuWidget::OnStartGame);
	}
}

void USTUMenuWidget::OnStartGame()
{
	const FName StartupLevelName = "First_Level";
	UGameplayStatics::OpenLevel(this, StartupLevelName);
}
