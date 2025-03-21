#include "NumberBaseballGameMode.h"
#include "NumberBaseballPlayerController.h"
#include "NumberBaseballLibrary.h"

void ANumberBaseballGameMode::BeginPlay()
{
    Super::BeginPlay();

    // 정답 숫자 생성
    SecretNumber = UNumberBaseballLibrary::GenerateRandomNumber();
    UE_LOG(LogTemp, Log, TEXT("생성된 정답 숫자: %s"), *SecretNumber);

    // 플레이어 이름 설정 및 시도 횟수 초기화
    int32 PlayerIndex = 0;
    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        if (APlayerController* PC = It->Get())
        {
            if (PC->PlayerState)
            {
                FString PlayerName = PC->PlayerState->GetPlayerName();
                UE_LOG(LogTemp, Log, TEXT("플레이어 %d 이름: %s"), PlayerIndex, *PlayerName);
                if (PlayerIndex == 0 && PlayerName.Contains("DESKTOP-"))
                {
                    if (ANumberBaseballPlayerController* NBC = Cast<ANumberBaseballPlayerController>(PC))
                    {
                        NBC->Server_SetPlayerName("GUEST");
                        PlayerName = "GUEST"; // 즉시 반영
                    }
                }
                else if (PlayerIndex == 1 && PlayerName.Contains("DESKTOP-"))
                {
                    if (ANumberBaseballPlayerController* NBC = Cast<ANumberBaseballPlayerController>(PC))
                    {
                        NBC->Server_SetPlayerName("HOST");
                        PlayerName = "HOST"; // 즉시 반영
                    }
                }
                PlayerAttempts.FindOrAdd(PlayerName) = 0; // 안전하게 추가
                PlayerIndex++;
            }
        }
    }

    // 초기 턴 설정
    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        if (APlayerController* PC = It->Get())
        {
            if (PC->PlayerState)
            {
                CurrentTurnPlayer = PC->PlayerState->GetPlayerName();
                UE_LOG(LogTemp, Log, TEXT("초기 턴 설정: %s"), *CurrentTurnPlayer);
                StartTurnTimer();
                break; // GUEST로 초기화
            }
        }
    }
}

void ANumberBaseballGameMode::ProcessChatInput(const FString& PlayerName, const FString& Message)
{
    UE_LOG(LogTemp, Log, TEXT("게임 모드: %s가 메시지 전송: %s"), *PlayerName, *Message);
    UE_LOG(LogTemp, Log, TEXT("현재 턴 플레이어: %s"), *CurrentTurnPlayer);

    FString ResultMessage;
    FLinearColor ResultColor = FLinearColor::White;

    if (CurrentTurnPlayer != PlayerName)
    {
        ResultMessage = FString::Printf(TEXT("%s: 당신의 턴이 아닙니다"), *PlayerName);
        ResultColor = FLinearColor::Red;
    }
    else if (!UNumberBaseballLibrary::IsValidGuess(Message))
    {
        ResultMessage = FString::Printf(TEXT("%s: 유효하지 않은 추측 (%s)"), *PlayerName, *Message);
        ResultColor = FLinearColor::Yellow;
    }
    else
    {
        int32 Strikes, Balls;
        UNumberBaseballLibrary::CalculateResult(SecretNumber, Message, Strikes, Balls);
        ResultMessage = FString::Printf(TEXT("%s: %s - %dS %dB"), *PlayerName, *Message, Strikes, Balls);
        ResultColor = FLinearColor::Green;

        if (Strikes == 3)
        {
            ResultMessage += TEXT(" - 승자!");
            ResultColor = FLinearColor::Blue;
            // 승자가 발생해도 게임 종료하지 않고 다음 턴 시작
            GetWorld()->GetTimerManager().ClearTimer(TurnTimerHandle);
            SetNextTurn();
            StartTurnTimer();
        }
        else
        {
            GetWorld()->GetTimerManager().ClearTimer(TurnTimerHandle);
            SetNextTurn();
            StartTurnTimer();
        }
    }

    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        if (ANumberBaseballPlayerController* Controller = Cast<ANumberBaseballPlayerController>(It->Get()))
        {
            Controller->Multicast_DisplayResult(ResultMessage, ResultColor);
        }
    }
}

void ANumberBaseballGameMode::SetNextTurn()
{
    int32 PlayerCount = 0;
    int32 CurrentIndex = -1;
    int32 Index = 0;

    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        if (APlayerController* PC = It->Get())
        {
            if (PC->PlayerState)
            {
                FString PlayerName = PC->PlayerState->GetPlayerName();
                UE_LOG(LogTemp, Log, TEXT("플레이어 %d: %s"), Index, *PlayerName);
                if (PlayerName == CurrentTurnPlayer)
                {
                    CurrentIndex = Index;
                }
                PlayerCount++;
                Index++;
            }
        }
    }

    UE_LOG(LogTemp, Log, TEXT("플레이어 수: %d, 현재 인덱스: %d"), PlayerCount, CurrentIndex);

    if (PlayerCount > 0)
    {
        int32 NextIndex = (CurrentIndex + 1) % PlayerCount;
        Index = 0;

        for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
        {
            if (APlayerController* PC = It->Get())
            {
                if (PC->PlayerState && Index == NextIndex)
                {
                    CurrentTurnPlayer = PC->PlayerState->GetPlayerName();
                    UE_LOG(LogTemp, Log, TEXT("다음 턴 설정: %s"), *CurrentTurnPlayer);
                    break;
                }
                Index++;
            }
        }
    }
}

void ANumberBaseballGameMode::StartTurnTimer()
{
    GetWorld()->GetTimerManager().SetTimer(
        TurnTimerHandle,
        this,
        &ANumberBaseballGameMode::OnTurnTimeout,
        TurnTimeLimit,
        false
    );
    UE_LOG(LogTemp, Log, TEXT("턴 타이머 시작: %s (제한 시간: %f초)"), *CurrentTurnPlayer, TurnTimeLimit);

    FString TimerMessage = FString::Printf(TEXT("%s의 턴 - %d초 남음"), *CurrentTurnPlayer, (int32)TurnTimeLimit);
    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        if (ANumberBaseballPlayerController* Controller = Cast<ANumberBaseballPlayerController>(It->Get()))
        {
            Controller->Multicast_DisplayResult(TimerMessage, FLinearColor::Yellow);
        }
    }
}

void ANumberBaseballGameMode::OnTurnTimeout()
{
    UE_LOG(LogTemp, Log, TEXT("턴 타임아웃: %s"), *CurrentTurnPlayer);

    // 맵 상태 디버깅
    for (const TPair<FString, int32>& Pair : PlayerAttempts)
    {
        UE_LOG(LogTemp, Log, TEXT("타임아웃 전 PlayerAttempts: %s -> %d"), *Pair.Key, Pair.Value);
    }

    bool bShouldReset = false;
    UNumberBaseballLibrary::HandleTurnTimeout(CurrentTurnPlayer, PlayerAttempts, bShouldReset);

    FString TimeoutMessage = FString::Printf(TEXT("%s: 타임아웃 - 시도 횟수: %d"), *CurrentTurnPlayer, PlayerAttempts[CurrentTurnPlayer]);
    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        if (ANumberBaseballPlayerController* Controller = Cast<ANumberBaseballPlayerController>(It->Get()))
        {
            Controller->Multicast_DisplayResult(TimeoutMessage, FLinearColor::Red);
        }
    }

    if (bShouldReset)
    {
        ResetGame();
    }
    else
    {
        SetNextTurn();
        StartTurnTimer();
    }
}

void ANumberBaseballGameMode::ResetGame()
{
    SecretNumber = UNumberBaseballLibrary::GenerateRandomNumber();
    UE_LOG(LogTemp, Log, TEXT("게임 리셋 - 새로운 정답 숫자: %s"), *SecretNumber);

    for (TPair<FString, int32>& Attempt : PlayerAttempts)
    {
        Attempt.Value = 0;
    }

    CurrentTurnPlayer = "GUEST";
    UE_LOG(LogTemp, Log, TEXT("턴 리셋: %s"), *CurrentTurnPlayer);
    StartTurnTimer();

    FString ResetMessage = TEXT("게임 리셋 - 새로운 라운드 시작!");
    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        if (ANumberBaseballPlayerController* Controller = Cast<ANumberBaseballPlayerController>(It->Get()))
        {
            Controller->Multicast_DisplayResult(ResetMessage, FLinearColor::Blue);
        }
    }
}