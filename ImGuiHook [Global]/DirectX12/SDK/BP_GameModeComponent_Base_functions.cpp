#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameModeComponent_Base

#include "Basic.hpp"

#include "BP_GameModeComponent_Base_classes.hpp"
#include "BP_GameModeComponent_Base_parameters.hpp"


namespace SDK
{

// Function BP_GameModeComponent_Base.BP_GameModeComponent_Base_C.ExecuteUbergraph_BP_GameModeComponent_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GameModeComponent_Base_C::ExecuteUbergraph_BP_GameModeComponent_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeComponent_Base_C", "ExecuteUbergraph_BP_GameModeComponent_Base");

	Params::BP_GameModeComponent_Base_C_ExecuteUbergraph_BP_GameModeComponent_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameModeComponent_Base.BP_GameModeComponent_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GameModeComponent_Base_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeComponent_Base_C", "ReceiveEndPlay");

	Params::BP_GameModeComponent_Base_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameModeComponent_Base.BP_GameModeComponent_Base_C.Match Has Started
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_GameModeComponent_Base_C::Match_Has_Started()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeComponent_Base_C", "Match Has Started");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameModeComponent_Base.BP_GameModeComponent_Base_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_GameModeComponent_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameModeComponent_Base_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
