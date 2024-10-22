#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mutators_AllThreat_Debug

#include "Basic.hpp"

#include "UI_Mutators_AllThreat_Debug_classes.hpp"
#include "UI_Mutators_AllThreat_Debug_parameters.hpp"


namespace SDK
{

// Function UI_Mutators_AllThreat_Debug.UI_Mutators_AllThreat_Debug_C.ExecuteUbergraph_UI_Mutators_AllThreat_Debug
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mutators_AllThreat_Debug_C::ExecuteUbergraph_UI_Mutators_AllThreat_Debug(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mutators_AllThreat_Debug_C", "ExecuteUbergraph_UI_Mutators_AllThreat_Debug");

	Params::UI_Mutators_AllThreat_Debug_C_ExecuteUbergraph_UI_Mutators_AllThreat_Debug Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mutators_AllThreat_Debug.UI_Mutators_AllThreat_Debug_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Mutators_AllThreat_Debug_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mutators_AllThreat_Debug_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Mutators_AllThreat_Debug.UI_Mutators_AllThreat_Debug_C.AddMutator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_Mutator                               Mutator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mutators_AllThreat_Debug_C::AddMutator(E_Mutator Mutator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mutators_AllThreat_Debug_C", "AddMutator");

	Params::UI_Mutators_AllThreat_Debug_C_AddMutator Parms{};

	Parms.Mutator = Mutator;

	UObject::ProcessEvent(Func, &Parms);
}

}

