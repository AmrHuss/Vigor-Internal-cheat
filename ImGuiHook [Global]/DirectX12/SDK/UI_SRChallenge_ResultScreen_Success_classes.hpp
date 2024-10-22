#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SRChallenge_ResultScreen_Success

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "E_ShootingChallengeResult_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SRChallenge_ResultScreen_Success.UI_SRChallenge_ResultScreen_Success_C
// 0x00A8 (0x0380 - 0x02D8)
class UUI_SRChallenge_ResultScreen_Success_C final : public UMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFlameTextBlock*                        PlusMinus;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ButtonA;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ButtonB;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        ChallengeName;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        CurrentScore;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_65;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        NewHighScore;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        PreviousScore;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Rank;                                              // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Result;                                            // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ResultIcon;                                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        ScoreDifference;                                   // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ShootingChallenges_GMComponent_C*   Shooting_Challenges_Component;                     // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ResultScreenClosed;                                // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFlameTextBlock*                        NewVar_0;                                          // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ResultScreenClosed__DelegateSignature(bool RetryChallenge);
	void ExecuteUbergraph_UI_SRChallenge_ResultScreen_Success(int32 EntryPoint);
	void BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void Construct();
	void BndEvt__UI_GamepadActionWidget_381_K2Node_ComponentBoundEvent_66_OnActionPressedEvent__DelegateSignature();
	void FillData(const struct FS_ShootingChallenge& Challenge, float ActualTime, float PreviousTime, E_ShootingChallengeResult Rank_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SRChallenge_ResultScreen_Success_C">();
	}
	static class UUI_SRChallenge_ResultScreen_Success_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SRChallenge_ResultScreen_Success_C>();
	}
};
static_assert(alignof(UUI_SRChallenge_ResultScreen_Success_C) == 0x000008, "Wrong alignment on UUI_SRChallenge_ResultScreen_Success_C");
static_assert(sizeof(UUI_SRChallenge_ResultScreen_Success_C) == 0x000380, "Wrong size on UUI_SRChallenge_ResultScreen_Success_C");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, UberGraphFrame) == 0x0002D8, "Member 'UUI_SRChallenge_ResultScreen_Success_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, FadeIn) == 0x0002E0, "Member 'UUI_SRChallenge_ResultScreen_Success_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, PlusMinus) == 0x0002E8, "Member 'UUI_SRChallenge_ResultScreen_Success_C::PlusMinus' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, Background) == 0x0002F0, "Member 'UUI_SRChallenge_ResultScreen_Success_C::Background' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, ButtonA) == 0x0002F8, "Member 'UUI_SRChallenge_ResultScreen_Success_C::ButtonA' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, ButtonB) == 0x000300, "Member 'UUI_SRChallenge_ResultScreen_Success_C::ButtonB' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, ChallengeName) == 0x000308, "Member 'UUI_SRChallenge_ResultScreen_Success_C::ChallengeName' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, CurrentScore) == 0x000310, "Member 'UUI_SRChallenge_ResultScreen_Success_C::CurrentScore' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, Image_0) == 0x000318, "Member 'UUI_SRChallenge_ResultScreen_Success_C::Image_0' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, Image_65) == 0x000320, "Member 'UUI_SRChallenge_ResultScreen_Success_C::Image_65' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, NewHighScore) == 0x000328, "Member 'UUI_SRChallenge_ResultScreen_Success_C::NewHighScore' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, PreviousScore) == 0x000330, "Member 'UUI_SRChallenge_ResultScreen_Success_C::PreviousScore' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, Rank) == 0x000338, "Member 'UUI_SRChallenge_ResultScreen_Success_C::Rank' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, Result) == 0x000340, "Member 'UUI_SRChallenge_ResultScreen_Success_C::Result' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, ResultIcon) == 0x000348, "Member 'UUI_SRChallenge_ResultScreen_Success_C::ResultIcon' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, ScoreDifference) == 0x000350, "Member 'UUI_SRChallenge_ResultScreen_Success_C::ScoreDifference' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, UI_FlameSafezone) == 0x000358, "Member 'UUI_SRChallenge_ResultScreen_Success_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, Shooting_Challenges_Component) == 0x000360, "Member 'UUI_SRChallenge_ResultScreen_Success_C::Shooting_Challenges_Component' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, ResultScreenClosed) == 0x000368, "Member 'UUI_SRChallenge_ResultScreen_Success_C::ResultScreenClosed' has a wrong offset!");
static_assert(offsetof(UUI_SRChallenge_ResultScreen_Success_C, NewVar_0) == 0x000378, "Member 'UUI_SRChallenge_ResultScreen_Success_C::NewVar_0' has a wrong offset!");

}

