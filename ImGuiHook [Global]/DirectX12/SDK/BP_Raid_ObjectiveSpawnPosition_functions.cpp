#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Raid_ObjectiveSpawnPosition

#include "Basic.hpp"

#include "BP_Raid_ObjectiveSpawnPosition_classes.hpp"
#include "BP_Raid_ObjectiveSpawnPosition_parameters.hpp"


namespace SDK
{

// Function BP_Raid_ObjectiveSpawnPosition.BP_Raid_ObjectiveSpawnPosition_C.ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Raid_ObjectiveSpawnPosition_C::ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Raid_ObjectiveSpawnPosition_C", "ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition");

	Params::BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Raid_ObjectiveSpawnPosition.BP_Raid_ObjectiveSpawnPosition_C.Deactivate All SpotZones
// (BlueprintCallable, BlueprintEvent)

void ABP_Raid_ObjectiveSpawnPosition_C::Deactivate_All_SpotZones()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Raid_ObjectiveSpawnPosition_C", "Deactivate All SpotZones");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Raid_ObjectiveSpawnPosition.BP_Raid_ObjectiveSpawnPosition_C.SpotZoneOverlapped
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Raid_ObjectiveSpawnPosition_C::SpotZoneOverlapped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Raid_ObjectiveSpawnPosition_C", "SpotZoneOverlapped");

	Params::BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Raid_ObjectiveSpawnPosition.BP_Raid_ObjectiveSpawnPosition_C.Activate All SpotZones
// (BlueprintCallable, BlueprintEvent)

void ABP_Raid_ObjectiveSpawnPosition_C::Activate_All_SpotZones()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Raid_ObjectiveSpawnPosition_C", "Activate All SpotZones");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Raid_ObjectiveSpawnPosition.BP_Raid_ObjectiveSpawnPosition_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Raid_ObjectiveSpawnPosition_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Raid_ObjectiveSpawnPosition_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Raid_ObjectiveSpawnPosition.BP_Raid_ObjectiveSpawnPosition_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Raid_ObjectiveSpawnPosition_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Raid_ObjectiveSpawnPosition_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Raid_ObjectiveSpawnPosition.BP_Raid_ObjectiveSpawnPosition_C.Is Player Attacker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerState*                     PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_Attacker                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Raid_ObjectiveSpawnPosition_C::Is_Player_Attacker(class APlayerState* PlayerState, bool* Is_Attacker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Raid_ObjectiveSpawnPosition_C", "Is Player Attacker");

	Params::BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Attacker != nullptr)
		*Is_Attacker = Parms.Is_Attacker;
}


// Function BP_Raid_ObjectiveSpawnPosition.BP_Raid_ObjectiveSpawnPosition_C.Get All Spot Zones
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Raid_ObjectiveSpawnPosition_C::Get_All_Spot_Zones()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Raid_ObjectiveSpawnPosition_C", "Get All Spot Zones");

	UObject::ProcessEvent(Func, nullptr);
}

}
