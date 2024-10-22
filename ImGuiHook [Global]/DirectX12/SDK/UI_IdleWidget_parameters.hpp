#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_IdleWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_IdleWidget.UI_IdleWidget_C.SetMessage
// 0x0020 (0x0020 - 0x0000)
struct UI_IdleWidget_C_SetMessage final
{
public:
	class FText                                   InMessage;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          ShowBackground;                                    // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_IdleWidget_C_SetMessage) == 0x000008, "Wrong alignment on UI_IdleWidget_C_SetMessage");
static_assert(sizeof(UI_IdleWidget_C_SetMessage) == 0x000020, "Wrong size on UI_IdleWidget_C_SetMessage");
static_assert(offsetof(UI_IdleWidget_C_SetMessage, InMessage) == 0x000000, "Member 'UI_IdleWidget_C_SetMessage::InMessage' has a wrong offset!");
static_assert(offsetof(UI_IdleWidget_C_SetMessage, ShowBackground) == 0x000018, "Member 'UI_IdleWidget_C_SetMessage::ShowBackground' has a wrong offset!");
static_assert(offsetof(UI_IdleWidget_C_SetMessage, Temp_bool_Variable) == 0x000019, "Member 'UI_IdleWidget_C_SetMessage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_IdleWidget_C_SetMessage, Temp_byte_Variable) == 0x00001A, "Member 'UI_IdleWidget_C_SetMessage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_IdleWidget_C_SetMessage, Temp_byte_Variable_1) == 0x00001B, "Member 'UI_IdleWidget_C_SetMessage::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_IdleWidget_C_SetMessage, K2Node_Select_Default) == 0x00001C, "Member 'UI_IdleWidget_C_SetMessage::K2Node_Select_Default' has a wrong offset!");

}

