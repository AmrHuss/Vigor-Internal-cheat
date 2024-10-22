#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Mannequin_WinnerScreen_GunFight

#include "Basic.hpp"

#include "BP_Mannequin_WinnerScreen_GunFight_classes.hpp"
#include "BP_Mannequin_WinnerScreen_GunFight_parameters.hpp"


namespace SDK
{

// Function BP_Mannequin_WinnerScreen_GunFight.BP_Mannequin_WinnerScreen_GunFight_C.ScorePresentationEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Mannequin_WinnerScreen_GunFight_C*Mannequin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Skipped                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mannequin_WinnerScreen_GunFight_C::ScorePresentationEnded__DelegateSignature(class ABP_Mannequin_WinnerScreen_GunFight_C* Mannequin, bool Skipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_WinnerScreen_GunFight_C", "ScorePresentationEnded__DelegateSignature");

	Params::BP_Mannequin_WinnerScreen_GunFight_C_ScorePresentationEnded__DelegateSignature Parms{};

	Parms.Mannequin = Mannequin;
	Parms.Skipped = Skipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mannequin_WinnerScreen_GunFight.BP_Mannequin_WinnerScreen_GunFight_C.ScorePresentationUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ScoreShown                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mannequin_WinnerScreen_GunFight_C::ScorePresentationUpdated__DelegateSignature(int32 ScoreShown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_WinnerScreen_GunFight_C", "ScorePresentationUpdated__DelegateSignature");

	Params::BP_Mannequin_WinnerScreen_GunFight_C_ScorePresentationUpdated__DelegateSignature Parms{};

	Parms.ScoreShown = ScoreShown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mannequin_WinnerScreen_GunFight.BP_Mannequin_WinnerScreen_GunFight_C.ExecuteUbergraph_BP_Mannequin_WinnerScreen_GunFight
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mannequin_WinnerScreen_GunFight_C::ExecuteUbergraph_BP_Mannequin_WinnerScreen_GunFight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_WinnerScreen_GunFight_C", "ExecuteUbergraph_BP_Mannequin_WinnerScreen_GunFight");

	Params::BP_Mannequin_WinnerScreen_GunFight_C_ExecuteUbergraph_BP_Mannequin_WinnerScreen_GunFight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mannequin_WinnerScreen_GunFight.BP_Mannequin_WinnerScreen_GunFight_C.PlayLooserEmotes
// (BlueprintCallable, BlueprintEvent)

void ABP_Mannequin_WinnerScreen_GunFight_C::PlayLooserEmotes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_WinnerScreen_GunFight_C", "PlayLooserEmotes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Mannequin_WinnerScreen_GunFight.BP_Mannequin_WinnerScreen_GunFight_C.OnCurrentShownScoreChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mannequin_WinnerScreen_GunFight_C::OnCurrentShownScoreChanged(float Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_WinnerScreen_GunFight_C", "OnCurrentShownScoreChanged");

	Params::BP_Mannequin_WinnerScreen_GunFight_C_OnCurrentShownScoreChanged Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mannequin_WinnerScreen_GunFight.BP_Mannequin_WinnerScreen_GunFight_C.OnScoreAnimEndedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_TeamMemberMarker_GunfightRewardScreen_C*Widget_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Skipped                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mannequin_WinnerScreen_GunFight_C::OnScoreAnimEndedEvent(class UUI_TeamMemberMarker_GunfightRewardScreen_C* Widget_0, bool Skipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_WinnerScreen_GunFight_C", "OnScoreAnimEndedEvent");

	Params::BP_Mannequin_WinnerScreen_GunFight_C_OnScoreAnimEndedEvent Parms{};

	Parms.Widget_0 = Widget_0;
	Parms.Skipped = Skipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mannequin_WinnerScreen_GunFight.BP_Mannequin_WinnerScreen_GunFight_C.InitFromCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mannequin_WinnerScreen_GunFight_C::InitFromCharacter(class AHumanCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_WinnerScreen_GunFight_C", "InitFromCharacter");

	Params::BP_Mannequin_WinnerScreen_GunFight_C_InitFromCharacter Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mannequin_WinnerScreen_GunFight.BP_Mannequin_WinnerScreen_GunFight_C.StartScoreAdditionWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeToFill                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mannequin_WinnerScreen_GunFight_C::StartScoreAdditionWidget(float TimeToFill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_WinnerScreen_GunFight_C", "StartScoreAdditionWidget");

	Params::BP_Mannequin_WinnerScreen_GunFight_C_StartScoreAdditionWidget Parms{};

	Parms.TimeToFill = TimeToFill;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mannequin_WinnerScreen_GunFight.BP_Mannequin_WinnerScreen_GunFight_C.SkipScoreAdditionWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Mannequin_WinnerScreen_GunFight_C::SkipScoreAdditionWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_WinnerScreen_GunFight_C", "SkipScoreAdditionWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Mannequin_WinnerScreen_GunFight.BP_Mannequin_WinnerScreen_GunFight_C.GetIsCurrentlyAnimatingScore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mannequin_WinnerScreen_GunFight_C::GetIsCurrentlyAnimatingScore(bool* IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_WinnerScreen_GunFight_C", "GetIsCurrentlyAnimatingScore");

	Params::BP_Mannequin_WinnerScreen_GunFight_C_GetIsCurrentlyAnimatingScore Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;
}


// Function BP_Mannequin_WinnerScreen_GunFight.BP_Mannequin_WinnerScreen_GunFight_C.SetScoreWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mannequin_WinnerScreen_GunFight_C::SetScoreWidgetVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_WinnerScreen_GunFight_C", "SetScoreWidgetVisibility");

	Params::BP_Mannequin_WinnerScreen_GunFight_C_SetScoreWidgetVisibility Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mannequin_WinnerScreen_GunFight.BP_Mannequin_WinnerScreen_GunFight_C.InitializeScoreWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasMVP                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mannequin_WinnerScreen_GunFight_C::InitializeScoreWidget(bool bWasMVP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_WinnerScreen_GunFight_C", "InitializeScoreWidget");

	Params::BP_Mannequin_WinnerScreen_GunFight_C_InitializeScoreWidget Parms{};

	Parms.bWasMVP = bWasMVP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mannequin_WinnerScreen_GunFight.BP_Mannequin_WinnerScreen_GunFight_C.InitVariables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_GunFightStatistics       Statistics_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   TeamIndex_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   BoostCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mannequin_WinnerScreen_GunFight_C::InitVariables(const struct FStruct_GunFightStatistics& Statistics_0, int32 TeamIndex_0, int32 BoostCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_WinnerScreen_GunFight_C", "InitVariables");

	Params::BP_Mannequin_WinnerScreen_GunFight_C_InitVariables Parms{};

	Parms.Statistics_0 = std::move(Statistics_0);
	Parms.TeamIndex_0 = TeamIndex_0;
	Parms.BoostCount = BoostCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Mannequin_WinnerScreen_GunFight.BP_Mannequin_WinnerScreen_GunFight_C.ToggleScoreWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Mannequin_WinnerScreen_GunFight_C::ToggleScoreWidgetVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Mannequin_WinnerScreen_GunFight_C", "ToggleScoreWidgetVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

