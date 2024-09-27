#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VegetationAffector_Player

#include "Basic.hpp"

#include "BP_VegetationAffector_Player_classes.hpp"
#include "BP_VegetationAffector_Player_parameters.hpp"


namespace SDK
{

// Function BP_VegetationAffector_Player.BP_VegetationAffector_Player_C.ExecuteUbergraph_BP_VegetationAffector_Player
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VegetationAffector_Player_C::ExecuteUbergraph_BP_VegetationAffector_Player(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationAffector_Player_C", "ExecuteUbergraph_BP_VegetationAffector_Player");

	Params::BP_VegetationAffector_Player_C_ExecuteUbergraph_BP_VegetationAffector_Player Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VegetationAffector_Player.BP_VegetationAffector_Player_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VegetationAffector_Player_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationAffector_Player_C", "ReceiveTick");

	Params::BP_VegetationAffector_Player_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VegetationAffector_Player.BP_VegetationAffector_Player_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VegetationAffector_Player_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationAffector_Player_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VegetationAffector_Player.BP_VegetationAffector_Player_C.CheckSurfaces
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Hit_actor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VegetationAffector_Player_C::CheckSurfaces(class AActor* Hit_actor, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationAffector_Player_C", "CheckSurfaces");

	Params::BP_VegetationAffector_Player_C_CheckSurfaces Parms{};

	Parms.Hit_actor = Hit_actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_VegetationAffector_Player.BP_VegetationAffector_Player_C.Simulate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VegetationAffector_Player_C::Simulate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationAffector_Player_C", "Simulate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VegetationAffector_Player.BP_VegetationAffector_Player_C.InitMovementComponent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VegetationAffector_Player_C::InitMovementComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationAffector_Player_C", "InitMovementComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VegetationAffector_Player.BP_VegetationAffector_Player_C.IsInContactWithLand
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VegetationAffector_Player_C::IsInContactWithLand(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VegetationAffector_Player_C", "IsInContactWithLand");

	Params::BP_VegetationAffector_Player_C_IsInContactWithLand Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}
