#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GSC_Team

#include "Basic.hpp"

#include "BP_GSC_Team_classes.hpp"
#include "BP_GSC_Team_parameters.hpp"


namespace SDK
{

// Function BP_GSC_Team.BP_GSC_Team_C.ExecuteUbergraph_BP_GSC_Team
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GSC_Team_C::ExecuteUbergraph_BP_GSC_Team(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_Team_C", "ExecuteUbergraph_BP_GSC_Team");

	Params::BP_GSC_Team_C_ExecuteUbergraph_BP_GSC_Team Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GSC_Team.BP_GSC_Team_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_GSC_Team_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_Team_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GSC_Team.BP_GSC_Team_C.Get Empty Slot Count
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Empty_Slots                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GSC_Team_C::Get_Empty_Slot_Count(int32* Empty_Slots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_Team_C", "Get Empty Slot Count");

	Params::BP_GSC_Team_C_Get_Empty_Slot_Count Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Empty_Slots != nullptr)
		*Empty_Slots = Parms.Empty_Slots;
}


// Function BP_GSC_Team.BP_GSC_Team_C.Add Player
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_Teams_C*     Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GSC_Team_C::Add_Player(class ABP_PlayerController_Teams_C* Player, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_Team_C", "Add Player");

	Params::BP_GSC_Team_C_Add_Player Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_GSC_Team.BP_GSC_Team_C.Get Member Count
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Members                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GSC_Team_C::Get_Member_Count(int32* Members)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_Team_C", "Get Member Count");

	Params::BP_GSC_Team_C_Get_Member_Count Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Members != nullptr)
		*Members = Parms.Members;
}


// Function BP_GSC_Team.BP_GSC_Team_C.Remove Player
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_Teams_C*     Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_GSC_Team_C::Remove_Player(class ABP_PlayerController_Teams_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_Team_C", "Remove Player");

	Params::BP_GSC_Team_C_Remove_Player Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_GSC_Team.BP_GSC_Team_C.Is Player in Team
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PlayerController_Teams_C*     Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_in_Team                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GSC_Team_C::Is_Player_in_Team(class ABP_PlayerController_Teams_C* Player, bool* Is_in_Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_Team_C", "Is Player in Team");

	Params::BP_GSC_Team_C_Is_Player_in_Team Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_in_Team != nullptr)
		*Is_in_Team = Parms.Is_in_Team;
}


// Function BP_GSC_Team.BP_GSC_Team_C.Get Side
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             Side_0                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GSC_Team_C::Get_Side(class FName* Side_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_Team_C", "Get Side");

	Params::BP_GSC_Team_C_Get_Side Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Side_0 != nullptr)
		*Side_0 = Parms.Side_0;
}


// Function BP_GSC_Team.BP_GSC_Team_C.Set Side
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Side_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GSC_Team_C::Set_Side(class FName Side_0, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_Team_C", "Set Side");

	Params::BP_GSC_Team_C_Set_Side Parms{};

	Parms.Side_0 = Side_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_GSC_Team.BP_GSC_Team_C.Set Team Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TeamIndex_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_GSC_Team_C::Set_Team_Index(int32 TeamIndex_0, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_Team_C", "Set Team Index");

	Params::BP_GSC_Team_C_Set_Team_Index Parms{};

	Parms.TeamIndex_0 = TeamIndex_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function BP_GSC_Team.BP_GSC_Team_C.Get Team Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GSC_Team_C::Get_Team_Index(int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_Team_C", "Get Team Index");

	Params::BP_GSC_Team_C_Get_Team_Index Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}


// Function BP_GSC_Team.BP_GSC_Team_C.Get Members
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class ABP_PlayerState_Teams_C*>  Member_States_0                                        (Parm, OutParm)

void UBP_GSC_Team_C::Get_Members(TArray<class ABP_PlayerState_Teams_C*>* Member_States_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GSC_Team_C", "Get Members");

	Params::BP_GSC_Team_C_Get_Members Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Member_States_0 != nullptr)
		*Member_States_0 = std::move(Parms.Member_States_0);
}

}

