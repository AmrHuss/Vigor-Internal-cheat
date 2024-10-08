#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Gunfight_RewardScreenItemIcon

#include "Basic.hpp"

#include "UI_Gunfight_RewardScreenItemIcon_classes.hpp"
#include "UI_Gunfight_RewardScreenItemIcon_parameters.hpp"


namespace SDK
{

// Function UI_Gunfight_RewardScreenItemIcon.UI_Gunfight_RewardScreenItemIcon_C.SetIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Rarity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Gunfight_RewardScreenItemIcon_C::SetIcon(class UTexture2D* Texture, int32 Rarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Gunfight_RewardScreenItemIcon_C", "SetIcon");

	Params::UI_Gunfight_RewardScreenItemIcon_C_SetIcon Parms{};

	Parms.Texture = Texture;
	Parms.Rarity = Rarity;

	UObject::ProcessEvent(Func, &Parms);
}

}

