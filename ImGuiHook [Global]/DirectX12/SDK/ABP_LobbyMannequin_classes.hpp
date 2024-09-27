#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_LobbyMannequin

#include "Basic.hpp"

#include "E_MeshSpecificJiggle_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_LobbyMannequin.ABP_LobbyMannequin_C
// 0x05E0 (0x08A0 - 0x02C0)
class UABP_LobbyMannequin_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x02C8(0x0118)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x03E0(0x00C0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x04A0(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x05F8(0x0028)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_3;                 // 0x0620(0x0050)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_2;                 // 0x0670(0x0050)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_1;                 // 0x06C0(0x0050)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0710(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0740(0x0030)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x0770(0x00B0)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x0820(0x0050)()
	class UAnimSequenceBase*                      Uniform_Jiggle_Pose;                               // 0x0870(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Backpack_Jiggle_Pose;                              // 0x0878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Bottom_Headwear_Jiggle_Pose;                       // 0x0880(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Current_Pose;                                      // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MeshSpecificJiggle                          Uniform_JiggleType;                                // 0x0890(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MeshSpecificJiggle                          Backpack_JiggleType;                               // 0x0891(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MeshSpecificJiggle                          BottomHeadwear_JiggleType;                         // 0x0892(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_893[0x1];                                      // 0x0893(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Jiggle_Uniform_BlendWeight;                        // 0x0894(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Jiggle_Backpack_BlendWeight;                       // 0x0898(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Jiggle_BottomHeadwear_BlendWeight;                 // 0x089C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABP_LobbyMannequin(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void SetCurrentPose(class UAnimSequenceBase* Pose);
	void SetJiggleTypeAnims(class UAnimSequence* AnimPose, int32 JigglePartIndex, E_MeshSpecificJiggle JiggleType);
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void FixCustomizationsWithJiggle(const struct FPoseLink& InPose, struct FPoseLink* FixCustomizationsWithJiggle_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_LobbyMannequin_C">();
	}
	static class UABP_LobbyMannequin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_LobbyMannequin_C>();
	}
};
static_assert(alignof(UABP_LobbyMannequin_C) == 0x000010, "Wrong alignment on UABP_LobbyMannequin_C");
static_assert(sizeof(UABP_LobbyMannequin_C) == 0x0008A0, "Wrong size on UABP_LobbyMannequin_C");
static_assert(offsetof(UABP_LobbyMannequin_C, UberGraphFrame) == 0x0002C0, "Member 'UABP_LobbyMannequin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, AnimGraphNode_LinkedInputPose) == 0x0002C8, "Member 'UABP_LobbyMannequin_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, AnimGraphNode_LayeredBoneBlend) == 0x0003E0, "Member 'UABP_LobbyMannequin_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, AnimGraphNode_SaveCachedPose) == 0x0004A0, "Member 'UABP_LobbyMannequin_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, AnimGraphNode_UseCachedPose) == 0x0005F8, "Member 'UABP_LobbyMannequin_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, AnimGraphNode_SequenceEvaluator_3) == 0x000620, "Member 'UABP_LobbyMannequin_C::AnimGraphNode_SequenceEvaluator_3' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, AnimGraphNode_SequenceEvaluator_2) == 0x000670, "Member 'UABP_LobbyMannequin_C::AnimGraphNode_SequenceEvaluator_2' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, AnimGraphNode_SequenceEvaluator_1) == 0x0006C0, "Member 'UABP_LobbyMannequin_C::AnimGraphNode_SequenceEvaluator_1' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, AnimGraphNode_Root_1) == 0x000710, "Member 'UABP_LobbyMannequin_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, AnimGraphNode_Root) == 0x000740, "Member 'UABP_LobbyMannequin_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, AnimGraphNode_LinkedAnimLayer) == 0x000770, "Member 'UABP_LobbyMannequin_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, AnimGraphNode_SequenceEvaluator) == 0x000820, "Member 'UABP_LobbyMannequin_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, Uniform_Jiggle_Pose) == 0x000870, "Member 'UABP_LobbyMannequin_C::Uniform_Jiggle_Pose' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, Backpack_Jiggle_Pose) == 0x000878, "Member 'UABP_LobbyMannequin_C::Backpack_Jiggle_Pose' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, Bottom_Headwear_Jiggle_Pose) == 0x000880, "Member 'UABP_LobbyMannequin_C::Bottom_Headwear_Jiggle_Pose' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, Current_Pose) == 0x000888, "Member 'UABP_LobbyMannequin_C::Current_Pose' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, Uniform_JiggleType) == 0x000890, "Member 'UABP_LobbyMannequin_C::Uniform_JiggleType' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, Backpack_JiggleType) == 0x000891, "Member 'UABP_LobbyMannequin_C::Backpack_JiggleType' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, BottomHeadwear_JiggleType) == 0x000892, "Member 'UABP_LobbyMannequin_C::BottomHeadwear_JiggleType' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, Jiggle_Uniform_BlendWeight) == 0x000894, "Member 'UABP_LobbyMannequin_C::Jiggle_Uniform_BlendWeight' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, Jiggle_Backpack_BlendWeight) == 0x000898, "Member 'UABP_LobbyMannequin_C::Jiggle_Backpack_BlendWeight' has a wrong offset!");
static_assert(offsetof(UABP_LobbyMannequin_C, Jiggle_BottomHeadwear_BlendWeight) == 0x00089C, "Member 'UABP_LobbyMannequin_C::Jiggle_BottomHeadwear_BlendWeight' has a wrong offset!");

}
