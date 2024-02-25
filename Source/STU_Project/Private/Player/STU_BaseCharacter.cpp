// Shoot Them Up Game. All rights reserved.


#include "Player/STU_BaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include"GameFramework/SpringArmComponent.h"

// Sets default values
ASTU_BaseCharacter::ASTU_BaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
	SpringArmComponent->SetupAttachment(GetRootComponent());
	SpringArmComponent->bUsePawnControlRotation = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(SpringArmComponent);
}

// Called when the game starts or when spawned
void ASTU_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTU_BaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASTU_BaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASTU_BaseCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASTU_BaseCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &ASTU_BaseCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("TurnAround", this, &ASTU_BaseCharacter::AddControllerYawInput);
}

void ASTU_BaseCharacter::MoveForward(float Amount)
{
	//IsMovingForward = Amount > 0.0f;
	//if (Amount == 0.0f) return;
	AddMovementInput(GetActorForwardVector(), Amount);
}

void ASTU_BaseCharacter::MoveRight(float Amount)
{
	if (Amount == 0.0f) return;
	AddMovementInput(GetActorRightVector(), Amount);
}


