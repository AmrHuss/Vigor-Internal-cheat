#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Debug_ADM_Event_LockedContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UI_ADM_Debug_Screen_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Debug_ADM_Event_LockedContainer.UI_Debug_ADM_Event_LockedContainer_C
// 0x0028 (0x0318 - 0x02F0)
class UUI_Debug_ADM_Event_LockedContainer_C final : public UUI_ADM_Debug_Screen_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameButton*                           SpawnAllConvoysButton;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        SpawnAllConvoysButtonText;                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           Unlockconvoy;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        UnlockconvoyButtonText;                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Debug_ADM_Event_LockedContainer(int32 EntryPoint);
	void BndEvt__Unlockconvoy_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__SpawnAllConvoysButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);

	class UWidget* GetWidgetToFocus() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Debug_ADM_Event_LockedContainer_C">();
	}
	static class UUI_Debug_ADM_Event_LockedContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Debug_ADM_Event_LockedContainer_C>();
	}
};
static_assert(alignof(UUI_Debug_ADM_Event_LockedContainer_C) == 0x000008, "Wrong alignment on UUI_Debug_ADM_Event_LockedContainer_C");
static_assert(sizeof(UUI_Debug_ADM_Event_LockedContainer_C) == 0x000318, "Wrong size on UUI_Debug_ADM_Event_LockedContainer_C");
static_assert(offsetof(UUI_Debug_ADM_Event_LockedContainer_C, UberGraphFrame) == 0x0002F0, "Member 'UUI_Debug_ADM_Event_LockedContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Debug_ADM_Event_LockedContainer_C, SpawnAllConvoysButton) == 0x0002F8, "Member 'UUI_Debug_ADM_Event_LockedContainer_C::SpawnAllConvoysButton' has a wrong offset!");
static_assert(offsetof(UUI_Debug_ADM_Event_LockedContainer_C, SpawnAllConvoysButtonText) == 0x000300, "Member 'UUI_Debug_ADM_Event_LockedContainer_C::SpawnAllConvoysButtonText' has a wrong offset!");
static_assert(offsetof(UUI_Debug_ADM_Event_LockedContainer_C, Unlockconvoy) == 0x000308, "Member 'UUI_Debug_ADM_Event_LockedContainer_C::Unlockconvoy' has a wrong offset!");
static_assert(offsetof(UUI_Debug_ADM_Event_LockedContainer_C, UnlockconvoyButtonText) == 0x000310, "Member 'UUI_Debug_ADM_Event_LockedContainer_C::UnlockconvoyButtonText' has a wrong offset!");

}
