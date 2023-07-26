#include "CSharpWeaponComponent.h"
void UCSharpWeaponComponent::Test()
{
APlayerController* PlayerController=Cast<APlayerController>(Character->GetController());
FRotator SpawnRotation=PlayerController->PlayerCameraManager->GetCameraRotation();
}
UCSharpWeaponComponent::UCSharpWeaponComponent()
{
MuzzleOffset=FVector(100.0f,0.0f,10.0f);
}
void UCSharpWeaponComponent::Fire()
{
if (Character==nullptr||Character->GetController()==nullptr)
{
return;
}
if (ProjectileClass!=nullptr)
{
UWorld* World=GetWorld();
if (World!=nullptr)
{
APlayerController* PlayerController=Cast<APlayerController>(Character->GetController());
FRotator SpawnRotation=PlayerController->PlayerCameraManager->GetCameraRotation();
FVector SpawnLocation=GetOwner()->GetActorLocation()+SpawnRotation.RotateVector(MuzzleOffset);
FActorSpawnParameters ActorSpawnParams=FActorSpawnParameters();
ActorSpawnParams.SpawnCollisionHandlingOverride=ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
World->SpawnActor<ACSharpProjectile>(ProjectileClass,SpawnLocation,SpawnRotation,ActorSpawnParams);
}
}
if (FireSound!=nullptr)
{
UGameplayStatics::PlaySoundAtLocation(this,FireSound,Character->GetActorLocation());
}
if (FireAnimation!=nullptr)
{
UAnimInstance* AnimInstance=Character->GetMesh1P()->GetAnimInstance();
if (AnimInstance!=nullptr)
{
AnimInstance->Montage_Play(FireAnimation,1.0f);
}
}
}
void UCSharpWeaponComponent::AttachWeapon(ACSharpCharacter* TargetCharacter)
{
Character=TargetCharacter;
if (Character==nullptr)
{
return;
}
FAttachmentTransformRules AttachmentRules=FAttachmentTransformRules(EAttachmentRule::SnapToTarget,true);
AttachToComponent(Character->GetMesh1P(),AttachmentRules,TEXT("GripPoint"));
Character->SetHasRifle(true);
APlayerController* PlayerController=Cast<APlayerController>(Character->GetController());
if (PlayerController!=nullptr)
{
UEnhancedInputLocalPlayerSubsystem* Subsystem=ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
if (Subsystem!=nullptr)
{
Subsystem->AddMappingContext(FireMappingContext,1);
}
UEnhancedInputComponent* EnhancedInputComponent=Cast<UEnhancedInputComponent>(PlayerController->InputComponent);
if (EnhancedInputComponent!=nullptr)
{
EnhancedInputComponent->BindAction(FireAction,ETriggerEvent::Triggered,this,TEXT("Fire"));
}
}
}
void UCSharpWeaponComponent::EndPlay(EEndPlayReason::Type EndPlayReason)
{
if (Character==nullptr)
{
return;
}
APlayerController* PlayerController=Cast<APlayerController>(Character->GetController());
if (PlayerController!=nullptr)
{
UEnhancedInputLocalPlayerSubsystem* Subsystem=ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
if (Subsystem!=nullptr)
{
Subsystem->RemoveMappingContext(FireMappingContext);
}
}
}
