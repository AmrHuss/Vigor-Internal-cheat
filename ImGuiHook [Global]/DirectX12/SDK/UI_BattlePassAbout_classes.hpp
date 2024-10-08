#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BattlePassAbout

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_BattlePassAbout.UI_BattlePassAbout_C
// 0x00C0 (0x03B0 - 0x02F0)
class UUI_BattlePassAbout_C final : public UModalWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameTextBlock*                        AboutText;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        EventsText;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_495;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_337;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        SeasonDescriptionText;                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SeasonImageOverlay;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SeasonImageTexture;                                // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        SeasonNumberText;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        SeasonTitleText;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidget;                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                           Events;                                            // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsLegacySeason;                                    // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_369[0x7];                                      // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   SeasonTitle;                                       // 0x0370(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   SeasonDescription;                                 // 0x0388(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                             SeasonImage;                                       // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SeasonNumberInt;                                   // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_BattlePassAbout(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void GetBattlePassEventsList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BattlePassAbout_C">();
	}
	static class UUI_BattlePassAbout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BattlePassAbout_C>();
	}
};
static_assert(alignof(UUI_BattlePassAbout_C) == 0x000008, "Wrong alignment on UUI_BattlePassAbout_C");
static_assert(sizeof(UUI_BattlePassAbout_C) == 0x0003B0, "Wrong size on UUI_BattlePassAbout_C");
static_assert(offsetof(UUI_BattlePassAbout_C, UberGraphFrame) == 0x0002F0, "Member 'UUI_BattlePassAbout_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, AboutText) == 0x0002F8, "Member 'UUI_BattlePassAbout_C::AboutText' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, Background) == 0x000300, "Member 'UUI_BattlePassAbout_C::Background' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, EventsText) == 0x000308, "Member 'UUI_BattlePassAbout_C::EventsText' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, Image_495) == 0x000310, "Member 'UUI_BattlePassAbout_C::Image_495' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, ScrollBox_337) == 0x000318, "Member 'UUI_BattlePassAbout_C::ScrollBox_337' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, SeasonDescriptionText) == 0x000320, "Member 'UUI_BattlePassAbout_C::SeasonDescriptionText' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, SeasonImageOverlay) == 0x000328, "Member 'UUI_BattlePassAbout_C::SeasonImageOverlay' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, SeasonImageTexture) == 0x000330, "Member 'UUI_BattlePassAbout_C::SeasonImageTexture' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, SeasonNumberText) == 0x000338, "Member 'UUI_BattlePassAbout_C::SeasonNumberText' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, SeasonTitleText) == 0x000340, "Member 'UUI_BattlePassAbout_C::SeasonTitleText' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, UI_FlameSafezone) == 0x000348, "Member 'UUI_BattlePassAbout_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, UI_GamepadActionWidget) == 0x000350, "Member 'UUI_BattlePassAbout_C::UI_GamepadActionWidget' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, Events) == 0x000358, "Member 'UUI_BattlePassAbout_C::Events' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, IsLegacySeason) == 0x000368, "Member 'UUI_BattlePassAbout_C::IsLegacySeason' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, SeasonTitle) == 0x000370, "Member 'UUI_BattlePassAbout_C::SeasonTitle' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, SeasonDescription) == 0x000388, "Member 'UUI_BattlePassAbout_C::SeasonDescription' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, SeasonImage) == 0x0003A0, "Member 'UUI_BattlePassAbout_C::SeasonImage' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassAbout_C, SeasonNumberInt) == 0x0003A8, "Member 'UUI_BattlePassAbout_C::SeasonNumberInt' has a wrong offset!");

}

