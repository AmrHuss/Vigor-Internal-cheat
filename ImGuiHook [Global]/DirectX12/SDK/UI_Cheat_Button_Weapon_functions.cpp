#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Cheat_Button_Weapon

#include "Basic.hpp"

#include "UI_Cheat_Button_Weapon_classes.hpp"
#include "UI_Cheat_Button_Weapon_parameters.hpp"


namespace SDK
{

// Function UI_Cheat_Button_Weapon.UI_Cheat_Button_Weapon_C.ExecuteUbergraph_UI_Cheat_Button_Weapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Cheat_Button_Weapon_C::ExecuteUbergraph_UI_Cheat_Button_Weapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Button_Weapon_C", "ExecuteUbergraph_UI_Cheat_Button_Weapon");

	Params::UI_Cheat_Button_Weapon_C_ExecuteUbergraph_UI_Cheat_Button_Weapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Cheat_Button_Weapon.UI_Cheat_Button_Weapon_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Cheat_Button_Weapon_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Button_Weapon_C", "BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature");

	Params::UI_Cheat_Button_Weapon_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonFocusEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Cheat_Button_Weapon.UI_Cheat_Button_Weapon_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Cheat_Button_Weapon_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Button_Weapon_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature");

	Params::UI_Cheat_Button_Weapon_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Cheat_Button_Weapon.UI_Cheat_Button_Weapon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Cheat_Button_Weapon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Button_Weapon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Cheat_Button_Weapon.UI_Cheat_Button_Weapon_C.BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Cheat_Button_Weapon_C::BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Button_Weapon_C", "BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	Params::UI_Cheat_Button_Weapon_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Cheat_Button_Weapon.UI_Cheat_Button_Weapon_C.GiveWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Cheat_Button_Weapon_C::GiveWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Button_Weapon_C", "GiveWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Cheat_Button_Weapon.UI_Cheat_Button_Weapon_C.GiveAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AmmoCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Cheat_Button_Weapon_C::GiveAmmo(int32 AmmoCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Button_Weapon_C", "GiveAmmo");

	Params::UI_Cheat_Button_Weapon_C_GiveAmmo Parms{};

	Parms.AmmoCount = AmmoCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Cheat_Button_Weapon.UI_Cheat_Button_Weapon_C.SetBorderColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Cheat_Button_Weapon_C::SetBorderColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Button_Weapon_C", "SetBorderColor");

	Params::UI_Cheat_Button_Weapon_C_SetBorderColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Cheat_Button_Weapon.UI_Cheat_Button_Weapon_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Cheat_Button_Weapon_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Button_Weapon_C", "OnFocusReceived");

	Params::UI_Cheat_Button_Weapon_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

