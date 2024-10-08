#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Spectator_WatchedPlayer

#include "Basic.hpp"

#include "UI_Spectator_WatchedPlayer_classes.hpp"
#include "UI_Spectator_WatchedPlayer_parameters.hpp"


namespace SDK
{

// Function UI_Spectator_WatchedPlayer.UI_Spectator_WatchedPlayer_C.ExecuteUbergraph_UI_Spectator_WatchedPlayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Spectator_WatchedPlayer_C::ExecuteUbergraph_UI_Spectator_WatchedPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Spectator_WatchedPlayer_C", "ExecuteUbergraph_UI_Spectator_WatchedPlayer");

	Params::UI_Spectator_WatchedPlayer_C_ExecuteUbergraph_UI_Spectator_WatchedPlayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Spectator_WatchedPlayer.UI_Spectator_WatchedPlayer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Spectator_WatchedPlayer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Spectator_WatchedPlayer_C", "PreConstruct");

	Params::UI_Spectator_WatchedPlayer_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Spectator_WatchedPlayer.UI_Spectator_WatchedPlayer_C.SetWachedPlayerName
// (BlueprintCallable, BlueprintEvent)

void UUI_Spectator_WatchedPlayer_C::SetWachedPlayerName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Spectator_WatchedPlayer_C", "SetWachedPlayerName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Spectator_WatchedPlayer.UI_Spectator_WatchedPlayer_C.FormatWatchedPlayerText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_WorldSpectator_C*             WorldSpectator                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             WatchedPlayerText                                      (Parm, OutParm)

void UUI_Spectator_WatchedPlayer_C::FormatWatchedPlayerText(class ABP_WorldSpectator_C* WorldSpectator, class FText* WatchedPlayerText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Spectator_WatchedPlayer_C", "FormatWatchedPlayerText");

	Params::UI_Spectator_WatchedPlayer_C_FormatWatchedPlayerText Parms{};

	Parms.WorldSpectator = WorldSpectator;

	UObject::ProcessEvent(Func, &Parms);

	if (WatchedPlayerText != nullptr)
		*WatchedPlayerText = std::move(Parms.WatchedPlayerText);
}

}

