// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/NumberBaseballLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumberBaseballLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SAMPLECHAT_API UClass* Z_Construct_UClass_UNumberBaseballLibrary();
SAMPLECHAT_API UClass* Z_Construct_UClass_UNumberBaseballLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class UNumberBaseballLibrary Function CalculateResult
struct Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics
{
	struct NumberBaseballLibrary_eventCalculateResult_Parms
	{
		FString SecretNumber;
		FString Guess;
		int32 OutStrikes;
		int32 OutBalls;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NumberBaseball" },
		{ "ModuleRelativePath", "NumberBaseballLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecretNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SecretNumber;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Guess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutStrikes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutBalls;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::NewProp_SecretNumber = { "SecretNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLibrary_eventCalculateResult_Parms, SecretNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecretNumber_MetaData), NewProp_SecretNumber_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::NewProp_Guess = { "Guess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLibrary_eventCalculateResult_Parms, Guess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guess_MetaData), NewProp_Guess_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::NewProp_OutStrikes = { "OutStrikes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLibrary_eventCalculateResult_Parms, OutStrikes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::NewProp_OutBalls = { "OutBalls", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLibrary_eventCalculateResult_Parms, OutBalls), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::NewProp_SecretNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::NewProp_Guess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::NewProp_OutStrikes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::NewProp_OutBalls,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberBaseballLibrary, nullptr, "CalculateResult", nullptr, nullptr, Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::NumberBaseballLibrary_eventCalculateResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::NumberBaseballLibrary_eventCalculateResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNumberBaseballLibrary::execCalculateResult)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SecretNumber);
	P_GET_PROPERTY(FStrProperty,Z_Param_Guess);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutStrikes);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutBalls);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNumberBaseballLibrary::CalculateResult(Z_Param_SecretNumber,Z_Param_Guess,Z_Param_Out_OutStrikes,Z_Param_Out_OutBalls);
	P_NATIVE_END;
}
// End Class UNumberBaseballLibrary Function CalculateResult

// Begin Class UNumberBaseballLibrary Function GenerateRandomNumber
struct Z_Construct_UFunction_UNumberBaseballLibrary_GenerateRandomNumber_Statics
{
	struct NumberBaseballLibrary_eventGenerateRandomNumber_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NumberBaseball" },
		{ "ModuleRelativePath", "NumberBaseballLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNumberBaseballLibrary_GenerateRandomNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLibrary_eventGenerateRandomNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberBaseballLibrary_GenerateRandomNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLibrary_GenerateRandomNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLibrary_GenerateRandomNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberBaseballLibrary_GenerateRandomNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberBaseballLibrary, nullptr, "GenerateRandomNumber", nullptr, nullptr, Z_Construct_UFunction_UNumberBaseballLibrary_GenerateRandomNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLibrary_GenerateRandomNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNumberBaseballLibrary_GenerateRandomNumber_Statics::NumberBaseballLibrary_eventGenerateRandomNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLibrary_GenerateRandomNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNumberBaseballLibrary_GenerateRandomNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNumberBaseballLibrary_GenerateRandomNumber_Statics::NumberBaseballLibrary_eventGenerateRandomNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNumberBaseballLibrary_GenerateRandomNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNumberBaseballLibrary_GenerateRandomNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNumberBaseballLibrary::execGenerateRandomNumber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UNumberBaseballLibrary::GenerateRandomNumber();
	P_NATIVE_END;
}
// End Class UNumberBaseballLibrary Function GenerateRandomNumber

// Begin Class UNumberBaseballLibrary Function HandleTurnTimeout
struct Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics
{
	struct NumberBaseballLibrary_eventHandleTurnTimeout_Parms
	{
		FString CurrentTurn;
		TMap<FString,int32> PlayerAttempts;
		bool bShouldReset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NumberBaseball" },
		{ "ModuleRelativePath", "NumberBaseballLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTurn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentTurn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerAttempts_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerAttempts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayerAttempts;
	static void NewProp_bShouldReset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldReset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_CurrentTurn = { "CurrentTurn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLibrary_eventHandleTurnTimeout_Parms, CurrentTurn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTurn_MetaData), NewProp_CurrentTurn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_PlayerAttempts_ValueProp = { "PlayerAttempts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_PlayerAttempts_Key_KeyProp = { "PlayerAttempts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_PlayerAttempts = { "PlayerAttempts", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLibrary_eventHandleTurnTimeout_Parms, PlayerAttempts), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_bShouldReset_SetBit(void* Obj)
{
	((NumberBaseballLibrary_eventHandleTurnTimeout_Parms*)Obj)->bShouldReset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_bShouldReset = { "bShouldReset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NumberBaseballLibrary_eventHandleTurnTimeout_Parms), &Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_bShouldReset_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NumberBaseballLibrary_eventHandleTurnTimeout_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NumberBaseballLibrary_eventHandleTurnTimeout_Parms), &Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_CurrentTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_PlayerAttempts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_PlayerAttempts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_PlayerAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_bShouldReset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberBaseballLibrary, nullptr, "HandleTurnTimeout", nullptr, nullptr, Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NumberBaseballLibrary_eventHandleTurnTimeout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::NumberBaseballLibrary_eventHandleTurnTimeout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNumberBaseballLibrary::execHandleTurnTimeout)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CurrentTurn);
	P_GET_TMAP_REF(FString,int32,Z_Param_Out_PlayerAttempts);
	P_GET_UBOOL_REF(Z_Param_Out_bShouldReset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNumberBaseballLibrary::HandleTurnTimeout(Z_Param_CurrentTurn,Z_Param_Out_PlayerAttempts,Z_Param_Out_bShouldReset);
	P_NATIVE_END;
}
// End Class UNumberBaseballLibrary Function HandleTurnTimeout

// Begin Class UNumberBaseballLibrary Function IsValidGuess
struct Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics
{
	struct NumberBaseballLibrary_eventIsValidGuess_Parms
	{
		FString Guess;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NumberBaseball" },
		{ "ModuleRelativePath", "NumberBaseballLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Guess;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::NewProp_Guess = { "Guess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLibrary_eventIsValidGuess_Parms, Guess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guess_MetaData), NewProp_Guess_MetaData) };
void Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NumberBaseballLibrary_eventIsValidGuess_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NumberBaseballLibrary_eventIsValidGuess_Parms), &Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::NewProp_Guess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberBaseballLibrary, nullptr, "IsValidGuess", nullptr, nullptr, Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::NumberBaseballLibrary_eventIsValidGuess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::NumberBaseballLibrary_eventIsValidGuess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNumberBaseballLibrary::execIsValidGuess)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Guess);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNumberBaseballLibrary::IsValidGuess(Z_Param_Guess);
	P_NATIVE_END;
}
// End Class UNumberBaseballLibrary Function IsValidGuess

// Begin Class UNumberBaseballLibrary Function SwitchTurn
struct Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn_Statics
{
	struct NumberBaseballLibrary_eventSwitchTurn_Parms
	{
		FString CurrentTurn;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NumberBaseball" },
		{ "ModuleRelativePath", "NumberBaseballLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTurn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentTurn;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn_Statics::NewProp_CurrentTurn = { "CurrentTurn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLibrary_eventSwitchTurn_Parms, CurrentTurn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTurn_MetaData), NewProp_CurrentTurn_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLibrary_eventSwitchTurn_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn_Statics::NewProp_CurrentTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberBaseballLibrary, nullptr, "SwitchTurn", nullptr, nullptr, Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn_Statics::NumberBaseballLibrary_eventSwitchTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn_Statics::NumberBaseballLibrary_eventSwitchTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNumberBaseballLibrary::execSwitchTurn)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CurrentTurn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UNumberBaseballLibrary::SwitchTurn(Z_Param_CurrentTurn);
	P_NATIVE_END;
}
// End Class UNumberBaseballLibrary Function SwitchTurn

// Begin Class UNumberBaseballLibrary
void UNumberBaseballLibrary::StaticRegisterNativesUNumberBaseballLibrary()
{
	UClass* Class = UNumberBaseballLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateResult", &UNumberBaseballLibrary::execCalculateResult },
		{ "GenerateRandomNumber", &UNumberBaseballLibrary::execGenerateRandomNumber },
		{ "HandleTurnTimeout", &UNumberBaseballLibrary::execHandleTurnTimeout },
		{ "IsValidGuess", &UNumberBaseballLibrary::execIsValidGuess },
		{ "SwitchTurn", &UNumberBaseballLibrary::execSwitchTurn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNumberBaseballLibrary);
UClass* Z_Construct_UClass_UNumberBaseballLibrary_NoRegister()
{
	return UNumberBaseballLibrary::StaticClass();
}
struct Z_Construct_UClass_UNumberBaseballLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NumberBaseballLibrary.h" },
		{ "ModuleRelativePath", "NumberBaseballLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNumberBaseballLibrary_CalculateResult, "CalculateResult" }, // 1548496370
		{ &Z_Construct_UFunction_UNumberBaseballLibrary_GenerateRandomNumber, "GenerateRandomNumber" }, // 87807164
		{ &Z_Construct_UFunction_UNumberBaseballLibrary_HandleTurnTimeout, "HandleTurnTimeout" }, // 2613842159
		{ &Z_Construct_UFunction_UNumberBaseballLibrary_IsValidGuess, "IsValidGuess" }, // 3899652340
		{ &Z_Construct_UFunction_UNumberBaseballLibrary_SwitchTurn, "SwitchTurn" }, // 1818456806
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNumberBaseballLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNumberBaseballLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNumberBaseballLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNumberBaseballLibrary_Statics::ClassParams = {
	&UNumberBaseballLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNumberBaseballLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNumberBaseballLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNumberBaseballLibrary()
{
	if (!Z_Registration_Info_UClass_UNumberBaseballLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNumberBaseballLibrary.OuterSingleton, Z_Construct_UClass_UNumberBaseballLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNumberBaseballLibrary.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<UNumberBaseballLibrary>()
{
	return UNumberBaseballLibrary::StaticClass();
}
UNumberBaseballLibrary::UNumberBaseballLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNumberBaseballLibrary);
UNumberBaseballLibrary::~UNumberBaseballLibrary() {}
// End Class UNumberBaseballLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_NumberBaseballLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNumberBaseballLibrary, UNumberBaseballLibrary::StaticClass, TEXT("UNumberBaseballLibrary"), &Z_Registration_Info_UClass_UNumberBaseballLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNumberBaseballLibrary), 624480185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_NumberBaseballLibrary_h_1628831629(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_NumberBaseballLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_NumberBaseballLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
