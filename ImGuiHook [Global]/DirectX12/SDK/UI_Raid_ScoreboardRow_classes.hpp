#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Raid_ScoreboardRow

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Raid_ScoreboardRow.UI_Raid_ScoreboardRow_C
// 0x0028 (0x02E0 - 0x02B8)
class UUI_Raid_ScoreboardRow_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Deaths_Text;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Kills_Text;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ObjectiveTime_Text;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerName_Text;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Raid_ScoreboardRow(int32 EntryPoint);
	void Fill_Row(const struct FStruct_RaidStatistics& Statistic);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Raid_ScoreboardRow_C">();
	}
	static class UUI_Raid_ScoreboardRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Raid_ScoreboardRow_C>();
	}
};
static_assert(alignof(UUI_Raid_ScoreboardRow_C) == 0x000008, "Wrong alignment on UUI_Raid_ScoreboardRow_C");
static_assert(sizeof(UUI_Raid_ScoreboardRow_C) == 0x0002E0, "Wrong size on UUI_Raid_ScoreboardRow_C");
static_assert(offsetof(UUI_Raid_ScoreboardRow_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_Raid_ScoreboardRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Raid_ScoreboardRow_C, Deaths_Text) == 0x0002C0, "Member 'UUI_Raid_ScoreboardRow_C::Deaths_Text' has a wrong offset!");
static_assert(offsetof(UUI_Raid_ScoreboardRow_C, Kills_Text) == 0x0002C8, "Member 'UUI_Raid_ScoreboardRow_C::Kills_Text' has a wrong offset!");
static_assert(offsetof(UUI_Raid_ScoreboardRow_C, ObjectiveTime_Text) == 0x0002D0, "Member 'UUI_Raid_ScoreboardRow_C::ObjectiveTime_Text' has a wrong offset!");
static_assert(offsetof(UUI_Raid_ScoreboardRow_C, PlayerName_Text) == 0x0002D8, "Member 'UUI_Raid_ScoreboardRow_C::PlayerName_Text' has a wrong offset!");

}

