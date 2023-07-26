namespace Game;

using GameFramework;

public class ACSharpCharacter : ACharacter
{
    /** Pawn mesh: 1st person view (arms; seen only by self) */
    USkeletalMeshComponent Mesh1P;

    /** First person camera */
    UCameraComponent FirstPersonCameraComponent;

    /** MappingContext */
    UInputMappingContext DefaultMappingContext;

    /** Jump Input Action */
    UInputAction JumpAction;

    /** Move Input Action */
    UInputAction MoveAction;

    UInputAction LookAction;

    /** Bool for AnimBP to switch to another animation set */
    bool bHasRifle;

    /** Returns Mesh1P subobject **/
    public USkeletalMeshComponent GetMesh1P() { return Mesh1P; }

    /** Returns FirstPersonCameraComponent subobject **/
    UCameraComponent GetFirstPersonCameraComponent() { return FirstPersonCameraComponent; }

    ACSharpCharacter()
    {
        bHasRifle = false;

        // Set size for collision capsule
        GetCapsuleComponent().InitCapsuleSize(55.0f, 96.0f);

        // Create a CameraComponent	
        FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>("FirstPersonCamera");
        FirstPersonCameraComponent.SetupAttachment(GetCapsuleComponent());
        FirstPersonCameraComponent.SetRelativeLocation(new FVector(-10.0f, 0.0f, 60.0f)); // Position the camera
        FirstPersonCameraComponent.bUsePawnControlRotation = true;

        // Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
        Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>("CharacterMesh1P");
        Mesh1P.SetOnlyOwnerSee(true);
        Mesh1P.SetupAttachment(FirstPersonCameraComponent);
        Mesh1P.bCastDynamicShadow = false;
        Mesh1P.CastShadow = false;
        //Mesh1P.SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
        Mesh1P.SetRelativeLocation(new FVector(-30.0f, 0.0f, -150.0f));
    }

    protected virtual void BeginPlay()
    {
        // Call the base class  
        base.BeginPlay();

        Log("C#", ELogVerbosity.Warning, "Hello from C#");
        AddOnScreenDebugMessage(0, 100, FColor.Orange, "Hello From C#", true, FVector2D.UnitVector);

        //Add Input Mapping Context
        APlayerController PlayerController = Cast<APlayerController>(Controller);
        if (PlayerController != null)
        {
            UEnhancedInputLocalPlayerSubsystem Subsystem = ULocalPlayer.GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController.GetLocalPlayer());
            if (Subsystem != null)
            {
                Subsystem.AddMappingContext(DefaultMappingContext, 0);
            }
        }
    }

    void SetupPlayerInputComponent(UInputComponent PlayerInputComponent)
    {
        // Set up action bindings
        UEnhancedInputComponent EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);

        if (EnhancedInputComponent != null)
        {

            //Jumping
            EnhancedInputComponent.BindAction(JumpAction, ETriggerEvent.Triggered, this, "Jump");
            EnhancedInputComponent.BindAction(JumpAction, ETriggerEvent.Completed, this, "StopJumping");

            //Moving
            EnhancedInputComponent.BindAction(MoveAction, ETriggerEvent.Triggered, this, "Move");

            //Looking
            EnhancedInputComponent.BindAction(LookAction, ETriggerEvent.Triggered, this, "Look");

        }
    }


    void Move(FInputActionValue Value)
    {
        // input is a Vector2D
        FVector2D MovementVector = Value.Get<FVector2D>();

        if (Controller != null)
        {
            // find out which way is forward
            FRotator Rotation = Controller.GetControlRotation();
            FRotator YawRotation = new FRotator(0, Rotation.Yaw, 0);

            // get forward vector
            FVector ForwardDirection = new FRotationMatrix(YawRotation).GetUnitAxis(EAxis.X);

            // get right vector 
            FVector RightDirection = new FRotationMatrix(YawRotation).GetUnitAxis(EAxis.Y);

            // add movement 
            AddMovementInput(ForwardDirection, MovementVector.Y);
            AddMovementInput(RightDirection, MovementVector.X);
        }
    }

    void Look(FInputActionValue Value)
    {
        // input is a Vector2D
        FVector2D LookAxisVector = Value.Get<FVector2D>();

        if (Controller != null)
        {
            // add yaw and pitch input to controller
            AddControllerYawInput(LookAxisVector.X);
            AddControllerPitchInput(LookAxisVector.Y);
        }
    }

    public void SetHasRifle(bool bNewHasRifle)
    {
        bHasRifle = bNewHasRifle;
    }

    public bool GetHasRifle()
    {
        return bHasRifle;
    }
}
