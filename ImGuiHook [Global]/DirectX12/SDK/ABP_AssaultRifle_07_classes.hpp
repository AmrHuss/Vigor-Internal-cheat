#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_AssaultRifle_07

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_AssaultRifle_07.ABP_AssaultRifle_07_C
// 0x0AB0 (0x0D70 - 0x02C0)
class UABP_AssaultRifle_07_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	uint8                                         Pad_2F8[0x8];                                      // 0x02F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x0300(0x0830)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_3;                              // 0x0B30(0x0048)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0B78(0x0020)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0B98(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x0C48(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x0C90(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0CD8(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0D20(0x0020)()
	float                                         MagInvisible;                                      // 0x0D40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D44[0x4];                                      // 0x0D44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_AssaultRifle_07_C*                  BP_AssaultRifle_07;                                // 0x0D48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VarSetupLoop;                                      // 0x0D50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShouldUpdateStance;                                // 0x0D51(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D52[0x6];                                      // 0x0D52(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanCharacter*                        PlayerBP;                                          // 0x0D58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStance                                       CurrentCharStance;                                 // 0x0D60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABP_AssaultRifle_07(int32 EntryPoint);
	void InitReferences();
	void CheckIfStanceChanged();
	void RefreshPlayer();
	void RefreshStance();
	void CheckIfPlayerRefIsCorrect();
	void SetStance();
	void InitializeReferences();
	void BlueprintInitializeAnimation();
	void CheckIfSkinChanged();
	void CheckSkin();
	void SetupPlayerBPvar();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_ReloadStart();
	void AnimNotify_MagEject();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_AssaultRifle_07_C">();
	}
	static class UABP_AssaultRifle_07_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_AssaultRifle_07_C>();
	}
};
static_assert(alignof(UABP_AssaultRifle_07_C) == 0x000010, "Wrong alignment on UABP_AssaultRifle_07_C");
static_assert(sizeof(UABP_AssaultRifle_07_C) == 0x000D70, "Wrong size on UABP_AssaultRifle_07_C");
static_assert(offsetof(UABP_AssaultRifle_07_C, UberGraphFrame) == 0x0002C0, "Member 'UABP_AssaultRifle_07_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_07_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UABP_AssaultRifle_07_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_07_C, AnimGraphNode_RigidBody) == 0x000300, "Member 'UABP_AssaultRifle_07_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_07_C, AnimGraphNode_Slot_3) == 0x000B30, "Member 'UABP_AssaultRifle_07_C::AnimGraphNode_Slot_3' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_07_C, AnimGraphNode_LocalToComponentSpace) == 0x000B78, "Member 'UABP_AssaultRifle_07_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_07_C, AnimGraphNode_BlendListByEnum) == 0x000B98, "Member 'UABP_AssaultRifle_07_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_07_C, AnimGraphNode_Slot_2) == 0x000C48, "Member 'UABP_AssaultRifle_07_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_07_C, AnimGraphNode_Slot_1) == 0x000C90, "Member 'UABP_AssaultRifle_07_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_07_C, AnimGraphNode_Slot) == 0x000CD8, "Member 'UABP_AssaultRifle_07_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_07_C, AnimGraphNode_ComponentToLocalSpace) == 0x000D20, "Member 'UABP_AssaultRifle_07_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_07_C, MagInvisible) == 0x000D40, "Member 'UABP_AssaultRifle_07_C::MagInvisible' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_07_C, BP_AssaultRifle_07) == 0x000D48, "Member 'UABP_AssaultRifle_07_C::BP_AssaultRifle_07' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_07_C, VarSetupLoop) == 0x000D50, "Member 'UABP_AssaultRifle_07_C::VarSetupLoop' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_07_C, ShouldUpdateStance) == 0x000D51, "Member 'UABP_AssaultRifle_07_C::ShouldUpdateStance' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_07_C, PlayerBP) == 0x000D58, "Member 'UABP_AssaultRifle_07_C::PlayerBP' has a wrong offset!");
static_assert(offsetof(UABP_AssaultRifle_07_C, CurrentCharStance) == 0x000D60, "Member 'UABP_AssaultRifle_07_C::CurrentCharStance' has a wrong offset!");

}

