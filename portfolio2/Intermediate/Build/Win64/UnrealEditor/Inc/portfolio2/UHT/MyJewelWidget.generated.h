// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyJewelWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTFOLIO2_MyJewelWidget_generated_h
#error "MyJewelWidget.generated.h already included, missing '#pragma once' in MyJewelWidget.h"
#endif
#define PORTFOLIO2_MyJewelWidget_generated_h

#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyJewelWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execspendJewel); \
	DECLARE_FUNCTION(execaddJewel);


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyJewelWidget_h_15_CALLBACK_WRAPPERS
#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyJewelWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyJewelWidget(); \
	friend struct Z_Construct_UClass_UMyJewelWidget_Statics; \
public: \
	DECLARE_CLASS(UMyJewelWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/portfolio2"), NO_API) \
	DECLARE_SERIALIZER(UMyJewelWidget)


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyJewelWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyJewelWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyJewelWidget(UMyJewelWidget&&); \
	UMyJewelWidget(const UMyJewelWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyJewelWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyJewelWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyJewelWidget) \
	NO_API virtual ~UMyJewelWidget();


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyJewelWidget_h_12_PROLOG
#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyJewelWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyJewelWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyJewelWidget_h_15_CALLBACK_WRAPPERS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyJewelWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyJewelWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIO2_API UClass* StaticClass<class UMyJewelWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyJewelWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
