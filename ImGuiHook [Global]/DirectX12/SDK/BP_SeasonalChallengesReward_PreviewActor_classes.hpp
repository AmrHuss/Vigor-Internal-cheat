#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SeasonalChallengesReward_PreviewActor

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Struct_SeasonalChallengesSubGoalInfo_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SeasonalChallengesReward_PreviewActor.BP_SeasonalChallengesReward_PreviewActor_C
// 0x0210 (0x0430 - 0x0220)
class ABP_SeasonalChallengesReward_PreviewActor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Backpack_56_S20;                                   // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   SceneChildActor;                                   // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_PostExplosion_02;                               // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_PostExplosion_01;                               // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   CompletedMannequin;                                // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CardMesh;                                          // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ExplosionParticles;                                // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        CameraPos_Completed;                               // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        CameraPos_SubGoal_1;                               // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        CameraPos_SubGoal_4;                               // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        CameraPos_SubGoal_3;                               // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        CameraPos_SubGoal_2;                               // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Card1_Icon;                                        // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Card2_Icon;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Card3_Texts;                                       // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Card2_Texts;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Card1_Texts;                                       // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Card3_Icon;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Lantern_01;                                     // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        CameraPos_RewardPresentation;                      // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget_Lock_5;                                     // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget_Lock_4;                                     // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget_Lock_3;                                     // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget_Lock_2;                                     // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget_Lock_1;                                     // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        DefaultCameraPosition;                             // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ContainerBase;                                     // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        EnviromentRoot;                                    // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionFadeOut_LightIntensity_AC1B6549444FFC741BF383896075F9E8; // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TransitionFadeOut__Direction_AC1B6549444FFC741BF383896075F9E8; // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31D[0x3];                                      // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TransitionFadeOut;                                 // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionToReward_Newopening_1_39C23DB74F9EF6821E46DC89A117C23C; // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionToReward_SmokeVisibility_39C23DB74F9EF6821E46DC89A117C23C; // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionToReward_DoorOpening_39C23DB74F9EF6821E46DC89A117C23C; // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TransitionToReward_CameraLerpAlpha_39C23DB74F9EF6821E46DC89A117C23C; // 0x0334(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TransitionToReward__Direction_39C23DB74F9EF6821E46DC89A117C23C; // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_339[0x7];                                      // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TransitionToReward;                                // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ShelterUI_C*                        ShelterUI;                                         // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_ChallengeManager_C*                 ChallengeManager;                                  // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxUnlockProgress;                                 // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentUnlockProgress;                             // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UDataTable>              DT_SubGoals_SF;                                    // 0x0360(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UDataTable*                             DT_SubGoals_HR;                                    // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStruct_SeasonalChallengesSubGoalInfo> SubGoalsInfo;                                      // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UUI_SeasonalChallengeReward_SubGoal_Widget_C*, struct FStruct_SeasonalChallengesSubGoalInfo> Widgets_To_SubGoalInfo;                            // 0x03A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUI_SeasonalChallengesSubTab_C*         SeasonalRewardUI;                                  // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FChallengeReward>               SeasonalRewards;                                   // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             RewardPresentationEnded;                           // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          PropsToFadeOut;                                    // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_419[0x3];                                      // 0x0419(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpotlightConstructIntensity;                       // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CardsShown;                                        // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_421[0x7];                                      // 0x0421(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          CardsAnimation;                                    // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void RewardPresentationEnded__DelegateSignature();
	void ExecuteUbergraph_BP_SeasonalChallengesReward_PreviewActor(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SetContainerBase(TSoftObjectPtr<class UObject> NewContainerMesh, bool RotateAround);
	void DEBUG_PlayInEditor_Event();
	void UpdateChallengeCountOnProgressReceive(const struct FCloudRequestResult& RequestResult, const struct FCloudSeasonChallengeProgressResult& Response);
	void ReceiveDestroyed();
	void CheckForPropVisibilityWithTransition();
	void PreviewClaimedSeasonalRewards();
	void RewardAnimEnded();
	void StartRewardPhase();
	void GatherSubGoalData();
	void UpdateCameraDesiredPosition(bool bInstantChange, const struct FTransform& DesiredCameraTransform);
	void Init(class ABP_ChallengeManager_C* ChallengeManager_0, class UUI_SeasonalChallengesSubTab_C* SeasonRewardUI, TArray<struct FStruct_SeasonalChallengesSubGoalInfo>& SubGoalsInfo_0);
	void TransitionFadeOut__FadedOutCompletely__EventFunc();
	void TransitionFadeOut__UpdateFunc();
	void TransitionFadeOut__FinishedFunc();
	void TransitionToReward__UpdateFunc();
	void TransitionToReward__FinishedFunc();
	void UserConstructionScript();
	void InitSubGoalWidgets(int32 SeasonalChallengesCompletedCount);
	void InitLowestUnusedSubGoalWidget_By_TAG(const struct FStruct_SeasonalChallengesSubGoalInfo& SubGoalInfo, int32 CompletedSeasonalChallenges);
	void UpdateAllSubGoalWidgets();
	void CheckForPropsVisibility();
	void GetCompletedSubGoalCount(int32 TotalCompletedChallenges, int32* SubGoalCount, bool* CompletedAll);
	void FillCards(const TMap<class UClass*, int32>& RewardList);
	void GetCameraTransformBasedOnSubGoalProgress(class UArrowComponent** CameraPosition);
	void HideAllSubGoalWidgets();
	void HideAllSubGoalProps();
	void DEBUG_ResetClaimedSaveFlag();
	void DEBUG_Play_in_editor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SeasonalChallengesReward_PreviewActor_C">();
	}
	static class ABP_SeasonalChallengesReward_PreviewActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SeasonalChallengesReward_PreviewActor_C>();
	}
};
static_assert(alignof(ABP_SeasonalChallengesReward_PreviewActor_C) == 0x000008, "Wrong alignment on ABP_SeasonalChallengesReward_PreviewActor_C");
static_assert(sizeof(ABP_SeasonalChallengesReward_PreviewActor_C) == 0x000430, "Wrong size on ABP_SeasonalChallengesReward_PreviewActor_C");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, UberGraphFrame) == 0x000220, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, Backpack_56_S20) == 0x000228, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::Backpack_56_S20' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, SceneChildActor) == 0x000230, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::SceneChildActor' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, PS_PostExplosion_02) == 0x000238, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::PS_PostExplosion_02' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, PS_PostExplosion_01) == 0x000240, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::PS_PostExplosion_01' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, CompletedMannequin) == 0x000248, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::CompletedMannequin' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, CardMesh) == 0x000250, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::CardMesh' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, ExplosionParticles) == 0x000258, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::ExplosionParticles' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, CameraPos_Completed) == 0x000260, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::CameraPos_Completed' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, CameraPos_SubGoal_1) == 0x000268, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::CameraPos_SubGoal_1' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, CameraPos_SubGoal_4) == 0x000270, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::CameraPos_SubGoal_4' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, CameraPos_SubGoal_3) == 0x000278, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::CameraPos_SubGoal_3' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, CameraPos_SubGoal_2) == 0x000280, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::CameraPos_SubGoal_2' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, Card1_Icon) == 0x000288, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::Card1_Icon' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, Card2_Icon) == 0x000290, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::Card2_Icon' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, Card3_Texts) == 0x000298, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::Card3_Texts' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, Card2_Texts) == 0x0002A0, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::Card2_Texts' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, Card1_Texts) == 0x0002A8, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::Card1_Texts' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, Card3_Icon) == 0x0002B0, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::Card3_Icon' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, SM_Lantern_01) == 0x0002B8, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::SM_Lantern_01' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, SpotLight) == 0x0002C0, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, CameraPos_RewardPresentation) == 0x0002C8, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::CameraPos_RewardPresentation' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, Widget_Lock_5) == 0x0002D0, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::Widget_Lock_5' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, Widget_Lock_4) == 0x0002D8, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::Widget_Lock_4' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, Widget_Lock_3) == 0x0002E0, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::Widget_Lock_3' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, Widget_Lock_2) == 0x0002E8, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::Widget_Lock_2' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, Widget_Lock_1) == 0x0002F0, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::Widget_Lock_1' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, DefaultCameraPosition) == 0x0002F8, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::DefaultCameraPosition' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, ContainerBase) == 0x000300, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::ContainerBase' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, EnviromentRoot) == 0x000308, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::EnviromentRoot' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, DefaultSceneRoot) == 0x000310, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, TransitionFadeOut_LightIntensity_AC1B6549444FFC741BF383896075F9E8) == 0x000318, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::TransitionFadeOut_LightIntensity_AC1B6549444FFC741BF383896075F9E8' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, TransitionFadeOut__Direction_AC1B6549444FFC741BF383896075F9E8) == 0x00031C, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::TransitionFadeOut__Direction_AC1B6549444FFC741BF383896075F9E8' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, TransitionFadeOut) == 0x000320, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::TransitionFadeOut' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, TransitionToReward_Newopening_1_39C23DB74F9EF6821E46DC89A117C23C) == 0x000328, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::TransitionToReward_Newopening_1_39C23DB74F9EF6821E46DC89A117C23C' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, TransitionToReward_SmokeVisibility_39C23DB74F9EF6821E46DC89A117C23C) == 0x00032C, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::TransitionToReward_SmokeVisibility_39C23DB74F9EF6821E46DC89A117C23C' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, TransitionToReward_DoorOpening_39C23DB74F9EF6821E46DC89A117C23C) == 0x000330, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::TransitionToReward_DoorOpening_39C23DB74F9EF6821E46DC89A117C23C' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, TransitionToReward_CameraLerpAlpha_39C23DB74F9EF6821E46DC89A117C23C) == 0x000334, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::TransitionToReward_CameraLerpAlpha_39C23DB74F9EF6821E46DC89A117C23C' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, TransitionToReward__Direction_39C23DB74F9EF6821E46DC89A117C23C) == 0x000338, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::TransitionToReward__Direction_39C23DB74F9EF6821E46DC89A117C23C' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, TransitionToReward) == 0x000340, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::TransitionToReward' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, ShelterUI) == 0x000348, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::ShelterUI' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, ChallengeManager) == 0x000350, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::ChallengeManager' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, MaxUnlockProgress) == 0x000358, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::MaxUnlockProgress' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, CurrentUnlockProgress) == 0x00035C, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::CurrentUnlockProgress' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, DT_SubGoals_SF) == 0x000360, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::DT_SubGoals_SF' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, DT_SubGoals_HR) == 0x000388, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::DT_SubGoals_HR' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, SubGoalsInfo) == 0x000390, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::SubGoalsInfo' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, Widgets_To_SubGoalInfo) == 0x0003A0, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::Widgets_To_SubGoalInfo' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, SeasonalRewardUI) == 0x0003F0, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::SeasonalRewardUI' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, SeasonalRewards) == 0x0003F8, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::SeasonalRewards' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, RewardPresentationEnded) == 0x000408, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::RewardPresentationEnded' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, PropsToFadeOut) == 0x000418, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::PropsToFadeOut' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, SpotlightConstructIntensity) == 0x00041C, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::SpotlightConstructIntensity' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, CardsShown) == 0x000420, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::CardsShown' has a wrong offset!");
static_assert(offsetof(ABP_SeasonalChallengesReward_PreviewActor_C, CardsAnimation) == 0x000428, "Member 'ABP_SeasonalChallengesReward_PreviewActor_C::CardsAnimation' has a wrong offset!");

}
