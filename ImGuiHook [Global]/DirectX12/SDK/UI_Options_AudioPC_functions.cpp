#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Options_AudioPC

#include "Basic.hpp"

#include "UI_Options_AudioPC_classes.hpp"
#include "UI_Options_AudioPC_parameters.hpp"


namespace SDK
{

// Function UI_Options_AudioPC.UI_Options_AudioPC_C.ExecuteUbergraph_UI_Options_AudioPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Options_AudioPC_C::ExecuteUbergraph_UI_Options_AudioPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_AudioPC_C", "ExecuteUbergraph_UI_Options_AudioPC");

	Params::UI_Options_AudioPC_C_ExecuteUbergraph_UI_Options_AudioPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Options_AudioPC.UI_Options_AudioPC_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Options_AudioPC_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_AudioPC_C", "PreConstruct");

	Params::UI_Options_AudioPC_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Options_AudioPC.UI_Options_AudioPC_C.BndEvt__ActionDefault_K2Node_ComponentBoundEvent_2_OnClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Options_AudioPC_C::BndEvt__ActionDefault_K2Node_ComponentBoundEvent_2_OnClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_AudioPC_C", "BndEvt__ActionDefault_K2Node_ComponentBoundEvent_2_OnClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Options_AudioPC.UI_Options_AudioPC_C.BndEvt__EncounterMusicCheckbox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Options_AudioPC_C::BndEvt__EncounterMusicCheckbox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_AudioPC_C", "BndEvt__EncounterMusicCheckbox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UI_Options_AudioPC_C_BndEvt__EncounterMusicCheckbox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Options_AudioPC.UI_Options_AudioPC_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Options_AudioPC_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_AudioPC_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Options_AudioPC.UI_Options_AudioPC_C.BndEvt__ActionClose_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Options_AudioPC_C::BndEvt__ActionClose_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_AudioPC_C", "BndEvt__ActionClose_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Options_AudioPC.UI_Options_AudioPC_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Options_AudioPC_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_AudioPC_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Options_AudioPC.UI_Options_AudioPC_C.InitShelterUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Options_AudioPC_C::InitShelterUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_AudioPC_C", "InitShelterUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Options_AudioPC.UI_Options_AudioPC_C.GetAllPanelWidgets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UPanelWidget*>             ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UPanelWidget*> UUI_Options_AudioPC_C::GetAllPanelWidgets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Options_AudioPC_C", "GetAllPanelWidgets");

	Params::UI_Options_AudioPC_C_GetAllPanelWidgets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

