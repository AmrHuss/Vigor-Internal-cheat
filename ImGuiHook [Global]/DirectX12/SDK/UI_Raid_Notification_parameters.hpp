#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Raid_Notification

#include "Basic.hpp"

#include "ERaidNotificationType_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_Raid_Notification.UI_Raid_Notification_C.ExecuteUbergraph_UI_Raid_Notification
// 0x0058 (0x0058 - 0x0000)
struct UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification) == 0x000008, "Wrong alignment on UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification");
static_assert(sizeof(UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification) == 0x000058, "Wrong size on UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification");
static_assert(offsetof(UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification, EntryPoint) == 0x000000, "Member 'UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification, CallFunc_GetEndTime_ReturnValue) == 0x000020, "Member 'UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000038, "Member 'UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000048, "Member 'UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000050, "Member 'UI_Raid_Notification_C_ExecuteUbergraph_UI_Raid_Notification::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");

// Function UI_Raid_Notification.UI_Raid_Notification_C.Set Notification Colour
// 0x0044 (0x0044 - 0x0000)
struct UI_Raid_Notification_C_Set_Notification_Colour final
{
public:
	ERaidNotificationType                         Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERaidNotificationType                         Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Raid_Notification_C_Set_Notification_Colour) == 0x000004, "Wrong alignment on UI_Raid_Notification_C_Set_Notification_Colour");
static_assert(sizeof(UI_Raid_Notification_C_Set_Notification_Colour) == 0x000044, "Wrong size on UI_Raid_Notification_C_Set_Notification_Colour");
static_assert(offsetof(UI_Raid_Notification_C_Set_Notification_Colour, Type) == 0x000000, "Member 'UI_Raid_Notification_C_Set_Notification_Colour::Type' has a wrong offset!");
static_assert(offsetof(UI_Raid_Notification_C_Set_Notification_Colour, Temp_byte_Variable) == 0x000001, "Member 'UI_Raid_Notification_C_Set_Notification_Colour::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_Raid_Notification_C_Set_Notification_Colour, Temp_struct_Variable) == 0x000004, "Member 'UI_Raid_Notification_C_Set_Notification_Colour::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(UI_Raid_Notification_C_Set_Notification_Colour, Temp_struct_Variable_1) == 0x000014, "Member 'UI_Raid_Notification_C_Set_Notification_Colour::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_Raid_Notification_C_Set_Notification_Colour, Temp_struct_Variable_2) == 0x000024, "Member 'UI_Raid_Notification_C_Set_Notification_Colour::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_Raid_Notification_C_Set_Notification_Colour, K2Node_Select_Default) == 0x000034, "Member 'UI_Raid_Notification_C_Set_Notification_Colour::K2Node_Select_Default' has a wrong offset!");

}

