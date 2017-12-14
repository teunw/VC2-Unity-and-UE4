// Fill out your copyright notice in the Description page of Project Settings.

#include "BallCharacter.h"


// Sets default values
ABallCharacter::ABallCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABallCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABallCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABallCharacter::OnMoveForward(float speed)
{
	if (speed != 0.0f) {
		AddMovementInput(GetActorForwardVector(), speed);
	}
}

void ABallCharacter::OnMoveRight(float speed)
{
	if (speed != 0.0f) {
		AddMovementInput(GetActorRightVector(), speed);
	}
}

// Called to bind functionality to input
void ABallCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(FName("AxisForward"), this, &ABallCharacter::OnMoveForward);
	PlayerInputComponent->BindAxis(FName("AxisRight"), this, &ABallCharacter::OnMoveForward);
}

