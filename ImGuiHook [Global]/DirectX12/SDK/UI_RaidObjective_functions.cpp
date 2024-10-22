#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_RaidObjective

#include "Basic.hpp"

#include "UI_RaidObjective_classes.hpp"
#include "UI_RaidObjective_parameters.hpp"


namespace SDK
{

// Function UI_RaidObjective.UI_RaidObjective_C.ExecuteUbergraph_UI_RaidObjective
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RaidObjective_C::ExecuteUbergraph_UI_RaidObjective(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RaidObjective_C", "ExecuteUbergraph_UI_RaidObjective");

	Params::UI_RaidObjective_C_ExecuteUbergraph_UI_RaidObjective Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RaidObjective.UI_RaidObjective_C.Destroy Widget
// (BlueprintCallable, BlueprintEvent)

void UUI_RaidObjective_C::Destroy_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RaidObjective_C", "Destroy Widget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_RaidObjective.UI_RaidObjective_C.Player Left Objective
// (BlueprintCallable, BlueprintEvent)

void UUI_RaidObjective_C::Player_Left_Objective()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RaidObjective_C", "Player Left Objective");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_RaidObjective.UI_RaidObjective_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_RaidObjective_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RaidObjective_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_RaidObjective.UI_RaidObjective_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RaidObjective_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RaidObjective_C", "Tick");

	Params::UI_RaidObjective_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RaidObjective.UI_RaidObjective_C.Update UI Values
// (BlueprintCallable, BlueprintEvent)

void UUI_RaidObjective_C::Update_UI_Values()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RaidObjective_C", "Update UI Values");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_RaidObjective.UI_RaidObjective_C.Set Progress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Defender_Progress                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Attacker_Progress                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RaidObjective_C::Set_Progress(float Defender_Progress, float Attacker_Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RaidObjective_C", "Set Progress");

	Params::UI_RaidObjective_C_Set_Progress Parms{};

	Parms.Defender_Progress = Defender_Progress;
	Parms.Attacker_Progress = Attacker_Progress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RaidObjective.UI_RaidObjective_C.Set State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERaidObjectiveState                     Objective_State                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RaidObjective_C::Set_State(ERaidObjectiveState Objective_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RaidObjective_C", "Set State");

	Params::UI_RaidObjective_C_Set_State Parms{};

	Parms.Objective_State = Objective_State;

	UObject::ProcessEvent(Func, &Parms);
}

}

