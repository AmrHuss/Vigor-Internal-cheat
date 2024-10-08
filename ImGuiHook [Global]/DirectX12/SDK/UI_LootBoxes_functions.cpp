#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LootBoxes

#include "Basic.hpp"

#include "UI_LootBoxes_classes.hpp"
#include "UI_LootBoxes_parameters.hpp"


namespace SDK
{

// Function UI_LootBoxes.UI_LootBoxes_C.ExecuteUbergraph_UI_LootBoxes
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LootBoxes_C::ExecuteUbergraph_UI_LootBoxes(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "ExecuteUbergraph_UI_LootBoxes");

	Params::UI_LootBoxes_C_ExecuteUbergraph_UI_LootBoxes Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LootBoxes.UI_LootBoxes_C.BndEvt__UI_LootBoxes_ButtonOpenWindows_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LootBoxes_C::BndEvt__UI_LootBoxes_ButtonOpenWindows_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "BndEvt__UI_LootBoxes_ButtonOpenWindows_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	Params::UI_LootBoxes_C_BndEvt__UI_LootBoxes_ButtonOpenWindows_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LootBoxes.UI_LootBoxes_C.Unhover Event
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::Unhover_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "Unhover Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.Hover Event
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::Hover_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "Hover Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.BndEvt__UI_LootBoxes_ButtonOpenWindows_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LootBoxes_C::BndEvt__UI_LootBoxes_ButtonOpenWindows_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "BndEvt__UI_LootBoxes_ButtonOpenWindows_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	Params::UI_LootBoxes_C_BndEvt__UI_LootBoxes_ButtonOpenWindows_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LootBoxes.UI_LootBoxes_C.BndEvt__UI_LootBoxes_ButtonOpenWindows_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LootBoxes_C::BndEvt__UI_LootBoxes_ButtonOpenWindows_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "BndEvt__UI_LootBoxes_ButtonOpenWindows_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	Params::UI_LootBoxes_C_BndEvt__UI_LootBoxes_ButtonOpenWindows_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LootBoxes.UI_LootBoxes_C.OnResetToDefaultState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::OnResetToDefaultState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "OnResetToDefaultState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.ReturnFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlameWidget*                     FlameWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LootBoxes_C::ReturnFocus(class UFlameWidget* FlameWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "ReturnFocus");

	Params::UI_LootBoxes_C_ReturnFocus Parms{};

	Parms.FlameWidget = FlameWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LootBoxes.UI_LootBoxes_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LootBoxes_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "Tick");

	Params::UI_LootBoxes_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LootBoxes.UI_LootBoxes_C.OnChildFocusReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                          InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LootBoxes_C::OnChildFocusReceived(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "OnChildFocusReceived");

	Params::UI_LootBoxes_C_OnChildFocusReceived Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LootBoxes.UI_LootBoxes_C.ExitPressed
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::ExitPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "ExitPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.OnExitPressed
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::OnExitPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "OnExitPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.BndEvt__UI_LootBoxes_UI_GamepadAction_Open_K2Node_ComponentBoundEvent_1_OnClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_LootBoxes_C::BndEvt__UI_LootBoxes_UI_GamepadAction_Open_K2Node_ComponentBoundEvent_1_OnClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "BndEvt__UI_LootBoxes_UI_GamepadAction_Open_K2Node_ComponentBoundEvent_1_OnClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.BndEvt__UI_GamepadAction_Close_K2Node_ComponentBoundEvent_2_OnClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_LootBoxes_C::BndEvt__UI_GamepadAction_Close_K2Node_ComponentBoundEvent_2_OnClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "BndEvt__UI_GamepadAction_Close_K2Node_ComponentBoundEvent_2_OnClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.FocusItemByClick
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::FocusItemByClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "FocusItemByClick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.BndEvt__ActionMoreInfo_K2Node_ComponentBoundEvent_1_OnActionReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_LootBoxes_C::BndEvt__ActionMoreInfo_K2Node_ComponentBoundEvent_1_OnActionReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "BndEvt__ActionMoreInfo_K2Node_ComponentBoundEvent_1_OnActionReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.OnTabChanged
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::OnTabChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "OnTabChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.OnShelterUIFinishedLoading
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::OnShelterUIFinishedLoading()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "OnShelterUIFinishedLoading");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.StopOpeningLootbox
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::StopOpeningLootbox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "StopOpeningLootbox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.StartOpeningLootbox
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::StartOpeningLootbox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "StartOpeningLootbox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.ShowCardsCloseButton
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::ShowCardsCloseButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "ShowCardsCloseButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_LootBoxes_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.FocusToLootboxList
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::FocusToLootboxList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "FocusToLootboxList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.OnRowFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Button_Index                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LootBoxes_C::OnRowFocused(int32 Button_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "OnRowFocused");

	Params::UI_LootBoxes_C_OnRowFocused Parms{};

	Parms.Button_Index = Button_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LootBoxes.UI_LootBoxes_C.OpenLootboxDataFailed
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::OpenLootboxDataFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "OpenLootboxDataFailed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.RemoveOverlay
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::RemoveOverlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "RemoveOverlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.CreateOverlay
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::CreateOverlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "CreateOverlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_LootBoxes_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.OpenedLootBoxDataReceived
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           LootBoxClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLootBoxPoolItem>         ItemPool                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_LootBoxes_C::OpenedLootBoxDataReceived(class UClass* LootBoxClass, const TArray<struct FLootBoxPoolItem>& ItemPool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "OpenedLootBoxDataReceived");

	Params::UI_LootBoxes_C_OpenedLootBoxDataReceived Parms{};

	Parms.LootBoxClass = LootBoxClass;
	Parms.ItemPool = std::move(ItemPool);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LootBoxes.UI_LootBoxes_C.UpdateUI
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::UpdateUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "UpdateUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.DoNothing
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::DoNothing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "DoNothing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.ConsumeInputAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Consume                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LootBoxes_C::ConsumeInputAction(bool Consume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "ConsumeInputAction");

	Params::UI_LootBoxes_C_ConsumeInputAction Parms{};

	Parms.Consume = Consume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LootBoxes.UI_LootBoxes_C.OpenBoxVisual
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::OpenBoxVisual()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "OpenBoxVisual");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.ResetCameraAndUI
// (BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::ResetCameraAndUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "ResetCameraAndUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.OpenLootBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           LootBox                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LootBoxes_C::OpenLootBox(int32 ButtonIndex, class UClass* LootBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "OpenLootBox");

	Params::UI_LootBoxes_C_OpenLootBox Parms{};

	Parms.ButtonIndex = ButtonIndex;
	Parms.LootBox = LootBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LootBoxes.UI_LootBoxes_C.StoreActorsVariables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_LootBoxes_C::StoreActorsVariables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "StoreActorsVariables");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_LootBoxes.UI_LootBoxes_C.FillContent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class UClass*, struct FLootBoxInfoCloud>FromCloud                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_LootBoxes_C::FillContent(const TMap<class UClass*, struct FLootBoxInfoCloud>& FromCloud)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "FillContent");

	Params::UI_LootBoxes_C_FillContent Parms{};

	Parms.FromCloud = std::move(FromCloud);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LootBoxes.UI_LootBoxes_C.CompareItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           ClassA                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           ClassB                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_LootBoxes_C::CompareItems(class UClass* ClassA, class UClass* ClassB, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "CompareItems");

	Params::UI_LootBoxes_C_CompareItems Parms{};

	Parms.ClassA = ClassA;
	Parms.ClassB = ClassB;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function UI_LootBoxes.UI_LootBoxes_C.DisableHighlightFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_LootBoxRow_C*                 ExcludedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LootBoxes_C::DisableHighlightFunc(class UUI_LootBoxRow_C* ExcludedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "DisableHighlightFunc");

	Params::UI_LootBoxes_C_DisableHighlightFunc Parms{};

	Parms.ExcludedItem = ExcludedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_LootBoxes.UI_LootBoxes_C.GetWidgetToFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_LootBoxes_C::GetWidgetToFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_LootBoxes_C", "GetWidgetToFocus");

	Params::UI_LootBoxes_C_GetWidgetToFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

