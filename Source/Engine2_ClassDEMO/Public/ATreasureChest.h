// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ATreasureChest.generated.h"

class UBoxComponent;
class UStaticMeshComponent;

UCLASS()
class ENGINE2_CLASSDEMO_API AATreasureChest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AATreasureChest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Collected
	UPROPERTY()
	bool bCollected = false;
	
	//
	void Collected();

protected:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent>ChestMesh;
	
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UBoxComponent>CollisionBox;
};
