#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ADM_Debug_Radiation_Timed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UI_ADM_Debug_Screen_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ADM_Debug_Radiation_Timed.UI_ADM_Debug_Radiation_Timed_C
// 0x0020 (0x0310 - 0x02F0)
class UUI_ADM_Debug_Radiation_Timed_C final : public UUI_ADM_Debug_Screen_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameTextBlock*                        RemainingTimeText;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           StartRadiationButton;                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        StartRadiationButtonText;                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_ADM_Debug_Radiation_Timed(int32 EntryPoint);
	void BndEvt__ToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	class FText Get_Remaining_Time();

	class UWidget* GetWidgetToFocus() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ADM_Debug_Radiation_Timed_C">();
	}
	static class UUI_ADM_Debug_Radiation_Timed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ADM_Debug_Radiation_Timed_C>();
	}
};
static_assert(alignof(UUI_ADM_Debug_Radiation_Timed_C) == 0x000008, "Wrong alignment on UUI_ADM_Debug_Radiation_Timed_C");
static_assert(sizeof(UUI_ADM_Debug_Radiation_Timed_C) == 0x000310, "Wrong size on UUI_ADM_Debug_Radiation_Timed_C");
static_assert(offsetof(UUI_ADM_Debug_Radiation_Timed_C, UberGraphFrame) == 0x0002F0, "Member 'UUI_ADM_Debug_Radiation_Timed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ADM_Debug_Radiation_Timed_C, RemainingTimeText) == 0x0002F8, "Member 'UUI_ADM_Debug_Radiation_Timed_C::RemainingTimeText' has a wrong offset!");
static_assert(offsetof(UUI_ADM_Debug_Radiation_Timed_C, StartRadiationButton) == 0x000300, "Member 'UUI_ADM_Debug_Radiation_Timed_C::StartRadiationButton' has a wrong offset!");
static_assert(offsetof(UUI_ADM_Debug_Radiation_Timed_C, StartRadiationButtonText) == 0x000308, "Member 'UUI_ADM_Debug_Radiation_Timed_C::StartRadiationButtonText' has a wrong offset!");

}
