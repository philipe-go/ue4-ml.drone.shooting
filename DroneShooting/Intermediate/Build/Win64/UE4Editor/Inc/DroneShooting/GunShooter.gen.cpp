// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DroneShooting/Gun/GunShooter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunShooter() {}
// Cross Module References
	DRONESHOOTING_API UClass* Z_Construct_UClass_AGunShooter_NoRegister();
	DRONESHOOTING_API UClass* Z_Construct_UClass_AGunShooter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DroneShooting();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AGunShooter::StaticRegisterNativesAGunShooter()
	{
	}
	UClass* Z_Construct_UClass_AGunShooter_NoRegister()
	{
		return AGunShooter::StaticClass();
	}
	struct Z_Construct_UClass_AGunShooter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunShooter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DroneShooting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunShooter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gun/GunShooter.h" },
		{ "ModuleRelativePath", "Gun/GunShooter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunShooter_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "GunShooter" },
		{ "ModuleRelativePath", "Gun/GunShooter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunShooter_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunShooter, MuzzleFlash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunShooter_Statics::NewProp_MuzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunShooter_Statics::NewProp_MuzzleFlash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunShooter_Statics::NewProp_GunMesh_MetaData[] = {
		{ "Category", "GunShooter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun/GunShooter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunShooter_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunShooter, GunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunShooter_Statics::NewProp_GunMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunShooter_Statics::NewProp_GunMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunShooter_Statics::NewProp_RootMesh_MetaData[] = {
		{ "Category", "GunShooter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun/GunShooter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunShooter_Statics::NewProp_RootMesh = { "RootMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunShooter, RootMesh), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunShooter_Statics::NewProp_RootMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunShooter_Statics::NewProp_RootMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGunShooter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunShooter_Statics::NewProp_MuzzleFlash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunShooter_Statics::NewProp_GunMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunShooter_Statics::NewProp_RootMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunShooter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunShooter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunShooter_Statics::ClassParams = {
		&AGunShooter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGunShooter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGunShooter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGunShooter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunShooter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunShooter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunShooter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunShooter, 4246593561);
	template<> DRONESHOOTING_API UClass* StaticClass<AGunShooter>()
	{
		return AGunShooter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunShooter(Z_Construct_UClass_AGunShooter, &AGunShooter::StaticClass, TEXT("/Script/DroneShooting"), TEXT("AGunShooter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunShooter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
