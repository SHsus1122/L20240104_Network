// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPC.h"
#include "L20240104.h"

void AMyPC::BeginPlay()
{
	LogMessage(this, __FUNCTION__, __LINE__, "[ BeginPlay ] Before");

	Super::BeginPlay();

	LogMessage(this, __FUNCTION__, __LINE__, "[ BeginPlay ] After");
}

void AMyPC::PostInitializeComponents()
{
	LogMessage(this, __FUNCTION__, __LINE__, "[ PostInitializeComponents ] Before");

	Super::PostInitializeComponents(); // ���Ͱ� �غ� �� �Ǹ� �ؾ� �� ���� �ϴ� ��

	LogMessage(this, __FUNCTION__, __LINE__, "[ PostInitializeComponents ] After");
}

void AMyPC::PostNetInit()
{
	LogMessage(this, __FUNCTION__, __LINE__, "[ PostNetInit ] Before");

	Super::PostNetInit();

	LogMessage(this, __FUNCTION__, __LINE__, "[ PostNetInit ] After");
}
