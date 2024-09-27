#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WorldLadder_Base

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WorldLadder_Base.BP_WorldLadder_Base_C
// 0x0008 (0x02C8 - 0x02C0)
class ABP_WorldLadder_Base_C : public AWorldLadder
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_WorldLadder_Base(int32 EntryPoint);
	void BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_0_InteractionItemEvent__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* InteractingActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WorldLadder_Base_C">();
	}
	static class ABP_WorldLadder_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WorldLadder_Base_C>();
	}
};
static_assert(alignof(ABP_WorldLadder_Base_C) == 0x000008, "Wrong alignment on ABP_WorldLadder_Base_C");
static_assert(sizeof(ABP_WorldLadder_Base_C) == 0x0002C8, "Wrong size on ABP_WorldLadder_Base_C");
static_assert(offsetof(ABP_WorldLadder_Base_C, UberGraphFrame) == 0x0002C0, "Member 'ABP_WorldLadder_Base_C::UberGraphFrame' has a wrong offset!");

}
