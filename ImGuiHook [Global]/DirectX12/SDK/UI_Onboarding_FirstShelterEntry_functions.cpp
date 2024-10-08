#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_FirstShelterEntry

#include "Basic.hpp"

#include "UI_Onboarding_FirstShelterEntry_classes.hpp"
#include "UI_Onboarding_FirstShelterEntry_parameters.hpp"


namespace SDK
{

// Function UI_Onboarding_FirstShelterEntry.UI_Onboarding_FirstShelterEntry_C.ExecuteUbergraph_UI_Onboarding_FirstShelterEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Onboarding_FirstShelterEntry_C::ExecuteUbergraph_UI_Onboarding_FirstShelterEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_FirstShelterEntry_C", "ExecuteUbergraph_UI_Onboarding_FirstShelterEntry");

	Params::UI_Onboarding_FirstShelterEntry_C_ExecuteUbergraph_UI_Onboarding_FirstShelterEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Onboarding_FirstShelterEntry.UI_Onboarding_FirstShelterEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Onboarding_FirstShelterEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_FirstShelterEntry_C", "PreConstruct");

	Params::UI_Onboarding_FirstShelterEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Onboarding_FirstShelterEntry.UI_Onboarding_FirstShelterEntry_C.BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionHoldEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Onboarding_FirstShelterEntry_C::BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionHoldEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_FirstShelterEntry_C", "BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionHoldEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Onboarding_FirstShelterEntry.UI_Onboarding_FirstShelterEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Onboarding_FirstShelterEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Onboarding_FirstShelterEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

