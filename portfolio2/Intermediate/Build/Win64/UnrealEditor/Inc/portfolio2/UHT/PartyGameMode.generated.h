// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PartyGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTFOLIO2_PartyGameMode_generated_h
#error "PartyGameMode.generated.h already included, missing '#pragma once' in PartyGameMode.h"
#endif
#define PORTFOLIO2_PartyGameMode_generated_h

#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_PartyGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPartyGameMode(); \
	friend struct Z_Construct_UClass_APartyGameMode_Statics; \
public: \
	DECLARE_CLASS(APartyGameMode, AMyGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/portfolio2"), NO_API) \
	DECLARE_SERIALIZER(APartyGameMode)


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_PartyGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APartyGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APartyGameMode(APartyGameMode&&); \
	APartyGameMode(const APartyGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APartyGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APartyGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APartyGameMode) \
	NO_API virtual ~APartyGameMode();


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_PartyGameMode_h_12_PROLOG
#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_PartyGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_PartyGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_PartyGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIO2_API UClass* StaticClass<class APartyGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_PartyGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
