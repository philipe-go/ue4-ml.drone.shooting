// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRONESHOOTING_EnemyAIController_generated_h
#error "EnemyAIController.generated.h already included, missing '#pragma once' in EnemyAIController.h"
#endif
#define DRONESHOOTING_EnemyAIController_generated_h

#define DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_SPARSE_DATA
#define DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_RPC_WRAPPERS
#define DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DroneShooting"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DroneShooting"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public:


#define DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController)


#define DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerPawn() { return STRUCT_OFFSET(AEnemyAIController, PlayerPawn); } \
	FORCEINLINE static uint32 __PPO__DISTANCE_TO_FOLLOW() { return STRUCT_OFFSET(AEnemyAIController, DISTANCE_TO_FOLLOW); } \
	FORCEINLINE static uint32 __PPO__MIN_DISTANCE_TO_PLAYER() { return STRUCT_OFFSET(AEnemyAIController, MIN_DISTANCE_TO_PLAYER); } \
	FORCEINLINE static uint32 __PPO__AIBehaviourTree() { return STRUCT_OFFSET(AEnemyAIController, AIBehaviourTree); } \
	FORCEINLINE static uint32 __PPO__AIBlackboard() { return STRUCT_OFFSET(AEnemyAIController, AIBlackboard); }


#define DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_9_PROLOG
#define DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_PRIVATE_PROPERTY_OFFSET \
	DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_SPARSE_DATA \
	DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_RPC_WRAPPERS \
	DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_INCLASS \
	DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_PRIVATE_PROPERTY_OFFSET \
	DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_SPARSE_DATA \
	DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_INCLASS_NO_PURE_DECLS \
	DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRONESHOOTING_API UClass* StaticClass<class AEnemyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DroneShooting_Source_DroneShooting_Characters_EnemyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
