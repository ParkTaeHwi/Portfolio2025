// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PORTFOLIO1_MyItem_generated_h
#error "MyItem.generated.h already included, missing '#pragma once' in MyItem.h"
#endif
#define PORTFOLIO1_MyItem_generated_h

#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyItem_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyItemInfo_Statics; \
	PORTFOLIO1_API static class UScriptStruct* StaticStruct();


template<> PORTFOLIO1_API UScriptStruct* StaticStruct<struct FMyItemInfo>();

#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyItem_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyItem_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyItem(); \
	friend struct Z_Construct_UClass_AMyItem_Statics; \
public: \
	DECLARE_CLASS(AMyItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/portfolio1"), NO_API) \
	DECLARE_SERIALIZER(AMyItem)


#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyItem_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyItem(AMyItem&&); \
	AMyItem(const AMyItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyItem) \
	NO_API virtual ~AMyItem();


#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyItem_h_30_PROLOG
#define FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyItem_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyItem_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyItem_h_33_INCLASS_NO_PURE_DECLS \
	FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyItem_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PORTFOLIO1_API UClass* StaticClass<class AMyItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyItem_h


#define FOREACH_ENUM_MYITEMTYPE(op) \
	op(MyItemType::NONE) \
	op(MyItemType::POTION) 

enum class MyItemType;
template<> struct TIsUEnumClass<MyItemType> { enum { Value = true }; };
template<> PORTFOLIO1_API UEnum* StaticEnum<MyItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
