#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Raid_SpawnPointSelection

#include "Basic.hpp"

#include "UI_Raid_SpawnPointSelection_classes.hpp"
#include "UI_Raid_SpawnPointSelection_parameters.hpp"


namespace SDK
{

// Function UI_Raid_SpawnPointSelection.UI_Raid_SpawnPointSelection_C.ExecuteUbergraph_UI_Raid_SpawnPointSelection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Raid_SpawnPointSelection_C::ExecuteUbergraph_UI_Raid_SpawnPointSelection(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_SpawnPointSelection_C", "ExecuteUbergraph_UI_Raid_SpawnPointSelection");

	Params::UI_Raid_SpawnPointSelection_C_ExecuteUbergraph_UI_Raid_SpawnPointSelection Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Raid_SpawnPointSelection.UI_Raid_SpawnPointSelection_C.Initialize
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_PlayerStart_Raid_C*>   Start_Points                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FStruct_RaidStatistics>   Attacker_Statistics                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FStruct_RaidStatistics>   Defender_Statistics                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Raid_SpawnPointSelection_C::Initialize(const TArray<class ABP_PlayerStart_Raid_C*>& Start_Points, const TArray<struct FStruct_RaidStatistics>& Attacker_Statistics, const TArray<struct FStruct_RaidStatistics>& Defender_Statistics)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_SpawnPointSelection_C", "Initialize");

	Params::UI_Raid_SpawnPointSelection_C_Initialize Parms{};

	Parms.Start_Points = std::move(Start_Points);
	Parms.Attacker_Statistics = std::move(Attacker_Statistics);
	Parms.Defender_Statistics = std::move(Defender_Statistics);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Raid_SpawnPointSelection.UI_Raid_SpawnPointSelection_C.BndEvt__DirUp_Button_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Raid_SpawnPointSelection_C::BndEvt__DirUp_Button_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_SpawnPointSelection_C", "BndEvt__DirUp_Button_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Raid_SpawnPointSelection.UI_Raid_SpawnPointSelection_C.BndEvt__DirDown_Button_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Raid_SpawnPointSelection_C::BndEvt__DirDown_Button_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_SpawnPointSelection_C", "BndEvt__DirDown_Button_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Raid_SpawnPointSelection.UI_Raid_SpawnPointSelection_C.BndEvt__Select_Button_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Raid_SpawnPointSelection_C::BndEvt__Select_Button_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_SpawnPointSelection_C", "BndEvt__Select_Button_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Raid_SpawnPointSelection.UI_Raid_SpawnPointSelection_C.Populate Spawn List
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_PlayerStart_Raid_C*>   Spawn_Points                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Raid_SpawnPointSelection_C::Populate_Spawn_List(TArray<class ABP_PlayerStart_Raid_C*>& Spawn_Points)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_SpawnPointSelection_C", "Populate Spawn List");

	Params::UI_Raid_SpawnPointSelection_C_Populate_Spawn_List Parms{};

	Parms.Spawn_Points = std::move(Spawn_Points);

	UObject::ProcessEvent(Func, &Parms);

	Spawn_Points = std::move(Parms.Spawn_Points);
}


// Function UI_Raid_SpawnPointSelection.UI_Raid_SpawnPointSelection_C.Select Spawn Point
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Raid_SpawnPointSelection_C::Select_Spawn_Point(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_SpawnPointSelection_C", "Select Spawn Point");

	Params::UI_Raid_SpawnPointSelection_C_Select_Spawn_Point Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Raid_SpawnPointSelection.UI_Raid_SpawnPointSelection_C.Use Selected Spawn Point For Spawn
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Raid_SpawnPointSelection_C::Use_Selected_Spawn_Point_For_Spawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_SpawnPointSelection_C", "Use Selected Spawn Point For Spawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Raid_SpawnPointSelection.UI_Raid_SpawnPointSelection_C.Get Screen Space Location
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Located_Actor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Raid_SpawnPointSelection_C::Get_Screen_Space_Location(class AActor* Located_Actor, struct FVector* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_SpawnPointSelection_C", "Get Screen Space Location");

	Params::UI_Raid_SpawnPointSelection_C_Get_Screen_Space_Location Parms{};

	Parms.Located_Actor = Located_Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);
}


// Function UI_Raid_SpawnPointSelection.UI_Raid_SpawnPointSelection_C.Fill Scoreboard
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_RaidStatistics>   Attackers                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FStruct_RaidStatistics>   Defenders                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Raid_SpawnPointSelection_C::Fill_Scoreboard(TArray<struct FStruct_RaidStatistics>& Attackers, TArray<struct FStruct_RaidStatistics>& Defenders)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Raid_SpawnPointSelection_C", "Fill Scoreboard");

	Params::UI_Raid_SpawnPointSelection_C_Fill_Scoreboard Parms{};

	Parms.Attackers = std::move(Attackers);
	Parms.Defenders = std::move(Defenders);

	UObject::ProcessEvent(Func, &Parms);

	Attackers = std::move(Parms.Attackers);
	Defenders = std::move(Parms.Defenders);
}

}
