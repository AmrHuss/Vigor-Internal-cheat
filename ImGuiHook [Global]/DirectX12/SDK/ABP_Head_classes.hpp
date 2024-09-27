#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Head

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_Head.ABP_Head_C
// 0x0C90 (0x0F50 - 0x02C0)
class UABP_Head_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x02F8(0x01D8)(ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x04D0(0x0158)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0628(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0670(0x00C0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x0730(0x0028)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0758(0x00B0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x0808(0x00A0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x08A8(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x0A00(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x0A28(0x0028)()
	struct FAnimNode_BlendBoneByChannel           AnimGraphNode_BlendBoneByChannel;                  // 0x0A50(0x0068)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x0AB8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0AE0(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x0B08(0x00A0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0BA8(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive_1;                     // 0x0BD0(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0C98(0x0080)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_1;                      // 0x0D18(0x0018)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0D30(0x00A0)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0DD0(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0E98(0x0080)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0F18(0x0018)()
	class USkeletalMeshComponent*                 CharacterMesh;                                     // 0x0F30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseFacialAnimation;                                // 0x0F38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F39[0x7];                                      // 0x0F39(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHumanAnimInstace*                      SK_animInstance;                                   // 0x0F40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDead;                                            // 0x0F48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ReferencesLoaded;                                  // 0x0F49(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EFullBodyMode                                 FullBodyMode;                                      // 0x0F4A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABP_Head(int32 EntryPoint);
	void TryToInitReferences();
	void Blueprint_Initialize_Animation_Delay();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Head_C">();
	}
	static class UABP_Head_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Head_C>();
	}
};
static_assert(alignof(UABP_Head_C) == 0x000010, "Wrong alignment on UABP_Head_C");
static_assert(sizeof(UABP_Head_C) == 0x000F50, "Wrong size on UABP_Head_C");
static_assert(offsetof(UABP_Head_C, UberGraphFrame) == 0x0002C0, "Member 'UABP_Head_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UABP_Head_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_CopyPoseFromMesh) == 0x0002F8, "Member 'UABP_Head_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_SaveCachedPose_1) == 0x0004D0, "Member 'UABP_Head_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_Slot) == 0x000628, "Member 'UABP_Head_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_LayeredBoneBlend) == 0x000670, "Member 'UABP_Head_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_UseCachedPose_5) == 0x000730, "Member 'UABP_Head_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_BlendListByEnum) == 0x000758, "Member 'UABP_Head_C::AnimGraphNode_BlendListByEnum' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_BlendListByBool_2) == 0x000808, "Member 'UABP_Head_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_SaveCachedPose) == 0x0008A8, "Member 'UABP_Head_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_UseCachedPose_4) == 0x000A00, "Member 'UABP_Head_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_UseCachedPose_3) == 0x000A28, "Member 'UABP_Head_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_BlendBoneByChannel) == 0x000A50, "Member 'UABP_Head_C::AnimGraphNode_BlendBoneByChannel' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_UseCachedPose_2) == 0x000AB8, "Member 'UABP_Head_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_UseCachedPose_1) == 0x000AE0, "Member 'UABP_Head_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_BlendListByBool_1) == 0x000B08, "Member 'UABP_Head_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_UseCachedPose) == 0x000BA8, "Member 'UABP_Head_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_ApplyAdditive_1) == 0x000BD0, "Member 'UABP_Head_C::AnimGraphNode_ApplyAdditive_1' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_SequencePlayer_1) == 0x000C98, "Member 'UABP_Head_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_LocalRefPose_1) == 0x000D18, "Member 'UABP_Head_C::AnimGraphNode_LocalRefPose_1' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_BlendListByBool) == 0x000D30, "Member 'UABP_Head_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_ApplyAdditive) == 0x000DD0, "Member 'UABP_Head_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_SequencePlayer) == 0x000E98, "Member 'UABP_Head_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, AnimGraphNode_LocalRefPose) == 0x000F18, "Member 'UABP_Head_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, CharacterMesh) == 0x000F30, "Member 'UABP_Head_C::CharacterMesh' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, UseFacialAnimation) == 0x000F38, "Member 'UABP_Head_C::UseFacialAnimation' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, SK_animInstance) == 0x000F40, "Member 'UABP_Head_C::SK_animInstance' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, IsDead) == 0x000F48, "Member 'UABP_Head_C::IsDead' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, ReferencesLoaded) == 0x000F49, "Member 'UABP_Head_C::ReferencesLoaded' has a wrong offset!");
static_assert(offsetof(UABP_Head_C, FullBodyMode) == 0x000F4A, "Member 'UABP_Head_C::FullBodyMode' has a wrong offset!");

}
