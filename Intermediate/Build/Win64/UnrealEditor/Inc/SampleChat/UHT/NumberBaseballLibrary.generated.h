// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NumberBaseballLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef SAMPLECHAT_NumberBaseballLibrary_generated_h
#error "NumberBaseballLibrary.generated.h already included, missing '#pragma once' in NumberBaseballLibrary.h"
#endif
#define SAMPLECHAT_NumberBaseballLibrary_generated_h

#define FID_SampleChat_Source_SampleChat_NumberBaseballLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTurnTimeout); \
	DECLARE_FUNCTION(execSwitchTurn); \
	DECLARE_FUNCTION(execIsValidGuess); \
	DECLARE_FUNCTION(execCalculateResult); \
	DECLARE_FUNCTION(execGenerateRandomNumber);


#define FID_SampleChat_Source_SampleChat_NumberBaseballLibrary_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNumberBaseballLibrary(); \
	friend struct Z_Construct_UClass_UNumberBaseballLibrary_Statics; \
public: \
	DECLARE_CLASS(UNumberBaseballLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(UNumberBaseballLibrary)


#define FID_SampleChat_Source_SampleChat_NumberBaseballLibrary_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNumberBaseballLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNumberBaseballLibrary(UNumberBaseballLibrary&&); \
	UNumberBaseballLibrary(const UNumberBaseballLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNumberBaseballLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNumberBaseballLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNumberBaseballLibrary) \
	NO_API virtual ~UNumberBaseballLibrary();


#define FID_SampleChat_Source_SampleChat_NumberBaseballLibrary_h_6_PROLOG
#define FID_SampleChat_Source_SampleChat_NumberBaseballLibrary_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_NumberBaseballLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_NumberBaseballLibrary_h_9_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_NumberBaseballLibrary_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class UNumberBaseballLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_NumberBaseballLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
