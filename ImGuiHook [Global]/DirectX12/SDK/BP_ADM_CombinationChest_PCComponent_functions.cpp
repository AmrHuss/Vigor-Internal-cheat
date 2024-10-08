#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_CombinationChest_PCComponent

#include "Basic.hpp"

#include "BP_ADM_CombinationChest_PCComponent_classes.hpp"
#include "BP_ADM_CombinationChest_PCComponent_parameters.hpp"


namespace SDK
{

// Function BP_ADM_CombinationChest_PCComponent.BP_ADM_CombinationChest_PCComponent_C.ExecuteUbergraph_BP_ADM_CombinationChest_PCComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ADM_CombinationChest_PCComponent_C::ExecuteUbergraph_BP_ADM_CombinationChest_PCComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CombinationChest_PCComponent_C", "ExecuteUbergraph_BP_ADM_CombinationChest_PCComponent");

	Params::BP_ADM_CombinationChest_PCComponent_C_ExecuteUbergraph_BP_ADM_CombinationChest_PCComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_CombinationChest_PCComponent.BP_ADM_CombinationChest_PCComponent_C.Open lock UI
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CombinationLock_Component_C*  Lock_component                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ADM_CombinationChest_PCComponent_C::Open_lock_UI(class UBP_CombinationLock_Component_C* Lock_component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CombinationChest_PCComponent_C", "Open lock UI");

	Params::BP_ADM_CombinationChest_PCComponent_C_Open_lock_UI Parms{};

	Parms.Lock_component = Lock_component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_CombinationChest_PCComponent.BP_ADM_CombinationChest_PCComponent_C.Close Lock UI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ADM_CombinationChest_C*       Container                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ADM_CombinationChest_PCComponent_C::Close_Lock_UI(class ABP_ADM_CombinationChest_C* Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CombinationChest_PCComponent_C", "Close Lock UI");

	Params::BP_ADM_CombinationChest_PCComponent_C_Close_Lock_UI Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_CombinationChest_PCComponent.BP_ADM_CombinationChest_PCComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ADM_CombinationChest_PCComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_CombinationChest_PCComponent_C", "ReceiveEndPlay");

	Params::BP_ADM_CombinationChest_PCComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

}

