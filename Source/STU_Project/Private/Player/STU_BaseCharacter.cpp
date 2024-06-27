// Shoot Them Up Game. All rights reserved.


#include "Player/STU_BaseCharacter.h"
#include "Components/STU_CharacterMovementComponent.h"
#include "Components/STUHealthComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/STUWeaponsComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Controller.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"


DEFINE_LOG_CATEGORY_STATIC(LogBaseCharacter, All, All)

ASTU_BaseCharacter::ASTU_BaseCharacter(const FObjectInitializer& ObjInit)
	: Super(ObjInit.SetDefaultSubobjectClass<USTU_CharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	PrimaryActorTick.bCanEverTick = true;

	HealthComponent = CreateDefaultSubobject<USTUHealthComponent>("HealthComponent");
	WeaponsComponent = CreateDefaultSubobject<USTUWeaponsComponent>("WeaponsComponent");
}

// Called when the game starts or when spawned
void ASTU_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	check(HealthComponent);
	check(GetCharacterMovement());

	OnHealthChanged(HealthComponent->GetHealth(), 0.0f);
	HealthComponent->OnDeath.AddUObject(this, &ASTU_BaseCharacter::OnDeath);
	HealthComponent->OnHealthChanged.AddUObject(this, &ASTU_BaseCharacter::OnHealthChanged);

	LandedDelegate.AddDynamic(this, &ASTU_BaseCharacter::OnGroundLanded);
}

void ASTU_BaseCharacter::OnHealthChanged(float Health, float HealthDelta)
{
}

void ASTU_BaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool ASTU_BaseCharacter::IsRunning() const
{
	return false;
}

float ASTU_BaseCharacter::GetMovementDirection() const
{
	if (GetVelocity().IsZero()) return 0.0f;
	const auto VelocityNormal = GetVelocity().GetSafeNormal();
	const auto AngleBetween = FMath::Acos(FVector::DotProduct(GetActorForwardVector(), VelocityNormal));
	const auto CrossProduct = FVector::CrossProduct(GetActorForwardVector(), VelocityNormal);
	const auto Degrees = FMath::RadiansToDegrees(AngleBetween);
	return CrossProduct.IsZero() ? Degrees : Degrees * FMath::Sign(CrossProduct.Z);
}

void ASTU_BaseCharacter::OnDeath() 
{
	PlayAnimMontage(DeathAnimMontage);

	GetCharacterMovement()->DisableMovement();

	SetLifeSpan(5.0f);

	GetCapsuleComponent()->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	WeaponsComponent->StopFire();
	WeaponsComponent->Zoom(false);

	UGameplayStatics::PlaySoundAtLocation(GetWorld(), DeathSound, GetActorLocation());
}

void ASTU_BaseCharacter::OnGroundLanded(const FHitResult& Hit)
{
	const auto FallVelocityZ = -GetVelocity().Z;

	if (FallVelocityZ < LandedDamageVelocity.X) return;
	const auto FinalDamage = FMath::GetMappedRangeValueClamped(LandedDamageVelocity, LandedDamage, FallVelocityZ);
	TakeDamage(FinalDamage, FDamageEvent{}, nullptr, nullptr);
}

void ASTU_BaseCharacter::SetPlayerColor(const FLinearColor& Color)
{
	const auto MaterialInst = GetMesh()->CreateAndSetMaterialInstanceDynamic(0);
	if (!MaterialInst) return;

	MaterialInst->SetVectorParameterValue(MaterialColorName, Color);
}

void ASTU_BaseCharacter::TurnOff()
{
	WeaponsComponent->StopFire();
	WeaponsComponent->Zoom(false);
	Super::TurnOff();
}

void ASTU_BaseCharacter::Reset()
{
	WeaponsComponent->StopFire();
	WeaponsComponent->Zoom(false);
	Super::Reset();
}
