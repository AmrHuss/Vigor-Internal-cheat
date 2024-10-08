#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_Decoy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_BaseGrenade_Consumable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TC_Decoy.BP_TC_Decoy_C
// 0x0028 (0x0538 - 0x0510)
class ABP_TC_Decoy_C final : public ABP_BaseGrenade_Consumable_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_TC_Decoy_C;                      // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0518(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         TimerIndex;                                        // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_524[0x4];                                      // 0x0524(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Timers;                                            // 0x0528(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_TC_Decoy(int32 EntryPoint);
	void ChangeTimerServer(int32 TimeValue);
	void OnThrown(class AActor* ThrownActor);
	void OnGotIntoHandsImplementable(class AHumanCharacter* ParentCharacter);
	void ChangeTimer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TC_Decoy_C">();
	}
	static class ABP_TC_Decoy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TC_Decoy_C>();
	}
};
static_assert(alignof(ABP_TC_Decoy_C) == 0x000008, "Wrong alignment on ABP_TC_Decoy_C");
static_assert(sizeof(ABP_TC_Decoy_C) == 0x000538, "Wrong size on ABP_TC_Decoy_C");
static_assert(offsetof(ABP_TC_Decoy_C, UberGraphFrame_BP_TC_Decoy_C) == 0x000510, "Member 'ABP_TC_Decoy_C::UberGraphFrame_BP_TC_Decoy_C' has a wrong offset!");
static_assert(offsetof(ABP_TC_Decoy_C, Mesh) == 0x000518, "Member 'ABP_TC_Decoy_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_TC_Decoy_C, TimerIndex) == 0x000520, "Member 'ABP_TC_Decoy_C::TimerIndex' has a wrong offset!");
static_assert(offsetof(ABP_TC_Decoy_C, Timers) == 0x000528, "Member 'ABP_TC_Decoy_C::Timers' has a wrong offset!");

}

