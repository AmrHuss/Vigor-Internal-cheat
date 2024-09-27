#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ConfirmBuildingBoost

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_ConfirmBuildingBoost.UI_ConfirmBuildingBoost_C.ExecuteUbergraph_UI_ConfirmBuildingBoost
// 0x0058 (0x0058 - 0x0000)
struct UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_GetCrownsMessageBox_C*              CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AShelterSlot*                           CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetIcon_ReturnValue;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   Temp_text_Variable;                                // 0x0030(0x0018)(ConstParm)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetZOrder_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost) == 0x000008, "Wrong alignment on UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost");
static_assert(sizeof(UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost) == 0x000058, "Wrong size on UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost, EntryPoint) == 0x000000, "Member 'UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost, CallFunc_Create_ReturnValue) == 0x000008, "Member 'UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000010, "Member 'UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost, CallFunc_GetIcon_ReturnValue) == 0x000018, "Member 'UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost::CallFunc_GetIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost, Temp_text_Variable) == 0x000030, "Member 'UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000048, "Member 'UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost, CallFunc_GetZOrder_ReturnValue) == 0x000050, "Member 'UI_ConfirmBuildingBoost_C_ExecuteUbergraph_UI_ConfirmBuildingBoost::CallFunc_GetZOrder_ReturnValue' has a wrong offset!");

// Function UI_ConfirmBuildingBoost.UI_ConfirmBuildingBoost_C.UpdateUI
// 0x00E8 (0x00E8 - 0x0000)
struct UI_ConfirmBuildingBoost_C_UpdateUI final
{
public:
	struct FTimespan                              RemainingTime;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AStash*                                 Stash;                                             // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetBoostImprovementUpgradePrice_ReturnValue; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_TimespanTimespan_ReturnValue;     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	int32                                         CallFunc_GetHardCurrency_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_FormatTimespanDHMS_ZeroClamped__TimespanDHMSOut; // 0x0070(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTimeToUpgradeImprovementForNextLevel_ReturnValue; // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0094(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00A8(0x0028)()
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStash*                                 CallFunc_GetStash_ReturnValue;                     // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_GetRemainingImprovementBuildingTime_ReturnValue; // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ConfirmBuildingBoost_C_UpdateUI) == 0x000008, "Wrong alignment on UI_ConfirmBuildingBoost_C_UpdateUI");
static_assert(sizeof(UI_ConfirmBuildingBoost_C_UpdateUI) == 0x0000E8, "Wrong size on UI_ConfirmBuildingBoost_C_UpdateUI");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, RemainingTime) == 0x000000, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::RemainingTime' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, Stash) == 0x000008, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::Stash' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, Temp_struct_Variable) == 0x000010, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, CallFunc_GetBoostImprovementUpgradePrice_ReturnValue) == 0x000024, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::CallFunc_GetBoostImprovementUpgradePrice_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, CallFunc_MakeTimespan_ReturnValue) == 0x000028, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, CallFunc_Greater_TimespanTimespan_ReturnValue) == 0x000030, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::CallFunc_Greater_TimespanTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, CallFunc_GetHardCurrency_ReturnValue) == 0x000050, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::CallFunc_GetHardCurrency_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000054, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, Temp_struct_Variable_1) == 0x000058, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, CallFunc_GetTotalSeconds_ReturnValue) == 0x000068, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, CallFunc_FormatTimespanDHMS_ZeroClamped__TimespanDHMSOut) == 0x000070, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::CallFunc_FormatTimespanDHMS_ZeroClamped__TimespanDHMSOut' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, Temp_bool_Variable) == 0x000088, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, CallFunc_GetTimeToUpgradeImprovementForNextLevel_ReturnValue) == 0x00008C, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::CallFunc_GetTimeToUpgradeImprovementForNextLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000090, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, K2Node_Select_Default) == 0x000094, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000A4, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, K2Node_MakeStruct_SlateColor) == 0x0000A8, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000D0, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, CallFunc_GetStash_ReturnValue) == 0x0000D8, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::CallFunc_GetStash_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_UpdateUI, CallFunc_GetRemainingImprovementBuildingTime_ReturnValue) == 0x0000E0, "Member 'UI_ConfirmBuildingBoost_C_UpdateUI::CallFunc_GetRemainingImprovementBuildingTime_ReturnValue' has a wrong offset!");

// Function UI_ConfirmBuildingBoost.UI_ConfirmBuildingBoost_C.GetStash
// 0x0028 (0x0028 - 0x0000)
struct UI_ConfirmBuildingBoost_C_GetStash final
{
public:
	class AStash*                                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerState*                      K2Node_DynamicCast_AsHuman_Player_State;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AStash*                                 CallFunc_GetStash_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ConfirmBuildingBoost_C_GetStash) == 0x000008, "Wrong alignment on UI_ConfirmBuildingBoost_C_GetStash");
static_assert(sizeof(UI_ConfirmBuildingBoost_C_GetStash) == 0x000028, "Wrong size on UI_ConfirmBuildingBoost_C_GetStash");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetStash, ReturnValue) == 0x000000, "Member 'UI_ConfirmBuildingBoost_C_GetStash::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetStash, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'UI_ConfirmBuildingBoost_C_GetStash::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetStash, K2Node_DynamicCast_AsHuman_Player_State) == 0x000010, "Member 'UI_ConfirmBuildingBoost_C_GetStash::K2Node_DynamicCast_AsHuman_Player_State' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetStash, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UI_ConfirmBuildingBoost_C_GetStash::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetStash, CallFunc_GetStash_ReturnValue) == 0x000020, "Member 'UI_ConfirmBuildingBoost_C_GetStash::CallFunc_GetStash_ReturnValue' has a wrong offset!");

// Function UI_ConfirmBuildingBoost.UI_ConfirmBuildingBoost_C.GetPossibleSavedTime
// 0x01A0 (0x01A0 - 0x0000)
struct UI_ConfirmBuildingBoost_C_GetPossibleSavedTime final
{
public:
	struct FTimespan                              A;                                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 Temp_string_Variable;                              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Divide_TimespanFloat_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Days;                       // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Hours;                      // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Minutes;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Seconds;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Milliseconds;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_2;                            // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default_2;                           // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0188(0x0018)()
};
static_assert(alignof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime) == 0x000008, "Wrong alignment on UI_ConfirmBuildingBoost_C_GetPossibleSavedTime");
static_assert(sizeof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime) == 0x0001A0, "Wrong size on UI_ConfirmBuildingBoost_C_GetPossibleSavedTime");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, A) == 0x000000, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::A' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, ReturnValue) == 0x000008, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, Temp_string_Variable) == 0x000020, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Divide_TimespanFloat_ReturnValue) == 0x000030, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Divide_TimespanFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_BreakTimespan_Days) == 0x000038, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_BreakTimespan_Days' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_BreakTimespan_Hours) == 0x00003C, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_BreakTimespan_Hours' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_BreakTimespan_Minutes) == 0x000040, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_BreakTimespan_Minutes' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_BreakTimespan_Seconds) == 0x000044, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_BreakTimespan_Seconds' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_BreakTimespan_Milliseconds) == 0x000048, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_BreakTimespan_Milliseconds' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, Temp_bool_Variable) == 0x00004C, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Conv_IntToString_ReturnValue) == 0x000050, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000060, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Concat_StrStr_ReturnValue) == 0x000070, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000080, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Greater_IntInt_ReturnValue) == 0x000090, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000098, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000A8, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000B0, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0000C0, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Conv_IntToString_ReturnValue_3) == 0x0000C8, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000D8, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, Temp_string_Variable_1) == 0x0000E8, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, Temp_bool_Variable_1) == 0x0000F8, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, K2Node_Select_Default) == 0x000100, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, K2Node_Select_Default_1) == 0x000110, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000120, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, Temp_string_Variable_2) == 0x000130, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::Temp_string_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000140, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, Temp_bool_Variable_2) == 0x000150, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, K2Node_Select_Default_2) == 0x000158, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000168, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Concat_StrStr_ReturnValue_7) == 0x000178, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UI_ConfirmBuildingBoost_C_GetPossibleSavedTime, CallFunc_Conv_StringToText_ReturnValue) == 0x000188, "Member 'UI_ConfirmBuildingBoost_C_GetPossibleSavedTime::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}
