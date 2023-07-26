#pragma once
#include "CoreMinimal.h"
#include "CSharpCharacter.h"
#include "Components/SphereComponent.h"
#include "Components/PrimitiveComponent.h"
#include "GameFramework/Actor.h"
#include "CSharpPickupComponent.generated.h"
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCSharpOnPickUp,ACSharpCharacter*,PickUpCharacter);
UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UCSharpPickupComponent : public USphereComponent {
GENERATED_BODY()
public:
UPROPERTY(BlueprintReadWrite,EditAnywhere)
FCSharpOnPickUp OnPickUp;
UCSharpPickupComponent();
UFUNCTION(BlueprintCallable)
virtual void BeginPlay();
UFUNCTION(BlueprintCallable)
virtual void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent,AActor* OtherActor,UPrimitiveComponent* OtherComp,int OtherBodyIndex,bool bFromSweep,const FHitResult& SweepResult);
};
