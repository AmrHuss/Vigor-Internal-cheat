#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShelterRepairBase

#include "Basic.hpp"

#include "BP_ShelterRepairBase_classes.hpp"
#include "BP_ShelterRepairBase_parameters.hpp"


namespace SDK
{

// Function BP_ShelterRepairBase.BP_ShelterRepairBase_C.ExecuteUbergraph_BP_ShelterRepairBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShelterRepairBase_C::ExecuteUbergraph_BP_ShelterRepairBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterRepairBase_C", "ExecuteUbergraph_BP_ShelterRepairBase");

	Params::BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterRepairBase.BP_ShelterRepairBase_C.OnPersistentShelterSaveFileLoaded
// (BlueprintCallable, BlueprintEvent)

void ABP_ShelterRepairBase_C::OnPersistentShelterSaveFileLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterRepairBase_C", "OnPersistentShelterSaveFileLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterRepairBase.BP_ShelterRepairBase_C.UnloadPreviewLevel
// (BlueprintCallable, BlueprintEvent)

void ABP_ShelterRepairBase_C::UnloadPreviewLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterRepairBase_C", "UnloadPreviewLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterRepairBase.BP_ShelterRepairBase_C.OnShelterLevelChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShelterRepairBase_C::OnShelterLevelChanged_Event_0(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterRepairBase_C", "OnShelterLevelChanged_Event_0");

	Params::BP_ShelterRepairBase_C_OnShelterLevelChanged_Event_0 Parms{};

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterRepairBase.BP_ShelterRepairBase_C.LoadLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShelterRepairBase_C::LoadLevel(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterRepairBase_C", "LoadLevel");

	Params::BP_ShelterRepairBase_C_LoadLevel Parms{};

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterRepairBase.BP_ShelterRepairBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShelterRepairBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterRepairBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterRepairBase.BP_ShelterRepairBase_C.UpdateDisplayLevel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShelterRepairBase_C::UpdateDisplayLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterRepairBase_C", "UpdateDisplayLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterRepairBase.BP_ShelterRepairBase_C.LoadLevels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CloudLevel_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ShelterRepairBase_C::LoadLevels(int32 CloudLevel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterRepairBase_C", "LoadLevels");

	Params::BP_ShelterRepairBase_C_LoadLevels Parms{};

	Parms.CloudLevel_0 = CloudLevel_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

