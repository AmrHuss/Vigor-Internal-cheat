#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Elevator_ListItem

#include "Basic.hpp"

#include "UI_Elevator_ListItem_classes.hpp"
#include "UI_Elevator_ListItem_parameters.hpp"


namespace SDK
{

// Function UI_Elevator_ListItem.UI_Elevator_ListItem_C.ExecuteUbergraph_UI_Elevator_ListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Elevator_ListItem_C::ExecuteUbergraph_UI_Elevator_ListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Elevator_ListItem_C", "ExecuteUbergraph_UI_Elevator_ListItem");

	Params::UI_Elevator_ListItem_C_ExecuteUbergraph_UI_Elevator_ListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Elevator_ListItem.UI_Elevator_ListItem_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UUI_Elevator_ListItem_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Elevator_ListItem_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Elevator_ListItem.UI_Elevator_ListItem_C.Set Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Elevator_ListItem_C::Set_Selected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Elevator_ListItem_C", "Set Selected");

	Params::UI_Elevator_ListItem_C_Set_Selected Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

