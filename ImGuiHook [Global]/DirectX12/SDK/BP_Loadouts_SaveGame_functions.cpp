#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Loadouts_SaveGame

#include "Basic.hpp"

#include "BP_Loadouts_SaveGame_classes.hpp"
#include "BP_Loadouts_SaveGame_parameters.hpp"


namespace SDK
{

// Function BP_Loadouts_SaveGame.BP_Loadouts_SaveGame_C.ExecuteUbergraph_BP_Loadouts_SaveGame
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Loadouts_SaveGame_C::ExecuteUbergraph_BP_Loadouts_SaveGame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Loadouts_SaveGame_C", "ExecuteUbergraph_BP_Loadouts_SaveGame");

	Params::BP_Loadouts_SaveGame_C_ExecuteUbergraph_BP_Loadouts_SaveGame Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Loadouts_SaveGame.BP_Loadouts_SaveGame_C.Store New Loadout
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLoadoutInfo                     LoadoutInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                             NewItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Loadouts_SaveGame_C::Store_New_Loadout(const struct FLoadoutInfo& LoadoutInfo, const class FName& NewItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Loadouts_SaveGame_C", "Store New Loadout");

	Params::BP_Loadouts_SaveGame_C_Store_New_Loadout Parms{};

	Parms.LoadoutInfo = std::move(LoadoutInfo);
	Parms.NewItem = NewItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Loadouts_SaveGame.BP_Loadouts_SaveGame_C.Clear Loadouts
// (BlueprintCallable, BlueprintEvent)

void UBP_Loadouts_SaveGame_C::Clear_Loadouts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Loadouts_SaveGame_C", "Clear Loadouts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Loadouts_SaveGame.BP_Loadouts_SaveGame_C.OveriteLoadout
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Dimension_1                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLoadoutInfo                     ItemToFind                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Loadouts_SaveGame_C::OveriteLoadout(int32 Dimension_1, const struct FLoadoutInfo& ItemToFind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Loadouts_SaveGame_C", "OveriteLoadout");

	Params::BP_Loadouts_SaveGame_C_OveriteLoadout Parms{};

	Parms.Dimension_1 = Dimension_1;
	Parms.ItemToFind = std::move(ItemToFind);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Loadouts_SaveGame.BP_Loadouts_SaveGame_C.GetSavedLoadout
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLoadoutInfo                     Loadout                                                (Parm, OutParm)

void UBP_Loadouts_SaveGame_C::GetSavedLoadout(int32 Index_0, struct FLoadoutInfo* Loadout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Loadouts_SaveGame_C", "GetSavedLoadout");

	Params::BP_Loadouts_SaveGame_C_GetSavedLoadout Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Loadout != nullptr)
		*Loadout = std::move(Parms.Loadout);
}

}

