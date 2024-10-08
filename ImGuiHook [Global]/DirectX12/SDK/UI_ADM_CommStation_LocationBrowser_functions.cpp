#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ADM_CommStation_LocationBrowser

#include "Basic.hpp"

#include "UI_ADM_CommStation_LocationBrowser_classes.hpp"
#include "UI_ADM_CommStation_LocationBrowser_parameters.hpp"


namespace SDK
{

// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.OnNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          NewParam                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_CommStation_LocationBrowser_C::OnNavigation(EUINavigation Navigation_0, class UWidget** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "OnNavigation");

	Params::UI_ADM_CommStation_LocationBrowser_C_OnNavigation Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.VisualizeFocus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_ADM_CommStation_LocationBrowser_C::VisualizeFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "VisualizeFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.MapCornerOffset
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ADM_CommStation_LocationBrowser_C::MapCornerOffset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "MapCornerOffset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.GetMapMinAndMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          WorldMin_0                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          WorldMax_0                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_CommStation_LocationBrowser_C::GetMapMinAndMax(struct FVector* WorldMin_0, struct FVector* WorldMax_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "GetMapMinAndMax");

	Params::UI_ADM_CommStation_LocationBrowser_C_GetMapMinAndMax Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WorldMin_0 != nullptr)
		*WorldMin_0 = std::move(Parms.WorldMin_0);

	if (WorldMax_0 != nullptr)
		*WorldMax_0 = std::move(Parms.WorldMax_0);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.BndEvt__UI_GamepadActionWidget_C_1_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ADM_CommStation_LocationBrowser_C::BndEvt__UI_GamepadActionWidget_C_1_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "BndEvt__UI_GamepadActionWidget_C_1_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ADM_CommStation_LocationBrowser_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.BndEvt__ActionConfirm_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ADM_CommStation_LocationBrowser_C::BndEvt__ActionConfirm_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "BndEvt__ActionConfirm_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.Close Browser
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    With_Sound                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ADM_CommStation_LocationBrowser_C::Close_Browser(bool With_Sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "Close Browser");

	Params::UI_ADM_CommStation_LocationBrowser_C_Close_Browser Parms{};

	Parms.With_Sound = With_Sound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.OnHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_CommStation_LocationBrowser_C::OnHover(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "OnHover");

	Params::UI_ADM_CommStation_LocationBrowser_C_OnHover Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.OnUnhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_CommStation_LocationBrowser_C::OnUnhover(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "OnUnhover");

	Params::UI_ADM_CommStation_LocationBrowser_C_OnUnhover Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.BndEvt__UI_GamepadActionWidget_C_2_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_ADM_CommStation_LocationBrowser_C::BndEvt__UI_GamepadActionWidget_C_2_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "BndEvt__UI_GamepadActionWidget_C_2_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_CommStation_LocationBrowser_C::OnClicked(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "OnClicked");

	Params::UI_ADM_CommStation_LocationBrowser_C_OnClicked Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.SetCurrentIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TargetIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_CommStation_LocationBrowser_C::SetCurrentIndex(int32 TargetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "SetCurrentIndex");

	Params::UI_ADM_CommStation_LocationBrowser_C_SetCurrentIndex Parms{};

	Parms.TargetIndex = TargetIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.Add
// (BlueprintCallable, BlueprintEvent)

void UUI_ADM_CommStation_LocationBrowser_C::Add()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "Add");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.Sub
// (BlueprintCallable, BlueprintEvent)

void UUI_ADM_CommStation_LocationBrowser_C::Sub()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "Sub");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.IncreaseIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_CommStation_LocationBrowser_C::IncreaseIndex(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "IncreaseIndex");

	Params::UI_ADM_CommStation_LocationBrowser_C_IncreaseIndex Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.DecreaseIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_CommStation_LocationBrowser_C::DecreaseIndex(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "DecreaseIndex");

	Params::UI_ADM_CommStation_LocationBrowser_C_DecreaseIndex Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.ExecuteUbergraph_UI_ADM_CommStation_LocationBrowser
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_CommStation_LocationBrowser_C::ExecuteUbergraph_UI_ADM_CommStation_LocationBrowser(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "ExecuteUbergraph_UI_ADM_CommStation_LocationBrowser");

	Params::UI_ADM_CommStation_LocationBrowser_C_ExecuteUbergraph_UI_ADM_CommStation_LocationBrowser Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.Server_ReplicateSound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_ADM_CommStation_LocationBrowser_C::Server_ReplicateSound__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "Server_ReplicateSound__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.PlayChangeAirdropLocationSoundForOthers__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_ADM_CommStation_LocationBrowser_C::PlayChangeAirdropLocationSoundForOthers__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "PlayChangeAirdropLocationSoundForOthers__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ADM_CommStation_LocationBrowser.UI_ADM_CommStation_LocationBrowser_C.Air Drop Location Chosen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ADM_CommStation_C*            Originating_Comm_Station_0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AirDropLocation_C*            Chosen_Drop_Location                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ADM_CommStation_LocationBrowser_C::Air_Drop_Location_Chosen__DelegateSignature(class ABP_ADM_CommStation_C* Originating_Comm_Station_0, class ABP_AirDropLocation_C* Chosen_Drop_Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ADM_CommStation_LocationBrowser_C", "Air Drop Location Chosen__DelegateSignature");

	Params::UI_ADM_CommStation_LocationBrowser_C_Air_Drop_Location_Chosen__DelegateSignature Parms{};

	Parms.Originating_Comm_Station_0 = Originating_Comm_Station_0;
	Parms.Chosen_Drop_Location = Chosen_Drop_Location;

	UObject::ProcessEvent(Func, &Parms);
}

}

