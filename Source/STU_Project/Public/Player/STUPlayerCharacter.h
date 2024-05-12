// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Player/STU_BaseCharacter.h"
#include "STUPlayerCharacter.generated.h"


class UCameraComponent;
class USpringArmComponent;

UCLASS()
class STU_PROJECT_API ASTUPlayerCharacter : public ASTU_BaseCharacter
{
	GENERATED_BODY()
	
public:
	ASTUPlayerCharacter(const FObjectInitializer& ObjInit);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UCameraComponent* CameraComponent;

	virtual void OnDeath() override;

public:
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual bool IsRunning() const override;

private:
	bool WantsToRun = false;
	bool IsMovingForward = false;

	void MoveForward(float Amount);
	void MoveRight(float Amount);

	void OnStartRunning();
	void OnStopRunning();
};
