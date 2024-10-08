#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerRowWidget

#include "Basic.hpp"

#include "UI_PlayerRowWidget_classes.hpp"
#include "UI_PlayerRowWidget_parameters.hpp"


namespace SDK
{

// Function UI_PlayerRowWidget.UI_PlayerRowWidget_C.ExecuteUbergraph_UI_PlayerRowWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PlayerRowWidget_C::ExecuteUbergraph_UI_PlayerRowWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerRowWidget_C", "ExecuteUbergraph_UI_PlayerRowWidget");

	Params::UI_PlayerRowWidget_C_ExecuteUbergraph_UI_PlayerRowWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_PlayerRowWidget.UI_PlayerRowWidget_C.InitPlayerTeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PlayerRowWidget_C::InitPlayerTeam(uint8 Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerRowWidget_C", "InitPlayerTeam");

	Params::UI_PlayerRowWidget_C_InitPlayerTeam Parms{};

	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_PlayerRowWidget.UI_PlayerRowWidget_C.InitPlayerName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_PlayerRowWidget_C::InitPlayerName(const class FString& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerRowWidget_C", "InitPlayerName");

	Params::UI_PlayerRowWidget_C_InitPlayerName Parms{};

	Parms.PlayerName = std::move(PlayerName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_PlayerRowWidget.UI_PlayerRowWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PlayerRowWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerRowWidget_C", "Tick");

	Params::UI_PlayerRowWidget_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

