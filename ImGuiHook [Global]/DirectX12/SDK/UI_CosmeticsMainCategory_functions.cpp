#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CosmeticsMainCategory

#include "Basic.hpp"

#include "UI_CosmeticsMainCategory_classes.hpp"
#include "UI_CosmeticsMainCategory_parameters.hpp"


namespace SDK
{

// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.ExecuteUbergraph_UI_CosmeticsMainCategory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsMainCategory_C::ExecuteUbergraph_UI_CosmeticsMainCategory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "ExecuteUbergraph_UI_CosmeticsMainCategory");

	Params::UI_CosmeticsMainCategory_C_ExecuteUbergraph_UI_CosmeticsMainCategory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.OnToggleClicked
// (BlueprintCallable, BlueprintEvent)

void UUI_CosmeticsMainCategory_C::OnToggleClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "OnToggleClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.SetExpandibleBool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShouldBeExpanded                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsMainCategory_C::SetExpandibleBool(bool bShouldBeExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "SetExpandibleBool");

	Params::UI_CosmeticsMainCategory_C_SetExpandibleBool Parms{};

	Parms.bShouldBeExpanded = bShouldBeExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.SwitchTheExpandibleWidgetChild
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsMainCategory_C::SwitchTheExpandibleWidgetChild(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "SwitchTheExpandibleWidgetChild");

	Params::UI_CosmeticsMainCategory_C_SwitchTheExpandibleWidgetChild Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.SetCategoryIconHighlightVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsMainCategory_C::SetCategoryIconHighlightVisibility(bool NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "SetCategoryIconHighlightVisibility");

	Params::UI_CosmeticsMainCategory_C_SetCategoryIconHighlightVisibility Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CosmeticsMainCategory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.BndEvt__ExpandableArea_45_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UExpandableArea*                  Area                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsMainCategory_C::BndEvt__ExpandableArea_45_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "BndEvt__ExpandableArea_45_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature");

	Params::UI_CosmeticsMainCategory_C_BndEvt__ExpandableArea_45_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature Parms{};

	Parms.Area = Area;
	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.UpdateScrollBaronWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          WidgetToFocus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsMainCategory_C::UpdateScrollBaronWidget(class UWidget* WidgetToFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "UpdateScrollBaronWidget");

	Params::UI_CosmeticsMainCategory_C_UpdateScrollBaronWidget Parms{};

	Parms.WidgetToFocus = WidgetToFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.BndEvt__UI_CosmeticsMainCategoryListButton_K2Node_ComponentBoundEvent_3_OnListButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UListButtonWidget*                Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsMainCategory_C::BndEvt__UI_CosmeticsMainCategoryListButton_K2Node_ComponentBoundEvent_3_OnListButtonPressedEvent__DelegateSignature(class UListButtonWidget* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "BndEvt__UI_CosmeticsMainCategoryListButton_K2Node_ComponentBoundEvent_3_OnListButtonPressedEvent__DelegateSignature");

	Params::UI_CosmeticsMainCategory_C_BndEvt__UI_CosmeticsMainCategoryListButton_K2Node_ComponentBoundEvent_3_OnListButtonPressedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsMainCategory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "PreConstruct");

	Params::UI_CosmeticsMainCategory_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.CollapseTheExpandible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CosmeticsMainCategory_C::CollapseTheExpandible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "CollapseTheExpandible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.FillMainCategoryButtonData
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CosmeticsMainCategory_C::FillMainCategoryButtonData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "FillMainCategoryButtonData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.UpdateTemporarySelling Point Count
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_CosmeticsMainCategory_C::UpdateTemporarySelling_Point_Count()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "UpdateTemporarySelling Point Count");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.GetRefToCosmeticsListButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CosmeticsListButton_C*        ListBTN                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsMainCategory_C::GetRefToCosmeticsListButton(class UUI_CosmeticsListButton_C** ListBTN, bool* bValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "GetRefToCosmeticsListButton");

	Params::UI_CosmeticsMainCategory_C_GetRefToCosmeticsListButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ListBTN != nullptr)
		*ListBTN = Parms.ListBTN;

	if (bValid != nullptr)
		*bValid = Parms.bValid;
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.GetRefToMainCategoryListButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CosmeticsMainCategory_C*      MenuLabel                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsMainCategory_C::GetRefToMainCategoryListButton(class UUI_CosmeticsMainCategory_C** MenuLabel, bool* bValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "GetRefToMainCategoryListButton");

	Params::UI_CosmeticsMainCategory_C_GetRefToMainCategoryListButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MenuLabel != nullptr)
		*MenuLabel = Parms.MenuLabel;

	if (bValid != nullptr)
		*bValid = Parms.bValid;
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.IsCategoryExpanded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsExpanded                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsMainCategory_C::IsCategoryExpanded(bool* bValid, bool* bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "IsCategoryExpanded");

	Params::UI_CosmeticsMainCategory_C_IsCategoryExpanded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (bIsExpanded != nullptr)
		*bIsExpanded = Parms.bIsExpanded;
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.GetRefToSubCategoryListButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_CosmeticsSubCategory_C*       SubCategory                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsMainCategory_C::GetRefToSubCategoryListButton(bool* bValid, class UUI_CosmeticsSubCategory_C** SubCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "GetRefToSubCategoryListButton");

	Params::UI_CosmeticsMainCategory_C_GetRefToSubCategoryListButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (SubCategory != nullptr)
		*SubCategory = Parms.SubCategory;
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.GetLastScrollElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                          LastWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsMainCategory_C::GetLastScrollElement(bool* bValid, class UWidget** LastWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "GetLastScrollElement");

	Params::UI_CosmeticsMainCategory_C_GetLastScrollElement Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (LastWidget != nullptr)
		*LastWidget = Parms.LastWidget;
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.GetFirstScrollElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                          FirstElement                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsMainCategory_C::GetFirstScrollElement(bool* bValid, class UWidget** FirstElement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "GetFirstScrollElement");

	Params::UI_CosmeticsMainCategory_C_GetFirstScrollElement Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (FirstElement != nullptr)
		*FirstElement = Parms.FirstElement;
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.IsListButtonChildOfSubCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CosmeticsListButton_C*        ListButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsChild                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsMainCategory_C::IsListButtonChildOfSubCategory(class UUI_CosmeticsListButton_C* ListButton, bool* bIsChild)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "IsListButtonChildOfSubCategory");

	Params::UI_CosmeticsMainCategory_C_IsListButtonChildOfSubCategory Parms{};

	Parms.ListButton = ListButton;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsChild != nullptr)
		*bIsChild = Parms.bIsChild;
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.GetItemTypeCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESellingPointType                       SellingPointType                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CosmeticsMainCategory_C::GetItemTypeCategory(bool* Success, ESellingPointType* SellingPointType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "GetItemTypeCategory");

	Params::UI_CosmeticsMainCategory_C_GetItemTypeCategory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (SellingPointType != nullptr)
		*SellingPointType = Parms.SellingPointType;
}


// Function UI_CosmeticsMainCategory.UI_CosmeticsMainCategory_C.DestroyComponentByTAG
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ComponentFound                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CosmeticsMainCategory_C::DestroyComponentByTAG(class FName Tag, bool* Valid, bool* ComponentFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CosmeticsMainCategory_C", "DestroyComponentByTAG");

	Params::UI_CosmeticsMainCategory_C_DestroyComponentByTAG Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

	if (ComponentFound != nullptr)
		*ComponentFound = Parms.ComponentFound;
}

}

