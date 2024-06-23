// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

// General
#include "CSInstance.h"
#include "CSSave.h"

// Power
#include "../Power/Power.h"
#include "../Power/AIPower.h"
#include "../Power/PlayerPower.h"
#include "../Power/Relationship.h"

// Piece
#include "../Power/Piece/Piece.h"

#include "CSGameMode.generated.h"

UCLASS()
class ACSGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACSGameMode();

protected: 
	// General 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Instance")
		UCSInstance* gameInstance;

	// Powers
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shared Game Info")
		int difficulty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shared Game Info")
		TArray<APower*> allPowers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shared Game Info")
		int currentStage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shared Game Info")
		int numMissionCompleted;
};



