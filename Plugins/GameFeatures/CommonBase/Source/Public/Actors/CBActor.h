// MEDURVAL PROJECT copyrighted code by Fireheet Games

#pragma once

#include "CoreMinimal.h"
#include "Engine/StreamableManager.h"
#include "GameFramework/Actor.h"
#include "CBActor.generated.h"

UCLASS()
class COMMONBASE_API ACBActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ACBActor();

	FTimerHandle TimerHandle;
	bool bIsToLoopTimer = false;
	float TimerInterval = 1;
	float TimerStartDelay = 0;
	
	void StartTimerWithDelegate();
	void StopTimer();

	virtual void TimerDelegate();
};
