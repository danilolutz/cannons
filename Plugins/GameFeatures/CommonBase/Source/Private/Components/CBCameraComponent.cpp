// MEDURVAL PROJECT copyrighted code by Fireheet Games


#include "Components/CBCameraComponent.h"
#include "Constants/CommonBaseConstants.h"

UCBCameraComponent::UCBCameraComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.TickInterval = FCommonBaseConstants::TickInterval;

	bUsePawnControlRotation = false;
}
