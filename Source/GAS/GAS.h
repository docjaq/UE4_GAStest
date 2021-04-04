// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

//JAQ@ Enum for our ability inputs
UENUM(BlueprintType)
enum class EGASAbilityInputID : uint8
{
	None,
	Confirm,
	Cancel,
	Punch
};