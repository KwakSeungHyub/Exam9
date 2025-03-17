// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NumberBaseballGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_NumberBaseballGameMode_generated_h
#error "NumberBaseballGameMode.generated.h already included, missing '#pragma once' in NumberBaseballGameMode.h"
#endif
#define SAMPLECHAT_NumberBaseballGameMode_generated_h

#define FID_SampleChat_Source_SampleChat_NumberBaseballGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProcessChatInput);


#define FID_SampleChat_Source_SampleChat_NumberBaseballGameMode_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANumberBaseballGameMode(); \
	friend struct Z_Construct_UClass_ANumberBaseballGameMode_Statics; \
public: \
	DECLARE_CLASS(ANumberBaseballGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(ANumberBaseballGameMode)


#define FID_SampleChat_Source_SampleChat_NumberBaseballGameMode_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANumberBaseballGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANumberBaseballGameMode(ANumberBaseballGameMode&&); \
	ANumberBaseballGameMode(const ANumberBaseballGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANumberBaseballGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANumberBaseballGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANumberBaseballGameMode) \
	NO_API virtual ~ANumberBaseballGameMode();


#define FID_SampleChat_Source_SampleChat_NumberBaseballGameMode_h_6_PROLOG
#define FID_SampleChat_Source_SampleChat_NumberBaseballGameMode_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_NumberBaseballGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_NumberBaseballGameMode_h_9_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_NumberBaseballGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class ANumberBaseballGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_NumberBaseballGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
