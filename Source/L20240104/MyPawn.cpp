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

	Super::PostInitializeComponents(); // ���Ͱ� �غ� �� �Ǹ� �ؾ� �� ���� �ϴ� ��

	LogMessage(this, __FUNCTION__, __LINE__, "[ PostInitializeComponents ] After");
}

// �� �Լ��� ȣ�� �Ǿ���� ��Ʈ��ũ�� �����Դϴ�.
void AMyPawn::PostNetInit()
{
	LogMessage(this, __FUNCTION__, __LINE__, "[ PostNetInit ] Before");

	Super::PostNetInit();

	LogMessage(this, __FUNCTION__, __LINE__, "[ PostNetInit ] After");
}