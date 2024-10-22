#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ADM_Debug_Tab

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_ADM_Debug_Tab.UI_ADM_Debug_Tab_C.ExecuteUbergraph_UI_ADM_Debug_Tab
// 0x0088 (0x0088 - 0x0000)
struct UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Number_of_Flashes;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_CustomEvent_Flash_Label_Color;              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_BreakColor_R;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R_1;                           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G_1;                           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B_1;                           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A_1;                           // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0064(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0074(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab) == 0x000008, "Wrong alignment on UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab");
static_assert(sizeof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab) == 0x000088, "Wrong size on UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, EntryPoint) == 0x000000, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, K2Node_CustomEvent_Number_of_Flashes) == 0x000004, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::K2Node_CustomEvent_Number_of_Flashes' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, K2Node_CustomEvent_Flash_Label_Color) == 0x000008, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::K2Node_CustomEvent_Flash_Label_Color' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, CallFunc_BreakColor_R) == 0x000028, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, CallFunc_BreakColor_G) == 0x00002C, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, CallFunc_BreakColor_B) == 0x000030, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, CallFunc_BreakColor_A) == 0x000034, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, CallFunc_BreakColor_R_1) == 0x000038, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::CallFunc_BreakColor_R_1' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, CallFunc_BreakColor_G_1) == 0x00003C, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::CallFunc_BreakColor_G_1' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, CallFunc_BreakColor_B_1) == 0x000040, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::CallFunc_BreakColor_B_1' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, CallFunc_BreakColor_A_1) == 0x000044, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::CallFunc_BreakColor_A_1' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, CallFunc_Subtract_IntInt_ReturnValue) == 0x000048, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, CallFunc_Greater_IntInt_ReturnValue) == 0x00004C, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000050, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000058, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00005C, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000060, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, K2Node_MakeStruct_LinearColor) == 0x000064, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab, K2Node_MakeStruct_LinearColor_1) == 0x000074, "Member 'UI_ADM_Debug_Tab_C_ExecuteUbergraph_UI_ADM_Debug_Tab::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");

// Function UI_ADM_Debug_Tab.UI_ADM_Debug_Tab_C.Flash Label
// 0x0014 (0x0014 - 0x0000)
struct UI_ADM_Debug_Tab_C_Flash_Label final
{
public:
	int32                                         Number_of_Flashes;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Flash_Label_Color;                                 // 0x0004(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ADM_Debug_Tab_C_Flash_Label) == 0x000004, "Wrong alignment on UI_ADM_Debug_Tab_C_Flash_Label");
static_assert(sizeof(UI_ADM_Debug_Tab_C_Flash_Label) == 0x000014, "Wrong size on UI_ADM_Debug_Tab_C_Flash_Label");
static_assert(offsetof(UI_ADM_Debug_Tab_C_Flash_Label, Number_of_Flashes) == 0x000000, "Member 'UI_ADM_Debug_Tab_C_Flash_Label::Number_of_Flashes' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_Flash_Label, Flash_Label_Color) == 0x000004, "Member 'UI_ADM_Debug_Tab_C_Flash_Label::Flash_Label_Color' has a wrong offset!");

// Function UI_ADM_Debug_Tab.UI_ADM_Debug_Tab_C.Get Label Color
// 0x0088 (0x0088 - 0x0000)
struct UI_ADM_Debug_Tab_C_Get_Label_Color final
{
public:
	struct FSlateColor                            ReturnValue;                                       // 0x0000(0x0028)(Parm, OutParm, ReturnParm)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B[0x1];                                       // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_2;                           // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0060(0x0028)()
};
static_assert(alignof(UI_ADM_Debug_Tab_C_Get_Label_Color) == 0x000008, "Wrong alignment on UI_ADM_Debug_Tab_C_Get_Label_Color");
static_assert(sizeof(UI_ADM_Debug_Tab_C_Get_Label_Color) == 0x000088, "Wrong size on UI_ADM_Debug_Tab_C_Get_Label_Color");
static_assert(offsetof(UI_ADM_Debug_Tab_C_Get_Label_Color, ReturnValue) == 0x000000, "Member 'UI_ADM_Debug_Tab_C_Get_Label_Color::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_Get_Label_Color, Temp_bool_Variable) == 0x000028, "Member 'UI_ADM_Debug_Tab_C_Get_Label_Color::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_Get_Label_Color, Temp_bool_Variable_1) == 0x000029, "Member 'UI_ADM_Debug_Tab_C_Get_Label_Color::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_Get_Label_Color, Temp_bool_Variable_2) == 0x00002A, "Member 'UI_ADM_Debug_Tab_C_Get_Label_Color::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_Get_Label_Color, K2Node_Select_Default) == 0x00002C, "Member 'UI_ADM_Debug_Tab_C_Get_Label_Color::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_Get_Label_Color, K2Node_Select_Default_1) == 0x00003C, "Member 'UI_ADM_Debug_Tab_C_Get_Label_Color::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_Get_Label_Color, K2Node_Select_Default_2) == 0x00004C, "Member 'UI_ADM_Debug_Tab_C_Get_Label_Color::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UI_ADM_Debug_Tab_C_Get_Label_Color, K2Node_MakeStruct_SlateColor) == 0x000060, "Member 'UI_ADM_Debug_Tab_C_Get_Label_Color::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function UI_ADM_Debug_Tab.UI_ADM_Debug_Tab_C.GetTabContent
// 0x0008 (0x0008 - 0x0000)
struct UI_ADM_Debug_Tab_C_GetTabContent final
{
public:
	class UUserWidget*                            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ADM_Debug_Tab_C_GetTabContent) == 0x000008, "Wrong alignment on UI_ADM_Debug_Tab_C_GetTabContent");
static_assert(sizeof(UI_ADM_Debug_Tab_C_GetTabContent) == 0x000008, "Wrong size on UI_ADM_Debug_Tab_C_GetTabContent");
static_assert(offsetof(UI_ADM_Debug_Tab_C_GetTabContent, ReturnValue) == 0x000000, "Member 'UI_ADM_Debug_Tab_C_GetTabContent::ReturnValue' has a wrong offset!");

}

