#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CustomiseSubTab

#include "Basic.hpp"

#include "UI_CustomiseSubTab_classes.hpp"
#include "UI_CustomiseSubTab_parameters.hpp"


namespace SDK
{

// Function UI_CustomiseSubTab.UI_CustomiseSubTab_C.ExecuteUbergraph_UI_CustomiseSubTab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CustomiseSubTab_C::ExecuteUbergraph_UI_CustomiseSubTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CustomiseSubTab_C", "ExecuteUbergraph_UI_CustomiseSubTab");

	Params::UI_CustomiseSubTab_C_ExecuteUbergraph_UI_CustomiseSubTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CustomiseSubTab.UI_CustomiseSubTab_C.OnResetToDefaultState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_CustomiseSubTab_C::OnResetToDefaultState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CustomiseSubTab_C", "OnResetToDefaultState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CustomiseSubTab.UI_CustomiseSubTab_C.OnSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   NewIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OldIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CustomiseSubTab_C::OnSelectionChanged(int32 NewIndex, int32 OldIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CustomiseSubTab_C", "OnSelectionChanged");

	Params::UI_CustomiseSubTab_C_OnSelectionChanged Parms{};

	Parms.NewIndex = NewIndex;
	Parms.OldIndex = OldIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CustomiseSubTab.UI_CustomiseSubTab_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CustomiseSubTab_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CustomiseSubTab_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CustomiseSubTab.UI_CustomiseSubTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CustomiseSubTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CustomiseSubTab_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CustomiseSubTab.UI_CustomiseSubTab_C.CreateTabs
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UTabWidget*>               ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UTabWidget*> UUI_CustomiseSubTab_C::CreateTabs() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CustomiseSubTab_C", "CreateTabs");

	Params::UI_CustomiseSubTab_C_CreateTabs Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
