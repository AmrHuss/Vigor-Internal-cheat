#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BackButtonPC

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UI_BackButtonPC.UI_BackButtonPC_C.ExecuteUbergraph_UI_BackButtonPC
// 0x0098 (0x0098 - 0x0000)
struct UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender_2;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_1;               // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_CustomCursor_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUI_CustomCursor_C*                     CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_CustomCursor_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUI_CustomCursor_C*                     CallFunc_Array_Get_Item_1;                         // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Blueprint_GetSizeX_ReturnValue;           // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0084(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC) == 0x000008, "Wrong alignment on UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC");
static_assert(sizeof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC) == 0x000098, "Wrong size on UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, EntryPoint) == 0x000000, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, Temp_int_Variable) == 0x000004, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, Temp_int_Variable_1) == 0x000008, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, K2Node_ComponentBoundEvent_Sender_2) == 0x000018, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::K2Node_ComponentBoundEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, K2Node_ComponentBoundEvent_Sender_1) == 0x000020, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000028, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, CallFunc_Array_Get_Item) == 0x000038, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, CallFunc_GetAllWidgetsOfClass_FoundWidgets_1) == 0x000048, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::CallFunc_GetAllWidgetsOfClass_FoundWidgets_1' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, CallFunc_Array_Length_ReturnValue_1) == 0x000060, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, CallFunc_Less_IntInt_ReturnValue_1) == 0x000064, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, K2Node_ComponentBoundEvent_Sender) == 0x000068, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, CallFunc_GetBrushResourceAsTexture2D_ReturnValue) == 0x000070, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::CallFunc_GetBrushResourceAsTexture2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, CallFunc_Blueprint_GetSizeX_ReturnValue) == 0x000078, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::CallFunc_Blueprint_GetSizeX_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, CallFunc_Multiply_IntInt_ReturnValue) == 0x00007C, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000080, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC, K2Node_MakeStruct_Margin) == 0x000084, "Member 'UI_BackButtonPC_C_ExecuteUbergraph_UI_BackButtonPC::K2Node_MakeStruct_Margin' has a wrong offset!");

// Function UI_BackButtonPC.UI_BackButtonPC_C.BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
static_assert(sizeof(UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
static_assert(offsetof(UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_BackButtonPC.UI_BackButtonPC_C.BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_BackButtonPC.UI_BackButtonPC_C.BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_BackButtonPC_C_BndEvt__UI_BackButtonPC_ButtonBack_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_BackButtonPC.UI_BackButtonPC_C.SetColorOfTextAndArrow
// 0x0038 (0x0038 - 0x0000)
struct UI_BackButtonPC_C_SetColorOfTextAndArrow final
{
public:
	struct FLinearColor                           SpecifiedColor;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
};
static_assert(alignof(UI_BackButtonPC_C_SetColorOfTextAndArrow) == 0x000008, "Wrong alignment on UI_BackButtonPC_C_SetColorOfTextAndArrow");
static_assert(sizeof(UI_BackButtonPC_C_SetColorOfTextAndArrow) == 0x000038, "Wrong size on UI_BackButtonPC_C_SetColorOfTextAndArrow");
static_assert(offsetof(UI_BackButtonPC_C_SetColorOfTextAndArrow, SpecifiedColor) == 0x000000, "Member 'UI_BackButtonPC_C_SetColorOfTextAndArrow::SpecifiedColor' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_SetColorOfTextAndArrow, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'UI_BackButtonPC_C_SetColorOfTextAndArrow::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function UI_BackButtonPC.UI_BackButtonPC_C.UpdateVisibility
// 0x0006 (0x0006 - 0x0000)
struct UI_BackButtonPC_C_UpdateVisibility final
{
public:
	bool                                          NewVisible;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue;       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BackButtonPC_C_UpdateVisibility) == 0x000001, "Wrong alignment on UI_BackButtonPC_C_UpdateVisibility");
static_assert(sizeof(UI_BackButtonPC_C_UpdateVisibility) == 0x000006, "Wrong size on UI_BackButtonPC_C_UpdateVisibility");
static_assert(offsetof(UI_BackButtonPC_C_UpdateVisibility, NewVisible) == 0x000000, "Member 'UI_BackButtonPC_C_UpdateVisibility::NewVisible' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_UpdateVisibility, Temp_bool_Variable) == 0x000001, "Member 'UI_BackButtonPC_C_UpdateVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_UpdateVisibility, Temp_byte_Variable) == 0x000002, "Member 'UI_BackButtonPC_C_UpdateVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_UpdateVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'UI_BackButtonPC_C_UpdateVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_UpdateVisibility, CallFunc_IsPlatformGroupDesktop_ReturnValue) == 0x000004, "Member 'UI_BackButtonPC_C_UpdateVisibility::CallFunc_IsPlatformGroupDesktop_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BackButtonPC_C_UpdateVisibility, K2Node_Select_Default) == 0x000005, "Member 'UI_BackButtonPC_C_UpdateVisibility::K2Node_Select_Default' has a wrong offset!");

}
