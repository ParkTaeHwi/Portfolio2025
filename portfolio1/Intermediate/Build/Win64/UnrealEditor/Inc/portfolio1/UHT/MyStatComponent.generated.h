// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyStatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTFOLIO1_MyStatComponent_generated_h
#error "MyStatComponent.generated.h already included, missing '#pragma once' in MyStatComponent.h"
#endif
#define PORTFOLIO1_MyStatComponent_generated_h

#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyStatComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyStatData_Statics; \
	PORTFOLIO1_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> PORTFOLIO1_API UScriptStruct* StaticStruct<struct FMyStatData>();

#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyStatComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyStatComponent(); \
	friend struct Z_Construct_UClass_UMyStatComponent_Statics; \
public: \
	DECLARE_CLASS(UMyStatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/portfolio1"), NO_API) \
	DECLARE_SERIALIZER(UMyStatComponent)


#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyStatComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyStatComponent(UMyStatComponent&&); \
	UMyStatComponent(const UMyStatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyStatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyStatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyStatComponent) \
	NO_API virtual ~UMyStatComponent();


#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyStatComponent_h_23_PROLOG
#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyStatComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyStatComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyStatComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIO1_API UClass* StaticClass<class UMyStatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyStatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
