// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L02GameMode.generated.h"
//#include <vector>

class ANaveEnemiga;
class ANaveEnemigaCaza;
class ANaveEnemigaTransporte;

class AEnemyShipSpy;

class AEnemyShipResupply;

class AEnemyMotherShip;

UCLASS(MinimalAPI)
class AGalaga_USFX_L02GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L02GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;
	ANaveEnemigaCaza* NaveEnemigaCaza02;
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte02;

	AEnemyShipSpy* EnemyShipSpy01;
	AEnemyShipSpy* EnemyShipSpy02;

	AEnemyShipResupply* EnemyShipResupply01;
	AEnemyShipResupply* EnemyShipResupply02;

	AEnemyMotherShip* EnemyMotherShip01;

public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;

};



