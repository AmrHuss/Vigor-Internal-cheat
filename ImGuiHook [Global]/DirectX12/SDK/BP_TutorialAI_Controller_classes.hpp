#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TutorialAI_Controller

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TutorialAI_Controller.BP_TutorialAI_Controller_C
// 0x0078 (0x03B0 - 0x0338)
class ABP_TutorialAI_Controller_C final : public AFlameAIController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class UClass*, class FName>              PerceptionsAffectingAI;                            // 0x0340(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           TimerForLosingSight;                               // 0x0390(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        BoundLocations;                                    // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   EnemyCharacterBlackboardKey;                       // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TutorialAI_Controller(int32 EntryPoint);
	void ReceiveBeginPlay();
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void ReceivePossess(class APawn* PossessedPawn);
	void SightCharacter(class AHumanCharacter* Character_0, const struct FAIStimulus& Stimulus);
	void DamageByCharacter(const struct FAIStimulus& Stimulus, class AHumanCharacter* Character_0);
	void Check_Enemy_Character_Still_in_Sight();
	void DetectNearCharacters();
	void CheckCharacterInSight(class AHumanCharacter* EnemyCharacter, bool CheckShootable, bool* InSight, bool* Shootable, struct FVector* ShootableLocation);
	void NoiseHeard(const struct FAIStimulus& Stimulus);
	void InitializeAIOnPossessed(class ABP_TutorialAI_Character_C* Character_0);
	void Toggle_Character_Still_in_Sight(bool Activate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TutorialAI_Controller_C">();
	}
	static class ABP_TutorialAI_Controller_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TutorialAI_Controller_C>();
	}
};
static_assert(alignof(ABP_TutorialAI_Controller_C) == 0x000008, "Wrong alignment on ABP_TutorialAI_Controller_C");
static_assert(sizeof(ABP_TutorialAI_Controller_C) == 0x0003B0, "Wrong size on ABP_TutorialAI_Controller_C");
static_assert(offsetof(ABP_TutorialAI_Controller_C, UberGraphFrame) == 0x000338, "Member 'ABP_TutorialAI_Controller_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TutorialAI_Controller_C, PerceptionsAffectingAI) == 0x000340, "Member 'ABP_TutorialAI_Controller_C::PerceptionsAffectingAI' has a wrong offset!");
static_assert(offsetof(ABP_TutorialAI_Controller_C, TimerForLosingSight) == 0x000390, "Member 'ABP_TutorialAI_Controller_C::TimerForLosingSight' has a wrong offset!");
static_assert(offsetof(ABP_TutorialAI_Controller_C, BoundLocations) == 0x000398, "Member 'ABP_TutorialAI_Controller_C::BoundLocations' has a wrong offset!");
static_assert(offsetof(ABP_TutorialAI_Controller_C, EnemyCharacterBlackboardKey) == 0x0003A8, "Member 'ABP_TutorialAI_Controller_C::EnemyCharacterBlackboardKey' has a wrong offset!");

}
