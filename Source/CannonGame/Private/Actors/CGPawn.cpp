// All rights reserved for CDStudio.


#include "Actors/CGPawn.h"

// Sets default values
ACGPawn::ACGPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void ACGPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called to bind functionality to input
void ACGPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

