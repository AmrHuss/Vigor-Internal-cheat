#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FlagPole_01

#include "Basic.hpp"

#include "BP_FlagPole_01_classes.hpp"
#include "BP_FlagPole_01_parameters.hpp"


namespace SDK
{

// Function BP_FlagPole_01.BP_FlagPole_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FlagPole_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlagPole_01_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FlagPole_01.BP_FlagPole_01_C.ExecuteUbergraph_BP_FlagPole_01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FlagPole_01_C::ExecuteUbergraph_BP_FlagPole_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FlagPole_01_C", "ExecuteUbergraph_BP_FlagPole_01");

	Params::BP_FlagPole_01_C_ExecuteUbergraph_BP_FlagPole_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

