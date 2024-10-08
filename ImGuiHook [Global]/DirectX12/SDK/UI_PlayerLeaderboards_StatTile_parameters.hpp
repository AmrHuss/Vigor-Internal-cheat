#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerLeaderboards_StatTile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Flame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UI_PlayerLeaderboards_StatTile.UI_PlayerLeaderboards_StatTile_C.TileFocused__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_PlayerLeaderboards_StatTile_C_TileFocused__DelegateSignature final
{
public:
	class UUI_PlayerLeaderboards_StatTile_C*      FocusedWidget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerLeaderboards_StatTile_C_TileFocused__DelegateSignature) == 0x000008, "Wrong alignment on UI_PlayerLeaderboards_StatTile_C_TileFocused__DelegateSignature");
static_assert(sizeof(UI_PlayerLeaderboards_StatTile_C_TileFocused__DelegateSignature) == 0x000008, "Wrong size on UI_PlayerLeaderboards_StatTile_C_TileFocused__DelegateSignature");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_TileFocused__DelegateSignature, FocusedWidget) == 0x000000, "Member 'UI_PlayerLeaderboards_StatTile_C_TileFocused__DelegateSignature::FocusedWidget' has a wrong offset!");

// Function UI_PlayerLeaderboards_StatTile.UI_PlayerLeaderboards_StatTile_C.ExecuteUbergraph_UI_PlayerLeaderboards_StatTile
// 0x02D8 (0x02D8 - 0x0000)
struct UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Decimal_to_Short_Format_FormattedValue;   // 0x0010(0x0018)()
	class FText                                   CallFunc_Decimal_to_Short_Format_FormattedValue_1; // 0x0028(0x0018)()
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0048(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0060(0x0040)(HasGetValueTypeHash)
	struct FTimespan                              CallFunc_FromSeconds_ReturnValue;                  // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_FormatTimespanDHMS_TimespanDHMSOut;       // 0x00B8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00E8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0130(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0140(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0160(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x01A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x01B0(0x0018)()
	int32                                         Temp_int_Variable_1;                               // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x01D0(0x0008)(NoDestructor)
	class FText                                   Temp_text_Variable;                                // 0x01D8(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F2[0x6];                                      // 0x01F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x01F8(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0212(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue;       // 0x0213(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_CustomCursor_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0218(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUI_CustomCursor_C*                     CallFunc_Array_Get_Item;                           // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue_1;     // 0x0235(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_236[0x2];                                      // 0x0236(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_CustomCursor_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x0238(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUI_CustomCursor_C*                     CallFunc_Array_Get_Item_1;                         // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_255[0x3];                                      // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0258(0x0028)()
	bool                                          Temp_bool_Variable_1;                              // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_281[0x7];                                      // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0288(0x0028)()
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender_2;               // 0x02B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_1;               // 0x02C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x02C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile) == 0x000008, "Wrong alignment on UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile");
static_assert(sizeof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile) == 0x0002D8, "Wrong size on UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, EntryPoint) == 0x000000, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, Temp_int_Variable) == 0x000004, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Decimal_to_Short_Format_FormattedValue) == 0x000010, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Decimal_to_Short_Format_FormattedValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Decimal_to_Short_Format_FormattedValue_1) == 0x000028, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Decimal_to_Short_Format_FormattedValue_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000040, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Conv_FloatToText_ReturnValue) == 0x000048, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_FromSeconds_ReturnValue) == 0x0000A0, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_FromSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, K2Node_MakeArray_Array) == 0x0000A8, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_FormatTimespanDHMS_TimespanDHMSOut) == 0x0000B8, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_FormatTimespanDHMS_TimespanDHMSOut' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Format_ReturnValue) == 0x0000D0, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000E8, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Greater_IntInt_ReturnValue) == 0x000128, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, K2Node_MakeArray_Array_1) == 0x000130, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Format_ReturnValue_1) == 0x000140, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Less_IntInt_ReturnValue) == 0x000158, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, K2Node_MakeStruct_FormatArgumentData_2) == 0x000160, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, K2Node_MakeArray_Array_2) == 0x0001A0, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Format_ReturnValue_2) == 0x0001B0, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, Temp_int_Variable_1) == 0x0001C8, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001CC, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, K2Node_Event_InFocusEvent) == 0x0001D0, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, Temp_text_Variable) == 0x0001D8, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, Temp_bool_Variable) == 0x0001F0, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, Temp_byte_Variable) == 0x0001F1, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, K2Node_Select_Default) == 0x0001F8, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, Temp_byte_Variable_1) == 0x000210, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, K2Node_SwitchEnum_CmpSuccess) == 0x000211, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000212, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_IsPlatformGroupDesktop_ReturnValue) == 0x000213, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_IsPlatformGroupDesktop_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000218, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Array_Get_Item) == 0x000228, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Array_Length_ReturnValue) == 0x000230, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Less_IntInt_ReturnValue_1) == 0x000234, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_IsPlatformGroupDesktop_ReturnValue_1) == 0x000235, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_IsPlatformGroupDesktop_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_GetAllWidgetsOfClass_FoundWidgets_1) == 0x000238, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_GetAllWidgetsOfClass_FoundWidgets_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Array_Get_Item_1) == 0x000248, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Array_Length_ReturnValue_1) == 0x000250, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_Less_IntInt_ReturnValue_2) == 0x000254, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, K2Node_MakeStruct_SlateColor) == 0x000258, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, Temp_bool_Variable_1) == 0x000280, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, K2Node_MakeStruct_SlateColor_1) == 0x000288, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, K2Node_Select_Default_1) == 0x0002B0, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, K2Node_ComponentBoundEvent_Sender_2) == 0x0002B8, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::K2Node_ComponentBoundEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, K2Node_ComponentBoundEvent_Sender_1) == 0x0002C0, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, K2Node_ComponentBoundEvent_Sender) == 0x0002C8, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile, CallFunc_GetOwningPlayer_ReturnValue) == 0x0002D0, "Member 'UI_PlayerLeaderboards_StatTile_C_ExecuteUbergraph_UI_PlayerLeaderboards_StatTile::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");

// Function UI_PlayerLeaderboards_StatTile.UI_PlayerLeaderboards_StatTile_C.BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
static_assert(sizeof(UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_PlayerLeaderboards_StatTile.UI_PlayerLeaderboards_StatTile_C.BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_PlayerLeaderboards_StatTile.UI_PlayerLeaderboards_StatTile_C.BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_PlayerLeaderboards_StatTile_C_BndEvt__UI_PlayerLeaderboards_StatTile_FlameButton_374_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_PlayerLeaderboards_StatTile.UI_PlayerLeaderboards_StatTile_C.OnFocusLost
// 0x0008 (0x0008 - 0x0000)
struct UI_PlayerLeaderboards_StatTile_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UI_PlayerLeaderboards_StatTile_C_OnFocusLost) == 0x000004, "Wrong alignment on UI_PlayerLeaderboards_StatTile_C_OnFocusLost");
static_assert(sizeof(UI_PlayerLeaderboards_StatTile_C_OnFocusLost) == 0x000008, "Wrong size on UI_PlayerLeaderboards_StatTile_C_OnFocusLost");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'UI_PlayerLeaderboards_StatTile_C_OnFocusLost::InFocusEvent' has a wrong offset!");

// Function UI_PlayerLeaderboards_StatTile.UI_PlayerLeaderboards_StatTile_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct UI_PlayerLeaderboards_StatTile_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            K2Node_MakeStruct_EventReply;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(UI_PlayerLeaderboards_StatTile_C_OnFocusReceived) == 0x000008, "Wrong alignment on UI_PlayerLeaderboards_StatTile_C_OnFocusReceived");
static_assert(sizeof(UI_PlayerLeaderboards_StatTile_C_OnFocusReceived) == 0x0001B0, "Wrong size on UI_PlayerLeaderboards_StatTile_C_OnFocusReceived");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'UI_PlayerLeaderboards_StatTile_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'UI_PlayerLeaderboards_StatTile_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'UI_PlayerLeaderboards_StatTile_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_OnFocusReceived, K2Node_MakeStruct_EventReply) == 0x0000F8, "Member 'UI_PlayerLeaderboards_StatTile_C_OnFocusReceived::K2Node_MakeStruct_EventReply' has a wrong offset!");

// Function UI_PlayerLeaderboards_StatTile.UI_PlayerLeaderboards_StatTile_C.GetStatType
// 0x0001 (0x0001 - 0x0000)
struct UI_PlayerLeaderboards_StatTile_C_GetStatType final
{
public:
	EStatType                                     StatType_0;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerLeaderboards_StatTile_C_GetStatType) == 0x000001, "Wrong alignment on UI_PlayerLeaderboards_StatTile_C_GetStatType");
static_assert(sizeof(UI_PlayerLeaderboards_StatTile_C_GetStatType) == 0x000001, "Wrong size on UI_PlayerLeaderboards_StatTile_C_GetStatType");
static_assert(offsetof(UI_PlayerLeaderboards_StatTile_C_GetStatType, StatType_0) == 0x000000, "Member 'UI_PlayerLeaderboards_StatTile_C_GetStatType::StatType_0' has a wrong offset!");

}

