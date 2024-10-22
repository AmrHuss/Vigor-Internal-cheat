#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LootboxCardItemTexts

#include "Basic.hpp"

#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function UI_LootboxCardItemTexts.UI_LootboxCardItemTexts_C.SetItem
// 0x0070 (0x0070 - 0x0000)
struct UI_LootboxCardItemTexts_C_SetItem final
{
public:
	class UClass*                                 ItemClass;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItem*                                  CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetCategoryName_ReturnValue;              // 0x0010(0x0018)()
	struct FItemRarity                            CallFunc_GetItemRarity_ReturnValue;                // 0x0028(0x0028)(ConstParm)
	class FText                                   CallFunc_GetItemName_ReturnValue;                  // 0x0050(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_LootboxCardItemTexts_C_SetItem) == 0x000008, "Wrong alignment on UI_LootboxCardItemTexts_C_SetItem");
static_assert(sizeof(UI_LootboxCardItemTexts_C_SetItem) == 0x000070, "Wrong size on UI_LootboxCardItemTexts_C_SetItem");
static_assert(offsetof(UI_LootboxCardItemTexts_C_SetItem, ItemClass) == 0x000000, "Member 'UI_LootboxCardItemTexts_C_SetItem::ItemClass' has a wrong offset!");
static_assert(offsetof(UI_LootboxCardItemTexts_C_SetItem, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000008, "Member 'UI_LootboxCardItemTexts_C_SetItem::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootboxCardItemTexts_C_SetItem, CallFunc_GetCategoryName_ReturnValue) == 0x000010, "Member 'UI_LootboxCardItemTexts_C_SetItem::CallFunc_GetCategoryName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootboxCardItemTexts_C_SetItem, CallFunc_GetItemRarity_ReturnValue) == 0x000028, "Member 'UI_LootboxCardItemTexts_C_SetItem::CallFunc_GetItemRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootboxCardItemTexts_C_SetItem, CallFunc_GetItemName_ReturnValue) == 0x000050, "Member 'UI_LootboxCardItemTexts_C_SetItem::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LootboxCardItemTexts_C_SetItem, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'UI_LootboxCardItemTexts_C_SetItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

