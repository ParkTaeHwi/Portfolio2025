// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTFOLIO1_MyAnimInstance_generated_h
#error "MyAnimInstance.generated.h already included, missing '#pragma once' in MyAnimInstance.h"
#endif
#define PORTFOLIO1_MyAnimInstance_generated_h

#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyAnimInstance_h_16_DELEGATE \
PORTFOLIO1_API void FAnimDelegateTest3_DelegateWrapper(const FMulticastScriptDelegate& AnimDelegateTest3);


#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyAnimInstance_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAnimNotify_Attack_Hit); \
	DECLARE_FUNCTION(execPlayAnimMontage);


#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyAnimInstance_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyAnimInstance(); \
	friend struct Z_Construct_UClass_UMyAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/portfolio1"), NO_API) \
	DECLARE_SERIALIZER(UMyAnimInstance)


#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyAnimInstance_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyAnimInstance(UMyAnimInstance&&); \
	UMyAnimInstance(const UMyAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyAnimInstance) \
	NO_API virtual ~UMyAnimInstance();


#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyAnimInstance_h_18_PROLOG
#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyAnimInstance_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyAnimInstance_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyAnimInstance_h_21_INCLASS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyAnimInstance_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIO1_API UClass* StaticClass<class UMyAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
