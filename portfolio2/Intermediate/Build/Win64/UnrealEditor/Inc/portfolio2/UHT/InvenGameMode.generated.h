// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InvenGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTFOLIO2_InvenGameMode_generated_h
#error "InvenGameMode.generated.h already included, missing '#pragma once' in InvenGameMode.h"
#endif
#define PORTFOLIO2_InvenGameMode_generated_h

#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_InvenGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInvenGameMode(); \
	friend struct Z_Construct_UClass_AInvenGameMode_Statics; \
public: \
	DECLARE_CLASS(AInvenGameMode, AMyGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/portfolio2"), NO_API) \
	DECLARE_SERIALIZER(AInvenGameMode)


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_InvenGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInvenGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInvenGameMode(AInvenGameMode&&); \
	AInvenGameMode(const AInvenGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInvenGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInvenGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInvenGameMode) \
	NO_API virtual ~AInvenGameMode();


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_InvenGameMode_h_12_PROLOG
#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_InvenGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_InvenGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_InvenGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIO2_API UClass* StaticClass<class AInvenGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_InvenGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
