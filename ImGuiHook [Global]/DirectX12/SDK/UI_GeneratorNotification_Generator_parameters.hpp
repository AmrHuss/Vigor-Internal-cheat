#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GeneratorNotification_Generator

#include "Basic.hpp"

#include "E_GeneratorType_structs.hpp"
#include "S_GeneratorData_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_GeneratorNotification_Generator.UI_GeneratorNotification_Generator_C.ExecuteUbergraph_UI_GeneratorNotification_Generator
// 0x0098 (0x0098 - 0x0000)
struct UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_GeneratorType                               Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetGeneratedMaterialsText_Text;           // 0x0028(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetShelterLevel_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetGeneratorNameWithLevel_ReturnValue;    // 0x0050(0x0018)()
	int32                                         K2Node_Select_Default;                             // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetGeneratedMaterialsText_Text_1;         // 0x0070(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator) == 0x000008, "Wrong alignment on UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator");
static_assert(sizeof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator) == 0x000098, "Wrong size on UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator, EntryPoint) == 0x000000, "Member 'UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator, Temp_byte_Variable) == 0x000004, "Member 'UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator, Temp_int_Variable) == 0x000008, "Member 'UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator, Temp_int_Variable_1) == 0x00000C, "Member 'UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator, Temp_int_Variable_2) == 0x000010, "Member 'UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator, CallFunc_GetGeneratedMaterialsText_Text) == 0x000028, "Member 'UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator::CallFunc_GetGeneratedMaterialsText_Text' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator, CallFunc_PlayAnimation_ReturnValue_2) == 0x000040, "Member 'UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator, CallFunc_GetShelterLevel_ReturnValue) == 0x000048, "Member 'UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator::CallFunc_GetShelterLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator, CallFunc_GetGeneratorNameWithLevel_ReturnValue) == 0x000050, "Member 'UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator::CallFunc_GetGeneratorNameWithLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator, K2Node_Select_Default) == 0x000068, "Member 'UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator, CallFunc_GetGeneratedMaterialsText_Text_1) == 0x000070, "Member 'UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator::CallFunc_GetGeneratedMaterialsText_Text_1' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator, K2Node_CreateDelegate_OutputDelegate) == 0x000088, "Member 'UI_GeneratorNotification_Generator_C_ExecuteUbergraph_UI_GeneratorNotification_Generator::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function UI_GeneratorNotification_Generator.UI_GeneratorNotification_Generator_C.Invert Horizontal Box Order
// 0x0078 (0x0078 - 0x0000)
struct UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order final
{
public:
	TArray<class UWidget*>                        NewLocalVar_0;                                     // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0050(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order) == 0x000008, "Wrong alignment on UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order");
static_assert(sizeof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order) == 0x000078, "Wrong size on UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, NewLocalVar_0) == 0x000000, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, Temp_int_Array_Index_Variable) == 0x000010, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, Temp_int_Loop_Counter_Variable_1) == 0x000020, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000028, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, CallFunc_Array_Get_Item) == 0x000030, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000040, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000048, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, CallFunc_Max_ReturnValue) == 0x00004C, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, CallFunc_GetAllChildren_ReturnValue) == 0x000050, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, CallFunc_Array_Length_ReturnValue_1) == 0x000060, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'UI_GeneratorNotification_Generator_C_Invert_Horizontal_Box_Order::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function UI_GeneratorNotification_Generator.UI_GeneratorNotification_Generator_C.ReadGeneratorData
// 0x0030 (0x0030 - 0x0000)
struct UI_GeneratorNotification_Generator_C_ReadGeneratorData final
{
public:
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0000(0x0010)(ReferenceParm)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_GeneratorData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0020(0x0008)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_GeneratorNotification_Generator_C_ReadGeneratorData) == 0x000008, "Wrong alignment on UI_GeneratorNotification_Generator_C_ReadGeneratorData");
static_assert(sizeof(UI_GeneratorNotification_Generator_C_ReadGeneratorData) == 0x000030, "Wrong size on UI_GeneratorNotification_Generator_C_ReadGeneratorData");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ReadGeneratorData, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000000, "Member 'UI_GeneratorNotification_Generator_C_ReadGeneratorData::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ReadGeneratorData, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000010, "Member 'UI_GeneratorNotification_Generator_C_ReadGeneratorData::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ReadGeneratorData, CallFunc_Array_Get_Item) == 0x000014, "Member 'UI_GeneratorNotification_Generator_C_ReadGeneratorData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ReadGeneratorData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000020, "Member 'UI_GeneratorNotification_Generator_C_ReadGeneratorData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_ReadGeneratorData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000028, "Member 'UI_GeneratorNotification_Generator_C_ReadGeneratorData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function UI_GeneratorNotification_Generator.UI_GeneratorNotification_Generator_C.SetCurrencyIcon
// 0x0040 (0x0040 - 0x0000)
struct UI_GeneratorNotification_Generator_C_SetCurrencyIcon final
{
public:
	E_GeneratorType                               Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_4;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_5;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GeneratorNotification_Generator_C_SetCurrencyIcon) == 0x000008, "Wrong alignment on UI_GeneratorNotification_Generator_C_SetCurrencyIcon");
static_assert(sizeof(UI_GeneratorNotification_Generator_C_SetCurrencyIcon) == 0x000040, "Wrong size on UI_GeneratorNotification_Generator_C_SetCurrencyIcon");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_SetCurrencyIcon, Temp_byte_Variable) == 0x000000, "Member 'UI_GeneratorNotification_Generator_C_SetCurrencyIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_SetCurrencyIcon, Temp_object_Variable) == 0x000008, "Member 'UI_GeneratorNotification_Generator_C_SetCurrencyIcon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_SetCurrencyIcon, Temp_object_Variable_1) == 0x000010, "Member 'UI_GeneratorNotification_Generator_C_SetCurrencyIcon::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_SetCurrencyIcon, Temp_object_Variable_2) == 0x000018, "Member 'UI_GeneratorNotification_Generator_C_SetCurrencyIcon::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_SetCurrencyIcon, Temp_object_Variable_3) == 0x000020, "Member 'UI_GeneratorNotification_Generator_C_SetCurrencyIcon::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_SetCurrencyIcon, Temp_object_Variable_4) == 0x000028, "Member 'UI_GeneratorNotification_Generator_C_SetCurrencyIcon::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_SetCurrencyIcon, Temp_object_Variable_5) == 0x000030, "Member 'UI_GeneratorNotification_Generator_C_SetCurrencyIcon::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_SetCurrencyIcon, K2Node_Select_Default) == 0x000038, "Member 'UI_GeneratorNotification_Generator_C_SetCurrencyIcon::K2Node_Select_Default' has a wrong offset!");

// Function UI_GeneratorNotification_Generator.UI_GeneratorNotification_Generator_C.GetGeneratedMaterialsText
// 0x00C0 (0x00C0 - 0x0000)
struct UI_GeneratorNotification_Generator_C_GetGeneratedMaterialsText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(Parm, OutParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0058(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A8(0x0018)()
};
static_assert(alignof(UI_GeneratorNotification_Generator_C_GetGeneratedMaterialsText) == 0x000008, "Wrong alignment on UI_GeneratorNotification_Generator_C_GetGeneratedMaterialsText");
static_assert(sizeof(UI_GeneratorNotification_Generator_C_GetGeneratedMaterialsText) == 0x0000C0, "Wrong size on UI_GeneratorNotification_Generator_C_GetGeneratedMaterialsText");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_GetGeneratedMaterialsText, Text) == 0x000000, "Member 'UI_GeneratorNotification_Generator_C_GetGeneratedMaterialsText::Text' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_GetGeneratedMaterialsText, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'UI_GeneratorNotification_Generator_C_GetGeneratedMaterialsText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_GetGeneratedMaterialsText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000058, "Member 'UI_GeneratorNotification_Generator_C_GetGeneratedMaterialsText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_GetGeneratedMaterialsText, K2Node_MakeArray_Array) == 0x000098, "Member 'UI_GeneratorNotification_Generator_C_GetGeneratedMaterialsText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_GetGeneratedMaterialsText, CallFunc_Format_ReturnValue) == 0x0000A8, "Member 'UI_GeneratorNotification_Generator_C_GetGeneratedMaterialsText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UI_GeneratorNotification_Generator.UI_GeneratorNotification_Generator_C.GetGeneratorName
// 0x0040 (0x0040 - 0x0000)
struct UI_GeneratorNotification_Generator_C_GetGeneratorName final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
};
static_assert(alignof(UI_GeneratorNotification_Generator_C_GetGeneratorName) == 0x000008, "Wrong alignment on UI_GeneratorNotification_Generator_C_GetGeneratorName");
static_assert(sizeof(UI_GeneratorNotification_Generator_C_GetGeneratorName) == 0x000040, "Wrong size on UI_GeneratorNotification_Generator_C_GetGeneratorName");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_GetGeneratorName, ReturnValue) == 0x000000, "Member 'UI_GeneratorNotification_Generator_C_GetGeneratorName::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_GetGeneratorName, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000018, "Member 'UI_GeneratorNotification_Generator_C_GetGeneratorName::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_GetGeneratorName, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'UI_GeneratorNotification_Generator_C_GetGeneratorName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UI_GeneratorNotification_Generator.UI_GeneratorNotification_Generator_C.GetShelterLevel
// 0x0008 (0x0008 - 0x0000)
struct UI_GeneratorNotification_Generator_C_GetShelterLevel final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GeneratorNotification_Generator_C_GetShelterLevel) == 0x000004, "Wrong alignment on UI_GeneratorNotification_Generator_C_GetShelterLevel");
static_assert(sizeof(UI_GeneratorNotification_Generator_C_GetShelterLevel) == 0x000008, "Wrong size on UI_GeneratorNotification_Generator_C_GetShelterLevel");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_GetShelterLevel, ReturnValue) == 0x000000, "Member 'UI_GeneratorNotification_Generator_C_GetShelterLevel::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_GetShelterLevel, CallFunc_Clamp_ReturnValue) == 0x000004, "Member 'UI_GeneratorNotification_Generator_C_GetShelterLevel::CallFunc_Clamp_ReturnValue' has a wrong offset!");

// Function UI_GeneratorNotification_Generator.UI_GeneratorNotification_Generator_C.GetGeneratorNameWithLevel
// 0x0018 (0x0018 - 0x0000)
struct UI_GeneratorNotification_Generator_C_GetGeneratorNameWithLevel final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(UI_GeneratorNotification_Generator_C_GetGeneratorNameWithLevel) == 0x000008, "Wrong alignment on UI_GeneratorNotification_Generator_C_GetGeneratorNameWithLevel");
static_assert(sizeof(UI_GeneratorNotification_Generator_C_GetGeneratorNameWithLevel) == 0x000018, "Wrong size on UI_GeneratorNotification_Generator_C_GetGeneratorNameWithLevel");
static_assert(offsetof(UI_GeneratorNotification_Generator_C_GetGeneratorNameWithLevel, ReturnValue) == 0x000000, "Member 'UI_GeneratorNotification_Generator_C_GetGeneratorNameWithLevel::ReturnValue' has a wrong offset!");

}

