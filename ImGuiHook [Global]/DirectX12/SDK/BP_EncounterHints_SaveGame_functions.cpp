#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EncounterHints_SaveGame

#include "Basic.hpp"

#include "BP_EncounterHints_SaveGame_classes.hpp"
#include "BP_EncounterHints_SaveGame_parameters.hpp"


namespace SDK
{

// Function BP_EncounterHints_SaveGame.BP_EncounterHints_SaveGame_C.ExecuteUbergraph_BP_EncounterHints_SaveGame
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterHints_SaveGame_C::ExecuteUbergraph_BP_EncounterHints_SaveGame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EncounterHints_SaveGame_C", "ExecuteUbergraph_BP_EncounterHints_SaveGame");

	Params::BP_EncounterHints_SaveGame_C_ExecuteUbergraph_BP_EncounterHints_SaveGame Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EncounterHints_SaveGame.BP_EncounterHints_SaveGame_C.RefreshLastResetTimestamp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        LastResetTimestamp_0                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EncounterHints_SaveGame_C::RefreshLastResetTimestamp(const struct FDateTime& LastResetTimestamp_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EncounterHints_SaveGame_C", "RefreshLastResetTimestamp");

	Params::BP_EncounterHints_SaveGame_C_RefreshLastResetTimestamp Parms{};

	Parms.LastResetTimestamp_0 = std::move(LastResetTimestamp_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

