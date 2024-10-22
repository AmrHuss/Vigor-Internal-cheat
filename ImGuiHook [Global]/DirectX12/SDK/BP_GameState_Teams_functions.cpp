#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameState_Teams

#include "Basic.hpp"

#include "BP_GameState_Teams_classes.hpp"
#include "BP_GameState_Teams_parameters.hpp"


namespace SDK
{

// Function BP_GameState_Teams.BP_GameState_Teams_C.Statistics Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_GameState_Teams_C::Statistics_Changed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Teams_C", "Statistics Changed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Teams.BP_GameState_Teams_C.RoundCleanUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_GameState_Teams_C::RoundCleanUp__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Teams_C", "RoundCleanUp__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Teams.BP_GameState_Teams_C.MatchCleanUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_GameState_Teams_C::MatchCleanUp__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Teams_C", "MatchCleanUp__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Teams.BP_GameState_Teams_C.ExecuteUbergraph_BP_GameState_Teams
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Teams_C::ExecuteUbergraph_BP_GameState_Teams(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Teams_C", "ExecuteUbergraph_BP_GameState_Teams");

	Params::BP_GameState_Teams_C_ExecuteUbergraph_BP_GameState_Teams Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_Teams.BP_GameState_Teams_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameState_Teams_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Teams_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Teams.BP_GameState_Teams_C.SetFriendlyFire
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_GameState_Teams_C::SetFriendlyFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Teams_C", "SetFriendlyFire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Teams.BP_GameState_Teams_C.Handle Match Phase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_TeamsMatchPhase                       Match_Phase_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Teams_C::Handle_Match_Phase(E_TeamsMatchPhase Match_Phase_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Teams_C", "Handle Match Phase");

	Params::BP_GameState_Teams_C_Handle_Match_Phase Parms{};

	Parms.Match_Phase_0 = Match_Phase_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_Teams.BP_GameState_Teams_C.On Match Phase Changed
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_TeamsMatchPhase                       Match_Phase_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Teams_C::On_Match_Phase_Changed(E_TeamsMatchPhase Match_Phase_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Teams_C", "On Match Phase Changed");

	Params::BP_GameState_Teams_C_On_Match_Phase_Changed Parms{};

	Parms.Match_Phase_0 = Match_Phase_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_Teams.BP_GameState_Teams_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GameState_Teams_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Teams_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Teams.BP_GameState_Teams_C.OnRep_Match Phase
// (BlueprintCallable, BlueprintEvent)

void ABP_GameState_Teams_C::OnRep_Match_Phase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Teams_C", "OnRep_Match Phase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GameState_Teams.BP_GameState_Teams_C.ReceivedMatchPhaseReplication
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_TeamsMatchPhase                       Match_Phase_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Teams_C::ReceivedMatchPhaseReplication(E_TeamsMatchPhase Match_Phase_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Teams_C", "ReceivedMatchPhaseReplication");

	Params::BP_GameState_Teams_C_ReceivedMatchPhaseReplication Parms{};

	Parms.Match_Phase_0 = Match_Phase_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GameState_Teams.BP_GameState_Teams_C.GetTeamsGameStateReference
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GameState_Teams_C*            TeamsGS                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameState_Teams_C::GetTeamsGameStateReference(class ABP_GameState_Teams_C** TeamsGS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GameState_Teams_C", "GetTeamsGameStateReference");

	Params::BP_GameState_Teams_C_GetTeamsGameStateReference Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TeamsGS != nullptr)
		*TeamsGS = Parms.TeamsGS;
}

}

