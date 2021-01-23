// Copyright by Philipe Go.


#include "BTTask_Shoot.h"
#include "AIController.h"
#include "..\Characters\CharacterBase.h"

UBTTask_Shoot::UBTTask_Shoot() 
{
    NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) 
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

    ACharacterBase* AICharacter = Cast<ACharacterBase>(OwnerComp.GetAIOwner()->GetPawn());
    if (!AICharacter) return EBTNodeResult::Failed;

    AICharacter->Shoot();

    return EBTNodeResult::Succeeded;
}
