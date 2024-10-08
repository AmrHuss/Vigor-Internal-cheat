#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MementoListItem

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "F_MementoInfo_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_MementoListItem.UI_MementoListItem_C
// 0x00F0 (0x0488 - 0x0398)
class UUI_MementoListItem_C final : public UListButtonWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameButton*                           ListItemButton;                                    // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameMarqueeBlockText_C*            SideText;                                          // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotBackground;                                    // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotFocus;                                         // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotIcon;                                          // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_OrangeSquirrels_Dot_C*              UI_OrangeSquirrels_Dot;                            // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FF_MementoInfo                         Memento_Info;                                      // 0x03D0(0x00B0)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Memento_Unlocked;                                  // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_UI_MementoListItem(int32 EntryPoint);
	void BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_MementoListItem_ListItemButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__Button_K2Node_ComponentBoundEvent_70_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void Construct();
	void Refresh_Visuals();

	void Get_Memento_Info(struct FF_MementoInfo* Memento_Info_0, bool* Memento_Unlocked_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_MementoListItem_C">();
	}
	static class UUI_MementoListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_MementoListItem_C>();
	}
};
static_assert(alignof(UUI_MementoListItem_C) == 0x000008, "Wrong alignment on UUI_MementoListItem_C");
static_assert(sizeof(UUI_MementoListItem_C) == 0x000488, "Wrong size on UUI_MementoListItem_C");
static_assert(offsetof(UUI_MementoListItem_C, UberGraphFrame) == 0x000398, "Member 'UUI_MementoListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_MementoListItem_C, ListItemButton) == 0x0003A0, "Member 'UUI_MementoListItem_C::ListItemButton' has a wrong offset!");
static_assert(offsetof(UUI_MementoListItem_C, SideText) == 0x0003A8, "Member 'UUI_MementoListItem_C::SideText' has a wrong offset!");
static_assert(offsetof(UUI_MementoListItem_C, SlotBackground) == 0x0003B0, "Member 'UUI_MementoListItem_C::SlotBackground' has a wrong offset!");
static_assert(offsetof(UUI_MementoListItem_C, SlotFocus) == 0x0003B8, "Member 'UUI_MementoListItem_C::SlotFocus' has a wrong offset!");
static_assert(offsetof(UUI_MementoListItem_C, SlotIcon) == 0x0003C0, "Member 'UUI_MementoListItem_C::SlotIcon' has a wrong offset!");
static_assert(offsetof(UUI_MementoListItem_C, UI_OrangeSquirrels_Dot) == 0x0003C8, "Member 'UUI_MementoListItem_C::UI_OrangeSquirrels_Dot' has a wrong offset!");
static_assert(offsetof(UUI_MementoListItem_C, Memento_Info) == 0x0003D0, "Member 'UUI_MementoListItem_C::Memento_Info' has a wrong offset!");
static_assert(offsetof(UUI_MementoListItem_C, Memento_Unlocked) == 0x000480, "Member 'UUI_MementoListItem_C::Memento_Unlocked' has a wrong offset!");

}

