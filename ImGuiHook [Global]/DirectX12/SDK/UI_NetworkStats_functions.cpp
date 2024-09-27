#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_NetworkStats

#include "Basic.hpp"

#include "UI_NetworkStats_classes.hpp"
#include "UI_NetworkStats_parameters.hpp"


namespace SDK
{

// Function UI_NetworkStats.UI_NetworkStats_C.ExecuteUbergraph_UI_NetworkStats
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_NetworkStats_C::ExecuteUbergraph_UI_NetworkStats(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_NetworkStats_C", "ExecuteUbergraph_UI_NetworkStats");

	Params::UI_NetworkStats_C_ExecuteUbergraph_UI_NetworkStats Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_NetworkStats.UI_NetworkStats_C.UpdateTexts
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             LagText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             BandwidthInText                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             BandwidthOutText                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             LossInText                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             LossOutText                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_NetworkStats_C::UpdateTexts(const class FText& LagText, const class FText& BandwidthInText, const class FText& BandwidthOutText, const class FText& LossInText, const class FText& LossOutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_NetworkStats_C", "UpdateTexts");

	Params::UI_NetworkStats_C_UpdateTexts Parms{};

	Parms.LagText = std::move(LagText);
	Parms.BandwidthInText = std::move(BandwidthInText);
	Parms.BandwidthOutText = std::move(BandwidthOutText);
	Parms.LossInText = std::move(LossInText);
	Parms.LossOutText = std::move(LossOutText);

	UObject::ProcessEvent(Func, &Parms);
}

}
