#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HoldToOpenLootbox

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_HoldToOpenLootbox.UI_HoldToOpenLootbox_C.ExecuteUbergraph_UI_HoldToOpenLootbox
// 0x0068 (0x0068 - 0x0000)
struct UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_LootBoxes_C*                        K2Node_DynamicCast_AsUI_Loot_Boxes;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_LootBoxes_C*                        K2Node_DynamicCast_AsUI_Loot_Boxes_1;              // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_LootBoxes_C*                        K2Node_DynamicCast_AsUI_Loot_Boxes_2;              // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_LootBoxes_C*                        K2Node_DynamicCast_AsUI_Loot_Boxes_3;              // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox) == 0x000008, "Wrong alignment on UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox");
static_assert(sizeof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox) == 0x000068, "Wrong size on UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox");
static_assert(offsetof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox, EntryPoint) == 0x000000, "Member 'UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox, CallFunc_SpawnSound2D_ReturnValue) == 0x000018, "Member 'UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox, K2Node_DynamicCast_AsUI_Loot_Boxes) == 0x000020, "Member 'UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox::K2Node_DynamicCast_AsUI_Loot_Boxes' has a wrong offset!");
static_assert(offsetof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox, K2Node_Event_IsDesignTime) == 0x000029, "Member 'UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox, K2Node_DynamicCast_AsUI_Loot_Boxes_1) == 0x000030, "Member 'UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox::K2Node_DynamicCast_AsUI_Loot_Boxes_1' has a wrong offset!");
static_assert(offsetof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox, K2Node_DynamicCast_AsUI_Loot_Boxes_2) == 0x000040, "Member 'UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox::K2Node_DynamicCast_AsUI_Loot_Boxes_2' has a wrong offset!");
static_assert(offsetof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox, K2Node_DynamicCast_bSuccess_2) == 0x000048, "Member 'UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox, K2Node_DynamicCast_AsUI_Loot_Boxes_3) == 0x000050, "Member 'UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox::K2Node_DynamicCast_AsUI_Loot_Boxes_3' has a wrong offset!");
static_assert(offsetof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox, K2Node_DynamicCast_bSuccess_3) == 0x000058, "Member 'UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000060, "Member 'UI_HoldToOpenLootbox_C_ExecuteUbergraph_UI_HoldToOpenLootbox::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");

// Function UI_HoldToOpenLootbox.UI_HoldToOpenLootbox_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_HoldToOpenLootbox_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_HoldToOpenLootbox_C_PreConstruct) == 0x000001, "Wrong alignment on UI_HoldToOpenLootbox_C_PreConstruct");
static_assert(sizeof(UI_HoldToOpenLootbox_C_PreConstruct) == 0x000001, "Wrong size on UI_HoldToOpenLootbox_C_PreConstruct");
static_assert(offsetof(UI_HoldToOpenLootbox_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_HoldToOpenLootbox_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

