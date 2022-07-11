// MEDURVAL PROJECT copyrighted code by Fireheet Games


#include "Components/CBStaticMeshComponent.h"
#include "Constants/CommonBaseConstants.h"

UCBStaticMeshComponent::UCBStaticMeshComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.TickInterval = FCommonBaseConstants::TickInterval;
}
