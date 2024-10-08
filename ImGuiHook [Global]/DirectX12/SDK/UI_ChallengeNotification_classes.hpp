#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ChallengeNotification

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "E_ChallengeSlotState_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ChallengeNotification.UI_ChallengeNotification_C
// 0x0048 (0x0318 - 0x02D0)
class UUI_ChallengeNotification_C final : public UNotificationBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOut;                                           // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFlameTextBlock*                        ChallengeCondition;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ChallengeIcon;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         ChallengeProgressValue;                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        ChallengeTitle;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        ClaimRewardTip;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_ChallengeSlot_C*                    ChallengeSlot;                                     // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_ChallengeNotification(int32 EntryPoint);
	void OnHide();
	void OnShow();
	void Construct();
	void UpdateChallengeState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ChallengeNotification_C">();
	}
	static class UUI_ChallengeNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ChallengeNotification_C>();
	}
};
static_assert(alignof(UUI_ChallengeNotification_C) == 0x000008, "Wrong alignment on UUI_ChallengeNotification_C");
static_assert(sizeof(UUI_ChallengeNotification_C) == 0x000318, "Wrong size on UUI_ChallengeNotification_C");
static_assert(offsetof(UUI_ChallengeNotification_C, UberGraphFrame) == 0x0002D0, "Member 'UUI_ChallengeNotification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ChallengeNotification_C, FadeOut) == 0x0002D8, "Member 'UUI_ChallengeNotification_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UUI_ChallengeNotification_C, FadeIn) == 0x0002E0, "Member 'UUI_ChallengeNotification_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_ChallengeNotification_C, ChallengeCondition) == 0x0002E8, "Member 'UUI_ChallengeNotification_C::ChallengeCondition' has a wrong offset!");
static_assert(offsetof(UUI_ChallengeNotification_C, ChallengeIcon) == 0x0002F0, "Member 'UUI_ChallengeNotification_C::ChallengeIcon' has a wrong offset!");
static_assert(offsetof(UUI_ChallengeNotification_C, ChallengeProgressValue) == 0x0002F8, "Member 'UUI_ChallengeNotification_C::ChallengeProgressValue' has a wrong offset!");
static_assert(offsetof(UUI_ChallengeNotification_C, ChallengeTitle) == 0x000300, "Member 'UUI_ChallengeNotification_C::ChallengeTitle' has a wrong offset!");
static_assert(offsetof(UUI_ChallengeNotification_C, ClaimRewardTip) == 0x000308, "Member 'UUI_ChallengeNotification_C::ClaimRewardTip' has a wrong offset!");
static_assert(offsetof(UUI_ChallengeNotification_C, ChallengeSlot) == 0x000310, "Member 'UUI_ChallengeNotification_C::ChallengeSlot' has a wrong offset!");

}

