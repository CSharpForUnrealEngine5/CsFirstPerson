namespace Game;

using CSharpToCpp.Utilities;
using GameFramework;
using System;

// Declaration of the delegate that will be called when someone picks this up
// The character picking this up is the parameter sent with the notification
public delegate void FCSharpOnPickUp(ACSharpCharacter PickUpCharacter);

[CppInclude("CSharpCharacter.h")]
public class UCSharpPickupComponent : USphereComponent
{
    public FCSharpOnPickUp OnPickUp;

    public UCSharpPickupComponent()
    {
        // Setup the Sphere Collision
        SphereRadius = 32.0f;
    }

    protected virtual void BeginPlay()
    {
        base.BeginPlay();

        // Register our Overlap Event
        OnComponentBeginOverlap.AddDynamic(this, Code<Object>("&UCSharpPickupComponent::OnSphereBeginOverlap"));
    }

    void OnSphereBeginOverlap(UPrimitiveComponent OverlappedComponent, AActor OtherActor, UPrimitiveComponent OtherComp, int OtherBodyIndex, bool bFromSweep, [CppConstRef] FHitResult SweepResult)
    {
        // Checking if it is a First Person Character overlapping
        ACSharpCharacter Character = Cast<ACSharpCharacter>(OtherActor);
        if (Character != null)
        {
            // Notify that the actor is being picked up
            Code<int>("OnPickUp.Broadcast(Character)");

            // Unregister from the Overlap Event so it is no longer triggered
            Code<int>("OnComponentBeginOverlap.RemoveAll(this)");
        }
    }


}
