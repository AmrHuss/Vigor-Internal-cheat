#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameState_Matches

#include "Basic.hpp"

#include "BP_GameState_Matches_classes.hpp"
#include "BP_GameState_Matches_parameters.hpp"


namespace SDK
{

// Function BP_GameState_Matches.BP_GameState_Matches_C.ExecuteUbergraph_BP_GameState_Matches
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Matches_C::ExecuteUbergraph_BP_GameState_Matches(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Matches_C", "ExecuteUbergraph_BP_GameState_Matches");

	Params::BP_GameState_Matches_C_ExecuteUbergraph_BP_GameState_Matches Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_Matches.BP_GameState_Matches_C.Add Player Info
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_MatchPlayerInfo               Match_Player_Info                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_GameState_Matches_C::Add_Player_Info(int32 PlayerId, const struct FS_MatchPlayerInfo& Match_Player_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Matches_C", "Add Player Info");

	Params::BP_GameState_Matches_C_Add_Player_Info Parms{};

	Parms.PlayerId = PlayerId;
	Parms.Match_Player_Info = std::move(Match_Player_Info);

	UObject::ProcessEvent(Func, &Parms);
}

}

