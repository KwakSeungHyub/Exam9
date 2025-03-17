// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/NumberBaseballGameMode.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumberBaseballGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
SAMPLECHAT_API UClass* Z_Construct_UClass_ANumberBaseballGameMode();
SAMPLECHAT_API UClass* Z_Construct_UClass_ANumberBaseballGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class ANumberBaseballGameMode Function ProcessChatInput
struct Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput_Statics
{
	struct NumberBaseballGameMode_eventProcessChatInput_Parms
	{
		FString PlayerName;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NumberBaseballGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballGameMode_eventProcessChatInput_Parms, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballGameMode_eventProcessChatInput_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANumberBaseballGameMode, nullptr, "ProcessChatInput", nullptr, nullptr, Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput_Statics::NumberBaseballGameMode_eventProcessChatInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput_Statics::NumberBaseballGameMode_eventProcessChatInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANumberBaseballGameMode::execProcessChatInput)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessChatInput(Z_Param_PlayerName,Z_Param_Message);
	P_NATIVE_END;
}
// End Class ANumberBaseballGameMode Function ProcessChatInput

// Begin Class ANumberBaseballGameMode
void ANumberBaseballGameMode::StaticRegisterNativesANumberBaseballGameMode()
{
	UClass* Class = ANumberBaseballGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ProcessChatInput", &ANumberBaseballGameMode::execProcessChatInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANumberBaseballGameMode);
UClass* Z_Construct_UClass_ANumberBaseballGameMode_NoRegister()
{
	return ANumberBaseballGameMode::StaticClass();
}
struct Z_Construct_UClass_ANumberBaseballGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NumberBaseballGameMode.h" },
		{ "ModuleRelativePath", "NumberBaseballGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTurnPlayer_MetaData[] = {
		{ "ModuleRelativePath", "NumberBaseballGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecretNumber_MetaData[] = {
		{ "ModuleRelativePath", "NumberBaseballGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAttempts_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa0\x95\xeb\x8b\xb5 \xec\x88\xab\xec\x9e\x90\n" },
#endif
		{ "ModuleRelativePath", "NumberBaseballGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x95\xeb\x8b\xb5 \xec\x88\xab\xec\x9e\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnTimerHandle_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xeb\xb3\x84 \xec\x8b\x9c\xeb\x8f\x84 \xed\x9a\x9f\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "NumberBaseballGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xeb\xb3\x84 \xec\x8b\x9c\xeb\x8f\x84 \xed\x9a\x9f\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentTurnPlayer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SecretNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerAttempts_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerAttempts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayerAttempts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurnTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANumberBaseballGameMode_ProcessChatInput, "ProcessChatInput" }, // 3366383334
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANumberBaseballGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_CurrentTurnPlayer = { "CurrentTurnPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballGameMode, CurrentTurnPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTurnPlayer_MetaData), NewProp_CurrentTurnPlayer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_SecretNumber = { "SecretNumber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballGameMode, SecretNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecretNumber_MetaData), NewProp_SecretNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_PlayerAttempts_ValueProp = { "PlayerAttempts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_PlayerAttempts_Key_KeyProp = { "PlayerAttempts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_PlayerAttempts = { "PlayerAttempts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballGameMode, PlayerAttempts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAttempts_MetaData), NewProp_PlayerAttempts_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_TurnTimerHandle = { "TurnTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumberBaseballGameMode, TurnTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnTimerHandle_MetaData), NewProp_TurnTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANumberBaseballGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_CurrentTurnPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_SecretNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_PlayerAttempts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_PlayerAttempts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_PlayerAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberBaseballGameMode_Statics::NewProp_TurnTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANumberBaseballGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANumberBaseballGameMode_Statics::ClassParams = {
	&ANumberBaseballGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANumberBaseballGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballGameMode_Statics::PropPointers),
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANumberBaseballGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANumberBaseballGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANumberBaseballGameMode()
{
	if (!Z_Registration_Info_UClass_ANumberBaseballGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANumberBaseballGameMode.OuterSingleton, Z_Construct_UClass_ANumberBaseballGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANumberBaseballGameMode.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<ANumberBaseballGameMode>()
{
	return ANumberBaseballGameMode::StaticClass();
}
ANumberBaseballGameMode::ANumberBaseballGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANumberBaseballGameMode);
ANumberBaseballGameMode::~ANumberBaseballGameMode() {}
// End Class ANumberBaseballGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_NumberBaseballGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANumberBaseballGameMode, ANumberBaseballGameMode::StaticClass, TEXT("ANumberBaseballGameMode"), &Z_Registration_Info_UClass_ANumberBaseballGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANumberBaseballGameMode), 659550377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_NumberBaseballGameMode_h_2366029092(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_NumberBaseballGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_NumberBaseballGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
