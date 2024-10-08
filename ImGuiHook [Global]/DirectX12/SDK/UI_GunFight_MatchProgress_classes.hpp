#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GunFight_MatchProgress

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GunFight_MatchProgress.UI_GunFight_MatchProgress_C
// 0x00E0 (0x0398 - 0x02B8)
class UUI_GunFight_MatchProgress_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 AttackerArrow;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AttackerBackground_Image;                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AttackerSideName_Text;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AttackerWonRounds_Text;                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackgroundLine;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DefenderArrow;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DefenderBackground_Image;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DefenderSideName_Text;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DefendersWonRounds_Text;                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBox_WinPoints;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_36;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_286;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NotificationHolder_vBox;                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Phase_Text;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RoundTime_Text;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GunFight_TeamIndicator_C*           UI_GunFight_TeamIndicator_Left;                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_GunFight_TeamIndicator_C*           UI_GunFight_TeamIndicator_Right;                   // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           Coutdown_Handle;                                   // 0x0358(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Score_Last_Time;                                   // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_364[0x4];                                      // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_GunFight_WinPoint_C*>        RoundWinPoints;                                    // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         Last_Attacker_Winner_Point_Index;                  // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Last_Defender_Winner_Point_Index;                  // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_GSC_Team_C*                         Friendly_Team;                                     // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_GSC_Team_C*                         Enemy_Team;                                        // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RoundsToWin;                                       // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_GunFight_MatchProgress(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void UpdatePlayerIndicators();
	void UpdatePlayerIndicatorIcon(class UUI_GunFight_PlayerIndicator_C* Indicator, bool WasKicked);
	void New_Round_Started();
	void Construct();
	void Set_Round_Timer(int32 Round_Time, bool Is_Objective_Phase);
	void Update_Win_Rounds(int32 Attacker_Won_Rounds, int32 Defender_Won_Rounds);
	void Find_Teams();
	void Add_Widget_To_Notification_Holder(class UWidget* Widget);
	void SetupWinnerPoints();
	void GenerateWinPoints(int32 RoundsToWin_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GunFight_MatchProgress_C">();
	}
	static class UUI_GunFight_MatchProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GunFight_MatchProgress_C>();
	}
};
static_assert(alignof(UUI_GunFight_MatchProgress_C) == 0x000008, "Wrong alignment on UUI_GunFight_MatchProgress_C");
static_assert(sizeof(UUI_GunFight_MatchProgress_C) == 0x000398, "Wrong size on UUI_GunFight_MatchProgress_C");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_GunFight_MatchProgress_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, FadeIn) == 0x0002C0, "Member 'UUI_GunFight_MatchProgress_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, AttackerArrow) == 0x0002C8, "Member 'UUI_GunFight_MatchProgress_C::AttackerArrow' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, AttackerBackground_Image) == 0x0002D0, "Member 'UUI_GunFight_MatchProgress_C::AttackerBackground_Image' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, AttackerSideName_Text) == 0x0002D8, "Member 'UUI_GunFight_MatchProgress_C::AttackerSideName_Text' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, AttackerWonRounds_Text) == 0x0002E0, "Member 'UUI_GunFight_MatchProgress_C::AttackerWonRounds_Text' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, BackgroundLine) == 0x0002E8, "Member 'UUI_GunFight_MatchProgress_C::BackgroundLine' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, DefenderArrow) == 0x0002F0, "Member 'UUI_GunFight_MatchProgress_C::DefenderArrow' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, DefenderBackground_Image) == 0x0002F8, "Member 'UUI_GunFight_MatchProgress_C::DefenderBackground_Image' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, DefenderSideName_Text) == 0x000300, "Member 'UUI_GunFight_MatchProgress_C::DefenderSideName_Text' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, DefendersWonRounds_Text) == 0x000308, "Member 'UUI_GunFight_MatchProgress_C::DefendersWonRounds_Text' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, HBox_WinPoints) == 0x000310, "Member 'UUI_GunFight_MatchProgress_C::HBox_WinPoints' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, Image_36) == 0x000318, "Member 'UUI_GunFight_MatchProgress_C::Image_36' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, Image_286) == 0x000320, "Member 'UUI_GunFight_MatchProgress_C::Image_286' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, NotificationHolder_vBox) == 0x000328, "Member 'UUI_GunFight_MatchProgress_C::NotificationHolder_vBox' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, Phase_Text) == 0x000330, "Member 'UUI_GunFight_MatchProgress_C::Phase_Text' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, RoundTime_Text) == 0x000338, "Member 'UUI_GunFight_MatchProgress_C::RoundTime_Text' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, UI_FlameSafezone) == 0x000340, "Member 'UUI_GunFight_MatchProgress_C::UI_FlameSafezone' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, UI_GunFight_TeamIndicator_Left) == 0x000348, "Member 'UUI_GunFight_MatchProgress_C::UI_GunFight_TeamIndicator_Left' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, UI_GunFight_TeamIndicator_Right) == 0x000350, "Member 'UUI_GunFight_MatchProgress_C::UI_GunFight_TeamIndicator_Right' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, Coutdown_Handle) == 0x000358, "Member 'UUI_GunFight_MatchProgress_C::Coutdown_Handle' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, Score_Last_Time) == 0x000360, "Member 'UUI_GunFight_MatchProgress_C::Score_Last_Time' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, RoundWinPoints) == 0x000368, "Member 'UUI_GunFight_MatchProgress_C::RoundWinPoints' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, Last_Attacker_Winner_Point_Index) == 0x000378, "Member 'UUI_GunFight_MatchProgress_C::Last_Attacker_Winner_Point_Index' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, Last_Defender_Winner_Point_Index) == 0x00037C, "Member 'UUI_GunFight_MatchProgress_C::Last_Defender_Winner_Point_Index' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, Friendly_Team) == 0x000380, "Member 'UUI_GunFight_MatchProgress_C::Friendly_Team' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, Enemy_Team) == 0x000388, "Member 'UUI_GunFight_MatchProgress_C::Enemy_Team' has a wrong offset!");
static_assert(offsetof(UUI_GunFight_MatchProgress_C, RoundsToWin) == 0x000390, "Member 'UUI_GunFight_MatchProgress_C::RoundsToWin' has a wrong offset!");

}

