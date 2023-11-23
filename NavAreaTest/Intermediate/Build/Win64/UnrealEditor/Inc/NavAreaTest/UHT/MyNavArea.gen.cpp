// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavAreaTest/Public/MyNavArea.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNavArea() {}
// Cross Module References
	NAVAREATEST_API UClass* Z_Construct_UClass_UMyNavArea();
	NAVAREATEST_API UClass* Z_Construct_UClass_UMyNavArea_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_NavAreaTest();
// End Cross Module References
	void UMyNavArea::StaticRegisterNativesUMyNavArea()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyNavArea);
	UClass* Z_Construct_UClass_UMyNavArea_NoRegister()
	{
		return UMyNavArea::StaticClass();
	}
	struct Z_Construct_UClass_UMyNavArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyNavArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_NavAreaTest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyNavArea_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyNavArea_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyNavArea.h" },
		{ "ModuleRelativePath", "Public/MyNavArea.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyNavArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyNavArea>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyNavArea_Statics::ClassParams = {
		&UMyNavArea::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyNavArea_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyNavArea_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMyNavArea()
	{
		if (!Z_Registration_Info_UClass_UMyNavArea.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyNavArea.OuterSingleton, Z_Construct_UClass_UMyNavArea_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyNavArea.OuterSingleton;
	}
	template<> NAVAREATEST_API UClass* StaticClass<UMyNavArea>()
	{
		return UMyNavArea::StaticClass();
	}
	UMyNavArea::UMyNavArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyNavArea);
	UMyNavArea::~UMyNavArea() {}
	struct Z_CompiledInDeferFile_FID_NavAreaTest_Source_NavAreaTest_Public_MyNavArea_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NavAreaTest_Source_NavAreaTest_Public_MyNavArea_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyNavArea, UMyNavArea::StaticClass, TEXT("UMyNavArea"), &Z_Registration_Info_UClass_UMyNavArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyNavArea), 654123090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NavAreaTest_Source_NavAreaTest_Public_MyNavArea_h_845940956(TEXT("/Script/NavAreaTest"),
		Z_CompiledInDeferFile_FID_NavAreaTest_Source_NavAreaTest_Public_MyNavArea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NavAreaTest_Source_NavAreaTest_Public_MyNavArea_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
