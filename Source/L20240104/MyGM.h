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

	// ������ ������ Ŭ���̾�Ʈ�� ������ �� �˷��ִ� ������ PreLogin �Դϴ�.
	// ErrorMessage �� ���濡�� ���� ��� �޽����� ��, �����ϴ� �ܰ迡�� ����ϰ� �˴ϴ�.
	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	// ������ �Ǹ� UPlayer �� ���� ������ Ȯ���ؼ�, ENetRole �� ������ �ο��մϴ�.
	virtual APlayerController* Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	// �α����ϰ� ��� ������ �������ϱ� �÷��̾� ��Ʈ�ѷ� �ο�
	virtual void PostLogin(APlayerController* NewPlayer) override;

	virtual void StartPlay() override;

	void CallParentStartPlay();

};
