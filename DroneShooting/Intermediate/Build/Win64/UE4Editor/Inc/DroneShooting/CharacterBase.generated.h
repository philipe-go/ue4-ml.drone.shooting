// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRONESHOOTING_CharacterBase_generated_h
#error "CharacterBase.generated.h already included, missing '#pragma once' in CharacterBase.h"
#endif
#define DRONESHOOTING_CharacterBase_generated_h

#define DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_SPARSE_DATA
#define DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_RPC_WRAPPERS
#define DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DroneShooting"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase)


#define DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DroneShooting"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase)


#define DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public:


#define DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterBase)


#define DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RateOfTurn() { return STRUCT_OFFSET(ACharacterBase, RateOfTurn); } \
	FORCEINLINE static uint32 __PPO__SpeedMultiplier() { return STRUCT_OFFSET(ACharacterBase, SpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO__ShootAnimMontage() { return STRUCT_OFFSET(ACharacterBase, ShootAnimMontage); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ACharacterBase, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ACharacterBase, Camera); } \
	FORCEINLINE static uint32 __PPO__CameraChangeRate() { return STRUCT_OFFSET(ACharacterBase, CameraChangeRate); } \
	FORCEINLINE static uint32 __PPO__GunClass() { return STRUCT_OFFSET(ACharacterBase, GunClass); } \
	FORCEINLINE static uint32 __PPO__JumpParticle() { return STRUCT_OFFSET(ACharacterBase, JumpParticle); }


#define DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_11_PROLOG
#define DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_PRIVATE_PROPERTY_OFFSET \
	DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_SPARSE_DATA \
	DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_RPC_WRAPPERS \
	DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_INCLASS \
	DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_PRIVATE_PROPERTY_OFFSET \
	DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_SPARSE_DATA \
	DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_INCLASS_NO_PURE_DECLS \
	DroneShooting_Source_DroneShooting_Characters_CharacterBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONESHOOTING_API UClass* StaticClass<class ACharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneShooting_Source_DroneShooting_Characters_CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
