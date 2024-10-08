#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PCComponent_ADM_Container_Simple

#include "Basic.hpp"

#include "BP_PCComponent_ADM_Container_Simple_classes.hpp"
#include "BP_PCComponent_ADM_Container_Simple_parameters.hpp"


namespace SDK
{

// Function BP_PCComponent_ADM_Container_Simple.BP_PCComponent_ADM_Container_Simple_C.ExecuteUbergraph_BP_PCComponent_ADM_Container_Simple
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PCComponent_ADM_Container_Simple_C::ExecuteUbergraph_BP_PCComponent_ADM_Container_Simple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_Container_Simple_C", "ExecuteUbergraph_BP_PCComponent_ADM_Container_Simple");

	Params::BP_PCComponent_ADM_Container_Simple_C_ExecuteUbergraph_BP_PCComponent_ADM_Container_Simple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PCComponent_ADM_Container_Simple.BP_PCComponent_ADM_Container_Simple_C.Stop
// (BlueprintCallable, BlueprintEvent)

void UBP_PCComponent_ADM_Container_Simple_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_Container_Simple_C", "Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PCComponent_ADM_Container_Simple.BP_PCComponent_ADM_Container_Simple_C.Play Aircraft Anouncement
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_PCComponent_ADM_Container_Simple_C::Play_Aircraft_Anouncement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_Container_Simple_C", "Play Aircraft Anouncement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PCComponent_ADM_Container_Simple.BP_PCComponent_ADM_Container_Simple_C.Spawn And Move Aircraft
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTwoVectors                      IngressAndEgressVectors                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   OverTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          DZ                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           PlaneClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PCComponent_ADM_Container_Simple_C::Spawn_And_Move_Aircraft(const struct FTwoVectors& IngressAndEgressVectors, float OverTime, const struct FVector& DZ, class UClass* PlaneClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PCComponent_ADM_Container_Simple_C", "Spawn And Move Aircraft");

	Params::BP_PCComponent_ADM_Container_Simple_C_Spawn_And_Move_Aircraft Parms{};

	Parms.IngressAndEgressVectors = std::move(IngressAndEgressVectors);
	Parms.OverTime = OverTime;
	Parms.DZ = std::move(DZ);
	Parms.PlaneClass = PlaneClass;

	UObject::ProcessEvent(Func, &Parms);
}

}

