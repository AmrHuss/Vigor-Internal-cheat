#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OpenableExitVisuals

#include "Basic.hpp"

#include "BP_OpenableExitVisuals_classes.hpp"
#include "BP_OpenableExitVisuals_parameters.hpp"


namespace SDK
{

// Function BP_OpenableExitVisuals.BP_OpenableExitVisuals_C.Exit Closed
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_OpenableExitVisuals_C::Exit_Closed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitVisuals_C", "Exit Closed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OpenableExitVisuals.BP_OpenableExitVisuals_C.Exit Opened
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_OpenableExitVisuals_C::Exit_Opened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitVisuals_C", "Exit Opened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OpenableExitVisuals.BP_OpenableExitVisuals_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OpenableExitVisuals_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitVisuals_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_OpenableExitVisuals.BP_OpenableExitVisuals_C.ExecuteUbergraph_BP_OpenableExitVisuals
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OpenableExitVisuals_C::ExecuteUbergraph_BP_OpenableExitVisuals(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OpenableExitVisuals_C", "ExecuteUbergraph_BP_OpenableExitVisuals");

	Params::BP_OpenableExitVisuals_C_ExecuteUbergraph_BP_OpenableExitVisuals Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

