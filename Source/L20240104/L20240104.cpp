// Fill out your copyright notice in the Description page of Project Settings.

#include "L20240104.h"
#include "Modules/ModuleManager.h"
#include "kismet/KismetSystemLibrary.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, L20240104, "L20240104" );

void LogMessage(const AActor* Self, FString File, int32 Line, const FString& InMessage)
{
	FString Message = FString::Printf(TEXT("[%s %d] %s"), *File, Line, *InMessage);

	// 이 방식은 로그와 출력문을 모두 실행해주는 방법입니다.
	//UKismetSystemLibrary::PrintString(Self->GetWorld(), Message);

	UE_LOG(LogTemp, Warning, TEXT("%s"), *Message);
}
