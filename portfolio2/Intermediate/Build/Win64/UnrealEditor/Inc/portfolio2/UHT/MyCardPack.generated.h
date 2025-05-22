// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyCardPack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PORTFOLIO2_MyCardPack_generated_h
#error "MyCardPack.generated.h already included, missing '#pragma once' in MyCardPack.h"
#endif
#define PORTFOLIO2_MyCardPack_generated_h

#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCards); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCardPack(); \
	friend struct Z_Construct_UClass_AMyCardPack_Statics; \
public: \
	DECLARE_CLASS(AMyCardPack, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/portfolio2"), NO_API) \
	DECLARE_SERIALIZER(AMyCardPack)


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyCardPack(AMyCardPack&&); \
	AMyCardPack(const AMyCardPack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCardPack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCardPack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCardPack) \
	NO_API virtual ~AMyCardPack();


#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_9_PROLOG
#define FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_12_INCLASS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIO2_API UClass* StaticClass<class AMyCardPack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
