// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyBoss.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTFOLIO1_MyBoss_generated_h
#error "MyBoss.generated.h already included, missing '#pragma once' in MyBoss.h"
#endif
#define PORTFOLIO1_MyBoss_generated_h

#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBoss_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyBoss(); \
	friend struct Z_Construct_UClass_AMyBoss_Statics; \
public: \
	DECLARE_CLASS(AMyBoss, AMyEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/portfolio1"), NO_API) \
	DECLARE_SERIALIZER(AMyBoss)


#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBoss_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyBoss(AMyBoss&&); \
	AMyBoss(const AMyBoss&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBoss); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBoss); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyBoss) \
	NO_API virtual ~AMyBoss();


#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBoss_h_12_PROLOG
#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBoss_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBoss_h_15_INCLASS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBoss_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIO1_API UClass* StaticClass<class AMyBoss>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBoss_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
