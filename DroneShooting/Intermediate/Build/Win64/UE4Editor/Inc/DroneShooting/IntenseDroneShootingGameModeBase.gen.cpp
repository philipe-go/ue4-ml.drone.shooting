// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneShooting/IntenseDroneShootingGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntenseDroneShootingGameModeBase() {}
// Cross Module References
	DRONESHOOTING_API UClass* Z_Construct_UClass_AIntenseDroneShootingGameModeBase_NoRegister();
	DRONESHOOTING_API UClass* Z_Construct_UClass_AIntenseDroneShootingGameModeBase();
	DRONESHOOTING_API UClass* Z_Construct_UClass_ADroneShootingGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DroneShooting();
// End Cross Module References
	void AIntenseDroneShootingGameModeBase::StaticRegisterNativesAIntenseDroneShootingGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AIntenseDroneShootingGameModeBase_NoRegister()
	{
		return AIntenseDroneShootingGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AIntenseDroneShootingGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIntenseDroneShootingGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADroneShootingGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneShooting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntenseDroneShootingGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "IntenseDroneShootingGameModeBase.h" },
		{ "ModuleRelativePath", "IntenseDroneShootingGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIntenseDroneShootingGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntenseDroneShootingGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIntenseDroneShootingGameModeBase_Statics::ClassParams = {
		&AIntenseDroneShootingGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AIntenseDroneShootingGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIntenseDroneShootingGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIntenseDroneShootingGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIntenseDroneShootingGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIntenseDroneShootingGameModeBase, 193967082);
	template<> DRONESHOOTING_API UClass* StaticClass<AIntenseDroneShootingGameModeBase>()
	{
		return AIntenseDroneShootingGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIntenseDroneShootingGameModeBase(Z_Construct_UClass_AIntenseDroneShootingGameModeBase, &AIntenseDroneShootingGameModeBase::StaticClass, TEXT("/Script/DroneShooting"), TEXT("AIntenseDroneShootingGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIntenseDroneShootingGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
