// Fill out your copyright notice in the Description page of Project Settings.


#include "ATreasureChest.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AATreasureChest::AATreasureChest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// setup mesh
	ChestMesh = CreateDefaultSubobject<UStaticMeshComponent>("ChestMesh");
	
	// change overlap events
	ChestMesh->SetGenerateOverlapEvents(false);

}

// Called when the game starts or when spawned
void AATreasureChest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AATreasureChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

