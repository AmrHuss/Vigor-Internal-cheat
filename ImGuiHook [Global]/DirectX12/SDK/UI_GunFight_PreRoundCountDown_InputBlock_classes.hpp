#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GunFight_PreRoundCountDown_InputBlock

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GunFight_PreRoundCountDown_InputBlock.UI_GunFight_PreRoundCountDown_InputBlock_C
// 0x0098 (0x0350 - 0x02B8)
class UUI_GunFight_PreRoundCountDown_InputBlock_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ButtonBlock_A;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ButtonBlock_A_1;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ButtonBlock_B;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ButtonBlock_L1;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ButtonBlock_Look;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ButtonBlock_Move;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ButtonBlock_R1;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ButtonBlock_R2;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ButtonHorizontalBox;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Countdown_Text;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameButton*                           FlameButton_56;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_CircularProgress_C*                 RoundStart_CirclularProgress;                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TimerOverlay;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          LoadoutShown;                                      // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_339[0x3];                                      // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Second;                                            // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CircularProgressTimer;                             // 0x0340(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldInputBlock;                                  // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_GunFight_PreRoundCountDown_InputBlock(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StopInputBlock();
	void Destruct();
	void InputIgnore();
	void StartInputBlock();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void CircularSecondProgress();
	void Set_PreRound_Time(int32 Time_To_Round_Start);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GunFight_PreRoundCountDown_InputBlock_C">();
	}
	static class UUI_GunFight_PreRoundCountDown_InputBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GunFight_PreRoundCountDown_InputBlock_C>();
	}
};
static_assert(alignof(UUI_GunFight_PreRoundCountDown_InputBlock_C) == 0x000008, "Wrong alignment on UUI_GunFight_PreRoundCountDown_InputBlock_C");
static_assert(sizeof(UUI_GunFight_PreRoundCountDown_InputBlock_C) == 0x000350, "Wrong size on UUI_GunFight_PreRoundCountDown_InputBlock_C");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, FadeIn) == 0x0002C0, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, ButtonBlock_A) == 0x0002C8, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::ButtonBlock_A' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, ButtonBlock_A_1) == 0x0002D0, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::ButtonBlock_A_1' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, ButtonBlock_B) == 0x0002D8, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::ButtonBlock_B' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, ButtonBlock_L1) == 0x0002E0, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::ButtonBlock_L1' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, ButtonBlock_Look) == 0x0002E8, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::ButtonBlock_Look' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, ButtonBlock_Move) == 0x0002F0, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::ButtonBlock_Move' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, ButtonBlock_R1) == 0x0002F8, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::ButtonBlock_R1' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, ButtonBlock_R2) == 0x000300, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::ButtonBlock_R2' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, ButtonHorizontalBox) == 0x000308, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::ButtonHorizontalBox' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, Countdown_Text) == 0x000310, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::Countdown_Text' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, FlameButton_56) == 0x000318, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::FlameButton_56' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, RoundStart_CirclularProgress) == 0x000320, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::RoundStart_CirclularProgress' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, TimerOverlay) == 0x000328, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::TimerOverlay' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, UI_FlameSafezone) == 0x000330, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, LoadoutShown) == 0x000338, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::LoadoutShown' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, Second) == 0x00033C, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::Second' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, CircularProgressTimer) == 0x000340, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::CircularProgressTimer' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_PreRoundCountDown_InputBlock_C, ShouldInputBlock) == 0x000348, "Member 'UUI_GunFight_PreRoundCountDown_InputBlock_C::ShouldInputBlock' has a wrong offset!");

}
