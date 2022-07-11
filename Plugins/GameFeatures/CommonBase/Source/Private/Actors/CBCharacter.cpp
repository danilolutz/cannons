// MEDURVAL PROJECT copyrighted code by Fireheet Games


#include "Actors/CBCharacter.h"

#include "Components/CapsuleComponent.h"
#include "Constants/CommonBaseConstants.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ACBCharacter::ACBCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;
	PrimaryActorTick.TickInterval = FCommonBaseConstants::TickInterval;

	GetCapsuleComponent()->PrimaryComponentTick.bCanEverTick = false;
	GetCapsuleComponent()->PrimaryComponentTick.bStartWithTickEnabled = false;

	// Configure Mesh
	GetMesh()->PrimaryComponentTick.bStartWithTickEnabled = false;
	GetMesh()->bPerBoneMotionBlur = false;
	GetMesh()->SetGenerateOverlapEvents(false);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;
	
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}

