namespace Game;

using CSharpToCpp.Utilities;
using GameFramework;
using System.Reflection.PortableExecutable;

[CppInclude("CSharpCharacter.h", "CSharpProjectile.h",
    "Kismet/GameplayStatics.h")]
public class UCSharpWeaponComponent : USkeletalMeshComponent
{
    public UClass ProjectileClass;

    public USoundBase FireSound;

    public UAnimMontage FireAnimation;

    public FVector MuzzleOffset;

    public UInputMappingContext FireMappingContext;

    public UInputAction FireAction;

    public ACSharpCharacter Character;

    public void Test()
    {
        APlayerController PlayerController = Cast<APlayerController>(Character.GetController());
        FRotator SpawnRotation = PlayerController.PlayerCameraManager.GetCameraRotation();
    }

    public UCSharpWeaponComponent()
    {
        MuzzleOffset = new FVector(100.0f, 0.0f, 10.0f);
    }

    public void Fire()
    {
        if (Character == null || Character.GetController() == null)
        {
            return;
        }
        if (ProjectileClass != null)
        {
            UWorld World = GetWorld();
            if (World != null)
            {
                APlayerController PlayerController = Cast<APlayerController>(Character.GetController());
                FRotator SpawnRotation = PlayerController.PlayerCameraManager.GetCameraRotation();
                // MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
                FVector SpawnLocation = GetOwner().GetActorLocation() + SpawnRotation.RotateVector(MuzzleOffset);

                //Set Spawn Collision Handling Override
                FActorSpawnParameters ActorSpawnParams = new FActorSpawnParameters();
                ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod.AdjustIfPossibleButDontSpawnIfColliding;

                // Spawn the projectile at the muzzle
                World.SpawnActor<ACSharpProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);

            }
        }
        if (FireSound != null)
        {
            UGameplayStatics.PlaySoundAtLocation(this, FireSound, Character.GetActorLocation());
        }
        // Try and play a firing animation if specified
        if (FireAnimation != null)
        {
            // Get the animation object for the arms mesh
            UAnimInstance AnimInstance = Character.GetMesh1P().GetAnimInstance();
            if (AnimInstance != null)
            {
                AnimInstance.Montage_Play(FireAnimation, 1.0f);
            }
        }

    }
    void AttachWeapon(ACSharpCharacter TargetCharacter)
    {
        Character = TargetCharacter;
        if (Character == null)
        {
            return;
        }

        // Attach the weapon to the First Person Character
        FAttachmentTransformRules AttachmentRules = new FAttachmentTransformRules(EAttachmentRule.SnapToTarget, true);
        AttachToComponent(Character.GetMesh1P(), AttachmentRules, "GripPoint");

        // switch bHasRifle so the animation blueprint can switch to another animation set
        Character.SetHasRifle(true);

        // Set up action bindings
        APlayerController PlayerController = Cast<APlayerController>(Character.GetController());
        if (PlayerController != null)
        {
            UEnhancedInputLocalPlayerSubsystem Subsystem = ULocalPlayer.GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController.GetLocalPlayer());
            if (Subsystem != null)
            {
                // Set the priority of the mapping to 1, so that it overrides the Jump action with the Fire action when using touch input
                Subsystem.AddMappingContext(FireMappingContext, 1);
            }

            UEnhancedInputComponent EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerController.InputComponent);
            if (EnhancedInputComponent != null)
            {
                // Fire
                EnhancedInputComponent.BindAction(FireAction, ETriggerEvent.Triggered, this, "Fire");
            }
        }
    }

    void EndPlay(EEndPlayReason EndPlayReason)
    {
        if (Character == null)
        {
            return;
        }

        APlayerController PlayerController = Cast<APlayerController>(Character.GetController());
        if (PlayerController != null)
        {
            UEnhancedInputLocalPlayerSubsystem Subsystem = ULocalPlayer.GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController.GetLocalPlayer());
            if (Subsystem != null)
            {
                Subsystem.RemoveMappingContext(FireMappingContext);
            }
        }
    }
}

