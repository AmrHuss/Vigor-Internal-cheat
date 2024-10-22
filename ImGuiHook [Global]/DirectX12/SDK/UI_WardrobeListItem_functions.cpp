#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_WardrobeListItem

#include "Basic.hpp"

#include "UI_WardrobeListItem_classes.hpp"
#include "UI_WardrobeListItem_parameters.hpp"


namespace SDK
{

// Function UI_WardrobeListItem.UI_WardrobeListItem_C.ExecuteUbergraph_UI_WardrobeListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WardrobeListItem_C::ExecuteUbergraph_UI_WardrobeListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WardrobeListItem_C", "ExecuteUbergraph_UI_WardrobeListItem");

	Params::UI_WardrobeListItem_C_ExecuteUbergraph_UI_WardrobeListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WardrobeListItem.UI_WardrobeListItem_C.BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WardrobeListItem_C::BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WardrobeListItem_C", "BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature");

	Params::UI_WardrobeListItem_C_BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WardrobeListItem.UI_WardrobeListItem_C.BndEvt__UI_WardrobeListItem_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WardrobeListItem_C::BndEvt__UI_WardrobeListItem_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WardrobeListItem_C", "BndEvt__UI_WardrobeListItem_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UI_WardrobeListItem_C_BndEvt__UI_WardrobeListItem_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WardrobeListItem.UI_WardrobeListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_WardrobeListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WardrobeListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WardrobeListItem.UI_WardrobeListItem_C.SetButtonName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ButtonName_0                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_WardrobeListItem_C::SetButtonName(const class FText& ButtonName_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WardrobeListItem_C", "SetButtonName");

	Params::UI_WardrobeListItem_C_SetButtonName Parms{};

	Parms.ButtonName_0 = std::move(ButtonName_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WardrobeListItem.UI_WardrobeListItem_C.SetItemNameRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ItemName                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_WardrobeListItem_C::SetItemNameRight(const class FText& ItemName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WardrobeListItem_C", "SetItemNameRight");

	Params::UI_WardrobeListItem_C_SetItemNameRight Parms{};

	Parms.ItemName = std::move(ItemName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WardrobeListItem.UI_WardrobeListItem_C.SetItemIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WardrobeListItem_C::SetItemIcon(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WardrobeListItem_C", "SetItemIcon");

	Params::UI_WardrobeListItem_C_SetItemIcon Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

}

