#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Fade

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_Fade.UI_Fade_C.ExecuteUbergraph_UI_Fade
// 0x0048 (0x0048 - 0x0000)
struct UI_Fade_C_ExecuteUbergraph_UI_Fade final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Fade_C_ExecuteUbergraph_UI_Fade) == 0x000008, "Wrong alignment on UI_Fade_C_ExecuteUbergraph_UI_Fade");
static_assert(sizeof(UI_Fade_C_ExecuteUbergraph_UI_Fade) == 0x000048, "Wrong size on UI_Fade_C_ExecuteUbergraph_UI_Fade");
static_assert(offsetof(UI_Fade_C_ExecuteUbergraph_UI_Fade, EntryPoint) == 0x000000, "Member 'UI_Fade_C_ExecuteUbergraph_UI_Fade::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Fade_C_ExecuteUbergraph_UI_Fade, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_Fade_C_ExecuteUbergraph_UI_Fade::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Fade_C_ExecuteUbergraph_UI_Fade, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'UI_Fade_C_ExecuteUbergraph_UI_Fade::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_Fade_C_ExecuteUbergraph_UI_Fade, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'UI_Fade_C_ExecuteUbergraph_UI_Fade::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Fade_C_ExecuteUbergraph_UI_Fade, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000030, "Member 'UI_Fade_C_ExecuteUbergraph_UI_Fade::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Fade_C_ExecuteUbergraph_UI_Fade, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'UI_Fade_C_ExecuteUbergraph_UI_Fade::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Fade_C_ExecuteUbergraph_UI_Fade, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'UI_Fade_C_ExecuteUbergraph_UI_Fade::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

