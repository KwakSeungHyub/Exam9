#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerState.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "NumberBaseballPlayerController.generated.h"

UCLASS()
class ANumberBaseballPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    ANumberBaseballPlayerController();
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

    UFUNCTION(BlueprintCallable, Category = "NumberBaseball")
    void SendChatMessage(const FString& Message);
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DisplayResult(const FString& ResultMessage, const FLinearColor& Color);
    
    UFUNCTION(Server, Reliable)
    void Server_SetPlayerName(const FString& NewName);


protected:
    UFUNCTION(Server, Reliable, WithValidation)
    void Server_ProcessChatInput(const FString& Message);
    bool Server_ProcessChatInput_Validate(const FString& Message);
    void Server_ProcessChatInput_Implementation(const FString& Message);
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    class UInputAction* ChatAction;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
    class UInputMappingContext* NumberBaseballMappingContext;

private:
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<class UUserWidget> ChatInputWidgetClass;

    UPROPERTY()
    class UUserWidget* ChatInputWidget;

    UFUNCTION()
    void OnSubmitButtonClicked();

    UFUNCTION()
    void StartChatInput();


};