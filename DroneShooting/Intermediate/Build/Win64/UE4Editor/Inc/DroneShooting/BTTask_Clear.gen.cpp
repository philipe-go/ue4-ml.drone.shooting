// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneShooting/AI/BTTask_Clear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Clear() {}
// Cross Module References
	DRONESHOOTING_API UClass* Z_Construct_UClass_UBTTask_Clear_NoRegister();
	DRONESHOOTING_API UClass* Z_Construct_UClass_UBTTask_Clear();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_DroneShooting();
// End Cross Module References
	void UBTTask_Clear::StaticRegisterNativesUBTTask_Clear()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_Clear_NoRegister()
	{
		return UBTTask_Clear::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_Clear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_Clear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneShooting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Clear_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTTask_Clear.h" },
		{ "ModuleRelativePath", "AI/BTTask_Clear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_Clear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Clear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Clear_Statics::ClassParams = {
		&UBTTask_Clear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_Clear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Clear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_Clear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_Clear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_Clear, 2659478900);
	template<> DRONESHOOTING_API UClass* StaticClass<UBTTask_Clear>()
	{
		return UBTTask_Clear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_Clear(Z_Construct_UClass_UBTTask_Clear, &UBTTask_Clear::StaticClass, TEXT("/Script/DroneShooting"), TEXT("UBTTask_Clear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Clear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
