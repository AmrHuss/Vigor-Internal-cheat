#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SniperRifle_02

#include "Basic.hpp"

#include "BP_SniperRifle_02_classes.hpp"
#include "BP_SniperRifle_02_parameters.hpp"


namespace SDK
{

// Function BP_SniperRifle_02.BP_SniperRifle_02_C.ExecuteUbergraph_BP_SniperRifle_02
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SniperRifle_02_C::ExecuteUbergraph_BP_SniperRifle_02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SniperRifle_02_C", "ExecuteUbergraph_BP_SniperRifle_02");

	Params::BP_SniperRifle_02_C_ExecuteUbergraph_BP_SniperRifle_02 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SniperRifle_02.BP_SniperRifle_02_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SniperRifle_02_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SniperRifle_02_C", "ReceiveTick");

	Params::BP_SniperRifle_02_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SniperRifle_02.BP_SniperRifle_02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SniperRifle_02_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SniperRifle_02_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

