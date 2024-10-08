#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_DetailsPanel

#include "Basic.hpp"

#include "UI_DetailsPanel_classes.hpp"
#include "UI_DetailsPanel_parameters.hpp"


namespace SDK
{

// Function UI_DetailsPanel.UI_DetailsPanel_C.ExecuteUbergraph_UI_DetailsPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DetailsPanel_C::ExecuteUbergraph_UI_DetailsPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DetailsPanel_C", "ExecuteUbergraph_UI_DetailsPanel");

	Params::UI_DetailsPanel_C_ExecuteUbergraph_UI_DetailsPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DetailsPanel.UI_DetailsPanel_C.OnHintClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlameWidget*                     FlameWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DetailsPanel_C::OnHintClosed(class UFlameWidget* FlameWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DetailsPanel_C", "OnHintClosed");

	Params::UI_DetailsPanel_C_OnHintClosed Parms{};

	Parms.FlameWidget = FlameWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DetailsPanel.UI_DetailsPanel_C.BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_DetailsPanel_C::BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DetailsPanel_C", "BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_DetailsPanel.UI_DetailsPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_DetailsPanel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DetailsPanel_C", "PreConstruct");

	Params::UI_DetailsPanel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DetailsPanel.UI_DetailsPanel_C.RightStickUpDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DetailsPanel_C::RightStickUpDown(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DetailsPanel_C", "RightStickUpDown");

	Params::UI_DetailsPanel_C_RightStickUpDown Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DetailsPanel.UI_DetailsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_DetailsPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DetailsPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_DetailsPanel.UI_DetailsPanel_C.SetShelterSlotClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ShelterSlot_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DetailsPanel_C::SetShelterSlotClass(class UClass* ShelterSlot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DetailsPanel_C", "SetShelterSlotClass");

	Params::UI_DetailsPanel_C_SetShelterSlotClass Parms{};

	Parms.ShelterSlot_0 = ShelterSlot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DetailsPanel.UI_DetailsPanel_C.GetStash
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AStash*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AStash* UUI_DetailsPanel_C::GetStash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DetailsPanel_C", "GetStash");

	Params::UI_DetailsPanel_C_GetStash Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_DetailsPanel.UI_DetailsPanel_C.UpdateUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_DetailsPanel_C::UpdateUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DetailsPanel_C", "UpdateUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_DetailsPanel.UI_DetailsPanel_C.CanBuild
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUI_DetailsPanel_C::CanBuild(class UClass* InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DetailsPanel_C", "CanBuild");

	Params::UI_DetailsPanel_C_CanBuild Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_DetailsPanel.UI_DetailsPanel_C.ShowTimeToBuild
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_DetailsPanel_C::ShowTimeToBuild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DetailsPanel_C", "ShowTimeToBuild");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_DetailsPanel.UI_DetailsPanel_C.SetImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_DetailsPanel_C::SetImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DetailsPanel_C", "SetImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_DetailsPanel.UI_DetailsPanel_C.BuildCountdownRichText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             RemainingTime                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Result                                                 (Parm, OutParm)

void UUI_DetailsPanel_C::BuildCountdownRichText(const class FText& RemainingTime, class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DetailsPanel_C", "BuildCountdownRichText");

	Params::UI_DetailsPanel_C_BuildCountdownRichText Parms{};

	Parms.RemainingTime = std::move(RemainingTime);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}

}

