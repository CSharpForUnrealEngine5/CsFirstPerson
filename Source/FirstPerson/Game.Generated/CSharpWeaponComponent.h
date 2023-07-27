#pragma once
#include "CoreMinimal.h"
#include "CSharpCharacter.h"
#include "CSharpProjectile.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SkeletalMeshComponent.h"
#include "Sound/SoundBase.h"
#include "Animation/AnimMontage.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "Animation/AnimInstance.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "EnhancedInputComponent.h"
#include "CSharpWeaponComponent.generated.h"
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UCSharpWeaponComponent : public USkeletalMeshComponent {
GENERATED_BODY()
public:
UPROPERTY(BlueprintReadWrite,EditAnywhere)
UClass* ProjectileClass;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
USoundBase* FireSound;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
UAnimMontage* FireAnimation;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
FVector MuzzleOffset;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
UInputMappingContext* FireMappingContext;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
UInputAction* FireAction;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
ACSharpCharacter* Character;
UFUNCTION(BlueprintCallable)
virtual void Test();
UCSharpWeaponComponent();
UFUNCTION(BlueprintCallable)
virtual void Fire();
UFUNCTION(BlueprintCallable)
virtual void AttachWeapon(ACSharpCharacter* TargetCharacter);
UFUNCTION(BlueprintCallable)
virtual void EndPlay(EEndPlayReason::Type EndPlayReason);
};
