// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class UNREALLEARNINGKITGAMES_API AMovingPlatform : public AActor
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	FVector PlatformVelocity = FVector(100, 0, 0);

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	FVector PlatformStartPostion;

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	float MovedDistance = 60.0f;

	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	FRotator RotationVelocity;

	void MovePlatform(float a);
	void RotatePlatform(float a);
	float PlatformDistance() const;
	bool ShouldTurnAround() const;
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
