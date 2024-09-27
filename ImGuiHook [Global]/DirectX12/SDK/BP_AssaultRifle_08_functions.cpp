#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AssaultRifle_08

#include "Basic.hpp"

#include "BP_AssaultRifle_08_classes.hpp"
#include "BP_AssaultRifle_08_parameters.hpp"


namespace SDK
{

// Function BP_AssaultRifle_08.BP_AssaultRifle_08_C.ExecuteUbergraph_BP_AssaultRifle_08
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifle_08_C::ExecuteUbergraph_BP_AssaultRifle_08(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifle_08_C", "ExecuteUbergraph_BP_AssaultRifle_08");

	Params::BP_AssaultRifle_08_C_ExecuteUbergraph_BP_AssaultRifle_08 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultRifle_08.BP_AssaultRifle_08_C.ResetTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_AssaultRifle_08_C::ResetTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifle_08_C", "ResetTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultRifle_08.BP_AssaultRifle_08_C.BeginFadeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_AssaultRifle_08_C::BeginFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifle_08_C", "BeginFadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultRifle_08.BP_AssaultRifle_08_C.SimulateMagDrop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AssaultRifle_08_C::SimulateMagDrop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifle_08_C", "SimulateMagDrop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultRifle_08.BP_AssaultRifle_08_C.ResetDroppedMagPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AssaultRifle_08_C::ResetDroppedMagPosition(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifle_08_C", "ResetDroppedMagPosition");

	Params::BP_AssaultRifle_08_C_ResetDroppedMagPosition Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultRifle_08.BP_AssaultRifle_08_C.MagInitiate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AssaultRifle_08_C::MagInitiate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifle_08_C", "MagInitiate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultRifle_08.BP_AssaultRifle_08_C.CheckSkin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTheSame                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AssaultRifle_08_C::CheckSkin(bool* IsTheSame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifle_08_C", "CheckSkin");

	Params::BP_AssaultRifle_08_C_CheckSkin Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsTheSame != nullptr)
		*IsTheSame = Parms.IsTheSame;
}

}
