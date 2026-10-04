// Fill out your copyright notice in the Description page of Project Settings.


#include "ATreasureChest.h"

#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AATreasureChest::AATreasureChest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	
	// Collision + Root
	CollisionBox = CreateDefaultSubobject<UBoxComponent>("Collision Box");
	SetRootComponent(CollisionBox);
	CollisionBox->SetBoxExtent(FVector(32.0f, 32.0f, 32.0f));
	CollisionBox->SetGenerateOverlapEvents(true);
	
	// Mesh
	ChestMesh = CreateDefaultSubobject<UStaticMeshComponent>("ChestMesh");
	
	// Attach
	ChestMesh->SetupAttachment(CollisionBox);
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


void AATreasureChest::Collected()
{
	if (bCollected)
		return;
	bCollected = true;
	
	UE_LOG(LogTemp, Warning, TEXT("Collected"));
}

