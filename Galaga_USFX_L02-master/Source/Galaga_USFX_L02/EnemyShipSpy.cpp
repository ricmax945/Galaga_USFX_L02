// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyShipSpy.h"

// Called when the game starts or when spawned
void AEnemyShipSpy::BeginPlay()
{
	Super::BeginPlay();

}

AEnemyShipSpy::AEnemyShipSpy()
{
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Props/SM_Bush.SM_Bush'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

}

// Called every frame
void AEnemyShipSpy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}



void AEnemyShipSpy::Mover(float DeltaTime)
{
	// Obtiene la posici�n actual del actor
	FVector PosicionActual = GetActorLocation();

	// Genera nuevas coordenadas X e Y aleatorias
	float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * (DeltaTime*2);
	float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * (DeltaTime*2);

	// Crea un nuevo vector de posici�n con las coordenadas aleatorias y la misma Z que la posici�n actual
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

	// Establece la nueva posici�n del actor
	SetActorLocation(NuevaPosicion);
}

