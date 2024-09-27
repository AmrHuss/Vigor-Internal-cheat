#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PCComponent_ADM_PostDrop_Simple

#include "Basic.hpp"

#include "BP_PCComponent_ADM_PostDrop_Simple_classes.hpp"
#include "BP_PCComponent_ADM_PostDrop_Simple_parameters.hpp"


namespace SDK
{

// Function BP_PCComponent_ADM_PostDrop_Simple.BP_PCComponent_ADM_PostDrop_Simple_C.ExecuteUbergraph_BP_PCComponent_ADM_PostDrop_Simple
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PCComponent_ADM_PostDrop_Simple_C::ExecuteUbergraph_BP_PCComponent_ADM_PostDrop_Simple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PostDrop_Simple_C", "ExecuteUbergraph_BP_PCComponent_ADM_PostDrop_Simple");

	Params::BP_PCComponent_ADM_PostDrop_Simple_C_ExecuteUbergraph_BP_PCComponent_ADM_PostDrop_Simple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_PostDrop_Simple.BP_PCComponent_ADM_PostDrop_Simple_C.Send Container Looted Analytics Event
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AirDropContainer_Base_C*      Air_Drop_Container                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PCComponent_ADM_PostDrop_Simple_C::Send_Container_Looted_Analytics_Event(class ABP_AirDropContainer_Base_C* Air_Drop_Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_PostDrop_Simple_C", "Send Container Looted Analytics Event");

	Params::BP_PCComponent_ADM_PostDrop_Simple_C_Send_Container_Looted_Analytics_Event Parms{};

	Parms.Air_Drop_Container = Air_Drop_Container;

	UObject::ProcessEvent(Func, &Parms);
}

}
