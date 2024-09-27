#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameInfo_Scoreboard

#include "Basic.hpp"

#include "UI_GameInfo_Scoreboard_classes.hpp"
#include "UI_GameInfo_Scoreboard_parameters.hpp"


namespace SDK
{

// Function UI_GameInfo_Scoreboard.UI_GameInfo_Scoreboard_C.ExecuteUbergraph_UI_GameInfo_Scoreboard
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameInfo_Scoreboard_C::ExecuteUbergraph_UI_GameInfo_Scoreboard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameInfo_Scoreboard_C", "ExecuteUbergraph_UI_GameInfo_Scoreboard");

	Params::UI_GameInfo_Scoreboard_C_ExecuteUbergraph_UI_GameInfo_Scoreboard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameInfo_Scoreboard.UI_GameInfo_Scoreboard_C.OnSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   NewIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OldIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameInfo_Scoreboard_C::OnSelectionChanged(int32 NewIndex, int32 OldIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameInfo_Scoreboard_C", "OnSelectionChanged");

	Params::UI_GameInfo_Scoreboard_C_OnSelectionChanged Parms{};

	Parms.NewIndex = NewIndex;
	Parms.OldIndex = OldIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameInfo_Scoreboard.UI_GameInfo_Scoreboard_C.OnTabItemClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameInfo_Scoreboard_C::OnTabItemClicked(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameInfo_Scoreboard_C", "OnTabItemClicked");

	Params::UI_GameInfo_Scoreboard_C_OnTabItemClicked Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameInfo_Scoreboard.UI_GameInfo_Scoreboard_C.CreateTabs
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UTabWidget*>               ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UTabWidget*> UUI_GameInfo_Scoreboard_C::CreateTabs() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameInfo_Scoreboard_C", "CreateTabs");

	Params::UI_GameInfo_Scoreboard_C_CreateTabs Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
