// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/CharacterBase.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "../Public/PlayerControllerBase.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include <GameFramework/CharacterMovementComponent.h>


// Sets default values
ACharacterBase::ACharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 600.0f; //Camera follow player at this distance
	CameraBoom->bUsePawnControlRotation = true; //Rotate arm based on controller

	//Hard coding Capsule Component Size
	GetCapsuleComponent()->SetCapsuleSize(22.f, 85.f);

	//Follow Camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // attach the camera to end of the boom
	FollowCamera->bUsePawnControlRotation = false;

	//Setting up Base turn rates for input
	BaseTurnRate = 65.f;
	BaseLookUpRate = 65.f;


	//Removing Camera Rotating character
	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	//Access Player input component and alter some values
	//So Mesh turn where camera face
	GetCharacterMovement()->bOrientRotationToMovement = true; // turn to direction where mesh physically moving .....
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.f, 0.0f); // at this YAW rotation rate
	GetCharacterMovement()->JumpZVelocity = 650.f; //Jump velocity
	GetCharacterMovement()->AirControl = 0.2f; //Air control is let to control character in air

	

}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);
	//Bind Action
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);


	//Bind Axis
	PlayerInputComponent->BindAxis("MoveForward", this, &ACharacterBase::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacterBase::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnAtRate", this, &ACharacterBase::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpAtRate", this, &ACharacterBase::LookUpAtRate);

}

//TODO: Setup Camera Movement for player (Player most NOT turn when camera turns) Or Make Z (YAW) rotation to 0.f Find Solution
void ACharacterBase::MoveForward(float val)
{
	if (Controller != nullptr && val != 0)
	{
		//Find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		//Getting Forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, val);
	}

}

void ACharacterBase::MoveRight(float val)
{
	if ((Controller != nullptr) && (val != 0.0f))
	{

		//Find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		//Getting Forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, val);
	}
}

void ACharacterBase::TurnAtRate(float val)
{
	AddControllerYawInput(val * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ACharacterBase::LookUpAtRate(float val)
{
	AddControllerPitchInput(val * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

