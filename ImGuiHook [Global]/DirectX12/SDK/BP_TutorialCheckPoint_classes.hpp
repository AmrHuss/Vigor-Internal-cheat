#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TutorialCheckPoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TutorialCheckPoint.BP_TutorialCheckPoint_C
// 0x0028 (0x0248 - 0x0220)
class ABP_TutorialCheckPoint_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Used;                                              // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ResetAI;                                           // 0x0241(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CheckAmmoPhase;                                    // 0x0242(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_TutorialCheckPoint(int32 EntryPoint);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TutorialCheckPoint_C">();
	}
	static class ABP_TutorialCheckPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TutorialCheckPoint_C>();
	}
};
static_assert(alignof(ABP_TutorialCheckPoint_C) == 0x000008, "Wrong alignment on ABP_TutorialCheckPoint_C");
static_assert(sizeof(ABP_TutorialCheckPoint_C) == 0x000248, "Wrong size on ABP_TutorialCheckPoint_C");
static_assert(offsetof(ABP_TutorialCheckPoint_C, UberGraphFrame) == 0x000220, "Member 'ABP_TutorialCheckPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TutorialCheckPoint_C, Billboard) == 0x000228, "Member 'ABP_TutorialCheckPoint_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_TutorialCheckPoint_C, Box) == 0x000230, "Member 'ABP_TutorialCheckPoint_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_TutorialCheckPoint_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_TutorialCheckPoint_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_TutorialCheckPoint_C, Used) == 0x000240, "Member 'ABP_TutorialCheckPoint_C::Used' has a wrong offset!");
static_assert(offsetof(ABP_TutorialCheckPoint_C, ResetAI) == 0x000241, "Member 'ABP_TutorialCheckPoint_C::ResetAI' has a wrong offset!");
static_assert(offsetof(ABP_TutorialCheckPoint_C, CheckAmmoPhase) == 0x000242, "Member 'ABP_TutorialCheckPoint_C::CheckAmmoPhase' has a wrong offset!");

}

