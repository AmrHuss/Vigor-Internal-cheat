#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_TitleList

#include "Basic.hpp"

#include "F_TitleRank_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_TitleList.F_TitleList
// 0x0048 (0x0048 - 0x0000)
struct FF_TitleList final
{
public:
	TSoftClassPtr<class UClass>                   TitleClass_31_B54747454E153837E54A0FB5BF71FBA5;    // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          Enabled_23_533B4A44472AFD274FAFCD94E0BEA119;       // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TitleID_30_B5184A344C95742DCC2951AF91BDA72E;       // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VisibleWhenNotOwned_12_E8DEEDC04AC1A4FDE211DABFA214BB14; // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FF_TitleRank>                   Ranks_28_456A4F6D4A2EAD534D39E695FAE22C70;         // 0x0038(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FF_TitleList) == 0x000008, "Wrong alignment on FF_TitleList");
static_assert(sizeof(FF_TitleList) == 0x000048, "Wrong size on FF_TitleList");
static_assert(offsetof(FF_TitleList, TitleClass_31_B54747454E153837E54A0FB5BF71FBA5) == 0x000000, "Member 'FF_TitleList::TitleClass_31_B54747454E153837E54A0FB5BF71FBA5' has a wrong offset!");
static_assert(offsetof(FF_TitleList, Enabled_23_533B4A44472AFD274FAFCD94E0BEA119) == 0x000028, "Member 'FF_TitleList::Enabled_23_533B4A44472AFD274FAFCD94E0BEA119' has a wrong offset!");
static_assert(offsetof(FF_TitleList, TitleID_30_B5184A344C95742DCC2951AF91BDA72E) == 0x00002C, "Member 'FF_TitleList::TitleID_30_B5184A344C95742DCC2951AF91BDA72E' has a wrong offset!");
static_assert(offsetof(FF_TitleList, VisibleWhenNotOwned_12_E8DEEDC04AC1A4FDE211DABFA214BB14) == 0x000030, "Member 'FF_TitleList::VisibleWhenNotOwned_12_E8DEEDC04AC1A4FDE211DABFA214BB14' has a wrong offset!");
static_assert(offsetof(FF_TitleList, Ranks_28_456A4F6D4A2EAD534D39E695FAE22C70) == 0x000038, "Member 'FF_TitleList::Ranks_28_456A4F6D4A2EAD534D39E695FAE22C70' has a wrong offset!");

}
