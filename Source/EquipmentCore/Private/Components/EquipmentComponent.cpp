// MIT License, Copyright (c) LASER-Yi


#include "Components/EquipmentComponent.h"


UEquipmentComponent::UEquipmentComponent(const FObjectInitializer& ObjectInitializer): Super()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
}

UEquipmentComponent* UEquipmentComponent::GetEquipmentComponent(const AActor* InActor)
{
	if (InActor)
	{
		return InActor->FindComponentByClass<UEquipmentComponent>();
	}

	return nullptr;
}
