// MEDURVAL PROJECT copyrighted code by Fireheet Games


#include "Components/CBActorComponent.h"
#include "Constants/CommonBaseConstants.h"

UCBActorComponent::UCBActorComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.TickInterval = FCommonBaseConstants::TickInterval;
}

