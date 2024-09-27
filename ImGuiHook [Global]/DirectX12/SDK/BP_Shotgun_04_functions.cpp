#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shotgun_04

#include "Basic.hpp"

#include "BP_Shotgun_04_classes.hpp"
#include "BP_Shotgun_04_parameters.hpp"


namespace SDK
{

// Function BP_Shotgun_04.BP_Shotgun_04_C.ExecuteUbergraph_BP_Shotgun_04
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Shotgun_04_C::ExecuteUbergraph_BP_Shotgun_04(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shotgun_04_C", "ExecuteUbergraph_BP_Shotgun_04");

	Params::BP_Shotgun_04_C_ExecuteUbergraph_BP_Shotgun_04 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Shotgun_04.BP_Shotgun_04_C.ReceiveFireShot
// (Event, Public, BlueprintEvent)

void ABP_Shotgun_04_C::ReceiveFireShot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shotgun_04_C", "ReceiveFireShot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Shotgun_04.BP_Shotgun_04_C.OnSystemFinished_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*         PSystem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Shotgun_04_C::OnSystemFinished_Event_0(class UParticleSystemComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shotgun_04_C", "OnSystemFinished_Event_0");

	Params::BP_Shotgun_04_C_OnSystemFinished_Event_0 Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Shotgun_04.BP_Shotgun_04_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Shotgun_04_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shotgun_04_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
