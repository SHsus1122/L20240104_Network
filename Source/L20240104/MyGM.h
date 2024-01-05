// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGM.generated.h"


UCLASS()
class L20240104_API AMyGM : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMyGM();

	// 서버가 열리고 클라이언트가 접속할 때 알려주는 역할이 PreLogin 입니다.
	// ErrorMessage 는 상대방에게 띄우는 출력 메시지로 즉, 검증하는 단계에서 사용하게 됩니다.
	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	// 들어오게 되면 UPlayer 를 보고 정보를 확인해서, ENetRole 즉 권한을 부여합니다.
	virtual APlayerController* Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	// 로그인하고 모든 과정이 끝났으니까 플레이어 컨트롤러 부여
	virtual void PostLogin(APlayerController* NewPlayer) override;

	virtual void StartPlay() override;

	void CallParentStartPlay();

};
