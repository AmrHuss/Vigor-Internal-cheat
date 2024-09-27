#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CollisionCapture

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FlameUI_structs.hpp"
#include "CollisionTargetState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CollisionCapture.BP_CollisionCapture_C
// 0x00A0 (0x02C0 - 0x0220)
class ABP_CollisionCapture_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*               CollisionCaptureLOD;                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               CollisionCapture;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>            ShowList;                                          // 0x0240(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UCharacterMovementComponent*            OwnerCharacterMovementComponent;                   // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CaptureHeight;                                     // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25C[0x4];                                      // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            ShowListLOD;                                       // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          DontUseDistantFlattening;                          // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LODoff;                                            // 0x0271(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          VegetationReactionOn;                              // 0x0272(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_273[0x5];                                      // 0x0273(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             NewEventDispatcher_0;                              // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class AActor>                  CollisionTarget;                                   // 0x0288(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	ECollisionTargetState                         TargetState;                                       // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_WorldSpectator_C*                   Spectator;                                         // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void NewEventDispatcher_0__DelegateSignature();
	void ExecuteUbergraph_BP_CollisionCapture(int32 EntryPoint);
	void OnDeath();
	void Exapand_Showlist(class AActor* Actor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void MoveCapture();
	void Renew_showlist();
	void InitOwnerMovementComponent();
	void Init_Showlist(bool LODTurnedOff);
	void Simulate(float DeltaTime);
	void InitCaptures();
	void DeactivateBend();
	void ExpandShowlist(class AActor* Affector);
	void AddComponentsToShowlist(class AActor* Object, bool LODTurnedOff);
	void CheckTargetAndSet(class AActor* CollisionTarget_0, bool* Success);
	void ReCheckTarget();
	void SetterSpectator(class ABP_WorldSpectator_C* Spectator_0, bool* Success);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CollisionCapture_C">();
	}
	static class ABP_CollisionCapture_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CollisionCapture_C>();
	}
};
static_assert(alignof(ABP_CollisionCapture_C) == 0x000008, "Wrong alignment on ABP_CollisionCapture_C");
static_assert(sizeof(ABP_CollisionCapture_C) == 0x0002C0, "Wrong size on ABP_CollisionCapture_C");
static_assert(offsetof(ABP_CollisionCapture_C, UberGraphFrame) == 0x000220, "Member 'ABP_CollisionCapture_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CollisionCapture_C, CollisionCaptureLOD) == 0x000228, "Member 'ABP_CollisionCapture_C::CollisionCaptureLOD' has a wrong offset!");
static_assert(offsetof(ABP_CollisionCapture_C, CollisionCapture) == 0x000230, "Member 'ABP_CollisionCapture_C::CollisionCapture' has a wrong offset!");
static_assert(offsetof(ABP_CollisionCapture_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_CollisionCapture_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CollisionCapture_C, ShowList) == 0x000240, "Member 'ABP_CollisionCapture_C::ShowList' has a wrong offset!");
static_assert(offsetof(ABP_CollisionCapture_C, OwnerCharacterMovementComponent) == 0x000250, "Member 'ABP_CollisionCapture_C::OwnerCharacterMovementComponent' has a wrong offset!");
static_assert(offsetof(ABP_CollisionCapture_C, CaptureHeight) == 0x000258, "Member 'ABP_CollisionCapture_C::CaptureHeight' has a wrong offset!");
static_assert(offsetof(ABP_CollisionCapture_C, ShowListLOD) == 0x000260, "Member 'ABP_CollisionCapture_C::ShowListLOD' has a wrong offset!");
static_assert(offsetof(ABP_CollisionCapture_C, DontUseDistantFlattening) == 0x000270, "Member 'ABP_CollisionCapture_C::DontUseDistantFlattening' has a wrong offset!");
static_assert(offsetof(ABP_CollisionCapture_C, LODoff) == 0x000271, "Member 'ABP_CollisionCapture_C::LODoff' has a wrong offset!");
static_assert(offsetof(ABP_CollisionCapture_C, VegetationReactionOn) == 0x000272, "Member 'ABP_CollisionCapture_C::VegetationReactionOn' has a wrong offset!");
static_assert(offsetof(ABP_CollisionCapture_C, NewEventDispatcher_0) == 0x000278, "Member 'ABP_CollisionCapture_C::NewEventDispatcher_0' has a wrong offset!");
static_assert(offsetof(ABP_CollisionCapture_C, CollisionTarget) == 0x000288, "Member 'ABP_CollisionCapture_C::CollisionTarget' has a wrong offset!");
static_assert(offsetof(ABP_CollisionCapture_C, TargetState) == 0x0002B0, "Member 'ABP_CollisionCapture_C::TargetState' has a wrong offset!");
static_assert(offsetof(ABP_CollisionCapture_C, Spectator) == 0x0002B8, "Member 'ABP_CollisionCapture_C::Spectator' has a wrong offset!");

}
