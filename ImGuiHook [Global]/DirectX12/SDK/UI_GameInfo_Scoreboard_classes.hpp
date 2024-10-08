#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameInfo_Scoreboard

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameInfo_Scoreboard.UI_GameInfo_Scoreboard_C
// 0x0028 (0x0340 - 0x0318)
class UUI_GameInfo_Scoreboard_C final : public UTabControlWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             ScrollBoxTabs;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTabWidget*>                     Created_Tabs;                                      // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUI_GameInfo_ScoreboardSubTabWidget_C*  CurrentSelectedTab;                                // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_GameInfo_Scoreboard(int32 EntryPoint);
	void OnSelectionChanged(int32 NewIndex, int32 OldIndex);
	void OnTabItemClicked(class UButton* Sender);

	TArray<class UTabWidget*> CreateTabs() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameInfo_Scoreboard_C">();
	}
	static class UUI_GameInfo_Scoreboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameInfo_Scoreboard_C>();
	}
};
static_assert(alignof(UUI_GameInfo_Scoreboard_C) == 0x000008, "Wrong alignment on UUI_GameInfo_Scoreboard_C");
static_assert(sizeof(UUI_GameInfo_Scoreboard_C) == 0x000340, "Wrong size on UUI_GameInfo_Scoreboard_C");
static_assert(offsetof(UUI_GameInfo_Scoreboard_C, UberGraphFrame) == 0x000318, "Member 'UUI_GameInfo_Scoreboard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_GameInfo_Scoreboard_C, ScrollBoxTabs) == 0x000320, "Member 'UUI_GameInfo_Scoreboard_C::ScrollBoxTabs' has a wrong offset!");
static_assert(offsetof(UUI_GameInfo_Scoreboard_C, Created_Tabs) == 0x000328, "Member 'UUI_GameInfo_Scoreboard_C::Created_Tabs' has a wrong offset!");
static_assert(offsetof(UUI_GameInfo_Scoreboard_C, CurrentSelectedTab) == 0x000338, "Member 'UUI_GameInfo_Scoreboard_C::CurrentSelectedTab' has a wrong offset!");

}

