// Fill out your copyright notice in the Description page of Project Settings.

#include "RoughnessVariationExample.h"
#include "Engine/StaticMesh.h"

// Sets default values
ARoughnessVariationExample::ARoughnessVariationExample()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARoughnessVariationExample::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARoughnessVariationExample::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (RoughnessGoingUp) {
		CurrentRoughness += RoughnessIncrement * DeltaTime;
	} else {
		CurrentRoughness -= RoughnessIncrement * DeltaTime;
	}
	if (CurrentRoughness > 1)
	{
		RoughnessGoingUp = false;
		CurrentRoughness = 1;
	}
	if (CurrentRoughness < 0)
	{
		RoughnessGoingUp = true;
		CurrentRoughness = 0;
	}
}

