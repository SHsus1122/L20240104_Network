// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "L20240104.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	LogMessage(this, __FUNCTION__, __LINE__, "[ BeginPlay ] Before");

	Super::BeginPlay();
	
	LogMessage(this, __FUNCTION__, __LINE__, "[ BeginPlay ] Before");
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyPawn::PostInitializeComponents()
{
	LogMessage(this, __FUNCTION__, __LINE__, "[ PostInitializeComponents ] Before");

	Super::PostInitializeComponents(); // 액터가 준비 다 되면 해야 될 일을 하는 곳

	LogMessage(this, __FUNCTION__, __LINE__, "[ PostInitializeComponents ] After");
}

// 이 함수가 호출 되어야지 네트워크의 시작입니다.
void AMyPawn::PostNetInit()
{
	LogMessage(this, __FUNCTION__, __LINE__, "[ PostNetInit ] Before");

	Super::PostNetInit();

	LogMessage(this, __FUNCTION__, __LINE__, "[ PostNetInit ] After");
}