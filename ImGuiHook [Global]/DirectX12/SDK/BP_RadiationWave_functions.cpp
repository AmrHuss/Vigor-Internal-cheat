#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RadiationWave

#include "Basic.hpp"

#include "BP_RadiationWave_classes.hpp"
#include "BP_RadiationWave_parameters.hpp"


namespace SDK
{

// Function BP_RadiationWave.BP_RadiationWave_C.Radiation Wave Activated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_RadiationWave_C::Radiation_Wave_Activated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadiationWave_C", "Radiation Wave Activated__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RadiationWave.BP_RadiationWave_C.ExecuteUbergraph_BP_RadiationWave
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RadiationWave_C::ExecuteUbergraph_BP_RadiationWave(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadiationWave_C", "ExecuteUbergraph_BP_RadiationWave");

	Params::BP_RadiationWave_C_ExecuteUbergraph_BP_RadiationWave Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RadiationWave.BP_RadiationWave_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RadiationWave_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadiationWave_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RadiationWave.BP_RadiationWave_C.Set New Transform
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       New_Transform                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ABP_RadiationWave_C::Set_New_Transform(const struct FTransform& New_Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadiationWave_C", "Set New Transform");

	Params::BP_RadiationWave_C_Set_New_Transform Parms{};

	Parms.New_Transform = std::move(New_Transform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RadiationWave.BP_RadiationWave_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RadiationWave_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadiationWave_C", "ReceiveTick");

	Params::BP_RadiationWave_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RadiationWave.BP_RadiationWave_C.GetRadiationGradient
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Gradient                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RadiationWave_C::GetRadiationGradient(struct FVector* Gradient)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadiationWave_C", "GetRadiationGradient");

	Params::BP_RadiationWave_C_GetRadiationGradient Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Gradient != nullptr)
		*Gradient = std::move(Parms.Gradient);
}


// Function BP_RadiationWave.BP_RadiationWave_C.GetWaveLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RadiationWave_C::GetWaveLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadiationWave_C", "GetWaveLocation");

	Params::BP_RadiationWave_C_GetWaveLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_RadiationWave.BP_RadiationWave_C.BeginRadiationWave
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RadiationWave_C::BeginRadiationWave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadiationWave_C", "BeginRadiationWave");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RadiationWave.BP_RadiationWave_C.GetRadiationAtLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RadsPerSecond                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RadiationWave_C::GetRadiationAtLocation(const struct FVector& Location, float* RadsPerSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadiationWave_C", "GetRadiationAtLocation");

	Params::BP_RadiationWave_C_GetRadiationAtLocation Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);

	if (RadsPerSecond != nullptr)
		*RadsPerSecond = Parms.RadsPerSecond;
}


// Function BP_RadiationWave.BP_RadiationWave_C.GetStartLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RadiationWave_C::GetStartLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadiationWave_C", "GetStartLocation");

	Params::BP_RadiationWave_C_GetStartLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_RadiationWave.BP_RadiationWave_C.OnRep_bActive
// (BlueprintCallable, BlueprintEvent)

void ABP_RadiationWave_C::OnRep_bActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RadiationWave_C", "OnRep_bActive");

	UObject::ProcessEvent(Func, nullptr);
}

}
