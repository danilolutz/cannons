// All rights reserved for CDStudio.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CGPawn.generated.h"

UCLASS()
class CANNONGAME_API ACGPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACGPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
