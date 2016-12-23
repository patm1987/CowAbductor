// Fill out your copyright notice in the Description page of Project Settings.

#include "CowAbductor.h"
#include "UfoPawn.h"


// Sets default values
AUfoPawn::AUfoPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	UCameraComponent* ourCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("OurCamera"));
	OurVisibleComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OurVisibleComponent"));

	ourCamera->SetupAttachment(RootComponent);
	ourCamera->SetRelativeLocation(FVector(-250.0f, 0.0f, 250.0f));
	ourCamera->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
	OurVisibleComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AUfoPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUfoPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AUfoPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

