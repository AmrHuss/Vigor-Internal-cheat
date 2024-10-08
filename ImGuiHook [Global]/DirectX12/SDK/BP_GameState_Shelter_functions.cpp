#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameState_Shelter

#include "Basic.hpp"

#include "BP_GameState_Shelter_classes.hpp"
#include "BP_GameState_Shelter_parameters.hpp"


namespace SDK
{

// Function BP_GameState_Shelter.BP_GameState_Shelter_C.ExecuteUbergraph_BP_GameState_Shelter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Shelter_C::ExecuteUbergraph_BP_GameState_Shelter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Shelter_C", "ExecuteUbergraph_BP_GameState_Shelter");

	Params::BP_GameState_Shelter_C_ExecuteUbergraph_BP_GameState_Shelter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_Shelter.BP_GameState_Shelter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameState_Shelter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Shelter_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Shelter.BP_GameState_Shelter_C.GetGameModeStringName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           StringName                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_GameState_Shelter_C::GetGameModeStringName(class FString* StringName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Shelter_C", "GetGameModeStringName");

	Params::BP_GameState_Shelter_C_GetGameModeStringName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StringName != nullptr)
		*StringName = std::move(Parms.StringName);
}

}

