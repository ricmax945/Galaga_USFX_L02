// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L02GameMode.h"
#include "Galaga_USFX_L02Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"

#include "EnemyShipSpy.h"

#include "EnemyShipResupply.h"

#include "EnemyMotherShip.h"




AGalaga_USFX_L02GameMode::AGalaga_USFX_L02GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L02Pawn::StaticClass();
	//NaveEnemiga01 = nullptr;
}

void AGalaga_USFX_L02GameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionNaveCaza01 = FVector(-900.0f, 500.0f, 250.0f);
	FVector ubicacionNaveCaza02 = FVector(-500.0f, 500.0f, 250.0f);

	FVector ubicacionNaveTransporte01 = FVector(-900.0f, -500.0f, 250.0f);
	FVector ubicacionNaveTransporte02 = FVector(-500.0f, -500.0f, 250.0f);


	FVector ubicacionEnemyShipSpy01 = FVector(-700.0f, 500.0f, 200.0f);
	FVector ubicacionEnemyShipSpy02 = FVector(-600.0f, 500.0f, 200.0f);

	FVector ubicacionEnemyShipResupply01 = FVector(-400.0f, 300.0f, 200.0f);
	FVector ubicacionEnemyShipResupply02 = FVector(-500.0f, 300.0f, 200.0f);

	FVector ubicacionEnemyMotherShip01 = FVector(900.0f, 400.0f, 200.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNaveCaza01, rotacionNave);
		NaveEnemigaCaza02 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNaveCaza02, rotacionNave);
	
		NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNaveTransporte01, rotacionNave);
		NaveEnemigaTransporte02 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNaveTransporte02, rotacionNave);

		EnemyShipSpy01 = World->SpawnActor<AEnemyShipSpy>(ubicacionEnemyShipSpy01, rotacionNave);
		EnemyShipSpy02 = World->SpawnActor<AEnemyShipSpy>(ubicacionEnemyShipSpy02, rotacionNave);

		EnemyShipResupply01 = World->SpawnActor<AEnemyShipResupply>(ubicacionEnemyShipResupply01, rotacionNave);
		EnemyShipResupply02 = World->SpawnActor<AEnemyShipResupply>(ubicacionEnemyShipResupply02, rotacionNave);

		EnemyMotherShip01 = World->SpawnActor<AEnemyMotherShip>(ubicacionEnemyMotherShip01, rotacionNave);
	}

	NaveEnemigaCaza01->SetPosicion(FVector(-900.0f, 500.0f, 250.0f));
	NaveEnemigaCaza02->SetPosicion(FVector(-500.0f, 500.0f, 250.0f));

	NaveEnemigaTransporte01->SetPosicion(FVector(-900.0f, -500.0f, 250.0f));
	NaveEnemigaTransporte02->SetPosicion(FVector(-500.0f, -500.0f, 250.0f));

	EnemyShipSpy01->SetPosicion(FVector(-700.0f, -500.0f, 200.0f));
	EnemyShipSpy02->SetPosicion(FVector(-600.0f, -500.0f, 200.0f));

	EnemyShipResupply01->SetPosicion(FVector(-400.0f, -300.0f, 200.0f));
	EnemyShipResupply01->SetPosicion(FVector(-500.0f, -300.0f, 200.0f));

	EnemyMotherShip01->SetPosicion(FVector(-500.0f, 400.0f, 200.0f));

}

