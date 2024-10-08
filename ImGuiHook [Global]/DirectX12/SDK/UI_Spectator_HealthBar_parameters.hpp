#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Spectator_HealthBar

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_Spectator_HealthBar.UI_Spectator_HealthBar_C.ExecuteUbergraph_UI_Spectator_HealthBar
// 0x0110 (0x0110 - 0x0000)
struct UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameSaveSettings                      K2Node_CustomEvent_GameSettings;                   // 0x0008(0x0048)(ConstParm)
	TDelegate<void(struct FGameSaveSettings& GameSettings)> K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class UFlameGameInstance*                     CallFunc_GetFlameGameInstance_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveGame*                              CallFunc_GetOptionsSaveGame_ReturnValue;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOptionsSaveGame*                       K2Node_DynamicCast_AsOptions_Save_Game;            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameSaveSettings                      CallFunc_GetGameSettings_ReturnValue;              // 0x0088(0x0048)(ConstParm)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00D0(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar) == 0x000008, "Wrong alignment on UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar");
static_assert(sizeof(UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar) == 0x000110, "Wrong size on UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar");
static_assert(offsetof(UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar, EntryPoint) == 0x000000, "Member 'UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar, K2Node_CustomEvent_GameSettings) == 0x000008, "Member 'UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar::K2Node_CustomEvent_GameSettings' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar, CallFunc_GetFlameGameInstance_ReturnValue) == 0x000060, "Member 'UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar::CallFunc_GetFlameGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar, CallFunc_GetOptionsSaveGame_ReturnValue) == 0x000068, "Member 'UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar::CallFunc_GetOptionsSaveGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar, K2Node_DynamicCast_AsOptions_Save_Game) == 0x000070, "Member 'UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar::K2Node_DynamicCast_AsOptions_Save_Game' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000080, "Member 'UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar, CallFunc_GetGameSettings_ReturnValue) == 0x000088, "Member 'UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar::CallFunc_GetGameSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar, K2Node_Event_MyGeometry) == 0x0000D0, "Member 'UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar, K2Node_Event_InDeltaTime) == 0x000108, "Member 'UI_Spectator_HealthBar_C_ExecuteUbergraph_UI_Spectator_HealthBar::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function UI_Spectator_HealthBar.UI_Spectator_HealthBar_C.OnGameSettingsChanged
// 0x0048 (0x0048 - 0x0000)
struct UI_Spectator_HealthBar_C_OnGameSettingsChanged final
{
public:
	struct FGameSaveSettings                      GameSettings;                                      // 0x0000(0x0048)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UI_Spectator_HealthBar_C_OnGameSettingsChanged) == 0x000008, "Wrong alignment on UI_Spectator_HealthBar_C_OnGameSettingsChanged");
static_assert(sizeof(UI_Spectator_HealthBar_C_OnGameSettingsChanged) == 0x000048, "Wrong size on UI_Spectator_HealthBar_C_OnGameSettingsChanged");
static_assert(offsetof(UI_Spectator_HealthBar_C_OnGameSettingsChanged, GameSettings) == 0x000000, "Member 'UI_Spectator_HealthBar_C_OnGameSettingsChanged::GameSettings' has a wrong offset!");

// Function UI_Spectator_HealthBar.UI_Spectator_HealthBar_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_Spectator_HealthBar_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Spectator_HealthBar_C_Tick) == 0x000004, "Wrong alignment on UI_Spectator_HealthBar_C_Tick");
static_assert(sizeof(UI_Spectator_HealthBar_C_Tick) == 0x00003C, "Wrong size on UI_Spectator_HealthBar_C_Tick");
static_assert(offsetof(UI_Spectator_HealthBar_C_Tick, MyGeometry) == 0x000000, "Member 'UI_Spectator_HealthBar_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_Spectator_HealthBar_C_Tick::InDeltaTime' has a wrong offset!");

// Function UI_Spectator_HealthBar.UI_Spectator_HealthBar_C.UpdateHealthBar
// 0x0050 (0x0050 - 0x0000)
struct UI_Spectator_HealthBar_C_UpdateHealthBar final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHealthComponent*                       NewLocalVar_0;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_WorldSpectator_C*                   K2Node_DynamicCast_AsBP_World_Spectator;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetHealthFractionInitial_ReturnValue;     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMaxHealth_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDownedHealthFractionInitial_ReturnValue; // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ComputeHealthBarParameters_HealthOut;     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ComputeHealthBarParameters_ExpectedHealingOut; // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ComputeHealthBarParameters_TempHealthOut; // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetHealth_ReturnValue;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Spectator_HealthBar_C_UpdateHealthBar) == 0x000008, "Wrong alignment on UI_Spectator_HealthBar_C_UpdateHealthBar");
static_assert(sizeof(UI_Spectator_HealthBar_C_UpdateHealthBar) == 0x000050, "Wrong size on UI_Spectator_HealthBar_C_UpdateHealthBar");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, DeltaTime) == 0x000000, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::DeltaTime' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, NewLocalVar_0) == 0x000008, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000010, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, K2Node_DynamicCast_AsBP_World_Spectator) == 0x000018, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::K2Node_DynamicCast_AsBP_World_Spectator' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, CallFunc_GetHealthFractionInitial_ReturnValue) == 0x000024, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::CallFunc_GetHealthFractionInitial_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, CallFunc_GetMaxHealth_ReturnValue) == 0x000028, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::CallFunc_GetMaxHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, CallFunc_GetDownedHealthFractionInitial_ReturnValue) == 0x00002C, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::CallFunc_GetDownedHealthFractionInitial_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000030, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000034, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, CallFunc_ComputeHealthBarParameters_HealthOut) == 0x000038, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::CallFunc_ComputeHealthBarParameters_HealthOut' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, CallFunc_ComputeHealthBarParameters_ExpectedHealingOut) == 0x00003C, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::CallFunc_ComputeHealthBarParameters_ExpectedHealingOut' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, CallFunc_ComputeHealthBarParameters_TempHealthOut) == 0x000040, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::CallFunc_ComputeHealthBarParameters_TempHealthOut' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, CallFunc_GetHealth_ReturnValue) == 0x000044, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, CallFunc_Less_FloatFloat_ReturnValue) == 0x000048, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateHealthBar, CallFunc_BooleanOR_ReturnValue) == 0x000049, "Member 'UI_Spectator_HealthBar_C_UpdateHealthBar::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function UI_Spectator_HealthBar.UI_Spectator_HealthBar_C.ComputeHealthBarParameters
// 0x0044 (0x0044 - 0x0000)
struct UI_Spectator_HealthBar_C_ComputeHealthBarParameters final
{
public:
	float                                         HealthIn;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DownedHealthIn;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpectedHealingIn;                                 // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHealth;                                         // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TempHealthIn;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HealthOut;                                         // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpectedHealingOut;                                // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TempHealthOut;                                     // 0x001C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters) == 0x000004, "Wrong alignment on UI_Spectator_HealthBar_C_ComputeHealthBarParameters");
static_assert(sizeof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters) == 0x000044, "Wrong size on UI_Spectator_HealthBar_C_ComputeHealthBarParameters");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, HealthIn) == 0x000000, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::HealthIn' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, DownedHealthIn) == 0x000004, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::DownedHealthIn' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, ExpectedHealingIn) == 0x000008, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::ExpectedHealingIn' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, MaxHealth) == 0x00000C, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::MaxHealth' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, TempHealthIn) == 0x000010, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::TempHealthIn' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, HealthOut) == 0x000014, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::HealthOut' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, ExpectedHealingOut) == 0x000018, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::ExpectedHealingOut' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, TempHealthOut) == 0x00001C, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::TempHealthOut' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, CallFunc_Add_FloatFloat_ReturnValue) == 0x000024, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000028, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x00002C, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000030, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000034, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000038, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, CallFunc_FClamp_ReturnValue) == 0x00003C, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_ComputeHealthBarParameters, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x000040, "Member 'UI_Spectator_HealthBar_C_ComputeHealthBarParameters::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");

// Function UI_Spectator_HealthBar.UI_Spectator_HealthBar_C.UpdateShowPermanentlyBasedOnSavegame
// 0x0048 (0x0048 - 0x0000)
struct UI_Spectator_HealthBar_C_UpdateShowPermanentlyBasedOnSavegame final
{
public:
	struct FGameSaveSettings                      GameSettings;                                      // 0x0000(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UI_Spectator_HealthBar_C_UpdateShowPermanentlyBasedOnSavegame) == 0x000008, "Wrong alignment on UI_Spectator_HealthBar_C_UpdateShowPermanentlyBasedOnSavegame");
static_assert(sizeof(UI_Spectator_HealthBar_C_UpdateShowPermanentlyBasedOnSavegame) == 0x000048, "Wrong size on UI_Spectator_HealthBar_C_UpdateShowPermanentlyBasedOnSavegame");
static_assert(offsetof(UI_Spectator_HealthBar_C_UpdateShowPermanentlyBasedOnSavegame, GameSettings) == 0x000000, "Member 'UI_Spectator_HealthBar_C_UpdateShowPermanentlyBasedOnSavegame::GameSettings' has a wrong offset!");

// Function UI_Spectator_HealthBar.UI_Spectator_HealthBar_C.AddTempHealthAmount
// 0x000C (0x000C - 0x0000)
struct UI_Spectator_HealthBar_C_AddTempHealthAmount final
{
public:
	float                                         A;                                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Spectator_HealthBar_C_AddTempHealthAmount) == 0x000004, "Wrong alignment on UI_Spectator_HealthBar_C_AddTempHealthAmount");
static_assert(sizeof(UI_Spectator_HealthBar_C_AddTempHealthAmount) == 0x00000C, "Wrong size on UI_Spectator_HealthBar_C_AddTempHealthAmount");
static_assert(offsetof(UI_Spectator_HealthBar_C_AddTempHealthAmount, A) == 0x000000, "Member 'UI_Spectator_HealthBar_C_AddTempHealthAmount::A' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_AddTempHealthAmount, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000004, "Member 'UI_Spectator_HealthBar_C_AddTempHealthAmount::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Spectator_HealthBar_C_AddTempHealthAmount, CallFunc_Add_FloatFloat_ReturnValue) == 0x000008, "Member 'UI_Spectator_HealthBar_C_AddTempHealthAmount::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

}

