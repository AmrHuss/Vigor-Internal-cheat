#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SniperRifle_10

#include "Basic.hpp"

#include "BP_SniperRifle_10_classes.hpp"
#include "BP_SniperRifle_10_parameters.hpp"


namespace SDK
{

// Function BP_SniperRifle_10.BP_SniperRifle_10_C.ExecuteUbergraph_BP_SniperRifle_10
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SniperRifle_10_C::ExecuteUbergraph_BP_SniperRifle_10(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SniperRifle_10_C", "ExecuteUbergraph_BP_SniperRifle_10");

	Params::BP_SniperRifle_10_C_ExecuteUbergraph_BP_SniperRifle_10 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SniperRifle_10.BP_SniperRifle_10_C.ResetTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_SniperRifle_10_C::ResetTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SniperRifle_10_C", "ResetTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SniperRifle_10.BP_SniperRifle_10_C.BeginFadeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_SniperRifle_10_C::BeginFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SniperRifle_10_C", "BeginFadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SniperRifle_10.BP_SniperRifle_10_C.SimulateMagDrop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SniperRifle_10_C::SimulateMagDrop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SniperRifle_10_C", "SimulateMagDrop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SniperRifle_10.BP_SniperRifle_10_C.ResetDroppedMagPosition
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SniperRifle_10_C::ResetDroppedMagPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SniperRifle_10_C", "ResetDroppedMagPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SniperRifle_10.BP_SniperRifle_10_C.MagInitiate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SniperRifle_10_C::MagInitiate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SniperRifle_10_C", "MagInitiate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SniperRifle_10.BP_SniperRifle_10_C.CheckSkin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTheSame                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SniperRifle_10_C::CheckSkin(bool* IsTheSame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SniperRifle_10_C", "CheckSkin");

	Params::BP_SniperRifle_10_C_CheckSkin Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsTheSame != nullptr)
		*IsTheSame = Parms.IsTheSame;
}

}
