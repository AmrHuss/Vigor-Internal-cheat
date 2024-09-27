#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CheatWidget_ExitTells

#include "Basic.hpp"

#include "UI_CheatWidget_ExitTells_classes.hpp"
#include "UI_CheatWidget_ExitTells_parameters.hpp"


namespace SDK
{

// Function UI_CheatWidget_ExitTells.UI_CheatWidget_ExitTells_C.ExecuteUbergraph_UI_CheatWidget_ExitTells
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CheatWidget_ExitTells_C::ExecuteUbergraph_UI_CheatWidget_ExitTells(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CheatWidget_ExitTells_C", "ExecuteUbergraph_UI_CheatWidget_ExitTells");

	Params::UI_CheatWidget_ExitTells_C_ExecuteUbergraph_UI_CheatWidget_ExitTells Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CheatWidget_ExitTells.UI_CheatWidget_ExitTells_C.BndEvt__UI_GamepadActionWidget_2_K2Node_ComponentBoundEvent_2_OnActionHoldEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CheatWidget_ExitTells_C::BndEvt__UI_GamepadActionWidget_2_K2Node_ComponentBoundEvent_2_OnActionHoldEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CheatWidget_ExitTells_C", "BndEvt__UI_GamepadActionWidget_2_K2Node_ComponentBoundEvent_2_OnActionHoldEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CheatWidget_ExitTells.UI_CheatWidget_ExitTells_C.BndEvt__UI_GamepadActionWidget_1_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CheatWidget_ExitTells_C::BndEvt__UI_GamepadActionWidget_1_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CheatWidget_ExitTells_C", "BndEvt__UI_GamepadActionWidget_1_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CheatWidget_ExitTells.UI_CheatWidget_ExitTells_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CheatWidget_ExitTells_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CheatWidget_ExitTells_C", "Tick");

	Params::UI_CheatWidget_ExitTells_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CheatWidget_ExitTells.UI_CheatWidget_ExitTells_C.RestartBirds
// (BlueprintCallable, BlueprintEvent)

void UUI_CheatWidget_ExitTells_C::RestartBirds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CheatWidget_ExitTells_C", "RestartBirds");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CheatWidget_ExitTells.UI_CheatWidget_ExitTells_C.BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionHoldEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CheatWidget_ExitTells_C::BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionHoldEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CheatWidget_ExitTells_C", "BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionHoldEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CheatWidget_ExitTells.UI_CheatWidget_ExitTells_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CheatWidget_ExitTells_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CheatWidget_ExitTells_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
