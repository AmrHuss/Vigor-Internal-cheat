#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_OutlandsOnboardingCounterLine

#include "Basic.hpp"

#include "UI_OutlandsOnboardingCounterLine_classes.hpp"
#include "UI_OutlandsOnboardingCounterLine_parameters.hpp"


namespace SDK
{

// Function UI_OutlandsOnboardingCounterLine.UI_OutlandsOnboardingCounterLine_C.ExecuteUbergraph_UI_OutlandsOnboardingCounterLine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OutlandsOnboardingCounterLine_C::ExecuteUbergraph_UI_OutlandsOnboardingCounterLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OutlandsOnboardingCounterLine_C", "ExecuteUbergraph_UI_OutlandsOnboardingCounterLine");

	Params::UI_OutlandsOnboardingCounterLine_C_ExecuteUbergraph_UI_OutlandsOnboardingCounterLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_OutlandsOnboardingCounterLine.UI_OutlandsOnboardingCounterLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_OutlandsOnboardingCounterLine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OutlandsOnboardingCounterLine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
