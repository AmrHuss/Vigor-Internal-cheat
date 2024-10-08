#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_BuriedCache_Dummy

#include "Basic.hpp"

#include "BP_ADM_BuriedCache_Dummy_classes.hpp"
#include "BP_ADM_BuriedCache_Dummy_parameters.hpp"


namespace SDK
{

// Function BP_ADM_BuriedCache_Dummy.BP_ADM_BuriedCache_Dummy_C.ExecuteUbergraph_BP_ADM_BuriedCache_Dummy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BuriedCache_Dummy_C::ExecuteUbergraph_BP_ADM_BuriedCache_Dummy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BuriedCache_Dummy_C", "ExecuteUbergraph_BP_ADM_BuriedCache_Dummy");

	Params::BP_ADM_BuriedCache_Dummy_C_ExecuteUbergraph_BP_ADM_BuriedCache_Dummy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ADM_BuriedCache_Dummy.BP_ADM_BuriedCache_Dummy_C.Open Local Inventory UI
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHumanPlayerController*           Browsing_Controller                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_BuriedCache_Dummy_C::Open_Local_Inventory_UI(class AHumanPlayerController* Browsing_Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_BuriedCache_Dummy_C", "Open Local Inventory UI");

	Params::BP_ADM_BuriedCache_Dummy_C_Open_Local_Inventory_UI Parms{};

	Parms.Browsing_Controller = Browsing_Controller;

	UObject::ProcessEvent(Func, &Parms);
}

}

