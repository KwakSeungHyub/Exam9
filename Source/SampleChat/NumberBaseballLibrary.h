#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NumberBaseballLibrary.generated.h"

UCLASS()
class UNumberBaseballLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "NumberBaseball")
    static FString GenerateRandomNumber();

    UFUNCTION(BlueprintCallable, Category = "NumberBaseball")
    static void CalculateResult(const FString& SecretNumber, const FString& Guess, int32& OutStrikes, int32& OutBalls);

    UFUNCTION(BlueprintCallable, Category = "NumberBaseball")
    static bool IsValidGuess(const FString& Guess);

    UFUNCTION(BlueprintCallable, Category = "NumberBaseball")
    static FString SwitchTurn(const FString& CurrentTurn);

    UFUNCTION(BlueprintCallable, Category = "NumberBaseball")
    static bool HandleTurnTimeout(const FString& CurrentTurn, UPARAM(ref) TMap<FString, int32>& PlayerAttempts, bool& bShouldReset);
};