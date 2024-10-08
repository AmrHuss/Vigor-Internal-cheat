#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GSComponent_ADM

#include "Basic.hpp"

#include "BP_GSComponent_ADM_classes.hpp"
#include "BP_GSComponent_ADM_parameters.hpp"


namespace SDK
{

// Function BP_GSComponent_ADM.BP_GSComponent_ADM_C.ExecuteUbergraph_BP_GSComponent_ADM
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GSComponent_ADM_C::ExecuteUbergraph_BP_GSComponent_ADM(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSComponent_ADM_C", "ExecuteUbergraph_BP_GSComponent_ADM");

	Params::BP_GSComponent_ADM_C_ExecuteUbergraph_BP_GSComponent_ADM Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSComponent_ADM.BP_GSComponent_ADM_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_GSComponent_ADM_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSComponent_ADM_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GSComponent_ADM.BP_GSComponent_ADM_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GSComponent_ADM_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSComponent_ADM_C", "ReceiveEndPlay");

	Params::BP_GSComponent_ADM_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

}

