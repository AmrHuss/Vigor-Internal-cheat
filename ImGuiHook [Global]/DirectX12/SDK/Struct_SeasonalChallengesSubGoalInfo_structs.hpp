#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_SeasonalChallengesSubGoalInfo

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct Struct_SeasonalChallengesSubGoalInfo.Struct_SeasonalChallengesSubGoalInfo
// 0x0038 (0x0038 - 0x0000)
struct FStruct_SeasonalChallengesSubGoalInfo final
{
public:
	int32                                         DoneChallengesCountThreshold_21_3DCA4D2848BF90A966315FAA6BA20DC3; // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ChallengesToCompleteWithinSubGoal_20_AFF042B440B8CB34AE51429C33BA8EA5; // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ThresholdText_22_7C5886994E62BE1DF3BA758DB5480306; // 0x0008(0x0018)(Edit, BlueprintVisible)
	class FName                                   BattlepassReward_23_BAF7E9414FA4ED0808BD99BA8A4F1673; // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Rewards_15_3F3CCF024B61B7FAC8A5E0A183EFDC89;       // 0x0028(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FStruct_SeasonalChallengesSubGoalInfo) == 0x000008, "Wrong alignment on FStruct_SeasonalChallengesSubGoalInfo");
static_assert(sizeof(FStruct_SeasonalChallengesSubGoalInfo) == 0x000038, "Wrong size on FStruct_SeasonalChallengesSubGoalInfo");
static_assert(offsetof(FStruct_SeasonalChallengesSubGoalInfo, DoneChallengesCountThreshold_21_3DCA4D2848BF90A966315FAA6BA20DC3) == 0x000000, "Member 'FStruct_SeasonalChallengesSubGoalInfo::DoneChallengesCountThreshold_21_3DCA4D2848BF90A966315FAA6BA20DC3' has a wrong offset!");
static_assert(offsetof(FStruct_SeasonalChallengesSubGoalInfo, ChallengesToCompleteWithinSubGoal_20_AFF042B440B8CB34AE51429C33BA8EA5) == 0x000004, "Member 'FStruct_SeasonalChallengesSubGoalInfo::ChallengesToCompleteWithinSubGoal_20_AFF042B440B8CB34AE51429C33BA8EA5' has a wrong offset!");
static_assert(offsetof(FStruct_SeasonalChallengesSubGoalInfo, ThresholdText_22_7C5886994E62BE1DF3BA758DB5480306) == 0x000008, "Member 'FStruct_SeasonalChallengesSubGoalInfo::ThresholdText_22_7C5886994E62BE1DF3BA758DB5480306' has a wrong offset!");
static_assert(offsetof(FStruct_SeasonalChallengesSubGoalInfo, BattlepassReward_23_BAF7E9414FA4ED0808BD99BA8A4F1673) == 0x000020, "Member 'FStruct_SeasonalChallengesSubGoalInfo::BattlepassReward_23_BAF7E9414FA4ED0808BD99BA8A4F1673' has a wrong offset!");
static_assert(offsetof(FStruct_SeasonalChallengesSubGoalInfo, Rewards_15_3F3CCF024B61B7FAC8A5E0A183EFDC89) == 0x000028, "Member 'FStruct_SeasonalChallengesSubGoalInfo::Rewards_15_3F3CCF024B61B7FAC8A5E0A183EFDC89' has a wrong offset!");

}

