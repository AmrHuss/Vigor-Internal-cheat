#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TutorialHint_10

#include "Basic.hpp"

#include "FlameUI_structs.hpp"
#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function UI_TutorialHint_10.UI_TutorialHint_10_C.ExecuteUbergraph_UI_TutorialHint_10
// 0x0040 (0x0040 - 0x0000)
struct UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 PlayerIndex, EInputMode InputMode)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlameGameInstance*                     CallFunc_GetFlameGameInstance_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_PlayerIndex;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputMode                                    K2Node_CustomEvent_InputMode;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlameGameInstance*                     CallFunc_GetFlameGameInstance_ReturnValue_1;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10) == 0x000008, "Wrong alignment on UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10");
static_assert(sizeof(UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10) == 0x000040, "Wrong size on UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10");
static_assert(offsetof(UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10, EntryPoint) == 0x000000, "Member 'UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10, K2Node_Event_IsDesignTime) == 0x000024, "Member 'UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10, CallFunc_GetFlameGameInstance_ReturnValue) == 0x000028, "Member 'UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10::CallFunc_GetFlameGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10, K2Node_CustomEvent_PlayerIndex) == 0x000030, "Member 'UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10::K2Node_CustomEvent_PlayerIndex' has a wrong offset!");
static_assert(offsetof(UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10, K2Node_CustomEvent_InputMode) == 0x000034, "Member 'UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10::K2Node_CustomEvent_InputMode' has a wrong offset!");
static_assert(offsetof(UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10, CallFunc_GetFlameGameInstance_ReturnValue_1) == 0x000038, "Member 'UI_TutorialHint_10_C_ExecuteUbergraph_UI_TutorialHint_10::CallFunc_GetFlameGameInstance_ReturnValue_1' has a wrong offset!");

// Function UI_TutorialHint_10.UI_TutorialHint_10_C.OnInputModeChanged
// 0x0008 (0x0008 - 0x0000)
struct UI_TutorialHint_10_C_OnInputModeChanged final
{
public:
	int32                                         PlayerIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputMode                                    InputMode;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_TutorialHint_10_C_OnInputModeChanged) == 0x000004, "Wrong alignment on UI_TutorialHint_10_C_OnInputModeChanged");
static_assert(sizeof(UI_TutorialHint_10_C_OnInputModeChanged) == 0x000008, "Wrong size on UI_TutorialHint_10_C_OnInputModeChanged");
static_assert(offsetof(UI_TutorialHint_10_C_OnInputModeChanged, PlayerIndex) == 0x000000, "Member 'UI_TutorialHint_10_C_OnInputModeChanged::PlayerIndex' has a wrong offset!");
static_assert(offsetof(UI_TutorialHint_10_C_OnInputModeChanged, InputMode) == 0x000004, "Member 'UI_TutorialHint_10_C_OnInputModeChanged::InputMode' has a wrong offset!");

// Function UI_TutorialHint_10.UI_TutorialHint_10_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_TutorialHint_10_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_TutorialHint_10_C_PreConstruct) == 0x000001, "Wrong alignment on UI_TutorialHint_10_C_PreConstruct");
static_assert(sizeof(UI_TutorialHint_10_C_PreConstruct) == 0x000001, "Wrong size on UI_TutorialHint_10_C_PreConstruct");
static_assert(offsetof(UI_TutorialHint_10_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_TutorialHint_10_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_TutorialHint_10.UI_TutorialHint_10_C.UpdateWindowsIcons
// 0x0030 (0x0030 - 0x0000)
struct UI_TutorialHint_10_C_UpdateWindowsIcons final
{
public:
	class FName                                   ActionName;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RowName;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EInputIcon>                            FinalIcons;                                        // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<EInputIcon>                            CallFunc_GetInputIcons_Icons;                      // 0x0020(0x0010)(ReferenceParm)
};
static_assert(alignof(UI_TutorialHint_10_C_UpdateWindowsIcons) == 0x000008, "Wrong alignment on UI_TutorialHint_10_C_UpdateWindowsIcons");
static_assert(sizeof(UI_TutorialHint_10_C_UpdateWindowsIcons) == 0x000030, "Wrong size on UI_TutorialHint_10_C_UpdateWindowsIcons");
static_assert(offsetof(UI_TutorialHint_10_C_UpdateWindowsIcons, ActionName) == 0x000000, "Member 'UI_TutorialHint_10_C_UpdateWindowsIcons::ActionName' has a wrong offset!");
static_assert(offsetof(UI_TutorialHint_10_C_UpdateWindowsIcons, RowName) == 0x000008, "Member 'UI_TutorialHint_10_C_UpdateWindowsIcons::RowName' has a wrong offset!");
static_assert(offsetof(UI_TutorialHint_10_C_UpdateWindowsIcons, FinalIcons) == 0x000010, "Member 'UI_TutorialHint_10_C_UpdateWindowsIcons::FinalIcons' has a wrong offset!");
static_assert(offsetof(UI_TutorialHint_10_C_UpdateWindowsIcons, CallFunc_GetInputIcons_Icons) == 0x000020, "Member 'UI_TutorialHint_10_C_UpdateWindowsIcons::CallFunc_GetInputIcons_Icons' has a wrong offset!");

}

