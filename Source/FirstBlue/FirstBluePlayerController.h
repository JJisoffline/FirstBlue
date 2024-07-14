// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FirstBluePlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class FIRSTBLUE_API AFirstBluePlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AFirstBluePlayerController();

protected:
	void BeginPlay() override;
	void SetupInputComponent() override;

	void OnSpacebarStart();
	void OnSpacebarEnd();

	UPROPERTY(EditAnywhere)
	UInputMappingContext* PlayerMappingContext;

	UPROPERTY(EditAnywhere)
	UInputAction* PlayerJumpButton;

};
