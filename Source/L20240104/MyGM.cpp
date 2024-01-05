// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGM.h"
#include "MyPC.h"
#include "L20240104.h"


AMyGM::AMyGM()
{
	PlayerControllerClass = AMyPC::StaticClass();
}

void AMyGM::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	LogMessage(this, __FUNCTION__, __LINE__, "[ PreLoading ] Before");

	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);

	// TEXT(__FUNCTION__) : 함수를 나타내는 매크로
	// TEXT(__FUNCTION__) : 몇번째 줄에 코드가 존재하는지 표시하는 매크로 입니다.
	LogMessage(this, __FUNCTION__, __LINE__, "[ PreLoading ] After");

	ErrorMessage = TEXT("강희운 강사는 입장 금지");
}

APlayerController* AMyGM::Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	LogMessage(this, __FUNCTION__, __LINE__, "[ Login ] Before");

	APlayerController* PC = Super::Login(NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);

	LogMessage(this, __FUNCTION__, __LINE__, "[ Login ] After");

	return PC;
}

void AMyGM::PostLogin(APlayerController* NewPlayer)
{
	LogMessage(this, __FUNCTION__, __LINE__, "[ PostLogin ] Before");

	Super::PostLogin(NewPlayer);

	LogMessage(this, __FUNCTION__, __LINE__, "[ PostLogin ] After");
}

void AMyGM::StartPlay()
{
	LogMessage(this, __FUNCTION__, __LINE__, "[ StartPlay ] Before 5 Seconds");

	//Super::StartPlay();
	//FTimerManager& timerManager = GetWorld()->GetTimerManager();
	//FTimerHandle Timer;
	//timerManager.SetTimer(Timer, this, &AMyGM::CallParentStartPlay, 5.0f, false);
	
}

// 이 함수는 BeginPlay 가 실행 되어야 다음으로 실행됩니다.
void AMyGM::CallParentStartPlay()
{
	LogMessage(this, __FUNCTION__, __LINE__, "[ StartPlay ] Before");

	//Super::StartPlay();

	LogMessage(this, __FUNCTION__, __LINE__, "[ StartPlay ] After");
}