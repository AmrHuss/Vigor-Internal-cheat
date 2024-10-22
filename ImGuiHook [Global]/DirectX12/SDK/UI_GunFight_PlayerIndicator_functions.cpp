#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GunFight_PlayerIndicator

#include "Basic.hpp"

#include "UI_GunFight_PlayerIndicator_classes.hpp"
#include "UI_GunFight_PlayerIndicator_parameters.hpp"


namespace SDK
{

// Function UI_GunFight_PlayerIndicator.UI_GunFight_PlayerIndicator_C.ExecuteUbergraph_UI_GunFight_PlayerIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_PlayerIndicator_C::ExecuteUbergraph_UI_GunFight_PlayerIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_PlayerIndicator_C", "ExecuteUbergraph_UI_GunFight_PlayerIndicator");

	Params::UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_PlayerIndicator.UI_GunFight_PlayerIndicator_C.SetDisconnectIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlayerWasKicked                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_GunFight_PlayerIndicator_C::SetDisconnectIcon(bool PlayerWasKicked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_PlayerIndicator_C", "SetDisconnectIcon");

	Params::UI_GunFight_PlayerIndicator_C_SetDisconnectIcon Parms{};

	Parms.PlayerWasKicked = PlayerWasKicked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_PlayerIndicator.UI_GunFight_PlayerIndicator_C.Set Player Health
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Health                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_PlayerIndicator_C::Set_Player_Health(float Health)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_PlayerIndicator_C", "Set Player Health");

	Params::UI_GunFight_PlayerIndicator_C_Set_Player_Health Parms{};

	Parms.Health = Health;

	UObject::ProcessEvent(Func, &Parms);
}

}

