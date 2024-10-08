#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_UserId

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_UserId.UI_UserId_C.ExecuteUbergraph_UI_UserId
// 0x0090 (0x0090 - 0x0000)
struct UI_UserId_C_ExecuteUbergraph_UI_UserId final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveGame*                              K2Node_CustomEvent_SaveGame_1;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveGame*                              K2Node_CustomEvent_SaveGame;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USaveGame* SaveGame)>    K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class USaveGame*                              Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_UserInfoSaveGame_C*                 K2Node_DynamicCast_AsBP_User_Info_Save_Game;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	class UFlameGameInstance*                     CallFunc_GetFlameGameInstance_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_UserInfoSaveGame_C*                 CallFunc_GetClassDefaultObject_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUserControllerId_ReturnValue;          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlameGameLoad*                         CallFunc_LoadGameFromSlotByPlatform_ReturnValue;   // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USaveGame* SaveGame)>    K2Node_CreateDelegate_OutputDelegate_1;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_UserId_C_ExecuteUbergraph_UI_UserId) == 0x000008, "Wrong alignment on UI_UserId_C_ExecuteUbergraph_UI_UserId");
static_assert(sizeof(UI_UserId_C_ExecuteUbergraph_UI_UserId) == 0x000090, "Wrong size on UI_UserId_C_ExecuteUbergraph_UI_UserId");
static_assert(offsetof(UI_UserId_C_ExecuteUbergraph_UI_UserId, EntryPoint) == 0x000000, "Member 'UI_UserId_C_ExecuteUbergraph_UI_UserId::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_UserId_C_ExecuteUbergraph_UI_UserId, K2Node_CustomEvent_SaveGame_1) == 0x000008, "Member 'UI_UserId_C_ExecuteUbergraph_UI_UserId::K2Node_CustomEvent_SaveGame_1' has a wrong offset!");
static_assert(offsetof(UI_UserId_C_ExecuteUbergraph_UI_UserId, K2Node_CustomEvent_SaveGame) == 0x000010, "Member 'UI_UserId_C_ExecuteUbergraph_UI_UserId::K2Node_CustomEvent_SaveGame' has a wrong offset!");
static_assert(offsetof(UI_UserId_C_ExecuteUbergraph_UI_UserId, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'UI_UserId_C_ExecuteUbergraph_UI_UserId::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_UserId_C_ExecuteUbergraph_UI_UserId, Temp_object_Variable) == 0x000028, "Member 'UI_UserId_C_ExecuteUbergraph_UI_UserId::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_UserId_C_ExecuteUbergraph_UI_UserId, K2Node_DynamicCast_AsBP_User_Info_Save_Game) == 0x000030, "Member 'UI_UserId_C_ExecuteUbergraph_UI_UserId::K2Node_DynamicCast_AsBP_User_Info_Save_Game' has a wrong offset!");
static_assert(offsetof(UI_UserId_C_ExecuteUbergraph_UI_UserId, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'UI_UserId_C_ExecuteUbergraph_UI_UserId::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_UserId_C_ExecuteUbergraph_UI_UserId, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'UI_UserId_C_ExecuteUbergraph_UI_UserId::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_UserId_C_ExecuteUbergraph_UI_UserId, CallFunc_GetFlameGameInstance_ReturnValue) == 0x000058, "Member 'UI_UserId_C_ExecuteUbergraph_UI_UserId::CallFunc_GetFlameGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_UserId_C_ExecuteUbergraph_UI_UserId, CallFunc_GetClassDefaultObject_ReturnValue) == 0x000060, "Member 'UI_UserId_C_ExecuteUbergraph_UI_UserId::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_UserId_C_ExecuteUbergraph_UI_UserId, CallFunc_GetUserControllerId_ReturnValue) == 0x000068, "Member 'UI_UserId_C_ExecuteUbergraph_UI_UserId::CallFunc_GetUserControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_UserId_C_ExecuteUbergraph_UI_UserId, CallFunc_LoadGameFromSlotByPlatform_ReturnValue) == 0x000070, "Member 'UI_UserId_C_ExecuteUbergraph_UI_UserId::CallFunc_LoadGameFromSlotByPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_UserId_C_ExecuteUbergraph_UI_UserId, K2Node_CreateDelegate_OutputDelegate_1) == 0x000078, "Member 'UI_UserId_C_ExecuteUbergraph_UI_UserId::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_UserId_C_ExecuteUbergraph_UI_UserId, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'UI_UserId_C_ExecuteUbergraph_UI_UserId::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UI_UserId.UI_UserId_C.OnLoadSucceed_3CDD546B4078963862719488F31814A6
// 0x0008 (0x0008 - 0x0000)
struct UI_UserId_C_OnLoadSucceed_3CDD546B4078963862719488F31814A6 final
{
public:
	class USaveGame*                              SaveGame;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_UserId_C_OnLoadSucceed_3CDD546B4078963862719488F31814A6) == 0x000008, "Wrong alignment on UI_UserId_C_OnLoadSucceed_3CDD546B4078963862719488F31814A6");
static_assert(sizeof(UI_UserId_C_OnLoadSucceed_3CDD546B4078963862719488F31814A6) == 0x000008, "Wrong size on UI_UserId_C_OnLoadSucceed_3CDD546B4078963862719488F31814A6");
static_assert(offsetof(UI_UserId_C_OnLoadSucceed_3CDD546B4078963862719488F31814A6, SaveGame) == 0x000000, "Member 'UI_UserId_C_OnLoadSucceed_3CDD546B4078963862719488F31814A6::SaveGame' has a wrong offset!");

// Function UI_UserId.UI_UserId_C.OnLoadFailed_3CDD546B4078963862719488F31814A6
// 0x0008 (0x0008 - 0x0000)
struct UI_UserId_C_OnLoadFailed_3CDD546B4078963862719488F31814A6 final
{
public:
	class USaveGame*                              SaveGame;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_UserId_C_OnLoadFailed_3CDD546B4078963862719488F31814A6) == 0x000008, "Wrong alignment on UI_UserId_C_OnLoadFailed_3CDD546B4078963862719488F31814A6");
static_assert(sizeof(UI_UserId_C_OnLoadFailed_3CDD546B4078963862719488F31814A6) == 0x000008, "Wrong size on UI_UserId_C_OnLoadFailed_3CDD546B4078963862719488F31814A6");
static_assert(offsetof(UI_UserId_C_OnLoadFailed_3CDD546B4078963862719488F31814A6, SaveGame) == 0x000000, "Member 'UI_UserId_C_OnLoadFailed_3CDD546B4078963862719488F31814A6::SaveGame' has a wrong offset!");

}

