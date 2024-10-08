#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ChallengesList

#include "Basic.hpp"

#include "UI_ChallengesList_classes.hpp"
#include "UI_ChallengesList_parameters.hpp"


namespace SDK
{

// Function UI_ChallengesList.UI_ChallengesList_C.ExecuteUbergraph_UI_ChallengesList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChallengesList_C::ExecuteUbergraph_UI_ChallengesList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChallengesList_C", "ExecuteUbergraph_UI_ChallengesList");

	Params::UI_ChallengesList_C_ExecuteUbergraph_UI_ChallengesList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChallengesList.UI_ChallengesList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ChallengesList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChallengesList_C", "PreConstruct");

	Params::UI_ChallengesList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChallengesList.UI_ChallengesList_C.OnStateHasChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ChallengeSlot_C*              Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChallengesList_C::OnStateHasChanged(class ABP_ChallengeSlot_C* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChallengesList_C", "OnStateHasChanged");

	Params::UI_ChallengesList_C_OnStateHasChanged Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChallengesList.UI_ChallengesList_C.InitializeChallenges
// (BlueprintCallable, BlueprintEvent)

void UUI_ChallengesList_C::InitializeChallenges()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChallengesList_C", "InitializeChallenges");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ChallengesList.UI_ChallengesList_C.InitializeChallengeListItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ChallengeSlot_C*              ChallengeSlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChallengesList_C::InitializeChallengeListItem(class ABP_ChallengeSlot_C* ChallengeSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChallengesList_C", "InitializeChallengeListItem");

	Params::UI_ChallengesList_C_InitializeChallengeListItem Parms{};

	Parms.ChallengeSlot = ChallengeSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChallengesList.UI_ChallengesList_C.EventChallengeManagerReady
// (BlueprintCallable, BlueprintEvent)

void UUI_ChallengesList_C::EventChallengeManagerReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChallengesList_C", "EventChallengeManagerReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ChallengesList.UI_ChallengesList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ChallengesList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChallengesList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ChallengesList.UI_ChallengesList_C.SlotStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ChallengeSlot_C*              ChallengeSlotIn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ChallengesList_C::SlotStateChanged(class ABP_ChallengeSlot_C* ChallengeSlotIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChallengesList_C", "SlotStateChanged");

	Params::UI_ChallengesList_C_SlotStateChanged Parms{};

	Parms.ChallengeSlotIn = ChallengeSlotIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ChallengesList.UI_ChallengesList_C.ShowRewards
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ChallengesList_C::ShowRewards()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ChallengesList_C", "ShowRewards");

	UObject::ProcessEvent(Func, nullptr);
}

}

