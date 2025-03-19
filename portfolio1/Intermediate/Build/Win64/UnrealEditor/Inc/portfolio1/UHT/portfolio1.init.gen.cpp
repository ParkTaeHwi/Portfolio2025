// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeportfolio1_init() {}
	PORTFOLIO1_API UFunction* Z_Construct_UDelegateFunction_portfolio1_AnimDelegateTest3__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_portfolio1;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_portfolio1()
	{
		if (!Z_Registration_Info_UPackage__Script_portfolio1.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_portfolio1_AnimDelegateTest3__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/portfolio1",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2C003076,
				0x78140D16,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_portfolio1.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_portfolio1.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_portfolio1(Z_Construct_UPackage__Script_portfolio1, TEXT("/Script/portfolio1"), Z_Registration_Info_UPackage__Script_portfolio1, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2C003076, 0x78140D16));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
