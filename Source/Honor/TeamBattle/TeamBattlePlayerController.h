// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TeamBattlePlayerController.generated.h"


/**
 * 
 */
UCLASS()
class HONOR_API ATeamBattlePlayerController : public APlayerController
{
GENERATED_BODY()
 public:
  ATeamBattlePlayerController();

 protected:
  virtual void BeginPlay() override;


};
