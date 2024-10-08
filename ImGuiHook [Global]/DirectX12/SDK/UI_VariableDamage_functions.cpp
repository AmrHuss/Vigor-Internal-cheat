#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_VariableDamage

#include "Basic.hpp"

#include "UI_VariableDamage_classes.hpp"
#include "UI_VariableDamage_parameters.hpp"


namespace SDK
{

// Function UI_VariableDamage.UI_VariableDamage_C.ExecuteUbergraph_UI_VariableDamage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VariableDamage_C::ExecuteUbergraph_UI_VariableDamage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_VariableDamage_C", "ExecuteUbergraph_UI_VariableDamage");

	Params::UI_VariableDamage_C_ExecuteUbergraph_UI_VariableDamage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_VariableDamage.UI_VariableDamage_C.BndEvt__TipClose_K2Node_ComponentBoundEvent_9_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_VariableDamage_C::BndEvt__TipClose_K2Node_ComponentBoundEvent_9_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_VariableDamage_C", "BndEvt__TipClose_K2Node_ComponentBoundEvent_9_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_VariableDamage.UI_VariableDamage_C.BndEvt__FlameSlider_92_K2Node_ComponentBoundEvent_39_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UUI_VariableDamage_C::BndEvt__FlameSlider_92_K2Node_ComponentBoundEvent_39_OnControllerCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_VariableDamage_C", "BndEvt__FlameSlider_92_K2Node_ComponentBoundEvent_39_OnControllerCaptureEndEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_VariableDamage.UI_VariableDamage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_VariableDamage_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_VariableDamage_C", "PreConstruct");

	Params::UI_VariableDamage_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_VariableDamage.UI_VariableDamage_C.BndEvt__FlameSlider_92_K2Node_ComponentBoundEvent_151_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VariableDamage_C::BndEvt__FlameSlider_92_K2Node_ComponentBoundEvent_151_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_VariableDamage_C", "BndEvt__FlameSlider_92_K2Node_ComponentBoundEvent_151_OnFloatValueChangedEvent__DelegateSignature");

	Params::UI_VariableDamage_C_BndEvt__FlameSlider_92_K2Node_ComponentBoundEvent_151_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_VariableDamage.UI_VariableDamage_C.Get Current Health & Set Slider Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanCharacter*                  Self2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VariableDamage_C::Get_Current_Health___Set_Slider_Value(class AHumanCharacter* Self2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_VariableDamage_C", "Get Current Health & Set Slider Value");

	Params::UI_VariableDamage_C_Get_Current_Health___Set_Slider_Value Parms{};

	Parms.Self2 = Self2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_VariableDamage.UI_VariableDamage_C.Get Selected Damage Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Slider_Value                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_VariableDamage_C::Get_Selected_Damage_Value(float Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_VariableDamage_C", "Get Selected Damage Value");

	Params::UI_VariableDamage_C_Get_Selected_Damage_Value Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_VariableDamage.UI_VariableDamage_C.GetWidgetToFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_VariableDamage_C::GetWidgetToFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_VariableDamage_C", "GetWidgetToFocus");

	Params::UI_VariableDamage_C_GetWidgetToFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

