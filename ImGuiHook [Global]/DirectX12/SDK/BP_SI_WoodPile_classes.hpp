#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SI_WoodPile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SI_BaseGenerator_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SI_WoodPile.BP_SI_WoodPile_C
// 0x0008 (0x0560 - 0x0558)
class ABP_SI_WoodPile_C final : public ABP_SI_BaseGenerator_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SI_WoodPile_C;                   // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_SI_WoodPile(int32 EntryPoint);
	void BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_PreInteraction_Start_on_Server__DelegateSignature(class UInteractionItemComponent* Sender, class AActor* Interacting_Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SI_WoodPile_C">();
	}
	static class ABP_SI_WoodPile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SI_WoodPile_C>();
	}
};
static_assert(alignof(ABP_SI_WoodPile_C) == 0x000008, "Wrong alignment on ABP_SI_WoodPile_C");
static_assert(sizeof(ABP_SI_WoodPile_C) == 0x000560, "Wrong size on ABP_SI_WoodPile_C");
static_assert(offsetof(ABP_SI_WoodPile_C, UberGraphFrame_BP_SI_WoodPile_C) == 0x000558, "Member 'ABP_SI_WoodPile_C::UberGraphFrame_BP_SI_WoodPile_C' has a wrong offset!");

}

