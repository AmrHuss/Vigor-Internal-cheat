#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Cheat_Widget_Base

#include "Basic.hpp"

#include "UI_Cheat_Widget_Base_classes.hpp"
#include "UI_Cheat_Widget_Base_parameters.hpp"


namespace SDK
{

// Function UI_Cheat_Widget_Base.UI_Cheat_Widget_Base_C.ExecuteUbergraph_UI_Cheat_Widget_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Cheat_Widget_Base_C::ExecuteUbergraph_UI_Cheat_Widget_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Widget_Base_C", "ExecuteUbergraph_UI_Cheat_Widget_Base");

	Params::UI_Cheat_Widget_Base_C_ExecuteUbergraph_UI_Cheat_Widget_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Cheat_Widget_Base.UI_Cheat_Widget_Base_C.Initialize cheat widget
// (BlueprintCallable, BlueprintEvent)

void UUI_Cheat_Widget_Base_C::Initialize_cheat_widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Widget_Base_C", "Initialize cheat widget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Cheat_Widget_Base.UI_Cheat_Widget_Base_C.OnCheatMenuHidden
// (BlueprintCallable, BlueprintEvent)

void UUI_Cheat_Widget_Base_C::OnCheatMenuHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Widget_Base_C", "OnCheatMenuHidden");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Cheat_Widget_Base.UI_Cheat_Widget_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Cheat_Widget_Base_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Widget_Base_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Cheat_Widget_Base.UI_Cheat_Widget_Base_C.ReturnToCheatMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Cheat_Widget_Base_C::ReturnToCheatMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Widget_Base_C", "ReturnToCheatMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Cheat_Widget_Base.UI_Cheat_Widget_Base_C.Get Player Controller
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_Script_C*    AsBP_Player_Controller_Script                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Cheat_Widget_Base_C::Get_Player_Controller(class ABP_PlayerController_Script_C** AsBP_Player_Controller_Script)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Widget_Base_C", "Get Player Controller");

	Params::UI_Cheat_Widget_Base_C_Get_Player_Controller Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsBP_Player_Controller_Script != nullptr)
		*AsBP_Player_Controller_Script = Parms.AsBP_Player_Controller_Script;
}

}
