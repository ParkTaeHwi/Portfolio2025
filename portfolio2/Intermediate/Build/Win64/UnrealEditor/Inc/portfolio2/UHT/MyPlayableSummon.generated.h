// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPlayableSummon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTFOLIO2_MyPlayableSummon_generated_h
#error "MyPlayableSummon.generated.h already included, missing '#pragma once' in MyPlayableSummon.h"
#endif
#define PORTFOLIO2_MyPlayableSummon_generated_h

#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetControl3); \
	DECLARE_FUNCTION(execGetControl2); \
	DECLARE_FUNCTION(execGetControl1);


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayableSummon(); \
	friend struct Z_Construct_UClass_AMyPlayableSummon_Statics; \
public: \
	DECLARE_CLASS(AMyPlayableSummon, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/portfolio2"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayableSummon)


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyPlayableSummon(AMyPlayableSummon&&); \
	AMyPlayableSummon(const AMyPlayableSummon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayableSummon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayableSummon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayableSummon) \
	NO_API virtual ~AMyPlayableSummon();


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_10_PROLOG
#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_13_INCLASS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIO2_API UClass* StaticClass<class AMyPlayableSummon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
