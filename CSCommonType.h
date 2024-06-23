// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CSCommonType.generated.h"

// Level enum
UENUM(BlueprintType, Blueprintable)
enum class ELevel : uint8
{
	EInitLevel,
	EStartLevel,
	EGameplayLevel,
	EPostgameLevel
};


// Power Name enum
UENUM(BlueprintType, Blueprintable)
enum class EPowerName : uint8
{
	EPlayer,
	EEmpire,
	EBandit,
	ECultist
};

// Mission Objective enum
UENUM(BlueprintType, Blueprintable)
enum class EObjective : uint8
{
	EDefeat,
	EDefend,
	ESurvive,
	EAssassin
};