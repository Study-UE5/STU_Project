// Shoot Them Up Game. All rights reserved.


#include "STUGameInstance.h"
#include "Sound/STUSoundFunctionLib.h"


void USTUGameInstance::ToggleVolume()
{
	USTUSoundFunctionLib::ToggleSoundClassVolume(MasterSoundClass);
}
