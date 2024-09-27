#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SeasonalChallenges_PartialProgressBar

#include "Basic.hpp"

#include "UI_SeasonalChallenges_PartialProgressBar_classes.hpp"
#include "UI_SeasonalChallenges_PartialProgressBar_parameters.hpp"


namespace SDK
{

// Function UI_SeasonalChallenges_PartialProgressBar.UI_SeasonalChallenges_PartialProgressBar_C.ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SeasonalChallenges_PartialProgressBar_C::ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SeasonalChallenges_PartialProgressBar_C", "ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar");

	Params::UI_SeasonalChallenges_PartialProgressBar_C_ExecuteUbergraph_UI_SeasonalChallenges_PartialProgressBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SeasonalChallenges_PartialProgressBar.UI_SeasonalChallenges_PartialProgressBar_C.UpdateProgressBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentlyDoneChallengesCount                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SeasonalChallenges_PartialProgressBar_C::UpdateProgressBar(int32 CurrentlyDoneChallengesCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SeasonalChallenges_PartialProgressBar_C", "UpdateProgressBar");

	Params::UI_SeasonalChallenges_PartialProgressBar_C_UpdateProgressBar Parms{};

	Parms.CurrentlyDoneChallengesCount = CurrentlyDoneChallengesCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SeasonalChallenges_PartialProgressBar.UI_SeasonalChallenges_PartialProgressBar_C.InitializePartialProgressBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DoneChallenges                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_SeasonalChallengesSubGoalInfoSubGoalInfo_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_SeasonalChallenges_PartialProgressBar_C::InitializePartialProgressBar(int32 DoneChallenges, const struct FStruct_SeasonalChallengesSubGoalInfo& SubGoalInfo_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SeasonalChallenges_PartialProgressBar_C", "InitializePartialProgressBar");

	Params::UI_SeasonalChallenges_PartialProgressBar_C_InitializePartialProgressBar Parms{};

	Parms.DoneChallenges = DoneChallenges;
	Parms.SubGoalInfo_0 = std::move(SubGoalInfo_0);

	UObject::ProcessEvent(Func, &Parms);
}

}
