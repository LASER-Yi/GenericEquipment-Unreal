// MIT License, Copyright (c) LASER-Yi

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EquipmentComponent.generated.h"


UCLASS(Blueprintable, BlueprintType, ClassGroup=(Gameplay), meta=(BlueprintSpawnableComponent))
class EQUIPMENTCORE_API UEquipmentComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UEquipmentComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	static UEquipmentComponent* GetEquipmentComponent(const AActor* InActor);
};
