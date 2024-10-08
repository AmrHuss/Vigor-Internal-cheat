#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Raid_RoundStartCountdown

#include "Basic.hpp"

#include "UI_Raid_RoundStartCountdown_classes.hpp"
#include "UI_Raid_RoundStartCountdown_parameters.hpp"


namespace SDK
{

// Function UI_Raid_RoundStartCountdown.UI_Raid_RoundStartCountdown_C.ExecuteUbergraph_UI_Raid_RoundStartCountdown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Raid_RoundStartCountdown_C::ExecuteUbergraph_UI_Raid_RoundStartCountdown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_RoundStartCountdown_C", "ExecuteUbergraph_UI_Raid_RoundStartCountdown");

	Params::UI_Raid_RoundStartCountdown_C_ExecuteUbergraph_UI_Raid_RoundStartCountdown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Raid_RoundStartCountdown.UI_Raid_RoundStartCountdown_C.Set PreRound Time
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Time_To_Round_Start                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Raid_RoundStartCountdown_C::Set_PreRound_Time(int32 Time_To_Round_Start)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_RoundStartCountdown_C", "Set PreRound Time");

	Params::UI_Raid_RoundStartCountdown_C_Set_PreRound_Time Parms{};

	Parms.Time_To_Round_Start = Time_To_Round_Start;

	UObject::ProcessEvent(Func, &Parms);
}

}

