#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Debug_ADM_Event_RedChest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UI_ADM_Debug_Screen_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Debug_ADM_Event_RedChest.UI_Debug_ADM_Event_RedChest_C
// 0x0018 (0x0308 - 0x02F0)
class UUI_Debug_ADM_Event_RedChest_C final : public UUI_ADM_Debug_Screen_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameTextBlock*                        Marktheredchestonmap;                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           Marktheredchestonmap_Button;                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__SpawnAllConvoysButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void ExecuteUbergraph_UI_Debug_ADM_Event_RedChest(int32 EntryPoint);

	class UWidget* GetWidgetToFocus() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Debug_ADM_Event_RedChest_C">();
	}
	static class UUI_Debug_ADM_Event_RedChest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Debug_ADM_Event_RedChest_C>();
	}
};
static_assert(alignof(UUI_Debug_ADM_Event_RedChest_C) == 0x000008, "Wrong alignment on UUI_Debug_ADM_Event_RedChest_C");
static_assert(sizeof(UUI_Debug_ADM_Event_RedChest_C) == 0x000308, "Wrong size on UUI_Debug_ADM_Event_RedChest_C");
static_assert(offsetof(UUI_Debug_ADM_Event_RedChest_C, UberGraphFrame) == 0x0002F0, "Member 'UUI_Debug_ADM_Event_RedChest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Debug_ADM_Event_RedChest_C, Marktheredchestonmap) == 0x0002F8, "Member 'UUI_Debug_ADM_Event_RedChest_C::Marktheredchestonmap' has a wrong offset!");
static_assert(offsetof(UUI_Debug_ADM_Event_RedChest_C, Marktheredchestonmap_Button) == 0x000300, "Member 'UUI_Debug_ADM_Event_RedChest_C::Marktheredchestonmap_Button' has a wrong offset!");

}
