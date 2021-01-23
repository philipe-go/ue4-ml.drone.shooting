// Copyright by Philipe Go.

#include "EnemyAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "CharacterBase.h"
#include "Kismet/GameplayStatics.h"


void AEnemyAIController::BeginPlay()
{
    Super::BeginPlay();

    PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();

    if(AIBehaviourTree) 
    {
        RunBehaviorTree(AIBehaviourTree);
        AIBlackboard = GetBlackboardComponent(); 
        AIBlackboard->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());
        AIBlackboard->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
    }
}

void AEnemyAIController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    if (PlayerPawn && LineOfSightTo(PlayerPawn)) 
    {
        SetFocus(PlayerPawn);
        AIBlackboard->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
        AIBlackboard->ClearValue(TEXT("LastPlayerLocation"));
    }
    else
    {
        ClearFocus(EAIFocusPriority::Gameplay);
        AIBlackboard->ClearValue(TEXT("PlayerLocation"));
        AIBlackboard->SetValueAsVector(TEXT("LastPlayerLocation"), PlayerPawn->GetActorLocation());
    }
}
