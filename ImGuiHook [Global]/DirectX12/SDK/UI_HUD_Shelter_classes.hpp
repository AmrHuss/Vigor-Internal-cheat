#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HUD_Shelter

#include "Basic.hpp"

#include "E_ChallengeManagerState_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_HUD_Shelter.UI_HUD_Shelter_C
// 0x0068 (0x0360 - 0x02F8)
class UUI_HUD_Shelter_C final : public UHUDWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeCharacterEquipment;                            // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUI_ADSHint_C*                          ADSHint;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BeingHealed;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             ChallengeOverviewSlot;                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             GameInfoSlot;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BloodEffect_C*                      UI_BloodEffect;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HoldBreath_C*                       UI_HoldBreath;                                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_LootNotification_C*                 UI_LootNotificationWidget;                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PersistentIconHolder_C*             UI_PersistentIconHolder;                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GameInfo_C*                         GameInfoWidget;                                    // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkipFps;                                           // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UI_HUD_Shelter(int32 EntryPoint);
	void ChallengeManagerValidityTimer();
	void Show(bool bShowHUD);
	void On_Exit_Shooting_Range();
	void On_Entered_Shooting_Range();
	void ShowConsumableNotification(class UClass* ConsumableClass, float EffectTimer, bool IsEffectPersistent);
	void ShowChallengeNotification(class ABP_ChallengeSlot_C* ChallengeSlot);
	void EventChallengeProgressUpdated(class ABP_ChallengeSlot_C* Slot_0, int32 New_Progress);
	void EventChallengeManagerReady();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void GetOwningCharacter(class ABP_Character_C** BP_Character);
	void SetMainHUDVisibility(bool ShowHUD);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_HUD_Shelter_C">();
	}
	static class UUI_HUD_Shelter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_HUD_Shelter_C>();
	}
};
static_assert(alignof(UUI_HUD_Shelter_C) == 0x000008, "Wrong alignment on UUI_HUD_Shelter_C");
static_assert(sizeof(UUI_HUD_Shelter_C) == 0x000360, "Wrong size on UUI_HUD_Shelter_C");
static_assert(offsetof(UUI_HUD_Shelter_C, UberGraphFrame) == 0x0002F8, "Member 'UUI_HUD_Shelter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_HUD_Shelter_C, FadeCharacterEquipment) == 0x000300, "Member 'UUI_HUD_Shelter_C::FadeCharacterEquipment' has a wrong offset!");
static_assert(offsetof(UUI_HUD_Shelter_C, ADSHint) == 0x000308, "Member 'UUI_HUD_Shelter_C::ADSHint' has a wrong offset!");
static_assert(offsetof(UUI_HUD_Shelter_C, BeingHealed) == 0x000310, "Member 'UUI_HUD_Shelter_C::BeingHealed' has a wrong offset!");
static_assert(offsetof(UUI_HUD_Shelter_C, Canvas) == 0x000318, "Member 'UUI_HUD_Shelter_C::Canvas' has a wrong offset!");
static_assert(offsetof(UUI_HUD_Shelter_C, ChallengeOverviewSlot) == 0x000320, "Member 'UUI_HUD_Shelter_C::ChallengeOverviewSlot' has a wrong offset!");
static_assert(offsetof(UUI_HUD_Shelter_C, GameInfoSlot) == 0x000328, "Member 'UUI_HUD_Shelter_C::GameInfoSlot' has a wrong offset!");
static_assert(offsetof(UUI_HUD_Shelter_C, UI_BloodEffect) == 0x000330, "Member 'UUI_HUD_Shelter_C::UI_BloodEffect' has a wrong offset!");
static_assert(offsetof(UUI_HUD_Shelter_C, UI_HoldBreath) == 0x000338, "Member 'UUI_HUD_Shelter_C::UI_HoldBreath' has a wrong offset!");
static_assert(offsetof(UUI_HUD_Shelter_C, UI_LootNotificationWidget) == 0x000340, "Member 'UUI_HUD_Shelter_C::UI_LootNotificationWidget' has a wrong offset!");
static_assert(offsetof(UUI_HUD_Shelter_C, UI_PersistentIconHolder) == 0x000348, "Member 'UUI_HUD_Shelter_C::UI_PersistentIconHolder' has a wrong offset!");
static_assert(offsetof(UUI_HUD_Shelter_C, GameInfoWidget) == 0x000350, "Member 'UUI_HUD_Shelter_C::GameInfoWidget' has a wrong offset!");
static_assert(offsetof(UUI_HUD_Shelter_C, SkipFps) == 0x000358, "Member 'UUI_HUD_Shelter_C::SkipFps' has a wrong offset!");

}
