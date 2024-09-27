#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GMComponent_ADM_PostDrop_Simple

#include "Basic.hpp"

#include "BP_GMComponent_ADM_PostDrop_Simple_classes.hpp"
#include "BP_GMComponent_ADM_PostDrop_Simple_parameters.hpp"


namespace SDK
{

// Function BP_GMComponent_ADM_PostDrop_Simple.BP_GMComponent_ADM_PostDrop_Simple_C.ExecuteUbergraph_BP_GMComponent_ADM_PostDrop_Simple
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_PostDrop_Simple_C::ExecuteUbergraph_BP_GMComponent_ADM_PostDrop_Simple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_PostDrop_Simple_C", "ExecuteUbergraph_BP_GMComponent_ADM_PostDrop_Simple");

	Params::BP_GMComponent_ADM_PostDrop_Simple_C_ExecuteUbergraph_BP_GMComponent_ADM_PostDrop_Simple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_PostDrop_Simple.BP_GMComponent_ADM_PostDrop_Simple_C.Initialize Component
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UBP_GMComponent_ADM_PostDrop_Simple_C::Initialize_Component()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_PostDrop_Simple_C", "Initialize Component");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GMComponent_ADM_PostDrop_Simple.BP_GMComponent_ADM_PostDrop_Simple_C.Container Looted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AirDropContainer_Base_C*      Looted_Container                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Item_Taken                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_PostDrop_Simple_C::Container_Looted(class ABP_AirDropContainer_Base_C* Looted_Container, class UClass* Item_Taken)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_PostDrop_Simple_C", "Container Looted");

	Params::BP_GMComponent_ADM_PostDrop_Simple_C_Container_Looted Parms{};

	Parms.Looted_Container = Looted_Container;
	Parms.Item_Taken = Item_Taken;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_PostDrop_Simple.BP_GMComponent_ADM_PostDrop_Simple_C.Container Touched Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AirDropContainer_Base_C*      Container                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_PostDrop_Simple_C::Container_Touched_Down(class ABP_AirDropContainer_Base_C* Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_PostDrop_Simple_C", "Container Touched Down");

	Params::BP_GMComponent_ADM_PostDrop_Simple_C_Container_Touched_Down Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_PostDrop_Simple.BP_GMComponent_ADM_PostDrop_Simple_C.Container Spawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AirDropContainer_Base_C*      Container                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GMComponent_ADM_PostDrop_Simple_C::Container_Spawned(class ABP_AirDropContainer_Base_C* Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_PostDrop_Simple_C", "Container Spawned");

	Params::BP_GMComponent_ADM_PostDrop_Simple_C_Container_Spawned Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GMComponent_ADM_PostDrop_Simple.BP_GMComponent_ADM_PostDrop_Simple_C.Initialize Bindings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GMComponent_ADM_PostDrop_Simple_C::Initialize_Bindings(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GMComponent_ADM_PostDrop_Simple_C", "Initialize Bindings");

	Params::BP_GMComponent_ADM_PostDrop_Simple_C_Initialize_Bindings Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}

}
