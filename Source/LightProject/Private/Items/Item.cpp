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

	UWorld* World = GetWorld();
	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();
	FColor Color = FColor::Green;
	
	DRAW_SPHERE(Location, Color);
	//DRAW_LINE(Location, Location + Forward * 100.f);
	//DRAW_POINT(Location + Forward * 100.f);
	DRAW_VECTOR(Location, Location + Forward * 100.f);
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

