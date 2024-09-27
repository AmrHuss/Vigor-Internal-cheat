#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TitleLogic_Base

#include "Basic.hpp"

#include "F_TitleRank_structs.hpp"
#include "F_TitleList_structs.hpp"


namespace SDK::Params
{

// Function BP_TitleLogic_Base.BP_TitleLogic_Base_C.Is Initialized
// 0x0001 (0x0001 - 0x0000)
struct BP_TitleLogic_Base_C_Is_Initialized final
{
public:
	bool                                          Initialized;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleLogic_Base_C_Is_Initialized) == 0x000001, "Wrong alignment on BP_TitleLogic_Base_C_Is_Initialized");
static_assert(sizeof(BP_TitleLogic_Base_C_Is_Initialized) == 0x000001, "Wrong size on BP_TitleLogic_Base_C_Is_Initialized");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Initialized, Initialized) == 0x000000, "Member 'BP_TitleLogic_Base_C_Is_Initialized::Initialized' has a wrong offset!");

// Function BP_TitleLogic_Base.BP_TitleLogic_Base_C.Is Title Owned
// 0x0148 (0x0148 - 0x0000)
struct BP_TitleLogic_Base_C_Is_Title_Owned final
{
public:
	int32                                         Title_ID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Title_Owned;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Rank_Index;                                        // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Last_Owned_Rank;                                   // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Get_Row_Name_from_Title_ID_Row_Name;      // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FF_TitleList                           CallFunc_Get_Title_Info_from_Row_Name_Title_Info;  // 0x0038(0x0048)(HasGetValueTypeHash)
	bool                                          CallFunc_Get_Title_Info_from_Row_Name_Valid_Output; // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FF_TitleRank                           CallFunc_Array_Get_Item;                           // 0x0088(0x00B8)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Rank_Owned_Owned;                      // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0146(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleLogic_Base_C_Is_Title_Owned) == 0x000008, "Wrong alignment on BP_TitleLogic_Base_C_Is_Title_Owned");
static_assert(sizeof(BP_TitleLogic_Base_C_Is_Title_Owned) == 0x000148, "Wrong size on BP_TitleLogic_Base_C_Is_Title_Owned");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, Title_ID) == 0x000000, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::Title_ID' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, Title_Owned) == 0x000004, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::Title_Owned' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, Rank_Index) == 0x000008, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::Rank_Index' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, Last_Owned_Rank) == 0x00000C, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::Last_Owned_Rank' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, Temp_bool_True_if_break_was_hit_Variable) == 0x000010, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, CallFunc_Get_Row_Name_from_Title_ID_Row_Name) == 0x00002C, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::CallFunc_Get_Row_Name_from_Title_ID_Row_Name' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, CallFunc_Get_Title_Info_from_Row_Name_Title_Info) == 0x000038, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::CallFunc_Get_Title_Info_from_Row_Name_Title_Info' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, CallFunc_Get_Title_Info_from_Row_Name_Valid_Output) == 0x000080, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::CallFunc_Get_Title_Info_from_Row_Name_Valid_Output' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, CallFunc_Array_Get_Item) == 0x000088, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, CallFunc_Array_Length_ReturnValue) == 0x000140, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, CallFunc_Is_Rank_Owned_Owned) == 0x000144, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::CallFunc_Is_Rank_Owned_Owned' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, CallFunc_Less_IntInt_ReturnValue) == 0x000145, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Title_Owned, CallFunc_BooleanAND_ReturnValue) == 0x000146, "Member 'BP_TitleLogic_Base_C_Is_Title_Owned::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_TitleLogic_Base.BP_TitleLogic_Base_C.Is Rank Owned
// 0x00C0 (0x00C0 - 0x0000)
struct BP_TitleLogic_Base_C_Is_Rank_Owned final
{
public:
	struct FF_TitleRank                           Rank_Info;                                         // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Owned;                                             // 0x00B8(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleLogic_Base_C_Is_Rank_Owned) == 0x000008, "Wrong alignment on BP_TitleLogic_Base_C_Is_Rank_Owned");
static_assert(sizeof(BP_TitleLogic_Base_C_Is_Rank_Owned) == 0x0000C0, "Wrong size on BP_TitleLogic_Base_C_Is_Rank_Owned");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Rank_Owned, Rank_Info) == 0x000000, "Member 'BP_TitleLogic_Base_C_Is_Rank_Owned::Rank_Info' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Is_Rank_Owned, Owned) == 0x0000B8, "Member 'BP_TitleLogic_Base_C_Is_Rank_Owned::Owned' has a wrong offset!");

// Function BP_TitleLogic_Base.BP_TitleLogic_Base_C.Get Title Logic Status Log
// 0x0058 (0x0058 - 0x0000)
struct BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log final
{
public:
	class FString                                 Log;                                               // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Initialized_Initialized;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log) == 0x000008, "Wrong alignment on BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log");
static_assert(sizeof(BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log) == 0x000058, "Wrong size on BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log");
static_assert(offsetof(BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log, Log) == 0x000000, "Member 'BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log::Log' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log, CallFunc_Is_Initialized_Initialized) == 0x000010, "Member 'BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log::CallFunc_Is_Initialized_Initialized' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log, CallFunc_GetDisplayName_ReturnValue) == 0x000018, "Member 'BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log, CallFunc_Conv_BoolToString_ReturnValue) == 0x000028, "Member 'BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log::CallFunc_Conv_BoolToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000048, "Member 'BP_TitleLogic_Base_C_Get_Title_Logic_Status_Log::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function BP_TitleLogic_Base.BP_TitleLogic_Base_C.Get Title Item
// 0x00C8 (0x00C8 - 0x0000)
struct BP_TitleLogic_Base_C_Get_Title_Item final
{
public:
	struct FF_TitleRank                           Rank;                                              // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UClass*                                 Item;                                              // 0x00B8(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Valid;                                             // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TitleLogic_Base_C_Get_Title_Item) == 0x000008, "Wrong alignment on BP_TitleLogic_Base_C_Get_Title_Item");
static_assert(sizeof(BP_TitleLogic_Base_C_Get_Title_Item) == 0x0000C8, "Wrong size on BP_TitleLogic_Base_C_Get_Title_Item");
static_assert(offsetof(BP_TitleLogic_Base_C_Get_Title_Item, Rank) == 0x000000, "Member 'BP_TitleLogic_Base_C_Get_Title_Item::Rank' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Get_Title_Item, Item) == 0x0000B8, "Member 'BP_TitleLogic_Base_C_Get_Title_Item::Item' has a wrong offset!");
static_assert(offsetof(BP_TitleLogic_Base_C_Get_Title_Item, Valid) == 0x0000C0, "Member 'BP_TitleLogic_Base_C_Get_Title_Item::Valid' has a wrong offset!");

}
