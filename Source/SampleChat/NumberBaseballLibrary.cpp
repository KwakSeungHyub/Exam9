#include "NumberBaseballLibrary.h"
#include "Math/RandomStream.h"

FString UNumberBaseballLibrary::GenerateRandomNumber()
{
    FRandomStream RandomStream(FDateTime::Now().GetTicks());
    TArray<int32> Numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (int32 i = Numbers.Num() - 1; i > 0; i--)
    {
        int32 j = RandomStream.RandRange(0, i);
        Numbers.Swap(i, j);
    }
    return FString::Printf(TEXT("%d%d%d"), Numbers[0], Numbers[1], Numbers[2]);
}

void UNumberBaseballLibrary::CalculateResult(const FString& SecretNumber, const FString& Guess, int32& OutStrikes, int32& OutBalls)
{
    OutStrikes = 0;
    OutBalls = 0;
    const TCHAR* SecretChars = *SecretNumber;
    const TCHAR* GuessChars = *Guess;
    for (int32 i = 0; i < 3; i++)
    {
        for (int32 j = 0; j < 3; j++)
        {
            if (SecretChars[i] == GuessChars[j])
            {
                if (i == j)
                    OutStrikes++;
                else
                    OutBalls++;
            }
        }
    }
}

bool UNumberBaseballLibrary::IsValidGuess(const FString& Guess)
{
    if (Guess.Len() != 3)
        return false;

    const TCHAR* GuessChars = *Guess;
    for (int32 i = 0; i < 3; i++)
    {
        if (!FChar::IsDigit(GuessChars[i]) || GuessChars[i] == TEXT('0'))
            return false;
        for (int32 j = i + 1; j < 3; j++)
        {
            if (GuessChars[i] == GuessChars[j])
                return false;
        }
    }
    return true;
}

FString UNumberBaseballLibrary::SwitchTurn(const FString& CurrentTurn)
{
    return (CurrentTurn == TEXT("Host")) ? TEXT("Guest") : TEXT("Host");
}

bool UNumberBaseballLibrary::HandleTurnTimeout(const FString& CurrentTurn, TMap<FString, int32>& PlayerAttempts, bool& bShouldReset)
{
    // 안전하게 시도 횟수 증가
    int32& Attempts = PlayerAttempts.FindOrAdd(CurrentTurn); // 키가 없으면 0으로 추가
    Attempts++;

    // 디버깅 로그 추가
    UE_LOG(LogTemp, Log, TEXT("HandleTurnTimeout: %s Attempts = %d"), *CurrentTurn, Attempts);

    // 리셋 조건 체크
    int32 HostAttempts = PlayerAttempts.FindOrAdd(TEXT("Host"));
    int32 GuestAttempts = PlayerAttempts.FindOrAdd(TEXT("Guest"));
    bShouldReset = (HostAttempts >= 3 && GuestAttempts >= 3);

    return bShouldReset;
}