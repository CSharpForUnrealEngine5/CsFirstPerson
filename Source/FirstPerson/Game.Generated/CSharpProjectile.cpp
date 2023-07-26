#include "CSharpProjectile.h"
ACSharpProjectile::ACSharpProjectile()
{
CollisionComp=CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
CollisionComp->InitSphereRadius(5.0f);
CollisionComp->BodyInstance.SetCollisionProfileName(TEXT("Projectile"));
CollisionComp->OnComponentHit.AddDynamic(this,&ACSharpProjectile::OnHit);
CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(EWalkableSlopeBehavior::WalkableSlope_Unwalkable,0.0f));
CollisionComp->CanCharacterStepUpOn=ECanBeCharacterBase::ECB_No;
RootComponent=CollisionComp;
ProjectileMovement=CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
ProjectileMovement->UpdatedComponent=CollisionComp;
ProjectileMovement->InitialSpeed=3000.0f;
ProjectileMovement->MaxSpeed=3000.0f;
ProjectileMovement->bRotationFollowsVelocity=true;
ProjectileMovement->bShouldBounce=true;
InitialLifeSpan=3.0f;
}
void ACSharpProjectile::OnHit(UPrimitiveComponent* HitComp,AActor* OtherActor,UPrimitiveComponent* OtherComp,FVector NormalImpulse,const FHitResult& Hit)
{
if ((OtherActor!=nullptr)&&(OtherActor!=this)&&(OtherComp!=nullptr)&&OtherComp->IsSimulatingPhysics())
{
OtherComp->AddImpulseAtLocation(GetVelocity()*100.0f,GetActorLocation());
Destroy();
}
}
