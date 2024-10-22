#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Cheat_Button_Map

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_Cheat_Button_Map.UI_Cheat_Button_Map_C.ExecuteUbergraph_UI_Cheat_Button_Map
// 0x0558 (0x0558 - 0x0000)
struct UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue;       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0008(0x0278)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x0280(0x0278)()
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x04F8(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0530(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasFocus_ReturnValue;                     // 0x0534(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0535(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_536[0x2];                                      // 0x0536(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x0538(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0540(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0548(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0551(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map) == 0x000008, "Wrong alignment on UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map");
static_assert(sizeof(UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map) == 0x000558, "Wrong size on UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map");
static_assert(offsetof(UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map, EntryPoint) == 0x000000, "Member 'UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map, CallFunc_IsPlatformGroupDesktop_ReturnValue) == 0x000004, "Member 'UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map::CallFunc_IsPlatformGroupDesktop_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map, K2Node_MakeStruct_ButtonStyle) == 0x000008, "Member 'UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map, K2Node_MakeStruct_ButtonStyle_1) == 0x000280, "Member 'UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map, K2Node_Event_MyGeometry) == 0x0004F8, "Member 'UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map, K2Node_Event_InDeltaTime) == 0x000530, "Member 'UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map, CallFunc_HasFocus_ReturnValue) == 0x000534, "Member 'UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map::CallFunc_HasFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000535, "Member 'UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map, K2Node_ComponentBoundEvent_Sender) == 0x000538, "Member 'UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map, CallFunc_Conv_StringToName_ReturnValue) == 0x000540, "Member 'UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map, CallFunc_GetPlayerController_ReturnValue) == 0x000548, "Member 'UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map, CallFunc_IsInputKeyDown_ReturnValue) == 0x000550, "Member 'UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map, CallFunc_BooleanAND_ReturnValue) == 0x000551, "Member 'UI_Cheat_Button_Map_C_ExecuteUbergraph_UI_Cheat_Button_Map::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function UI_Cheat_Button_Map.UI_Cheat_Button_Map_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_Cheat_Button_Map_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Cheat_Button_Map_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_Cheat_Button_Map_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
static_assert(sizeof(UI_Cheat_Button_Map_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_Cheat_Button_Map_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
static_assert(offsetof(UI_Cheat_Button_Map_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_Cheat_Button_Map_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_Cheat_Button_Map.UI_Cheat_Button_Map_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_Cheat_Button_Map_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Cheat_Button_Map_C_Tick) == 0x000004, "Wrong alignment on UI_Cheat_Button_Map_C_Tick");
static_assert(sizeof(UI_Cheat_Button_Map_C_Tick) == 0x00003C, "Wrong size on UI_Cheat_Button_Map_C_Tick");
static_assert(offsetof(UI_Cheat_Button_Map_C_Tick, MyGeometry) == 0x000000, "Member 'UI_Cheat_Button_Map_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Button_Map_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_Cheat_Button_Map_C_Tick::InDeltaTime' has a wrong offset!");

// Function UI_Cheat_Button_Map.UI_Cheat_Button_Map_C.StartMatchmakingOnlevel
// 0x0018 (0x0018 - 0x0000)
struct UI_Cheat_Button_Map_C_StartMatchmakingOnlevel final
{
public:
	class FString                                 MapNameString_0;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UFlameGameInstance*                     CallFunc_GetFlameGameInstance_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Cheat_Button_Map_C_StartMatchmakingOnlevel) == 0x000008, "Wrong alignment on UI_Cheat_Button_Map_C_StartMatchmakingOnlevel");
static_assert(sizeof(UI_Cheat_Button_Map_C_StartMatchmakingOnlevel) == 0x000018, "Wrong size on UI_Cheat_Button_Map_C_StartMatchmakingOnlevel");
static_assert(offsetof(UI_Cheat_Button_Map_C_StartMatchmakingOnlevel, MapNameString_0) == 0x000000, "Member 'UI_Cheat_Button_Map_C_StartMatchmakingOnlevel::MapNameString_0' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Button_Map_C_StartMatchmakingOnlevel, CallFunc_GetFlameGameInstance_ReturnValue) == 0x000010, "Member 'UI_Cheat_Button_Map_C_StartMatchmakingOnlevel::CallFunc_GetFlameGameInstance_ReturnValue' has a wrong offset!");

// Function UI_Cheat_Button_Map.UI_Cheat_Button_Map_C.OpenLevel
// 0x0008 (0x0008 - 0x0000)
struct UI_Cheat_Button_Map_C_OpenLevel final
{
public:
	class FName                                   LevelName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Cheat_Button_Map_C_OpenLevel) == 0x000004, "Wrong alignment on UI_Cheat_Button_Map_C_OpenLevel");
static_assert(sizeof(UI_Cheat_Button_Map_C_OpenLevel) == 0x000008, "Wrong size on UI_Cheat_Button_Map_C_OpenLevel");
static_assert(offsetof(UI_Cheat_Button_Map_C_OpenLevel, LevelName) == 0x000000, "Member 'UI_Cheat_Button_Map_C_OpenLevel::LevelName' has a wrong offset!");

}

