#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NumberBaseballGameMode.generated.h"

UCLASS()
class ANumberBaseballGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;
    UFUNCTION()
    void ProcessChatInput(const FString& PlayerName, const FString& Message);

private:
    UPROPERTY()
    FString CurrentTurnPlayer;

    UPROPERTY()
    FString SecretNumber; // 정답 숫자

    UPROPERTY()
    TMap<FString, int32> PlayerAttempts; // 플레이어별 시도 횟수

    UPROPERTY()
    FTimerHandle TurnTimerHandle; // 턴 시간 제한 타이머

    float TurnTimeLimit = 10.0f; // 턴당 시간 제한 (초)

    void SetNextTurn();
    void StartTurnTimer();
    void OnTurnTimeout();
    void ResetGame();
};