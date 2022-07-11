// MEDURVAL PROJECT copyrighted code by Fireheet Games


#include "Components/CBSphereComponent.h"

#include "Constants/CommonBaseConstants.h"

UCBSphereComponent::UCBSphereComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.TickInterval = FCommonBaseConstants::TickInterval;
}
