// Fill out your copyright notice in the Description page of Project Settings.


#include "Fireball.h"
// Sets default values
AFireball::AFireball()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//lookee here
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Mesh"));
	RootComponent = ProjectileMesh;

	if (!ProjectileMovementComponent) {
		ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
		ProjectileMovementComponent->InitialSpeed = 200.0f;
		ProjectileMovementComponent->MaxSpeed = 500.0f;
	}


}

// Called when the game starts or when spawned
void AFireball::BeginPlay()
{
	Super::BeginPlay();
	_lifeCountdown = Lifespan;
	
}

// Called every frame
void AFireball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (_lifeCountdown > 0.0f) {
		_lifeCountdown -= DeltaTime;
	}
	else {
		Destroy();
	}
}

