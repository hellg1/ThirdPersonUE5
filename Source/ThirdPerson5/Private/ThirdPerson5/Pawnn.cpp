// Fill out your copyright notice in the Description page of Project Settings.


#include "ThirdPerson5/Public/ThirdPerson5/Pawnn.h"


// Sets default values
APawnn::APawnn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APawnn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APawnn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APawnn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

