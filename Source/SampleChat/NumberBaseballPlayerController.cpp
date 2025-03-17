#include "NumberBaseballPlayerController.h"
#include "NumberBaseballGameMode.h"
#include "Engine/Engine.h"
#include "Blueprint/UserWidget.h"
#include "Components/EditableTextBox.h"
#include "Components/Button.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

ANumberBaseballPlayerController::ANumberBaseballPlayerController()
{
    bShowMouseCursor = true;
    bEnableClickEvents = true;
    bEnableMouseOverEvents = true;

    static ConstructorHelpers::FClassFinder<UUserWidget> WidgetClassFinder(TEXT("/Game/UI/WBP_ChatInput"));
    if (WidgetClassFinder.Succeeded())
    {
        ChatInputWidgetClass = WidgetClassFinder.Class;
        UE_LOG(LogTemp, Log, TEXT("ChatInputWidgetClass loaded: %s"), *ChatInputWidgetClass->GetName());
    }
}

void ANumberBaseballPlayerController::BeginPlay()
{
    Super::BeginPlay();
    if (HasAuthority())
    {
        UE_LOG(LogTemp, Log, TEXT("PlayerController: Server (HOST)"));
        Server_SetPlayerName("HOST");
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("PlayerController: Client (GUEST)"));
        Server_SetPlayerName("GUEST");
    }

    if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        if (NumberBaseballMappingContext)
        {
            Subsystem->AddMappingContext(NumberBaseballMappingContext, 0);
            UE_LOG(LogTemp, Log, TEXT("NumberBaseballMappingContext added."));
        }
    }

    // 이름 설정 확인
    if (PlayerState)
    {
        UE_LOG(LogTemp, Log, TEXT("PlayerName after BeginPlay: %s"), *PlayerState->GetPlayerName());
    }
}

void ANumberBaseballPlayerController::Server_SetPlayerName_Implementation(const FString& NewName)
{
    if (PlayerState)
    {
        PlayerState->SetPlayerName(NewName);
        UE_LOG(LogTemp, Log, TEXT("Server set PlayerName to: %s"), *NewName);
        // 이름이 제대로 설정되었는지 확인
        UE_LOG(LogTemp, Log, TEXT("Confirmed PlayerName: %s"), *PlayerState->GetPlayerName());
    }
}
void ANumberBaseballPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
    {
        if (ChatAction)
        {
            EnhancedInputComponent->BindAction(ChatAction, ETriggerEvent::Triggered, this, &ANumberBaseballPlayerController::StartChatInput);
            UE_LOG(LogTemp, Log, TEXT("ChatAction bound to StartChatInput."));
        }
    }
}

void ANumberBaseballPlayerController::StartChatInput()
{
    if (!ChatInputWidgetClass)
    {
        UE_LOG(LogTemp, Error, TEXT("ChatInputWidgetClass is null!"));
        return;
    }

    ChatInputWidget = CreateWidget<UUserWidget>(this, ChatInputWidgetClass);
    if (ChatInputWidget)
    {
        ChatInputWidget->AddToViewport();
        UE_LOG(LogTemp, Log, TEXT("ChatInputWidget added to viewport."));

        UEditableTextBox* ChatInputBox = Cast<UEditableTextBox>(ChatInputWidget->GetWidgetFromName(TEXT("ChatInputBox")));
        UButton* SubmitButton = Cast<UButton>(ChatInputWidget->GetWidgetFromName(TEXT("SubmitButton")));

        if (ChatInputBox)
        {
            ChatInputBox->SetKeyboardFocus();
            UE_LOG(LogTemp, Log, TEXT("ChatInputBox found."));
        }
        if (SubmitButton)
        {
            SubmitButton->OnClicked.AddDynamic(this, &ANumberBaseballPlayerController::OnSubmitButtonClicked);
            UE_LOG(LogTemp, Log, TEXT("SubmitButton found and OnClicked bound."));
        }
    }
}

void ANumberBaseballPlayerController::OnSubmitButtonClicked()
{
    UE_LOG(LogTemp, Log, TEXT("OnSubmitButtonClicked called."));
    if (ChatInputWidget)
    {
        UEditableTextBox* ChatInputBox = Cast<UEditableTextBox>(ChatInputWidget->GetWidgetFromName(TEXT("ChatInputBox")));
        if (ChatInputBox)
        {
            FString Message = ChatInputBox->GetText().ToString();
            if (!Message.IsEmpty())
            {
                SendChatMessage(Message);
                UE_LOG(LogTemp, Log, TEXT("SendChatMessage called with: %s"), *Message);
            }
        }
        ChatInputWidget->RemoveFromParent();
        ChatInputWidget = nullptr;
    }
}

void ANumberBaseballPlayerController::SendChatMessage(const FString& Message)
{
    if (!Message.IsEmpty())
    {
        if (!HasAuthority())
        {
            Server_ProcessChatInput(Message);
            UE_LOG(LogTemp, Log, TEXT("GUEST: Sent message to HOST: %s"), *Message);
        }
        else
        {
            if (ANumberBaseballGameMode* GameMode = Cast<ANumberBaseballGameMode>(GetWorld()->GetAuthGameMode()))
            {
                GameMode->ProcessChatInput(PlayerState->GetPlayerName(), Message);
                UE_LOG(LogTemp, Log, TEXT("HOST: Processed message locally: %s"), *Message);
            }
        }
    }
}

bool ANumberBaseballPlayerController::Server_ProcessChatInput_Validate(const FString& Message)
{
    return !Message.IsEmpty();
}

void ANumberBaseballPlayerController::Server_ProcessChatInput_Implementation(const FString& Message)
{
    UE_LOG(LogTemp, Log, TEXT("HOST: Received message from GUEST: %s"), *Message);
    if (ANumberBaseballGameMode* GameMode = Cast<ANumberBaseballGameMode>(GetWorld()->GetAuthGameMode()))
    {
        GameMode->ProcessChatInput(PlayerState->GetPlayerName(), Message);
    }
}


void ANumberBaseballPlayerController::Multicast_DisplayResult_Implementation(const FString& ResultMessage, const FLinearColor& Color)
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, Color.ToFColor(true), ResultMessage);
        UE_LOG(LogTemp, Log, TEXT("Multicast_DisplayResult: %s"), *ResultMessage);
    }
}