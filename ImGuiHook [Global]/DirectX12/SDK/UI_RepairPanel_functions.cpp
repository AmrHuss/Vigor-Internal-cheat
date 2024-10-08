#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_RepairPanel

#include "Basic.hpp"

#include "UI_RepairPanel_classes.hpp"
#include "UI_RepairPanel_parameters.hpp"


namespace SDK
{

// Function UI_RepairPanel.UI_RepairPanel_C.GetStash
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AStash*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AStash* UUI_RepairPanel_C::GetStash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RepairPanel_C", "GetStash");

	Params::UI_RepairPanel_C_GetStash Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_RepairPanel.UI_RepairPanel_C.UpdateUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_RepairPanel_C::UpdateUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RepairPanel_C", "UpdateUI");

	UObject::ProcessEvent(Func, nullptr);
}

}

