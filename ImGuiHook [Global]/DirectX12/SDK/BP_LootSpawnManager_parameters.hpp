#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LootSpawnManager

#include "Basic.hpp"

#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function BP_LootSpawnManager.BP_LootSpawnManager_C.ExecuteUbergraph_BP_LootSpawnManager
// 0x00D0 (0x00D0 - 0x0000)
struct BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, int32>                    CallFunc_GetLootCapacityInActorsInLevel_Loot_Amounts; // 0x0010(0x0050)()
	TArray<class UClass*>                         CallFunc_Map_Keys_Keys;                            // 0x0060(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue;          // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager) == 0x000008, "Wrong alignment on BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager");
static_assert(sizeof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager) == 0x0000D0, "Wrong size on BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager");
static_assert(offsetof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager, EntryPoint) == 0x000000, "Member 'BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager, CallFunc_GetLootCapacityInActorsInLevel_Loot_Amounts) == 0x000010, "Member 'BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager::CallFunc_GetLootCapacityInActorsInLevel_Loot_Amounts' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager, CallFunc_Map_Keys_Keys) == 0x000060, "Member 'BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager, CallFunc_Array_Get_Item) == 0x000078, "Member 'BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager, CallFunc_GetClassDisplayName_ReturnValue) == 0x000088, "Member 'BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager::CallFunc_GetClassDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager, CallFunc_Concat_StrStr_ReturnValue) == 0x000098, "Member 'BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager, CallFunc_Map_Find_Value) == 0x0000A8, "Member 'BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager, CallFunc_Map_Find_ReturnValue) == 0x0000AC, "Member 'BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager, CallFunc_Conv_IntToString_ReturnValue) == 0x0000B0, "Member 'BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C0, "Member 'BP_LootSpawnManager_C_ExecuteUbergraph_BP_LootSpawnManager::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function BP_LootSpawnManager.BP_LootSpawnManager_C.GetLootCapacityInActorsInLevel
// 0x0170 (0x0170 - 0x0000)
struct BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel final
{
public:
	class UClass*                                 Actor_Type;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, int32>                    Loot_Amounts;                                      // 0x0008(0x0050)(Parm, OutParm)
	TMap<class UClass*, int32>                    CommodityAmounts;                                  // 0x0058(0x0050)(Edit, BlueprintVisible)
	TArray<class AActor*>                         CallFunc_GetAllActorsOfClass_OutActors;            // 0x00A8(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCommodityDescriptor>           K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EA[0x2];                                       // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCommodityDescriptor                   CallFunc_Array_Get_Item_1;                         // 0x0108(0x0028)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_132[0x6];                                      // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCommoditySpawnPoint*>           CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0138(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UCommoditySpawnPoint*                   CallFunc_Array_Get_Item_2;                         // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCommodityCapacityMaximum_ReturnValue;  // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15B[0x1];                                      // 0x015B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_165[0x3];                                      // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel) == 0x000008, "Wrong alignment on BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel");
static_assert(sizeof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel) == 0x000170, "Wrong size on BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, Actor_Type) == 0x000000, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::Actor_Type' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, Loot_Amounts) == 0x000008, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::Loot_Amounts' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CommodityAmounts) == 0x000058, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CommodityAmounts' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_GetAllActorsOfClass_OutActors) == 0x0000A8, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, Temp_int_Array_Index_Variable) == 0x0000B8, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_Array_Length_ReturnValue) == 0x0000BC, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, Temp_bool_Variable) == 0x0000C0, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, Temp_int_Loop_Counter_Variable) == 0x0000C4, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, K2Node_MakeArray_Array) == 0x0000C8, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_Array_Length_ReturnValue_1) == 0x0000D8, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_Add_IntInt_ReturnValue) == 0x0000DC, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, Temp_int_Loop_Counter_Variable_1) == 0x0000E0, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, Temp_int_Loop_Counter_Variable_2) == 0x0000E4, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_Less_IntInt_ReturnValue) == 0x0000E8, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000E9, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000EC, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000F0, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, Temp_int_Array_Index_Variable_1) == 0x0000F4, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, Temp_int_Array_Index_Variable_2) == 0x0000F8, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_Array_Get_Item) == 0x000100, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_Array_Get_Item_1) == 0x000108, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_IsValid_ReturnValue) == 0x000130, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_IsValidClass_ReturnValue) == 0x000131, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000138, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_Array_Get_Item_2) == 0x000148, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_Array_Length_ReturnValue_2) == 0x000150, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_GetCommodityCapacityMaximum_ReturnValue) == 0x000154, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_GetCommodityCapacityMaximum_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_Less_IntInt_ReturnValue_2) == 0x000158, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_IsValid_ReturnValue_1) == 0x000159, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x00015A, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, Temp_int_Variable) == 0x00015C, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_Map_Find_Value) == 0x000160, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_Map_Find_ReturnValue) == 0x000164, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, K2Node_Select_Default) == 0x000168, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel, CallFunc_Add_IntInt_ReturnValue_3) == 0x00016C, "Member 'BP_LootSpawnManager_C_GetLootCapacityInActorsInLevel::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");

}
