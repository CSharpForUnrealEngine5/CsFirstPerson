#include "CSharpCharacter.h"
USkeletalMeshComponent* ACSharpCharacter::GetMesh1P()
{
return Mesh1P;
}
UCameraComponent* ACSharpCharacter::GetFirstPersonCameraComponent()
{
return FirstPersonCameraComponent;
}
ACSharpCharacter::ACSharpCharacter()
{
bHasRifle=false;
GetCapsuleComponent()->InitCapsuleSize(55.0f,96.0f);
FirstPersonCameraComponent=CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.0f,0.0f,60.0f));
FirstPersonCameraComponent->bUsePawnControlRotation=true;
Mesh1P=CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
Mesh1P->SetOnlyOwnerSee(true);
Mesh1P->SetupAttachment(FirstPersonCameraComponent);
Mesh1P->bCastDynamicShadow=false;
Mesh1P->CastShadow=false;
Mesh1P->SetRelativeLocation(FVector(-30.0f,0.0f,-150.0f));
}
void ACSharpCharacter::BeginPlay()
{
Super::BeginPlay();
GLog->Log(TEXT("C#"),ELogVerbosity::Warning,TEXT("Hello from C#"));
GEngine->AddOnScreenDebugMessage(0,100,FColor::Orange,TEXT("Hello From C#"),true,FVector2D::UnitVector);
APlayerController* PlayerController=Cast<APlayerController>(Controller);
if (PlayerController!=nullptr)
{
UEnhancedInputLocalPlayerSubsystem* Subsystem=ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
if (Subsystem!=nullptr)
{
Subsystem->AddMappingContext(DefaultMappingContext,0);
}
}
}
void ACSharpCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
UEnhancedInputComponent* EnhancedInputComponent=CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
if (EnhancedInputComponent!=nullptr)
{
EnhancedInputComponent->BindAction(JumpAction,ETriggerEvent::Triggered,this,TEXT("Jump"));
EnhancedInputComponent->BindAction(JumpAction,ETriggerEvent::Completed,this,TEXT("StopJumping"));
EnhancedInputComponent->BindAction(MoveAction,ETriggerEvent::Triggered,this,TEXT("Move"));
EnhancedInputComponent->BindAction(LookAction,ETriggerEvent::Triggered,this,TEXT("Look"));
}
}
void ACSharpCharacter::Move(FInputActionValue Value)
{
FVector2D MovementVector=Value.Get<FVector2D>();
if (Controller!=nullptr)
{
FRotator Rotation=Controller->GetControlRotation();
FRotator YawRotation=FRotator(0,Rotation.Yaw,0);
FVector ForwardDirection=FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
FVector RightDirection=FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
AddMovementInput(ForwardDirection,MovementVector.Y);
AddMovementInput(RightDirection,MovementVector.X);
}
}
void ACSharpCharacter::Look(FInputActionValue Value)
{
FVector2D LookAxisVector=Value.Get<FVector2D>();
if (Controller!=nullptr)
{
AddControllerYawInput(LookAxisVector.X);
AddControllerPitchInput(LookAxisVector.Y);
}
}
void ACSharpCharacter::SetHasRifle(bool bNewHasRifle)
{
bHasRifle=bNewHasRifle;
}
bool ACSharpCharacter::GetHasRifle()
{
return bHasRifle;
}
