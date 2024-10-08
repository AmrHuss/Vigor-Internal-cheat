#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TellComponent_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TellComponent_Base.BP_TellComponent_Base_C
// 0x0080 (0x0130 - 0x00B0)
class UBP_TellComponent_Base_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPrimitiveComponent*                    TellOverlapVolume;                                 // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TSet<class AHumanCharacter*>                  OverlappedCharacters_Currently;                    // 0x00C0(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         CooldownTime;                                      // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          EvadeWaitingFirstCooldownTime;                     // 0x0114(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TellEffectIsActive;                                // 0x0115(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_116[0x2];                                      // 0x0116(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayableAreaExitVolume_C*           ExitActor;                                         // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AHumanCharacter*                        LatestOverlappedCharacter;                         // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Threshold;                                         // 0x0128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TellComponent_Base(int32 EntryPoint);
	void NetworkPlayTellEffect();
	void EncounterStarted();
	void ReceiveBeginPlay();
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void PlayTellEffect();
	void OnCooldown();
	void SendAnalyticEvent(class AHumanCharacter*& IncomingPlayer, TSet<class AHumanCharacter*>& Campers, bool TellFired);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TellComponent_Base_C">();
	}
	static class UBP_TellComponent_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TellComponent_Base_C>();
	}
};
static_assert(alignof(UBP_TellComponent_Base_C) == 0x000008, "Wrong alignment on UBP_TellComponent_Base_C");
static_assert(sizeof(UBP_TellComponent_Base_C) == 0x000130, "Wrong size on UBP_TellComponent_Base_C");
static_assert(offsetof(UBP_TellComponent_Base_C, UberGraphFrame) == 0x0000B0, "Member 'UBP_TellComponent_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TellComponent_Base_C, TellOverlapVolume) == 0x0000B8, "Member 'UBP_TellComponent_Base_C::TellOverlapVolume' has a wrong offset!");
static_assert(offsetof(UBP_TellComponent_Base_C, OverlappedCharacters_Currently) == 0x0000C0, "Member 'UBP_TellComponent_Base_C::OverlappedCharacters_Currently' has a wrong offset!");
static_assert(offsetof(UBP_TellComponent_Base_C, CooldownTime) == 0x000110, "Member 'UBP_TellComponent_Base_C::CooldownTime' has a wrong offset!");
static_assert(offsetof(UBP_TellComponent_Base_C, EvadeWaitingFirstCooldownTime) == 0x000114, "Member 'UBP_TellComponent_Base_C::EvadeWaitingFirstCooldownTime' has a wrong offset!");
static_assert(offsetof(UBP_TellComponent_Base_C, TellEffectIsActive) == 0x000115, "Member 'UBP_TellComponent_Base_C::TellEffectIsActive' has a wrong offset!");
static_assert(offsetof(UBP_TellComponent_Base_C, ExitActor) == 0x000118, "Member 'UBP_TellComponent_Base_C::ExitActor' has a wrong offset!");
static_assert(offsetof(UBP_TellComponent_Base_C, LatestOverlappedCharacter) == 0x000120, "Member 'UBP_TellComponent_Base_C::LatestOverlappedCharacter' has a wrong offset!");
static_assert(offsetof(UBP_TellComponent_Base_C, Threshold) == 0x000128, "Member 'UBP_TellComponent_Base_C::Threshold' has a wrong offset!");

}

