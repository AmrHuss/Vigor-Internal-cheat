#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GMComponent_ADM_Debug

#include "Basic.hpp"

#include "BP_GMComponent_ADM_Debug_classes.hpp"
#include "BP_GMComponent_ADM_Debug_parameters.hpp"


namespace SDK
{

// Function BP_GMComponent_ADM_Debug.BP_GMComponent_ADM_Debug_C.ExecuteUbergraph_BP_GMComponent_ADM_Debug
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_Debug_C::ExecuteUbergraph_BP_GMComponent_ADM_Debug(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_Debug_C", "ExecuteUbergraph_BP_GMComponent_ADM_Debug");

	Params::BP_GMComponent_ADM_Debug_C_ExecuteUbergraph_BP_GMComponent_ADM_Debug Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_Debug.BP_GMComponent_ADM_Debug_C.Hide Passive UI of All Modules
// (BlueprintCallable, BlueprintEvent)

void UBP_GMComponent_ADM_Debug_C::Hide_Passive_UI_of_All_Modules()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_Debug_C", "Hide Passive UI of All Modules");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GMComponent_ADM_Debug.BP_GMComponent_ADM_Debug_C.Show Passive UI of All Modules
// (BlueprintCallable, BlueprintEvent)

void UBP_GMComponent_ADM_Debug_C::Show_Passive_UI_of_All_Modules()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_Debug_C", "Show Passive UI of All Modules");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GMComponent_ADM_Debug.BP_GMComponent_ADM_Debug_C.Drop All Air Drops
// (BlueprintCallable, BlueprintEvent)

void UBP_GMComponent_ADM_Debug_C::Drop_All_Air_Drops()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_Debug_C", "Drop All Air Drops");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GMComponent_ADM_Debug.BP_GMComponent_ADM_Debug_C.Remove Module
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_GSComponent_ADM_C*            Module                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_Debug_C::Remove_Module(class UBP_GSComponent_ADM_C* Module)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_Debug_C", "Remove Module");

	Params::BP_GMComponent_ADM_Debug_C_Remove_Module Parms{};

	Parms.Module = Module;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_Debug.BP_GMComponent_ADM_Debug_C.Add Module
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Module_Type                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_Debug_C::Add_Module(class UClass* Module_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_Debug_C", "Add Module");

	Params::BP_GMComponent_ADM_Debug_C_Add_Module Parms{};

	Parms.Module_Type = Module_Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_Debug.BP_GMComponent_ADM_Debug_C.Initialize Component
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_GMComponent_ADM_Debug_C::Initialize_Component()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_Debug_C", "Initialize Component");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GMComponent_ADM_Debug.BP_GMComponent_ADM_Debug_C.Player Closed Debug UI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_AirDropModular_C*Player_Controller                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_Debug_C::Player_Closed_Debug_UI(class ABP_PlayerController_AirDropModular_C* Player_Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_Debug_C", "Player Closed Debug UI");

	Params::BP_GMComponent_ADM_Debug_C_Player_Closed_Debug_UI Parms{};

	Parms.Player_Controller = Player_Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_Debug.BP_GMComponent_ADM_Debug_C.Player Opened Debug UI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_AirDropModular_C*Player_Controller                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_Debug_C::Player_Opened_Debug_UI(class ABP_PlayerController_AirDropModular_C* Player_Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_Debug_C", "Player Opened Debug UI");

	Params::BP_GMComponent_ADM_Debug_C_Player_Opened_Debug_UI Parms{};

	Parms.Player_Controller = Player_Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_Debug.BP_GMComponent_ADM_Debug_C.Game Mode Toggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Game_Mode_Is_Running                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GMComponent_ADM_Debug_C::Game_Mode_Toggled(bool Game_Mode_Is_Running)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_Debug_C", "Game Mode Toggled");

	Params::BP_GMComponent_ADM_Debug_C_Game_Mode_Toggled Parms{};

	Parms.Game_Mode_Is_Running = Game_Mode_Is_Running;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_Debug.BP_GMComponent_ADM_Debug_C.Toggle Game Mode
// (BlueprintCallable, BlueprintEvent)

void UBP_GMComponent_ADM_Debug_C::Toggle_Game_Mode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_Debug_C", "Toggle Game Mode");

	UObject::ProcessEvent(Func, nullptr);
}

}
