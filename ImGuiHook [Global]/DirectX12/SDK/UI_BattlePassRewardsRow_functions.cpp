#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BattlePassRewardsRow

#include "Basic.hpp"

#include "UI_BattlePassRewardsRow_classes.hpp"
#include "UI_BattlePassRewardsRow_parameters.hpp"


namespace SDK
{

// Function UI_BattlePassRewardsRow.UI_BattlePassRewardsRow_C.SlotInRewardsRowClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_BattlePassRewardsRow_C::SlotInRewardsRowClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewardsRow_C", "SlotInRewardsRowClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassRewardsRow.UI_BattlePassRewardsRow_C.ExecuteUbergraph_UI_BattlePassRewardsRow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassRewardsRow_C::ExecuteUbergraph_UI_BattlePassRewardsRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewardsRow_C", "ExecuteUbergraph_UI_BattlePassRewardsRow");

	Params::UI_BattlePassRewardsRow_C_ExecuteUbergraph_UI_BattlePassRewardsRow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewardsRow.UI_BattlePassRewardsRow_C.EventSlotClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassRewardsRow_C::EventSlotClicked(class UButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewardsRow_C", "EventSlotClicked");

	Params::UI_BattlePassRewardsRow_C_EventSlotClicked Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewardsRow.UI_BattlePassRewardsRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_BattlePassRewardsRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewardsRow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassRewardsRow.UI_BattlePassRewardsRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BattlePassRewardsRow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewardsRow_C", "PreConstruct");

	Params::UI_BattlePassRewardsRow_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewardsRow.UI_BattlePassRewardsRow_C.SetRowFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    FocusWasSet                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BattlePassRewardsRow_C::SetRowFocus(bool* FocusWasSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewardsRow_C", "SetRowFocus");

	Params::UI_BattlePassRewardsRow_C_SetRowFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FocusWasSet != nullptr)
		*FocusWasSet = Parms.FocusWasSet;
}


// Function UI_BattlePassRewardsRow.UI_BattlePassRewardsRow_C.SetRowLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLockedIn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BattlePassRewardsRow_C::SetRowLocked(bool IsLockedIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewardsRow_C", "SetRowLocked");

	Params::UI_BattlePassRewardsRow_C_SetRowLocked Parms{};

	Parms.IsLockedIn = IsLockedIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewardsRow.UI_BattlePassRewardsRow_C.FillRewardSlots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_BattlePassLevelRewardFull>RewardsIn                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Aggregate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BattlePassRewardsRow_C::FillRewardSlots(TArray<struct FS_BattlePassLevelRewardFull>& RewardsIn, bool Aggregate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewardsRow_C", "FillRewardSlots");

	Params::UI_BattlePassRewardsRow_C_FillRewardSlots Parms{};

	Parms.RewardsIn = std::move(RewardsIn);
	Parms.Aggregate = Aggregate;

	UObject::ProcessEvent(Func, &Parms);

	RewardsIn = std::move(Parms.RewardsIn);
}


// Function UI_BattlePassRewardsRow.UI_BattlePassRewardsRow_C.GetFirstChild
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          BattlePassItem                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassRewardsRow_C::GetFirstChild(class UWidget** BattlePassItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewardsRow_C", "GetFirstChild");

	Params::UI_BattlePassRewardsRow_C_GetFirstChild Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BattlePassItem != nullptr)
		*BattlePassItem = Parms.BattlePassItem;
}


// Function UI_BattlePassRewardsRow.UI_BattlePassRewardsRow_C.IsDurable
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                           ItemClassIn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDurableOut                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BattlePassRewardsRow_C::IsDurable(class UClass* ItemClassIn, bool* IsDurableOut) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewardsRow_C", "IsDurable");

	Params::UI_BattlePassRewardsRow_C_IsDurable Parms{};

	Parms.ItemClassIn = ItemClassIn;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDurableOut != nullptr)
		*IsDurableOut = Parms.IsDurableOut;
}

}

