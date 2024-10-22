#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SwapWeaponsWidget

#include "Basic.hpp"

#include "UI_SwapWeaponsWidget_classes.hpp"
#include "UI_SwapWeaponsWidget_parameters.hpp"


namespace SDK
{

// Function UI_SwapWeaponsWidget.UI_SwapWeaponsWidget_C.ExecuteUbergraph_UI_SwapWeaponsWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SwapWeaponsWidget_C::ExecuteUbergraph_UI_SwapWeaponsWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SwapWeaponsWidget_C", "ExecuteUbergraph_UI_SwapWeaponsWidget");

	Params::UI_SwapWeaponsWidget_C_ExecuteUbergraph_UI_SwapWeaponsWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SwapWeaponsWidget.UI_SwapWeaponsWidget_C.BndEvt__UI_SwapWeaponsWidget_WeaponSlotB_K2Node_ComponentBoundEvent_2_OnChildFocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SwapWeaponsWidget_C::BndEvt__UI_SwapWeaponsWidget_WeaponSlotB_K2Node_ComponentBoundEvent_2_OnChildFocusReceived__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SwapWeaponsWidget_C", "BndEvt__UI_SwapWeaponsWidget_WeaponSlotB_K2Node_ComponentBoundEvent_2_OnChildFocusReceived__DelegateSignature");

	Params::UI_SwapWeaponsWidget_C_BndEvt__UI_SwapWeaponsWidget_WeaponSlotB_K2Node_ComponentBoundEvent_2_OnChildFocusReceived__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SwapWeaponsWidget.UI_SwapWeaponsWidget_C.BndEvt__UI_SwapWeaponsWidget_WeaponSlotA_K2Node_ComponentBoundEvent_1_OnChildFocusReceived__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SwapWeaponsWidget_C::BndEvt__UI_SwapWeaponsWidget_WeaponSlotA_K2Node_ComponentBoundEvent_1_OnChildFocusReceived__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SwapWeaponsWidget_C", "BndEvt__UI_SwapWeaponsWidget_WeaponSlotA_K2Node_ComponentBoundEvent_1_OnChildFocusReceived__DelegateSignature");

	Params::UI_SwapWeaponsWidget_C_BndEvt__UI_SwapWeaponsWidget_WeaponSlotA_K2Node_ComponentBoundEvent_1_OnChildFocusReceived__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SwapWeaponsWidget.UI_SwapWeaponsWidget_C.BndEvt__UI_SwapWeaponsWidget_ActionSwap_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SwapWeaponsWidget_C::BndEvt__UI_SwapWeaponsWidget_ActionSwap_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SwapWeaponsWidget_C", "BndEvt__UI_SwapWeaponsWidget_ActionSwap_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_SwapWeaponsWidget.UI_SwapWeaponsWidget_C.GetWidgetToFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_SwapWeaponsWidget_C::GetWidgetToFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SwapWeaponsWidget_C", "GetWidgetToFocus");

	Params::UI_SwapWeaponsWidget_C_GetWidgetToFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

