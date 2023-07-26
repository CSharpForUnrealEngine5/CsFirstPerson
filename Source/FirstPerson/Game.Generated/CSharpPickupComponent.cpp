#include "CSharpPickupComponent.h"
UCSharpPickupComponent::UCSharpPickupComponent()
{
SphereRadius=32.0f;
}
void UCSharpPickupComponent::BeginPlay()
{
Super::BeginPlay();
OnComponentBeginOverlap.AddDynamic(this,&UCSharpPickupComponent::OnSphereBeginOverlap);
}
void UCSharpPickupComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent,AActor* OtherActor,UPrimitiveComponent* OtherComp,int OtherBodyIndex,bool bFromSweep,const FHitResult& SweepResult)
{
ACSharpCharacter* Character=Cast<ACSharpCharacter>(OtherActor);
if (Character!=nullptr)
{
OnPickUp.Broadcast(Character);
OnComponentBeginOverlap.RemoveAll(this);
}
}
