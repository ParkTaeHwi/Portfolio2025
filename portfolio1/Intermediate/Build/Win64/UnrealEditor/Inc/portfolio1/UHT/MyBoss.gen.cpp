// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio1/MyBoss.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBoss() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PORTFOLIO1_API UClass* Z_Construct_UClass_AMyBoss();
PORTFOLIO1_API UClass* Z_Construct_UClass_AMyBoss_NoRegister();
PORTFOLIO1_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
PORTFOLIO1_API UClass* Z_Construct_UClass_AMyEnemy();
PORTFOLIO1_API UClass* Z_Construct_UClass_AMyEnemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio1();
// End Cross Module References

// Begin Class AMyBoss Function OnPlayerDetected
struct Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics
{
	struct MyBoss_eventOnPlayerDetected_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBoss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBoss_eventOnPlayerDetected_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBoss_eventOnPlayerDetected_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBoss_eventOnPlayerDetected_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBoss_eventOnPlayerDetected_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((MyBoss_eventOnPlayerDetected_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyBoss_eventOnPlayerDetected_Parms), &Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBoss_eventOnPlayerDetected_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyBoss, nullptr, "OnPlayerDetected", nullptr, nullptr, Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::MyBoss_eventOnPlayerDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::MyBoss_eventOnPlayerDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyBoss_OnPlayerDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyBoss_OnPlayerDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyBoss::execOnPlayerDetected)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerDetected(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AMyBoss Function OnPlayerDetected

// Begin Class AMyBoss Function OnSpawnedEnemyDestroyed
struct Z_Construct_UFunction_AMyBoss_OnSpawnedEnemyDestroyed_Statics
{
	struct MyBoss_eventOnSpawnedEnemyDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBoss.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyBoss_OnSpawnedEnemyDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyBoss_eventOnSpawnedEnemyDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyBoss_OnSpawnedEnemyDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyBoss_OnSpawnedEnemyDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBoss_OnSpawnedEnemyDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyBoss_OnSpawnedEnemyDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyBoss, nullptr, "OnSpawnedEnemyDestroyed", nullptr, nullptr, Z_Construct_UFunction_AMyBoss_OnSpawnedEnemyDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBoss_OnSpawnedEnemyDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyBoss_OnSpawnedEnemyDestroyed_Statics::MyBoss_eventOnSpawnedEnemyDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBoss_OnSpawnedEnemyDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyBoss_OnSpawnedEnemyDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyBoss_OnSpawnedEnemyDestroyed_Statics::MyBoss_eventOnSpawnedEnemyDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyBoss_OnSpawnedEnemyDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyBoss_OnSpawnedEnemyDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyBoss::execOnSpawnedEnemyDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSpawnedEnemyDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class AMyBoss Function OnSpawnedEnemyDestroyed

// Begin Class AMyBoss Function SpawnEnemy
struct Z_Construct_UFunction_AMyBoss_SpawnEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyBoss.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyBoss_SpawnEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyBoss, nullptr, "SpawnEnemy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyBoss_SpawnEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyBoss_SpawnEnemy_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyBoss_SpawnEnemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyBoss_SpawnEnemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyBoss::execSpawnEnemy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnEnemy();
	P_NATIVE_END;
}
// End Class AMyBoss Function SpawnEnemy

// Begin Class AMyBoss
void AMyBoss::StaticRegisterNativesAMyBoss()
{
	UClass* Class = AMyBoss::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPlayerDetected", &AMyBoss::execOnPlayerDetected },
		{ "OnSpawnedEnemyDestroyed", &AMyBoss::execOnSpawnedEnemyDestroyed },
		{ "SpawnEnemy", &AMyBoss::execSpawnEnemy },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyBoss);
UClass* Z_Construct_UClass_AMyBoss_NoRegister()
{
	return AMyBoss::StaticClass();
}
struct Z_Construct_UClass_AMyBoss_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyBoss.h" },
		{ "ModuleRelativePath", "MyBoss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__detectCapsule_MetaData[] = {
		{ "Category", "Boss|Detect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc5\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyBoss.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__targetPlayer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyBoss.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyToSpawn_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "MyBoss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[] = {
		{ "Category", "Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyBoss.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnCount_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "MyBoss.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__detectCapsule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__targetPlayer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyToSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSpawnCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyBoss_OnPlayerDetected, "OnPlayerDetected" }, // 2455941999
		{ &Z_Construct_UFunction_AMyBoss_OnSpawnedEnemyDestroyed, "OnSpawnedEnemyDestroyed" }, // 1155500938
		{ &Z_Construct_UFunction_AMyBoss_SpawnEnemy, "SpawnEnemy" }, // 550401446
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyBoss>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBoss_Statics::NewProp__detectCapsule = { "_detectCapsule", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyBoss, _detectCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__detectCapsule_MetaData), NewProp__detectCapsule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyBoss_Statics::NewProp__targetPlayer = { "_targetPlayer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyBoss, _targetPlayer), Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__targetPlayer_MetaData), NewProp__targetPlayer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyBoss_Statics::NewProp_EnemyToSpawn = { "EnemyToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyBoss, EnemyToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyToSpawn_MetaData), NewProp_EnemyToSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyBoss_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyBoss, SpawnInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInterval_MetaData), NewProp_SpawnInterval_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyBoss_Statics::NewProp_MaxSpawnCount = { "MaxSpawnCount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyBoss, MaxSpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpawnCount_MetaData), NewProp_MaxSpawnCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyBoss_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBoss_Statics::NewProp__detectCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBoss_Statics::NewProp__targetPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBoss_Statics::NewProp_EnemyToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBoss_Statics::NewProp_SpawnInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyBoss_Statics::NewProp_MaxSpawnCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBoss_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyBoss_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBoss_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyBoss_Statics::ClassParams = {
	&AMyBoss::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyBoss_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyBoss_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBoss_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyBoss_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyBoss()
{
	if (!Z_Registration_Info_UClass_AMyBoss.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyBoss.OuterSingleton, Z_Construct_UClass_AMyBoss_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyBoss.OuterSingleton;
}
template<> PORTFOLIO1_API UClass* StaticClass<AMyBoss>()
{
	return AMyBoss::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyBoss);
AMyBoss::~AMyBoss() {}
// End Class AMyBoss

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBoss_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyBoss, AMyBoss::StaticClass, TEXT("AMyBoss"), &Z_Registration_Info_UClass_AMyBoss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyBoss), 3082702353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBoss_h_756389116(TEXT("/Script/portfolio1"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBoss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBoss_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
