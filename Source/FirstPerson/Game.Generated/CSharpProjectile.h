#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/PrimitiveComponent.h"
#include "CSharpProjectile.generated.h"
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ACSharpProjectile : public AActor {
GENERATED_BODY()
public:
UPROPERTY(BlueprintReadWrite,EditAnywhere)
USphereComponent* CollisionComp;
UPROPERTY(BlueprintReadWrite,EditAnywhere)
UProjectileMovementComponent* ProjectileMovement;
ACSharpProjectile();
UFUNCTION(BlueprintCallable)
virtual void OnHit(UPrimitiveComponent* HitComp,AActor* OtherActor,UPrimitiveComponent* OtherComp,FVector NormalImpulse,const FHitResult& Hit);
};
