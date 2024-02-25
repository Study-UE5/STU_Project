// Shoot Them Up Game. All rights reserved.


#include "Components/STU_CharacterMovementComponent.h"
#include "Player/STU_BaseCharacter.h"

float USTU_CharacterMovementComponent::GetMaxSpeed() const
{
	const float MaxSpeed = Super::GetMaxSpeed();
	ASTU_BaseCharacter* Player = Cast<ASTU_BaseCharacter>(GetPawnOwner());
	return Player && Player->IsRunning() ? MaxSpeed * RunModifier : MaxSpeed;
}