#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RadiationGrenade_Consumable

#include "Basic.hpp"

#include "BP_RadiationGrenade_Consumable_classes.hpp"
#include "BP_RadiationGrenade_Consumable_parameters.hpp"


namespace SDK
{

// Function BP_RadiationGrenade_Consumable.BP_RadiationGrenade_Consumable_C.ExecuteUbergraph_BP_RadiationGrenade_Consumable
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RadiationGrenade_Consumable_C::ExecuteUbergraph_BP_RadiationGrenade_Consumable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadiationGrenade_Consumable_C", "ExecuteUbergraph_BP_RadiationGrenade_Consumable");

	Params::BP_RadiationGrenade_Consumable_C_ExecuteUbergraph_BP_RadiationGrenade_Consumable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RadiationGrenade_Consumable.BP_RadiationGrenade_Consumable_C.PlayMeshThrowAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RadiationGrenade_Consumable_C::PlayMeshThrowAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadiationGrenade_Consumable_C", "PlayMeshThrowAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RadiationGrenade_Consumable.BP_RadiationGrenade_Consumable_C.PlayMeshThrowAnim
// (BlueprintCallable, BlueprintEvent)

void ABP_RadiationGrenade_Consumable_C::PlayMeshThrowAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadiationGrenade_Consumable_C", "PlayMeshThrowAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

