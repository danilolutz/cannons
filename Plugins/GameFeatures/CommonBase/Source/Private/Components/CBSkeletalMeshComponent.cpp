// MEDURVAL PROJECT copyrighted code by Fireheet Games


#include "Components/CBSkeletalMeshComponent.h"
#include "Constants/CommonBaseConstants.h"

UCBSkeletalMeshComponent::UCBSkeletalMeshComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.TickInterval = FCommonBaseConstants::TickInterval;
}
