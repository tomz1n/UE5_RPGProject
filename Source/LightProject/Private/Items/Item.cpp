// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "LightProject/DebugMacros.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorWorldOffset(FVector(1.f, 0.f, 0.f));
	DRAW_SPHERE_SINGLEFRAME(GetActorLocation());
}

