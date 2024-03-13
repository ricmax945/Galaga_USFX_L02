// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyMotherShip.h"

#include "GameFramework/ProjectileMovementComponent.h"

void AEnemyMotherShip::BeginPlay()
{
	Super::BeginPlay();

}

AEnemyMotherShip::AEnemyMotherShip()
{
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Props/SM_MatPreviewMesh_05.SM_MatPreviewMesh_05'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);


}

// Called every frame
void AEnemyMotherShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}



void AEnemyMotherShip::Mover(float DeltaTime)
{
	// Obtiene la posición actual del actor
	FVector PosicionActual = GetActorLocation();

	// Genera nuevas coordenadas X e Y aleatorias

	float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * (DeltaTime);
	float NuevaY = FMath::RandRange(-1500.0f, 1500.0f) * (DeltaTime);

	// Crea un nuevo vector de posición con las coordenadas aleatorias y la misma Z que la posición actual
	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z);

	// Establece la nueva posición del actor
	SetActorLocation(NuevaPosicion);
}

void AEnemyMotherShip::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	Destroy();
}