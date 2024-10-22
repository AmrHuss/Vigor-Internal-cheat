#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_FreeCameraControls

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_FreeCameraControls.UI_FreeCameraControls_C
// 0x0050 (0x0308 - 0x02B8)
class UUI_FreeCameraControls_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         ControlsHolder_hBox;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                Fast_Button;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                GoDown_Button;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                GoUp_Button;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                HideShow_Button;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                Slow_Button;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Speed_Text;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_FreeCameraSpectator_C*              SpectatorPawn;                                     // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SpeedControlStep;                                  // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ControlsVisible;                                   // 0x0304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_FreeCameraControls(int32 EntryPoint);
	void Update_SpeedText();
	void BndEvt__HideShow_Button_K2Node_ComponentBoundEvent_7_OnActionPressedEvent__DelegateSignature();
	void BndEvt__GoDown_Button_K2Node_ComponentBoundEvent_6_OnActionReleasedEvent__DelegateSignature();
	void BndEvt__GoUp_Button_K2Node_ComponentBoundEvent_4_OnActionReleasedEvent__DelegateSignature();
	void BndEvt__Slow_Button_K2Node_ComponentBoundEvent_3_OnActionPressedEvent__DelegateSignature();
	void BndEvt__Fast_Button_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_1_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_FreeCameraControls_C">();
	}
	static class UUI_FreeCameraControls_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_FreeCameraControls_C>();
	}
};
static_assert(alignof(UUI_FreeCameraControls_C) == 0x000008, "Wrong alignment on UUI_FreeCameraControls_C");
static_assert(sizeof(UUI_FreeCameraControls_C) == 0x000308, "Wrong size on UUI_FreeCameraControls_C");
static_assert(offsetof(UUI_FreeCameraControls_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_FreeCameraControls_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_FreeCameraControls_C, ControlsHolder_hBox) == 0x0002C0, "Member 'UUI_FreeCameraControls_C::ControlsHolder_hBox' has a wrong offset!");
static_assert(offsetof(UUI_FreeCameraControls_C, Fast_Button) == 0x0002C8, "Member 'UUI_FreeCameraControls_C::Fast_Button' has a wrong offset!");
static_assert(offsetof(UUI_FreeCameraControls_C, GoDown_Button) == 0x0002D0, "Member 'UUI_FreeCameraControls_C::GoDown_Button' has a wrong offset!");
static_assert(offsetof(UUI_FreeCameraControls_C, GoUp_Button) == 0x0002D8, "Member 'UUI_FreeCameraControls_C::GoUp_Button' has a wrong offset!");
static_assert(offsetof(UUI_FreeCameraControls_C, HideShow_Button) == 0x0002E0, "Member 'UUI_FreeCameraControls_C::HideShow_Button' has a wrong offset!");
static_assert(offsetof(UUI_FreeCameraControls_C, Slow_Button) == 0x0002E8, "Member 'UUI_FreeCameraControls_C::Slow_Button' has a wrong offset!");
static_assert(offsetof(UUI_FreeCameraControls_C, Speed_Text) == 0x0002F0, "Member 'UUI_FreeCameraControls_C::Speed_Text' has a wrong offset!");
static_assert(offsetof(UUI_FreeCameraControls_C, SpectatorPawn) == 0x0002F8, "Member 'UUI_FreeCameraControls_C::SpectatorPawn' has a wrong offset!");
static_assert(offsetof(UUI_FreeCameraControls_C, SpeedControlStep) == 0x000300, "Member 'UUI_FreeCameraControls_C::SpeedControlStep' has a wrong offset!");
static_assert(offsetof(UUI_FreeCameraControls_C, ControlsVisible) == 0x000304, "Member 'UUI_FreeCameraControls_C::ControlsVisible' has a wrong offset!");

}

