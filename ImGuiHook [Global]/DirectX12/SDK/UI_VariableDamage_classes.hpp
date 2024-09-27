#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_VariableDamage

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_VariableDamage.UI_VariableDamage_C
// 0x0058 (0x0330 - 0x02D8)
class UUI_VariableDamage_C final : public UMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackgroundImage;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameSlider*                           FlameSlider_92;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_374;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                TipClose;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_C_0;                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget_C_1;                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Max_Damage_Value;                                  // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraComponent*                       Player_Camera;                                     // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Selected_Damage_Value;                             // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_324[0x4];                                      // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanCharacter*                        Human_Character;                                   // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_VariableDamage(int32 EntryPoint);
	void BndEvt__TipClose_K2Node_ComponentBoundEvent_9_OnActionPressedEvent__DelegateSignature();
	void BndEvt__FlameSlider_92_K2Node_ComponentBoundEvent_39_OnControllerCaptureEndEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__FlameSlider_92_K2Node_ComponentBoundEvent_151_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void Get_Current_Health___Set_Slider_Value(class AHumanCharacter* Self2);
	void Get_Selected_Damage_Value(float Slider_Value);

	class UWidget* GetWidgetToFocus() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_VariableDamage_C">();
	}
	static class UUI_VariableDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_VariableDamage_C>();
	}
};
static_assert(alignof(UUI_VariableDamage_C) == 0x000008, "Wrong alignment on UUI_VariableDamage_C");
static_assert(sizeof(UUI_VariableDamage_C) == 0x000330, "Wrong size on UUI_VariableDamage_C");
static_assert(offsetof(UUI_VariableDamage_C, UberGraphFrame) == 0x0002D8, "Member 'UUI_VariableDamage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_VariableDamage_C, BackgroundImage) == 0x0002E0, "Member 'UUI_VariableDamage_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UUI_VariableDamage_C, FlameSlider_92) == 0x0002E8, "Member 'UUI_VariableDamage_C::FlameSlider_92' has a wrong offset!");
static_assert(offsetof(UUI_VariableDamage_C, TextBlock_374) == 0x0002F0, "Member 'UUI_VariableDamage_C::TextBlock_374' has a wrong offset!");
static_assert(offsetof(UUI_VariableDamage_C, TipClose) == 0x0002F8, "Member 'UUI_VariableDamage_C::TipClose' has a wrong offset!");
static_assert(offsetof(UUI_VariableDamage_C, UI_GamepadActionWidget_C_0) == 0x000300, "Member 'UUI_VariableDamage_C::UI_GamepadActionWidget_C_0' has a wrong offset!");
static_assert(offsetof(UUI_VariableDamage_C, UI_GamepadActionWidget_C_1) == 0x000308, "Member 'UUI_VariableDamage_C::UI_GamepadActionWidget_C_1' has a wrong offset!");
static_assert(offsetof(UUI_VariableDamage_C, Max_Damage_Value) == 0x000310, "Member 'UUI_VariableDamage_C::Max_Damage_Value' has a wrong offset!");
static_assert(offsetof(UUI_VariableDamage_C, Player_Camera) == 0x000318, "Member 'UUI_VariableDamage_C::Player_Camera' has a wrong offset!");
static_assert(offsetof(UUI_VariableDamage_C, Selected_Damage_Value) == 0x000320, "Member 'UUI_VariableDamage_C::Selected_Damage_Value' has a wrong offset!");
static_assert(offsetof(UUI_VariableDamage_C, Human_Character) == 0x000328, "Member 'UUI_VariableDamage_C::Human_Character' has a wrong offset!");

}
