#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerLeaderboards_LeaderboardRow

#include "Basic.hpp"

#include "UI_PlayerLeaderboards_LeaderboardRow_classes.hpp"
#include "UI_PlayerLeaderboards_LeaderboardRow_parameters.hpp"


namespace SDK
{

// Function UI_PlayerLeaderboards_LeaderboardRow.UI_PlayerLeaderboards_LeaderboardRow_C.ExecuteUbergraph_UI_PlayerLeaderboards_LeaderboardRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PlayerLeaderboards_LeaderboardRow_C::ExecuteUbergraph_UI_PlayerLeaderboards_LeaderboardRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerLeaderboards_LeaderboardRow_C", "ExecuteUbergraph_UI_PlayerLeaderboards_LeaderboardRow");

	Params::UI_PlayerLeaderboards_LeaderboardRow_C_ExecuteUbergraph_UI_PlayerLeaderboards_LeaderboardRow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_PlayerLeaderboards_LeaderboardRow.UI_PlayerLeaderboards_LeaderboardRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PlayerLeaderboards_LeaderboardRow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerLeaderboards_LeaderboardRow_C", "PreConstruct");

	Params::UI_PlayerLeaderboards_LeaderboardRow_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_PlayerLeaderboards_LeaderboardRow.UI_PlayerLeaderboards_LeaderboardRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PlayerLeaderboards_LeaderboardRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerLeaderboards_LeaderboardRow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

