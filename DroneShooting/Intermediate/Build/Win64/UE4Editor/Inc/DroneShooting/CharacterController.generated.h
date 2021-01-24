// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRONESHOOTING_CharacterController_generated_h
#error "CharacterController.generated.h already included, missing '#pragma once' in CharacterController.h"
#endif
#define DRONESHOOTING_CharacterController_generated_h

#define DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_SPARSE_DATA
#define DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_RPC_WRAPPERS
#define DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterController(); \
	friend struct Z_Construct_UClass_ACharacterController_Statics; \
public: \
	DECLARE_CLASS(ACharacterController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DroneShooting"), NO_API) \
	DECLARE_SERIALIZER(ACharacterController)


#define DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACharacterController(); \
	friend struct Z_Construct_UClass_ACharacterController_Statics; \
public: \
	DECLARE_CLASS(ACharacterController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DroneShooting"), NO_API) \
	DECLARE_SERIALIZER(ACharacterController)


#define DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterController(ACharacterController&&); \
	NO_API ACharacterController(const ACharacterController&); \
public:


#define DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterController(ACharacterController&&); \
	NO_API ACharacterController(const ACharacterController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterController)


#define DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoseUI() { return STRUCT_OFFSET(ACharacterController, LoseUI); } \
	FORCEINLINE static uint32 __PPO__RestartCounter() { return STRUCT_OFFSET(ACharacterController, RestartCounter); } \
	FORCEINLINE static uint32 __PPO__Timer() { return STRUCT_OFFSET(ACharacterController, Timer); }


#define DroneShooting_Source_DroneShooting_Controller_CharacterController_h_12_PROLOG
#define DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_PRIVATE_PROPERTY_OFFSET \
	DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_SPARSE_DATA \
	DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_RPC_WRAPPERS \
	DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_INCLASS \
	DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_PRIVATE_PROPERTY_OFFSET \
	DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_SPARSE_DATA \
	DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_INCLASS_NO_PURE_DECLS \
	DroneShooting_Source_DroneShooting_Controller_CharacterController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONESHOOTING_API UClass* StaticClass<class ACharacterController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneShooting_Source_DroneShooting_Controller_CharacterController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
