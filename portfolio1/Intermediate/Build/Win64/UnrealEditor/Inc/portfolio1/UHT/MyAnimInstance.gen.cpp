// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio1/MyAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyAnimInstance();
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister();
PORTFOLIO1_API UFunction* Z_Construct_UDelegateFunction_portfolio1_AnimDelegateTest3__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_portfolio1();
// End Cross Module References

// Begin Delegate FAnimDelegateTest3
struct Z_Construct_UDelegateFunction_portfolio1_AnimDelegateTest3__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_portfolio1_AnimDelegateTest3__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_portfolio1, nullptr, "AnimDelegateTest3__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_portfolio1_AnimDelegateTest3__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_portfolio1_AnimDelegateTest3__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_portfolio1_AnimDelegateTest3__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_portfolio1_AnimDelegateTest3__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAnimDelegateTest3_DelegateWrapper(const FMulticastScriptDelegate& AnimDelegateTest3)
{
	AnimDelegateTest3.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FAnimDelegateTest3

// Begin Class UMyAnimInstance Function AnimNotify_Attack_Hit
struct Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_Hit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_Hit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "AnimNotify_Attack_Hit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_Hit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_Hit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_Hit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_Hit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyAnimInstance::execAnimNotify_Attack_Hit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimNotify_Attack_Hit();
	P_NATIVE_END;
}
// End Class UMyAnimInstance Function AnimNotify_Attack_Hit

// Begin Class UMyAnimInstance Function PlayAnimMontage
struct Z_Construct_UFunction_UMyAnimInstance_PlayAnimMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyAnimInstance_PlayAnimMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyAnimInstance, nullptr, "PlayAnimMontage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyAnimInstance_PlayAnimMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyAnimInstance_PlayAnimMontage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyAnimInstance_PlayAnimMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyAnimInstance_PlayAnimMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyAnimInstance::execPlayAnimMontage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayAnimMontage();
	P_NATIVE_END;
}
// End Class UMyAnimInstance Function PlayAnimMontage

// Begin Class UMyAnimInstance
void UMyAnimInstance::StaticRegisterNativesUMyAnimInstance()
{
	UClass* Class = UMyAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimNotify_Attack_Hit", &UMyAnimInstance::execAnimNotify_Attack_Hit },
		{ "PlayAnimMontage", &UMyAnimInstance::execPlayAnimMontage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAnimInstance);
UClass* Z_Construct_UClass_UMyAnimInstance_NoRegister()
{
	return UMyAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UMyAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MyAnimInstance.h" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__attackStart3_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isFalling_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__vertical_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AniMontage" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__horizontal_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AniMontage" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__animMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AniMontage" },
		{ "ModuleRelativePath", "MyAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp__attackStart3;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__speed;
	static void NewProp__isFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isFalling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__vertical;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__horizontal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__animMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyAnimInstance_AnimNotify_Attack_Hit, "AnimNotify_Attack_Hit" }, // 1629827047
		{ &Z_Construct_UFunction_UMyAnimInstance_PlayAnimMontage, "PlayAnimMontage" }, // 662606426
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__attackStart3 = { "_attackStart3", nullptr, (EPropertyFlags)0x0010000000080015, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, _attackStart3), Z_Construct_UDelegateFunction_portfolio1_AnimDelegateTest3__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__attackStart3_MetaData), NewProp__attackStart3_MetaData) }; // 3837943127
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, _speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__speed_MetaData), NewProp__speed_MetaData) };
void Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__isFalling_SetBit(void* Obj)
{
	((UMyAnimInstance*)Obj)->_isFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__isFalling = { "_isFalling", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMyAnimInstance), &Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__isFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isFalling_MetaData), NewProp__isFalling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__vertical = { "_vertical", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, _vertical), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__vertical_MetaData), NewProp__vertical_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__horizontal = { "_horizontal", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, _horizontal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__horizontal_MetaData), NewProp__horizontal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__animMontage = { "_animMontage", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyAnimInstance, _animMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__animMontage_MetaData), NewProp__animMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__attackStart3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__isFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__vertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__horizontal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyAnimInstance_Statics::NewProp__animMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAnimInstance_Statics::ClassParams = {
	&UMyAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyAnimInstance()
{
	if (!Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton, Z_Construct_UClass_UMyAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyAnimInstance.OuterSingleton;
}
template<> PORTFOLIO1_API UClass* StaticClass<UMyAnimInstance>()
{
	return UMyAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAnimInstance);
UMyAnimInstance::~UMyAnimInstance() {}
// End Class UMyAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyAnimInstance, UMyAnimInstance::StaticClass, TEXT("UMyAnimInstance"), &Z_Registration_Info_UClass_UMyAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAnimInstance), 2112743930U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyAnimInstance_h_2593596974(TEXT("/Script/portfolio1"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
