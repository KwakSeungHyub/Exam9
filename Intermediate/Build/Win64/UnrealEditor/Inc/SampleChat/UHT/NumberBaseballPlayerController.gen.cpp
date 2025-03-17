// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/NumberBaseballPlayerController.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumberBaseballPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SAMPLECHAT_API UClass* Z_Construct_UClass_ANumberBaseballPlayerController();
SAMPLECHAT_API UClass* Z_Construct_UClass_ANumberBaseballPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class ANumberBaseballPlayerController Function Multicast_DisplayResult
struct NumberBaseballPlayerController_eventMulticast_DisplayResult_Parms
{
	FString ResultMessage;
	FLinearColor Color;
};
static const FName NAME_ANumberBaseballPlayerController_Multicast_DisplayResult = FName(TEXT("Multicast_DisplayResult"));
void ANumberBaseballPlayerController::Multicast_DisplayResult(const FString& ResultMessage, FLinearColor const& Color)
{
	NumberBaseballPlayerController_eventMulticast_DisplayResult_Parms Parms;
	Parms.ResultMessage=ResultMessage;
	Parms.Color=Color;
	UFunction* Func = FindFunctionChecked(NAME_ANumberBaseballPlayerController_Multicast_DisplayResult);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANumberBaseballPlayerController_Multicast_DisplayResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResultMessage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANumberBaseballPlayerController_Multicast_DisplayResult_Statics::NewProp_ResultMessage = { "ResultMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballPlayerController_eventMulticast_DisplayResult_Parms, ResultMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultMessage_MetaData), NewProp_ResultMessage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANumberBaseballPlayerController_Multicast_DisplayResult_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballPlayerController_eventMulticast_DisplayResult_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANumberBaseballPlayerController_Multicast_DisplayResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANumberBaseballPlayerController_Multicast_DisplayResult_Statics::NewProp_ResultMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANumberBaseballPlayerController_Multicast_DisplayResult_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_Multicast_DisplayResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANumberBaseballPlayerController_Multicast_DisplayResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANumberBaseballPlayerController, nullptr, "Multicast_DisplayResult", nullptr, nullptr, Z_Construct_UFunction_ANumberBaseballPlayerController_Multicast_DisplayResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_Multicast_DisplayResult_Statics::PropPointers), sizeof(NumberBaseballPlayerController_eventMulticast_DisplayResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_Multicast_DisplayResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANumberBaseballPlayerController_Multicast_DisplayResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(NumberBaseballPlayerController_eventMulticast_DisplayResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANumberBaseballPlayerController_Multicast_DisplayResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANumberBaseballPlayerController_Multicast_DisplayResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANumberBaseballPlayerController::execMulticast_DisplayResult)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ResultMessage);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_DisplayResult_Implementation(Z_Param_ResultMessage,Z_Param_Color);
	P_NATIVE_END;
}
// End Class ANumberBaseballPlayerController Function Multicast_DisplayResult

// Begin Class ANumberBaseballPlayerController Function OnSubmitButtonClicked
struct Z_Construct_UFunction_ANumberBaseballPlayerController_OnSubmitButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANumberBaseballPlayerController_OnSubmitButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANumberBaseballPlayerController, nullptr, "OnSubmitButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_OnSubmitButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANumberBaseballPlayerController_OnSubmitButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANumberBaseballPlayerController_OnSubmitButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANumberBaseballPlayerController_OnSubmitButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANumberBaseballPlayerController::execOnSubmitButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSubmitButtonClicked();
	P_NATIVE_END;
}
// End Class ANumberBaseballPlayerController Function OnSubmitButtonClicked

// Begin Class ANumberBaseballPlayerController Function SendChatMessage
struct Z_Construct_UFunction_ANumberBaseballPlayerController_SendChatMessage_Statics
{
	struct NumberBaseballPlayerController_eventSendChatMessage_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NumberBaseball" },
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANumberBaseballPlayerController_SendChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballPlayerController_eventSendChatMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANumberBaseballPlayerController_SendChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANumberBaseballPlayerController_SendChatMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_SendChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANumberBaseballPlayerController_SendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANumberBaseballPlayerController, nullptr, "SendChatMessage", nullptr, nullptr, Z_Construct_UFunction_ANumberBaseballPlayerController_SendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_SendChatMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANumberBaseballPlayerController_SendChatMessage_Statics::NumberBaseballPlayerController_eventSendChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_SendChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANumberBaseballPlayerController_SendChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANumberBaseballPlayerController_SendChatMessage_Statics::NumberBaseballPlayerController_eventSendChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANumberBaseballPlayerController_SendChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANumberBaseballPlayerController_SendChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANumberBaseballPlayerController::execSendChatMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendChatMessage(Z_Param_Message);
	P_NATIVE_END;
}
// End Class ANumberBaseballPlayerController Function SendChatMessage

// Begin Class ANumberBaseballPlayerController Function Server_ProcessChatInput
struct NumberBaseballPlayerController_eventServer_ProcessChatInput_Parms
{
	FString Message;
};
static const FName NAME_ANumberBaseballPlayerController_Server_ProcessChatInput = FName(TEXT("Server_ProcessChatInput"));
void ANumberBaseballPlayerController::Server_ProcessChatInput(const FString& Message)
{
	NumberBaseballPlayerController_eventServer_ProcessChatInput_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_ANumberBaseballPlayerController_Server_ProcessChatInput);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANumberBaseballPlayerController_Server_ProcessChatInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANumberBaseballPlayerController_Server_ProcessChatInput_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballPlayerController_eventServer_ProcessChatInput_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANumberBaseballPlayerController_Server_ProcessChatInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANumberBaseballPlayerController_Server_ProcessChatInput_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_Server_ProcessChatInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANumberBaseballPlayerController_Server_ProcessChatInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANumberBaseballPlayerController, nullptr, "Server_ProcessChatInput", nullptr, nullptr, Z_Construct_UFunction_ANumberBaseballPlayerController_Server_ProcessChatInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_Server_ProcessChatInput_Statics::PropPointers), sizeof(NumberBaseballPlayerController_eventServer_ProcessChatInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_Server_ProcessChatInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANumberBaseballPlayerController_Server_ProcessChatInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(NumberBaseballPlayerController_eventServer_ProcessChatInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANumberBaseballPlayerController_Server_ProcessChatInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANumberBaseballPlayerController_Server_ProcessChatInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANumberBaseballPlayerController::execServer_ProcessChatInput)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_ProcessChatInput_Validate(Z_Param_Message))
	{
		RPC_ValidateFailed(TEXT("Server_ProcessChatInput_Validate"));
		return;
	}
	P_THIS->Server_ProcessChatInput_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class ANumberBaseballPlayerController Function Server_ProcessChatInput

// Begin Class ANumberBaseballPlayerController Function Server_SetPlayerName
struct NumberBaseballPlayerController_eventServer_SetPlayerName_Parms
{
	FString NewName;
};
static const FName NAME_ANumberBaseballPlayerController_Server_SetPlayerName = FName(TEXT("Server_SetPlayerName"));
void ANumberBaseballPlayerController::Server_SetPlayerName(const FString& NewName)
{
	NumberBaseballPlayerController_eventServer_SetPlayerName_Parms Parms;
	Parms.NewName=NewName;
	UFunction* Func = FindFunctionChecked(NAME_ANumberBaseballPlayerController_Server_SetPlayerName);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANumberBaseballPlayerController_Server_SetPlayerName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANumberBaseballPlayerController_Server_SetPlayerName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballPlayerController_eventServer_SetPlayerName_Parms, NewName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewName_MetaData), NewProp_NewName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANumberBaseballPlayerController_Server_SetPlayerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANumberBaseballPlayerController_Server_SetPlayerName_Statics::NewProp_NewName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_Server_SetPlayerName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANumberBaseballPlayerController_Server_SetPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANumberBaseballPlayerController, nullptr, "Server_SetPlayerName", nullptr, nullptr, Z_Construct_UFunction_ANumberBaseballPlayerController_Server_SetPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_Server_SetPlayerName_Statics::PropPointers), sizeof(NumberBaseballPlayerController_eventServer_SetPlayerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_Server_SetPlayerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANumberBaseballPlayerController_Server_SetPlayerName_Statics::Function_MetaDataParams) };
static_assert(sizeof(NumberBaseballPlayerController_eventServer_SetPlayerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANumberBaseballPlayerController_Server_SetPlayerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANumberBaseballPlayerController_Server_SetPlayerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANumberBaseballPlayerController::execServer_SetPlayerName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SetPlayerName_Implementation(Z_Param_NewName);
	P_NATIVE_END;
}
// End Class ANumberBaseballPlayerController Function Server_SetPlayerName

// Begin Class ANumberBaseballPlayerController Function StartChatInput
struct Z_Construct_UFunction_ANumberBaseballPlayerController_StartChatInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANumberBaseballPlayerController_StartChatInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANumberBaseballPlayerController, nullptr, "StartChatInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballPlayerController_StartChatInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANumberBaseballPlayerController_StartChatInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANumberBaseballPlayerController_StartChatInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANumberBaseballPlayerController_StartChatInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANumberBaseballPlayerController::execStartChatInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartChatInput();
	P_NATIVE_END;
}
// End Class ANumberBaseballPlayerController Function StartChatInput

// Begin Class ANumberBaseballPlayerController
void ANumberBaseballPlayerController::StaticRegisterNativesANumberBaseballPlayerController()
{
	UClass* Class = ANumberBaseballPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Multicast_DisplayResult", &ANumberBaseballPlayerController::execMulticast_DisplayResult },
		{ "OnSubmitButtonClicked", &ANumberBaseballPlayerController::execOnSubmitButtonClicked },
		{ "SendChatMessage", &ANumberBaseballPlayerController::execSendChatMessage },
		{ "Server_ProcessChatInput", &ANumberBaseballPlayerController::execServer_ProcessChatInput },
		{ "Server_SetPlayerName", &ANumberBaseballPlayerController::execServer_SetPlayerName },
		{ "StartChatInput", &ANumberBaseballPlayerController::execStartChatInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANumberBaseballPlayerController);
UClass* Z_Construct_UClass_ANumberBaseballPlayerController_NoRegister()
{
	return ANumberBaseballPlayerController::StaticClass();
}
struct Z_Construct_UClass_ANumberBaseballPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NumberBaseballPlayerController.h" },
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberBaseballMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NumberBaseballPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NumberBaseballMappingContext;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChatInputWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatInputWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANumberBaseballPlayerController_Multicast_DisplayResult, "Multicast_DisplayResult" }, // 1315927026
		{ &Z_Construct_UFunction_ANumberBaseballPlayerController_OnSubmitButtonClicked, "OnSubmitButtonClicked" }, // 1650599614
		{ &Z_Construct_UFunction_ANumberBaseballPlayerController_SendChatMessage, "SendChatMessage" }, // 1065516218
		{ &Z_Construct_UFunction_ANumberBaseballPlayerController_Server_ProcessChatInput, "Server_ProcessChatInput" }, // 2817753043
		{ &Z_Construct_UFunction_ANumberBaseballPlayerController_Server_SetPlayerName, "Server_SetPlayerName" }, // 97410169
		{ &Z_Construct_UFunction_ANumberBaseballPlayerController_StartChatInput, "StartChatInput" }, // 1953105886
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANumberBaseballPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_ChatAction = { "ChatAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballPlayerController, ChatAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatAction_MetaData), NewProp_ChatAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_NumberBaseballMappingContext = { "NumberBaseballMappingContext", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballPlayerController, NumberBaseballMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberBaseballMappingContext_MetaData), NewProp_NumberBaseballMappingContext_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_ChatInputWidgetClass = { "ChatInputWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballPlayerController, ChatInputWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetClass_MetaData), NewProp_ChatInputWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_ChatInputWidget = { "ChatInputWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballPlayerController, ChatInputWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidget_MetaData), NewProp_ChatInputWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANumberBaseballPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_ChatAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_NumberBaseballMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_ChatInputWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballPlayerController_Statics::NewProp_ChatInputWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANumberBaseballPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANumberBaseballPlayerController_Statics::ClassParams = {
	&ANumberBaseballPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANumberBaseballPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballPlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANumberBaseballPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANumberBaseballPlayerController()
{
	if (!Z_Registration_Info_UClass_ANumberBaseballPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANumberBaseballPlayerController.OuterSingleton, Z_Construct_UClass_ANumberBaseballPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANumberBaseballPlayerController.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<ANumberBaseballPlayerController>()
{
	return ANumberBaseballPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANumberBaseballPlayerController);
ANumberBaseballPlayerController::~ANumberBaseballPlayerController() {}
// End Class ANumberBaseballPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_NumberBaseballPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANumberBaseballPlayerController, ANumberBaseballPlayerController::StaticClass, TEXT("ANumberBaseballPlayerController"), &Z_Registration_Info_UClass_ANumberBaseballPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANumberBaseballPlayerController), 1420005426U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_NumberBaseballPlayerController_h_1527423119(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_NumberBaseballPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_NumberBaseballPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
