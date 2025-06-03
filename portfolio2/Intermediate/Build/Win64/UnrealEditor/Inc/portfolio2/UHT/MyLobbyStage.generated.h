// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyLobbyStage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTFOLIO2_MyLobbyStage_generated_h
#error "MyLobbyStage.generated.h already included, missing '#pragma once' in MyLobbyStage.h"
#endif
#define PORTFOLIO2_MyLobbyStage_generated_h

#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCubeIndex); \
	DECLARE_FUNCTION(execLogCubeIndex);


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyLobbyStage(); \
	friend struct Z_Construct_UClass_AMyLobbyStage_Statics; \
public: \
	DECLARE_CLASS(AMyLobbyStage, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/portfolio2"), NO_API) \
	DECLARE_SERIALIZER(AMyLobbyStage)


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyLobbyStage(AMyLobbyStage&&); \
	AMyLobbyStage(const AMyLobbyStage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyLobbyStage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyLobbyStage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyLobbyStage) \
	NO_API virtual ~AMyLobbyStage();


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_9_PROLOG
#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_12_INCLASS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIO2_API UClass* StaticClass<class AMyLobbyStage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
