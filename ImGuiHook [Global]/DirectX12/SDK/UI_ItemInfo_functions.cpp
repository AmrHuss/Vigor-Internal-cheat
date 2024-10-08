#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemInfo

#include "Basic.hpp"

#include "UI_ItemInfo_classes.hpp"
#include "UI_ItemInfo_parameters.hpp"


namespace SDK
{

// Function UI_ItemInfo.UI_ItemInfo_C.ExecuteUbergraph_UI_ItemInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemInfo_C::ExecuteUbergraph_UI_ItemInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemInfo_C", "ExecuteUbergraph_UI_ItemInfo");

	Params::UI_ItemInfo_C_ExecuteUbergraph_UI_ItemInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemInfo.UI_ItemInfo_C.OnItemChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_ItemInfo_C::OnItemChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemInfo_C", "OnItemChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ItemInfo.UI_ItemInfo_C.SwitchToCorrectWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ItemInfo_C::SwitchToCorrectWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemInfo_C", "SwitchToCorrectWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ItemInfo.UI_ItemInfo_C.UpdateItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                            ItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemInfo_C::UpdateItemInfo(class AItem* ItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemInfo_C", "UpdateItemInfo");

	Params::UI_ItemInfo_C_UpdateItemInfo Parms{};

	Parms.ItemObject = ItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

}

