#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerStartedMatchmakingNotification

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_PlayerStartedMatchmakingNotification.UI_PlayerStartedMatchmakingNotification_C.ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification
// 0x0030 (0x0030 - 0x0000)
struct UI_PlayerStartedMatchmakingNotification_C_ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayer_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_PlayerStartedMatchmakingNotification_C_ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification) == 0x000008, "Wrong alignment on UI_PlayerStartedMatchmakingNotification_C_ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification");
static_assert(sizeof(UI_PlayerStartedMatchmakingNotification_C_ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification) == 0x000030, "Wrong size on UI_PlayerStartedMatchmakingNotification_C_ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification");
static_assert(offsetof(UI_PlayerStartedMatchmakingNotification_C_ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification, EntryPoint) == 0x000000, "Member 'UI_PlayerStartedMatchmakingNotification_C_ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_PlayerStartedMatchmakingNotification_C_ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UI_PlayerStartedMatchmakingNotification_C_ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerStartedMatchmakingNotification_C_ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'UI_PlayerStartedMatchmakingNotification_C_ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_PlayerStartedMatchmakingNotification_C_ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'UI_PlayerStartedMatchmakingNotification_C_ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerStartedMatchmakingNotification_C_ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification, CallFunc_IsLocalPlayer_ReturnValue) == 0x000028, "Member 'UI_PlayerStartedMatchmakingNotification_C_ExecuteUbergraph_UI_PlayerStartedMatchmakingNotification::CallFunc_IsLocalPlayer_ReturnValue' has a wrong offset!");

// Function UI_PlayerStartedMatchmakingNotification.UI_PlayerStartedMatchmakingNotification_C.ToString
// 0x0060 (0x0060 - 0x0000)
struct UI_PlayerStartedMatchmakingNotification_C_ToString final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NetIdToString_ReturnValue;           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerStartedMatchmakingNotification_C_ToString) == 0x000008, "Wrong alignment on UI_PlayerStartedMatchmakingNotification_C_ToString");
static_assert(sizeof(UI_PlayerStartedMatchmakingNotification_C_ToString) == 0x000060, "Wrong size on UI_PlayerStartedMatchmakingNotification_C_ToString");
static_assert(offsetof(UI_PlayerStartedMatchmakingNotification_C_ToString, ReturnValue) == 0x000000, "Member 'UI_PlayerStartedMatchmakingNotification_C_ToString::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerStartedMatchmakingNotification_C_ToString, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'UI_PlayerStartedMatchmakingNotification_C_ToString::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerStartedMatchmakingNotification_C_ToString, CallFunc_Conv_NetIdToString_ReturnValue) == 0x000020, "Member 'UI_PlayerStartedMatchmakingNotification_C_ToString::CallFunc_Conv_NetIdToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerStartedMatchmakingNotification_C_ToString, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'UI_PlayerStartedMatchmakingNotification_C_ToString::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerStartedMatchmakingNotification_C_ToString, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000040, "Member 'UI_PlayerStartedMatchmakingNotification_C_ToString::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerStartedMatchmakingNotification_C_ToString, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000050, "Member 'UI_PlayerStartedMatchmakingNotification_C_ToString::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

}

