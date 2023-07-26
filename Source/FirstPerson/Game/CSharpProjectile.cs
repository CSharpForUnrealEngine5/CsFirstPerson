namespace Game;

using CSharpToCpp.Utilities;
using GameFramework;

public class ACSharpProjectile : AActor
{
    /** Sphere collision component */
    USphereComponent CollisionComp;

    /** Projectile movement component */
    UProjectileMovementComponent ProjectileMovement;

    ACSharpProjectile()
    {
        // Use a sphere as a simple collision representation
        CollisionComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
        CollisionComp.InitSphereRadius(5.0f);
        CollisionComp.BodyInstance.SetCollisionProfileName("Projectile");
        CollisionComp.OnComponentHit.AddDynamic(this, 
                Code<Object>("&ACSharpProjectile::OnHit"));     // set up a notification for when this component hits something blocking

        // Players can't walk on it
        CollisionComp.SetWalkableSlopeOverride(new FWalkableSlopeOverride(EWalkableSlopeBehavior.WalkableSlope_Unwalkable, 0.0f));
        CollisionComp.CanCharacterStepUpOn = ECanBeCharacterBase.ECB_No;

        // Set as root component
        RootComponent = CollisionComp;

        // Use a ProjectileMovementComponent to govern this projectile's movement
        ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileComp");
        ProjectileMovement.UpdatedComponent = CollisionComp;
        ProjectileMovement.InitialSpeed = 3000.0f;
        ProjectileMovement.MaxSpeed = 3000.0f;
        ProjectileMovement.bRotationFollowsVelocity = true;
        ProjectileMovement.bShouldBounce = true;

        // Die after 3 seconds by default
        InitialLifeSpan = 3.0f;
    }

    void OnHit(UPrimitiveComponent HitComp, AActor OtherActor,
        UPrimitiveComponent OtherComp, FVector NormalImpulse, 
        [CppConstRef]FHitResult Hit)
    {
        // Only add impulse and destroy projectile if we hit a physics
        if ((OtherActor != null) && (OtherActor != this) && (OtherComp != null) && OtherComp.IsSimulatingPhysics())
        {
            OtherComp.AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

            Destroy();
        }
    }
}
