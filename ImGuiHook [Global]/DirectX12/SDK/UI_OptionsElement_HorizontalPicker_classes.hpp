#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_OptionsElement_HorizontalPicker

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "FlameUI_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_OptionsElement_HorizontalPicker.UI_OptionsElement_HorizontalPicker_C
// 0x0028 (0x0418 - 0x03F0)
class UUI_OptionsElement_HorizontalPicker_C final : public UOptionsElementPicker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameButton*                           FlameButton_383;                                   // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           NextOptionButton;                                  // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           PreviousOptionButton;                              // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          UpdatedOnConstruct;                                // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsRecommended;                                     // 0x0411(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCustomSet;                                       // 0x0412(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCustomValueAllowed;                              // 0x0413(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_OptionsElement_HorizontalPicker(int32 EntryPoint);
	void BndEvt__UI_OptionsElement_HorizontalPicker_FlameButton_383_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_OptionsElement_HorizontalPicker_PreviousOptionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void OnVisualUpdated();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void UpdateMouseCursorLegacy(bool IsHover, class UButton* Sender);
	void UpdateMouseCursor(bool IsHover);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void ToggleNextButton();
	void TogglePreviousButton();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_OptionsElement_HorizontalPicker_NextOptionButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_OptionsElement_HorizontalPicker_NextOptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_OptionsElement_HorizontalPicker_PreviousOptionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void ShowTextAsValue(const class FText& Text);
	void BndEvt__NextOptionButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__PreviousOptionButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(class UButton* Sender);
	void OnUpdateWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_OptionsElement_HorizontalPicker_C">();
	}
	static class UUI_OptionsElement_HorizontalPicker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_OptionsElement_HorizontalPicker_C>();
	}
};
static_assert(alignof(UUI_OptionsElement_HorizontalPicker_C) == 0x000008, "Wrong alignment on UUI_OptionsElement_HorizontalPicker_C");
static_assert(sizeof(UUI_OptionsElement_HorizontalPicker_C) == 0x000418, "Wrong size on UUI_OptionsElement_HorizontalPicker_C");
static_assert(offsetof(UUI_OptionsElement_HorizontalPicker_C, UberGraphFrame) == 0x0003F0, "Member 'UUI_OptionsElement_HorizontalPicker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_OptionsElement_HorizontalPicker_C, FlameButton_383) == 0x0003F8, "Member 'UUI_OptionsElement_HorizontalPicker_C::FlameButton_383' has a wrong offset!");
static_assert(offsetof(UUI_OptionsElement_HorizontalPicker_C, NextOptionButton) == 0x000400, "Member 'UUI_OptionsElement_HorizontalPicker_C::NextOptionButton' has a wrong offset!");
static_assert(offsetof(UUI_OptionsElement_HorizontalPicker_C, PreviousOptionButton) == 0x000408, "Member 'UUI_OptionsElement_HorizontalPicker_C::PreviousOptionButton' has a wrong offset!");
static_assert(offsetof(UUI_OptionsElement_HorizontalPicker_C, UpdatedOnConstruct) == 0x000410, "Member 'UUI_OptionsElement_HorizontalPicker_C::UpdatedOnConstruct' has a wrong offset!");
static_assert(offsetof(UUI_OptionsElement_HorizontalPicker_C, IsRecommended) == 0x000411, "Member 'UUI_OptionsElement_HorizontalPicker_C::IsRecommended' has a wrong offset!");
static_assert(offsetof(UUI_OptionsElement_HorizontalPicker_C, IsCustomSet) == 0x000412, "Member 'UUI_OptionsElement_HorizontalPicker_C::IsCustomSet' has a wrong offset!");
static_assert(offsetof(UUI_OptionsElement_HorizontalPicker_C, IsCustomValueAllowed) == 0x000413, "Member 'UUI_OptionsElement_HorizontalPicker_C::IsCustomValueAllowed' has a wrong offset!");

}

