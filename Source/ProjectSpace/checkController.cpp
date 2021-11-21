// Fill out your copyright notice in the Description page of Project Settings.


#include "checkController.h"
#include "Misc/CoreDelegates.h"

// Sets default values for this component's properties
UcheckController::UcheckController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	FCoreDelegates::OnControllerConnectionChange.AddUObject(this, &UcheckController::controllerStatusChanged);

	// ...
}


// Called when the game starts
void UcheckController::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
}


// Called every frame
void UcheckController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UcheckController::controllerStatusChanged(bool Connected, int32 PlatformId, int32 UserId)
{

}

