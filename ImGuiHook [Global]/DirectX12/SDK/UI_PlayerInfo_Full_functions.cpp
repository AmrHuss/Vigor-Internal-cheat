#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerInfo_Full

#include "Basic.hpp"

#include "UI_PlayerInfo_Full_classes.hpp"
#include "UI_PlayerInfo_Full_parameters.hpp"


namespace SDK
{

// Function UI_PlayerInfo_Full.UI_PlayerInfo_Full_C.ExecuteUbergraph_UI_PlayerInfo_Full
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PlayerInfo_Full_C::ExecuteUbergraph_UI_PlayerInfo_Full(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerInfo_Full_C", "ExecuteUbergraph_UI_PlayerInfo_Full");

	Params::UI_PlayerInfo_Full_C_ExecuteUbergraph_UI_PlayerInfo_Full Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_PlayerInfo_Full.UI_PlayerInfo_Full_C.OnChildFocusReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                          InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PlayerInfo_Full_C::OnChildFocusReceived(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerInfo_Full_C", "OnChildFocusReceived");

	Params::UI_PlayerInfo_Full_C_OnChildFocusReceived Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_PlayerInfo_Full.UI_PlayerInfo_Full_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PlayerInfo_Full_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerInfo_Full_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_PlayerInfo_Full.UI_PlayerInfo_Full_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PlayerInfo_Full_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerInfo_Full_C", "PreConstruct");

	Params::UI_PlayerInfo_Full_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_PlayerInfo_Full.UI_PlayerInfo_Full_C.UpdateNicknameVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PlayerInfo_Full_C::UpdateNicknameVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PlayerInfo_Full_C", "UpdateNicknameVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

