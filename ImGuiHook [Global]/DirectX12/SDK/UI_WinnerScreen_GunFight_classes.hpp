#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_WinnerScreen_GunFight

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UI_WinnerScreen_Base_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_WinnerScreen_GunFight.UI_WinnerScreen_GunFight_C
// 0x0140 (0x0428 - 0x02E8)
class UUI_WinnerScreen_GunFight_C final : public UUI_WinnerScreen_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UI_WinnerScreen_GunFight_C;         // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BoostPhaseStart;                                   // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ScoreboardFadeIn;                                  // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_BestReward;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Rewards;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FadeInOut_Image;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                FakeLeaveButton;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_11;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_13;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_14;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_31;                                          // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_32;                                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_138;                                         // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_139;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_205;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        LeaveMatchTile_Text;                               // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PanelBackground;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PanelBackground_1;                                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PanelBackground_5;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PreBoostScoreHorizontalBox;                        // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Result;                                            // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ScoreboardSizebox;                                 // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ShowAfterFadeIn;                                   // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                ShowHideButton;                                    // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                SkipButton;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Slot_RewardPopUp;                                  // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Text_BoostPercentage;                              // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Text_PreBoostTotalTeamScore;                       // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Text_TotalTeamScore;                               // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ProgressBar_GunfightWinnerScreen_C* UI_ProgressBar_GunfightWinnerScreen_C;             // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ProgressBar_GunfightWinnerScreen_C* UI_ProgressBar_GunfightWinnerScreen_C_1;           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Scoreboard_Main_C*                  UI_Scoreboard_Main;                                // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_ScoreRewards;                       // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ScoreboardActive;                                  // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DoneShowingScoreAddition;                          // 0x0401(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ScoreWidgetsVisibility;                            // 0x0402(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ScoreboardVisible;                                 // 0x0403(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_404[0x4];                                      // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_WinnerScreen_GunFight_C*            WinnerScreenBP;                                    // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScoresVisibilityToggleTime;                        // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HighestRewardThreshold;                            // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AdjustedHighestRewardThreshold;                    // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HighestRewardTierReached;                          // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Scoreboard_Controls_LeaveMatch_C*   LeaveMatchControl;                                 // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_WinnerScreen_GunFight(int32 EntryPoint);
	void BndEvt__UI_WinnerScreen_GunFight_FakeLeaveButton_K2Node_ComponentBoundEvent_2_OnActionHoldEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ShowRewardPopUp(int32 AwardedXP, const TMap<class UClass*, int32>& AwardedItems);
	void ToggleScoreBoardVisibility();
	void ShowFakeLeaveButton();
	void UpdateConfirmButtonText();
	void TogglePlayerScoreWidgetVisibility();
	void BoostPhaseStarted(int32 PreBoostScore, int32 BoostPercent);
	void ScoreAdditionEnded();
	void ShowMatchResult();
	void PreConstruct(bool IsDesignTime);
	void UpdateTotalTeamScore(int32 Score);
	void BndEvt__SkipButton_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature();
	void Show_Scoreboard(bool IsLocalPlayerWinning, const TArray<struct FStruct_ScoreboardTab>& ScoreboardTabs, float FadeDelay);
	void Construct();
	void BndEvt__UI_GamepadActionWidget_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void SecondPassed();
	void Set_Leave_Time(int32 Time);
	void Faded_Out_Complete();
	void Fade_Out();
	void Faded_In_Complete();
	void Fade_In();
	void GetWinnerScreenBP();
	void GetCurrentProgressBar(class UUI_ProgressBar_GunfightWinnerScreen_C** Bar);
	void Play_Reward_UI_Animation(int32 AchievedRewardTier, bool bWon);
	void HideAllRewards(int32 RewardTier, bool Won);
	void HandleUIAndSounds(bool LocalPlayerWon, int32 RewardTier);
	void StopAllRewardAnimations(bool bWon);
	void SetupReward_UI_Representation(TArray<struct FStruct_NonEncounterMatchRewards>& RewardSettings);
	void GetCorrectRewardThresholdPosition(int32 ScoreThreshold, struct FVector2D* RelativePosition);
	void GetRewardWidgets(TArray<class UWidget*>* Rewards);
	void Hide_Surpassed_Rewards();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_WinnerScreen_GunFight_C">();
	}
	static class UUI_WinnerScreen_GunFight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_WinnerScreen_GunFight_C>();
	}
};
static_assert(alignof(UUI_WinnerScreen_GunFight_C) == 0x000008, "Wrong alignment on UUI_WinnerScreen_GunFight_C");
static_assert(sizeof(UUI_WinnerScreen_GunFight_C) == 0x000428, "Wrong size on UUI_WinnerScreen_GunFight_C");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, UberGraphFrame_UI_WinnerScreen_GunFight_C) == 0x0002E8, "Member 'UUI_WinnerScreen_GunFight_C::UberGraphFrame_UI_WinnerScreen_GunFight_C' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, BoostPhaseStart) == 0x0002F0, "Member 'UUI_WinnerScreen_GunFight_C::BoostPhaseStart' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, ScoreboardFadeIn) == 0x0002F8, "Member 'UUI_WinnerScreen_GunFight_C::ScoreboardFadeIn' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, FadeIn) == 0x000300, "Member 'UUI_WinnerScreen_GunFight_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Canvas_BestReward) == 0x000308, "Member 'UUI_WinnerScreen_GunFight_C::Canvas_BestReward' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Canvas_Rewards) == 0x000310, "Member 'UUI_WinnerScreen_GunFight_C::Canvas_Rewards' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, FadeInOut_Image) == 0x000318, "Member 'UUI_WinnerScreen_GunFight_C::FadeInOut_Image' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, FakeLeaveButton) == 0x000320, "Member 'UUI_WinnerScreen_GunFight_C::FakeLeaveButton' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Image_7) == 0x000328, "Member 'UUI_WinnerScreen_GunFight_C::Image_7' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Image_11) == 0x000330, "Member 'UUI_WinnerScreen_GunFight_C::Image_11' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Image_13) == 0x000338, "Member 'UUI_WinnerScreen_GunFight_C::Image_13' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Image_14) == 0x000340, "Member 'UUI_WinnerScreen_GunFight_C::Image_14' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Image_31) == 0x000348, "Member 'UUI_WinnerScreen_GunFight_C::Image_31' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Image_32) == 0x000350, "Member 'UUI_WinnerScreen_GunFight_C::Image_32' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Image_138) == 0x000358, "Member 'UUI_WinnerScreen_GunFight_C::Image_138' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Image_139) == 0x000360, "Member 'UUI_WinnerScreen_GunFight_C::Image_139' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Image_205) == 0x000368, "Member 'UUI_WinnerScreen_GunFight_C::Image_205' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, LeaveMatchTile_Text) == 0x000370, "Member 'UUI_WinnerScreen_GunFight_C::LeaveMatchTile_Text' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, PanelBackground) == 0x000378, "Member 'UUI_WinnerScreen_GunFight_C::PanelBackground' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, PanelBackground_1) == 0x000380, "Member 'UUI_WinnerScreen_GunFight_C::PanelBackground_1' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, PanelBackground_5) == 0x000388, "Member 'UUI_WinnerScreen_GunFight_C::PanelBackground_5' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, PreBoostScoreHorizontalBox) == 0x000390, "Member 'UUI_WinnerScreen_GunFight_C::PreBoostScoreHorizontalBox' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Result) == 0x000398, "Member 'UUI_WinnerScreen_GunFight_C::Result' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, ScoreboardSizebox) == 0x0003A0, "Member 'UUI_WinnerScreen_GunFight_C::ScoreboardSizebox' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, ShowAfterFadeIn) == 0x0003A8, "Member 'UUI_WinnerScreen_GunFight_C::ShowAfterFadeIn' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, ShowHideButton) == 0x0003B0, "Member 'UUI_WinnerScreen_GunFight_C::ShowHideButton' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, SkipButton) == 0x0003B8, "Member 'UUI_WinnerScreen_GunFight_C::SkipButton' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Slot_RewardPopUp) == 0x0003C0, "Member 'UUI_WinnerScreen_GunFight_C::Slot_RewardPopUp' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Text_BoostPercentage) == 0x0003C8, "Member 'UUI_WinnerScreen_GunFight_C::Text_BoostPercentage' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Text_PreBoostTotalTeamScore) == 0x0003D0, "Member 'UUI_WinnerScreen_GunFight_C::Text_PreBoostTotalTeamScore' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, Text_TotalTeamScore) == 0x0003D8, "Member 'UUI_WinnerScreen_GunFight_C::Text_TotalTeamScore' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, UI_ProgressBar_GunfightWinnerScreen_C) == 0x0003E0, "Member 'UUI_WinnerScreen_GunFight_C::UI_ProgressBar_GunfightWinnerScreen_C' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, UI_ProgressBar_GunfightWinnerScreen_C_1) == 0x0003E8, "Member 'UUI_WinnerScreen_GunFight_C::UI_ProgressBar_GunfightWinnerScreen_C_1' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, UI_Scoreboard_Main) == 0x0003F0, "Member 'UUI_WinnerScreen_GunFight_C::UI_Scoreboard_Main' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, WidgetSwitcher_ScoreRewards) == 0x0003F8, "Member 'UUI_WinnerScreen_GunFight_C::WidgetSwitcher_ScoreRewards' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, ScoreboardActive) == 0x000400, "Member 'UUI_WinnerScreen_GunFight_C::ScoreboardActive' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, DoneShowingScoreAddition) == 0x000401, "Member 'UUI_WinnerScreen_GunFight_C::DoneShowingScoreAddition' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, ScoreWidgetsVisibility) == 0x000402, "Member 'UUI_WinnerScreen_GunFight_C::ScoreWidgetsVisibility' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, ScoreboardVisible) == 0x000403, "Member 'UUI_WinnerScreen_GunFight_C::ScoreboardVisible' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, WinnerScreenBP) == 0x000408, "Member 'UUI_WinnerScreen_GunFight_C::WinnerScreenBP' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, ScoresVisibilityToggleTime) == 0x000410, "Member 'UUI_WinnerScreen_GunFight_C::ScoresVisibilityToggleTime' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, HighestRewardThreshold) == 0x000414, "Member 'UUI_WinnerScreen_GunFight_C::HighestRewardThreshold' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, AdjustedHighestRewardThreshold) == 0x000418, "Member 'UUI_WinnerScreen_GunFight_C::AdjustedHighestRewardThreshold' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, HighestRewardTierReached) == 0x00041C, "Member 'UUI_WinnerScreen_GunFight_C::HighestRewardTierReached' has a wrong offset!");
static_assert(offsetof(UUI_WinnerScreen_GunFight_C, LeaveMatchControl) == 0x000420, "Member 'UUI_WinnerScreen_GunFight_C::LeaveMatchControl' has a wrong offset!");

}

