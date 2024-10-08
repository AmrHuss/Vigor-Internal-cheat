#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LevelMapWhileWaitingToStartMatch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_LevelMapWhileWaitingToStartMatch.UI_LevelMapWhileWaitingToStartMatch_C.ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch
// 0x00B8 (0x00B8 - 0x0000)
struct UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerCharacter*                  K2Node_DynamicCast_AsHuman_Player_Character;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMapTool*                               CallFunc_GetMapTool_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MapTool_C*                          K2Node_DynamicCast_AsBP_Map_Tool;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0058(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFlameHUD*                              K2Node_DynamicCast_AsFlame_HUD;                    // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch) == 0x000008, "Wrong alignment on UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch");
static_assert(sizeof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch) == 0x0000B8, "Wrong size on UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, EntryPoint) == 0x000000, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, CallFunc_K2_GetPawn_ReturnValue) == 0x000010, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, K2Node_Event_IsDesignTime) == 0x000018, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, K2Node_DynamicCast_AsHuman_Player_Character) == 0x000020, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::K2Node_DynamicCast_AsHuman_Player_Character' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, CallFunc_GetMapTool_ReturnValue) == 0x000030, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::CallFunc_GetMapTool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, K2Node_DynamicCast_AsBP_Map_Tool) == 0x000040, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::K2Node_DynamicCast_AsBP_Map_Tool' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000050, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, K2Node_Event_MyGeometry) == 0x000058, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, K2Node_Event_InDeltaTime) == 0x000090, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, CallFunc_GetHUD_ReturnValue) == 0x000098, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, K2Node_DynamicCast_AsFlame_HUD) == 0x0000A0, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::K2Node_DynamicCast_AsFlame_HUD' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, K2Node_DynamicCast_bSuccess_2) == 0x0000A8, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch, CallFunc_PlayAnimation_ReturnValue) == 0x0000B0, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_ExecuteUbergraph_UI_LevelMapWhileWaitingToStartMatch::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UI_LevelMapWhileWaitingToStartMatch.UI_LevelMapWhileWaitingToStartMatch_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_LevelMapWhileWaitingToStartMatch_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LevelMapWhileWaitingToStartMatch_C_Tick) == 0x000004, "Wrong alignment on UI_LevelMapWhileWaitingToStartMatch_C_Tick");
static_assert(sizeof(UI_LevelMapWhileWaitingToStartMatch_C_Tick) == 0x00003C, "Wrong size on UI_LevelMapWhileWaitingToStartMatch_C_Tick");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Tick, MyGeometry) == 0x000000, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Tick::InDeltaTime' has a wrong offset!");

// Function UI_LevelMapWhileWaitingToStartMatch.UI_LevelMapWhileWaitingToStartMatch_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_LevelMapWhileWaitingToStartMatch_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_LevelMapWhileWaitingToStartMatch_C_PreConstruct) == 0x000001, "Wrong alignment on UI_LevelMapWhileWaitingToStartMatch_C_PreConstruct");
static_assert(sizeof(UI_LevelMapWhileWaitingToStartMatch_C_PreConstruct) == 0x000001, "Wrong size on UI_LevelMapWhileWaitingToStartMatch_C_PreConstruct");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_LevelMapWhileWaitingToStartMatch.UI_LevelMapWhileWaitingToStartMatch_C.Get Message Text
// 0x0120 (0x0120 - 0x0000)
struct UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateFlame*                        K2Node_DynamicCast_AsGame_State_Flame;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_Matches_C*         K2Node_DynamicCast_AsBP_Player_Controller_Matches; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRemainingStartAfterSeconds_ReturnValue; // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0088(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x00D8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0100(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text) == 0x000008, "Wrong alignment on UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text");
static_assert(sizeof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text) == 0x000120, "Wrong size on UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text, ReturnValue) == 0x000000, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text, K2Node_DynamicCast_AsGame_State_Flame) == 0x000028, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text::K2Node_DynamicCast_AsGame_State_Flame' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text, K2Node_DynamicCast_AsBP_Player_Controller_Matches) == 0x000038, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text::K2Node_DynamicCast_AsBP_Player_Controller_Matches' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text, CallFunc_GetRemainingStartAfterSeconds_ReturnValue) == 0x000044, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text::CallFunc_GetRemainingStartAfterSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text, K2Node_MakeStruct_FormatArgumentData_1) == 0x000088, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text, K2Node_MakeArray_Array) == 0x0000C8, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text, K2Node_MakeArray_Array_1) == 0x0000D8, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text, CallFunc_Format_ReturnValue) == 0x0000E8, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text, CallFunc_Format_ReturnValue_1) == 0x000100, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text, CallFunc_Greater_IntInt_ReturnValue) == 0x000118, "Member 'UI_LevelMapWhileWaitingToStartMatch_C_Get_Message_Text::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

