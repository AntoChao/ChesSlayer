// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"

#include "../Power/Power.h"
#include "../Power/Piece/Piece.h"
#include "CSInstance.generated.h"

UCLASS()
class UCSInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UCSInstance();

protected:
	// Common values
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Common Values")
		int difficulty = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Common Values")
		TArray<APower*> allPowers;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Common Values")
		bool win = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Common Values")
		int currentStage = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Common Values")
		int enemiesKilledNum = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Common Values")
		TArray<APiece*> unlockedPieces;
};
