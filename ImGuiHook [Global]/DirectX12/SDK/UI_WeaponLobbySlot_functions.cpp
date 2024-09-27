#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_WeaponLobbySlot

#include "Basic.hpp"

#include "UI_WeaponLobbySlot_classes.hpp"
#include "UI_WeaponLobbySlot_parameters.hpp"


namespace SDK
{

// Function UI_WeaponLobbySlot.UI_WeaponLobbySlot_C.ExecuteUbergraph_UI_WeaponLobbySlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WeaponLobbySlot_C::ExecuteUbergraph_UI_WeaponLobbySlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponLobbySlot_C", "ExecuteUbergraph_UI_WeaponLobbySlot");

	Params::UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponLobbySlot.UI_WeaponLobbySlot_C.OnItemChanged
// (Event, Public, BlueprintEvent)

void UUI_WeaponLobbySlot_C::OnItemChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponLobbySlot_C", "OnItemChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponLobbySlot.UI_WeaponLobbySlot_C.BndEvt__InteractButton_K2Node_ComponentBoundEvent_203_OnButtonFocusEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WeaponLobbySlot_C::BndEvt__InteractButton_K2Node_ComponentBoundEvent_203_OnButtonFocusEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponLobbySlot_C", "BndEvt__InteractButton_K2Node_ComponentBoundEvent_203_OnButtonFocusEvent__DelegateSignature");

	Params::UI_WeaponLobbySlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_203_OnButtonFocusEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponLobbySlot.UI_WeaponLobbySlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WeaponLobbySlot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponLobbySlot_C", "Tick");

	Params::UI_WeaponLobbySlot_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponLobbySlot.UI_WeaponLobbySlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_WeaponLobbySlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponLobbySlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponLobbySlot.UI_WeaponLobbySlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_WeaponLobbySlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponLobbySlot_C", "PreConstruct");

	Params::UI_WeaponLobbySlot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponLobbySlot.UI_WeaponLobbySlot_C.UpdateWeaponName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_WeaponLobbySlot_C::UpdateWeaponName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponLobbySlot_C", "UpdateWeaponName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponLobbySlot.UI_WeaponLobbySlot_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_WeaponLobbySlot_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponLobbySlot_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponLobbySlot.UI_WeaponLobbySlot_C.SetCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WeaponLobbySlot_C::SetCount(int32 Count_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponLobbySlot_C", "SetCount");

	Params::UI_WeaponLobbySlot_C_SetCount Parms{};

	Parms.Count_0 = Count_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
