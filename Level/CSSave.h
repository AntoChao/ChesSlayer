// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"

#include "../Power/Piece/Piece.h"

#include "CSSave.generated.h"

UCLASS()
class UCSSave: public USaveGame
{
	GENERATED_BODY()

public:
	UCSSave();

private:
	// Player History
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Common Values")
		TArray<APiece*> alreadyUnlockedPieces;
};
