#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameMenu_LastPlayedWith

#include "Basic.hpp"

#include "UI_GameMenu_LastPlayedWith_classes.hpp"
#include "UI_GameMenu_LastPlayedWith_parameters.hpp"


namespace SDK
{

// Function UI_GameMenu_LastPlayedWith.UI_GameMenu_LastPlayedWith_C.ExecuteUbergraph_UI_GameMenu_LastPlayedWith
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameMenu_LastPlayedWith_C::ExecuteUbergraph_UI_GameMenu_LastPlayedWith(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameMenu_LastPlayedWith_C", "ExecuteUbergraph_UI_GameMenu_LastPlayedWith");

	Params::UI_GameMenu_LastPlayedWith_C_ExecuteUbergraph_UI_GameMenu_LastPlayedWith Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameMenu_LastPlayedWith.UI_GameMenu_LastPlayedWith_C.OnBlocklistUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Reason_For_Update                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_GameMenu_LastPlayedWith_C::OnBlocklistUpdate(const class FString& Reason_For_Update)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameMenu_LastPlayedWith_C", "OnBlocklistUpdate");

	Params::UI_GameMenu_LastPlayedWith_C_OnBlocklistUpdate Parms{};

	Parms.Reason_For_Update = std::move(Reason_For_Update);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameMenu_LastPlayedWith.UI_GameMenu_LastPlayedWith_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameMenu_LastPlayedWith_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameMenu_LastPlayedWith_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameMenu_LastPlayedWith.UI_GameMenu_LastPlayedWith_C.UnlockInputs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlameWidget*                     FlameWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameMenu_LastPlayedWith_C::UnlockInputs(class UFlameWidget* FlameWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameMenu_LastPlayedWith_C", "UnlockInputs");

	Params::UI_GameMenu_LastPlayedWith_C_UnlockInputs Parms{};

	Parms.FlameWidget = FlameWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameMenu_LastPlayedWith.UI_GameMenu_LastPlayedWith_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_GameMenu_LastPlayedWith_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameMenu_LastPlayedWith_C", "PreConstruct");

	Params::UI_GameMenu_LastPlayedWith_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameMenu_LastPlayedWith.UI_GameMenu_LastPlayedWith_C.BndEvt__UI_GameMenu_LastPlayedWith_Action_Blocklist_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_GameMenu_LastPlayedWith_C::BndEvt__UI_GameMenu_LastPlayedWith_Action_Blocklist_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameMenu_LastPlayedWith_C", "BndEvt__UI_GameMenu_LastPlayedWith_Action_Blocklist_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameMenu_LastPlayedWith.UI_GameMenu_LastPlayedWith_C.OnResetToDefaultState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_GameMenu_LastPlayedWith_C::OnResetToDefaultState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameMenu_LastPlayedWith_C", "OnResetToDefaultState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameMenu_LastPlayedWith.UI_GameMenu_LastPlayedWith_C.BndEvt__Action_Close_K2Node_ComponentBoundEvent_1_OnClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_GameMenu_LastPlayedWith_C::BndEvt__Action_Close_K2Node_ComponentBoundEvent_1_OnClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameMenu_LastPlayedWith_C", "BndEvt__Action_Close_K2Node_ComponentBoundEvent_1_OnClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameMenu_LastPlayedWith.UI_GameMenu_LastPlayedWith_C.Set visibility of ViewProfile button
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_GameMenu_LastPlayedWith_C::Set_visibility_of_ViewProfile_button(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameMenu_LastPlayedWith_C", "Set visibility of ViewProfile button");

	Params::UI_GameMenu_LastPlayedWith_C_Set_visibility_of_ViewProfile_button Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameMenu_LastPlayedWith.UI_GameMenu_LastPlayedWith_C.BndEvt__ActionViewProfile_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_GameMenu_LastPlayedWith_C::BndEvt__ActionViewProfile_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameMenu_LastPlayedWith_C", "BndEvt__ActionViewProfile_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameMenu_LastPlayedWith.UI_GameMenu_LastPlayedWith_C.asdfasdf
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlameWidget*                     FlameWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameMenu_LastPlayedWith_C::Asdfasdf(class UFlameWidget* FlameWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameMenu_LastPlayedWith_C", "asdfasdf");

	Params::UI_GameMenu_LastPlayedWith_C_Asdfasdf Parms{};

	Parms.FlameWidget = FlameWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameMenu_LastPlayedWith.UI_GameMenu_LastPlayedWith_C.PlayerList Button pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GameMenu_LastPlayedWith_ListItem_C*Pressed_button_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameMenu_LastPlayedWith_C::PlayerList_Button_pressed(class UUI_GameMenu_LastPlayedWith_ListItem_C* Pressed_button_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameMenu_LastPlayedWith_C", "PlayerList Button pressed");

	Params::UI_GameMenu_LastPlayedWith_C_PlayerList_Button_pressed Parms{};

	Parms.Pressed_button_0 = Pressed_button_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameMenu_LastPlayedWith.UI_GameMenu_LastPlayedWith_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameMenu_LastPlayedWith_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameMenu_LastPlayedWith_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameMenu_LastPlayedWith.UI_GameMenu_LastPlayedWith_C.GetWidgetToFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_GameMenu_LastPlayedWith_C::GetWidgetToFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameMenu_LastPlayedWith_C", "GetWidgetToFocus");

	Params::UI_GameMenu_LastPlayedWith_C_GetWidgetToFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

