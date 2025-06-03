// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyLobbyWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTFOLIO2_MyLobbyWidget_generated_h
#error "MyLobbyWidget.generated.h already included, missing '#pragma once' in MyLobbyWidget.h"
#endif
#define PORTFOLIO2_MyLobbyWidget_generated_h

#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSomeFunctionBeforeLevelChange);


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyLobbyWidget(); \
	friend struct Z_Construct_UClass_UMyLobbyWidget_Statics; \
public: \
	DECLARE_CLASS(UMyLobbyWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/portfolio2"), NO_API) \
	DECLARE_SERIALIZER(UMyLobbyWidget)


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyLobbyWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyLobbyWidget(UMyLobbyWidget&&); \
	UMyLobbyWidget(const UMyLobbyWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyLobbyWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyLobbyWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyLobbyWidget) \
	NO_API virtual ~UMyLobbyWidget();


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyWidget_h_12_PROLOG
#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIO2_API UClass* StaticClass<class UMyLobbyWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
