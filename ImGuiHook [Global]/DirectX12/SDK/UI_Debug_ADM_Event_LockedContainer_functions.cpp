#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Debug_ADM_Event_LockedContainer

#include "Basic.hpp"

#include "UI_Debug_ADM_Event_LockedContainer_classes.hpp"
#include "UI_Debug_ADM_Event_LockedContainer_parameters.hpp"


namespace SDK
{

// Function UI_Debug_ADM_Event_LockedContainer.UI_Debug_ADM_Event_LockedContainer_C.ExecuteUbergraph_UI_Debug_ADM_Event_LockedContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Debug_ADM_Event_LockedContainer_C::ExecuteUbergraph_UI_Debug_ADM_Event_LockedContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Debug_ADM_Event_LockedContainer_C", "ExecuteUbergraph_UI_Debug_ADM_Event_LockedContainer");

	Params::UI_Debug_ADM_Event_LockedContainer_C_ExecuteUbergraph_UI_Debug_ADM_Event_LockedContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Debug_ADM_Event_LockedContainer.UI_Debug_ADM_Event_LockedContainer_C.BndEvt__Unlockconvoy_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Debug_ADM_Event_LockedContainer_C::BndEvt__Unlockconvoy_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Debug_ADM_Event_LockedContainer_C", "BndEvt__Unlockconvoy_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	Params::UI_Debug_ADM_Event_LockedContainer_C_BndEvt__Unlockconvoy_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Debug_ADM_Event_LockedContainer.UI_Debug_ADM_Event_LockedContainer_C.BndEvt__SpawnAllConvoysButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Debug_ADM_Event_LockedContainer_C::BndEvt__SpawnAllConvoysButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Debug_ADM_Event_LockedContainer_C", "BndEvt__SpawnAllConvoysButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	Params::UI_Debug_ADM_Event_LockedContainer_C_BndEvt__SpawnAllConvoysButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Debug_ADM_Event_LockedContainer.UI_Debug_ADM_Event_LockedContainer_C.GetWidgetToFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_Debug_ADM_Event_LockedContainer_C::GetWidgetToFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Debug_ADM_Event_LockedContainer_C", "GetWidgetToFocus");

	Params::UI_Debug_ADM_Event_LockedContainer_C_GetWidgetToFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

