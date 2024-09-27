#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GSC_TeamManager

#include "Basic.hpp"

#include "BP_GSC_TeamManager_classes.hpp"
#include "BP_GSC_TeamManager_parameters.hpp"


namespace SDK
{

// Function BP_GSC_TeamManager.BP_GSC_TeamManager_C.Player Joined Team__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_GSC_Team_C*                   Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_Teams_C*          Player_State                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GSC_TeamManager_C::Player_Joined_Team__DelegateSignature(class UBP_GSC_Team_C* Team, class ABP_PlayerState_Teams_C* Player_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_TeamManager_C", "Player Joined Team__DelegateSignature");

	Params::BP_GSC_TeamManager_C_Player_Joined_Team__DelegateSignature Parms{};

	Parms.Team = Team;
	Parms.Player_State = Player_State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSC_TeamManager.BP_GSC_TeamManager_C.Player Left Team__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_GSC_Team_C*                   Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_Teams_C*          Player_State                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GSC_TeamManager_C::Player_Left_Team__DelegateSignature(class UBP_GSC_Team_C* Team, class ABP_PlayerState_Teams_C* Player_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_TeamManager_C", "Player Left Team__DelegateSignature");

	Params::BP_GSC_TeamManager_C_Player_Left_Team__DelegateSignature Parms{};

	Parms.Team = Team;
	Parms.Player_State = Player_State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSC_TeamManager.BP_GSC_TeamManager_C.ExecuteUbergraph_BP_GSC_TeamManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GSC_TeamManager_C::ExecuteUbergraph_BP_GSC_TeamManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_TeamManager_C", "ExecuteUbergraph_BP_GSC_TeamManager");

	Params::BP_GSC_TeamManager_C_ExecuteUbergraph_BP_GSC_TeamManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSC_TeamManager.BP_GSC_TeamManager_C.SetupTeams_Server
// (BlueprintCallable, BlueprintEvent)

void UBP_GSC_TeamManager_C::SetupTeams_Server()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_TeamManager_C", "SetupTeams_Server");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GSC_TeamManager.BP_GSC_TeamManager_C.Assign Sides to Teams
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Round                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GSC_TeamManager_C::Assign_Sides_to_Teams(int32 Round)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_TeamManager_C", "Assign Sides to Teams");

	Params::BP_GSC_TeamManager_C_Assign_Sides_to_Teams Parms{};

	Parms.Round = Round;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSC_TeamManager.BP_GSC_TeamManager_C.Player Leaving
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_Teams_C*     Leaving_Player                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GSC_TeamManager_C::Player_Leaving(class ABP_PlayerController_Teams_C* Leaving_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_TeamManager_C", "Player Leaving");

	Params::BP_GSC_TeamManager_C_Player_Leaving Parms{};

	Parms.Leaving_Player = Leaving_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSC_TeamManager.BP_GSC_TeamManager_C.New Player Joining
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_Teams_C*     New_Player                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GSC_TeamManager_C::New_Player_Joining(class ABP_PlayerController_Teams_C* New_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_TeamManager_C", "New Player Joining");

	Params::BP_GSC_TeamManager_C_New_Player_Joining Parms{};

	Parms.New_Player = New_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSC_TeamManager.BP_GSC_TeamManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_GSC_TeamManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_TeamManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GSC_TeamManager.BP_GSC_TeamManager_C.Add Team
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GSC_Team_C*                   Team                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GSC_TeamManager_C::Add_Team(int32 Size, class UBP_GSC_Team_C** Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_TeamManager_C", "Add Team");

	Params::BP_GSC_TeamManager_C_Add_Team Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

	if (Team != nullptr)
		*Team = Parms.Team;
}


// Function BP_GSC_TeamManager.BP_GSC_TeamManager_C.Find Team for Player
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_Teams_C*     Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GSC_Team_C*                   Team                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GSC_TeamManager_C::Find_Team_for_Player(class ABP_PlayerController_Teams_C* Player, class UBP_GSC_Team_C** Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_TeamManager_C", "Find Team for Player");

	Params::BP_GSC_TeamManager_C_Find_Team_for_Player Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (Team != nullptr)
		*Team = Parms.Team;
}


// Function BP_GSC_TeamManager.BP_GSC_TeamManager_C.Are Teams Set and Full
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Teams_Set_and_Full                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GSC_TeamManager_C::Are_Teams_Set_and_Full(bool* Teams_Set_and_Full)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_TeamManager_C", "Are Teams Set and Full");

	Params::BP_GSC_TeamManager_C_Are_Teams_Set_and_Full Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Teams_Set_and_Full != nullptr)
		*Teams_Set_and_Full = Parms.Teams_Set_and_Full;
}


// Function BP_GSC_TeamManager.BP_GSC_TeamManager_C.Get Teams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UBP_GSC_Team_C*>           Teams_0                                                (Parm, OutParm, ContainsInstancedReference)

void UBP_GSC_TeamManager_C::Get_Teams(TArray<class UBP_GSC_Team_C*>* Teams_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_TeamManager_C", "Get Teams");

	Params::BP_GSC_TeamManager_C_Get_Teams Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Teams_0 != nullptr)
		*Teams_0 = std::move(Parms.Teams_0);
}

}
