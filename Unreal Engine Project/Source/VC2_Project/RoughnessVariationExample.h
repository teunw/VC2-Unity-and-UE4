// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/StaticMeshActor.h"
#include "RoughnessVariationExample.generated.h"

UCLASS()
class VC2_PROJECT_API ARoughnessVariationExample : public AStaticMeshActor
{
GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoughnessVariationExample();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CurrentRoughness = 0.00f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float RoughnessIncrement = 0.001f;

	UPROPERTY(BlueprintReadWrite)
	bool RoughnessGoingUp = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName Property;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
