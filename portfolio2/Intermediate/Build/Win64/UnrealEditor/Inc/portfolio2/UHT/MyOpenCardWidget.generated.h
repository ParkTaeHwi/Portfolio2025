// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyOpenCardWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTFOLIO2_MyOpenCardWidget_generated_h
#error "MyOpenCardWidget.generated.h already included, missing '#pragma once' in MyOpenCardWidget.h"
#endif
#define PORTFOLIO2_MyOpenCardWidget_generated_h

#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execspendJewel); \
	DECLARE_FUNCTION(execIsJewelEnough); \
	DECLARE_FUNCTION(execCardOpen); \
	DECLARE_FUNCTION(execCloseWidget); \
	DECLARE_FUNCTION(execInitCardInfo);


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_17_CALLBACK_WRAPPERS
#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyOpenCardWidget(); \
	friend struct Z_Construct_UClass_UMyOpenCardWidget_Statics; \
public: \
	DECLARE_CLASS(UMyOpenCardWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/portfolio2"), NO_API) \
	DECLARE_SERIALIZER(UMyOpenCardWidget)


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyOpenCardWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyOpenCardWidget(UMyOpenCardWidget&&); \
	UMyOpenCardWidget(const UMyOpenCardWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyOpenCardWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyOpenCardWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyOpenCardWidget) \
	NO_API virtual ~UMyOpenCardWidget();


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_14_PROLOG
#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_17_CALLBACK_WRAPPERS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIO2_API UClass* StaticClass<class UMyOpenCardWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
