// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NumberBaseballPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef SAMPLECHAT_NumberBaseballPlayerController_generated_h
#error "NumberBaseballPlayerController.generated.h already included, missing '#pragma once' in NumberBaseballPlayerController.h"
#endif
#define SAMPLECHAT_NumberBaseballPlayerController_generated_h

#define FID_SampleChat_Source_SampleChat_NumberBaseballPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_SetPlayerName_Implementation(const FString& NewName); \
	virtual void Multicast_DisplayResult_Implementation(const FString& ResultMessage, FLinearColor const& Color); \
	DECLARE_FUNCTION(execStartChatInput); \
	DECLARE_FUNCTION(execOnSubmitButtonClicked); \
	DECLARE_FUNCTION(execServer_ProcessChatInput); \
	DECLARE_FUNCTION(execServer_SetPlayerName); \
	DECLARE_FUNCTION(execMulticast_DisplayResult); \
	DECLARE_FUNCTION(execSendChatMessage);


#define FID_SampleChat_Source_SampleChat_NumberBaseballPlayerController_h_12_CALLBACK_WRAPPERS
#define FID_SampleChat_Source_SampleChat_NumberBaseballPlayerController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANumberBaseballPlayerController(); \
	friend struct Z_Construct_UClass_ANumberBaseballPlayerController_Statics; \
public: \
	DECLARE_CLASS(ANumberBaseballPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(ANumberBaseballPlayerController)


#define FID_SampleChat_Source_SampleChat_NumberBaseballPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANumberBaseballPlayerController(ANumberBaseballPlayerController&&); \
	ANumberBaseballPlayerController(const ANumberBaseballPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANumberBaseballPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANumberBaseballPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANumberBaseballPlayerController) \
	NO_API virtual ~ANumberBaseballPlayerController();


#define FID_SampleChat_Source_SampleChat_NumberBaseballPlayerController_h_9_PROLOG
#define FID_SampleChat_Source_SampleChat_NumberBaseballPlayerController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_NumberBaseballPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_NumberBaseballPlayerController_h_12_CALLBACK_WRAPPERS \
	FID_SampleChat_Source_SampleChat_NumberBaseballPlayerController_h_12_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_NumberBaseballPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class ANumberBaseballPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_NumberBaseballPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
