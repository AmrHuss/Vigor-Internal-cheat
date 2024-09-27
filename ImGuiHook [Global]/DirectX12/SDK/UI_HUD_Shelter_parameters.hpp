#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HUD_Shelter

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "E_ChallengeManagerState_structs.hpp"
#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function UI_HUD_Shelter.UI_HUD_Shelter_C.ExecuteUbergraph_UI_HUD_Shelter
// 0x0150 (0x0150 - 0x0000)
struct UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationParams                    K2Node_MakeStruct_NotificationParams;              // 0x0004(0x000C)(NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateFlame*                        K2Node_DynamicCast_AsGame_State_Flame;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNotificationSystem*                    CallFunc_GetNotificationSystem_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClassIsChildOf_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ChallengeNotification_C*            CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AChallengeManager*                      CallFunc_GetChallengeManager_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ChallengeManager_C*                 K2Node_DynamicCast_AsBP_Challenge_Manager;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_ChallengeSlot_C*>            CallFunc_GetAllChallengeSlots_Challenge_Slots;     // 0x0070(0x0010)(ReferenceParm)
	E_ChallengeManagerState                       CallFunc_Get_Challenge_Manager_State_State;        // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ChallengeSlot_C*                    K2Node_CustomEvent_Slot;                           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_New_Progress;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ChallengeSlot_C*                    K2Node_CustomEvent_ChallengeSlot;                  // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ChallengeSlot_C*                    CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_CustomEvent_ConsumableClass;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_EffectTimer;                    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEffectPersistent;             // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_Onboarding_ShelterMenus_C*          K2Node_DynamicCast_AsUI_Onboarding_Shelter_Menus;  // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x00F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUI_Onboarding_ShelterMenus_C*          K2Node_DynamicCast_AsUI_Onboarding_Shelter_Menus_1; // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class ABP_ChallengeSlot_C* Slot, int32 New_Progress)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0104(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_ConsumableIndicators_C*             K2Node_DynamicCast_AsUI_Consumable_Indicators;     // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bShowHUD;                             // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_122[0x6];                                      // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AChallengeManager*                      CallFunc_GetChallengeManager_ReturnValue_1;        // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_136[0x2];                                      // 0x0136(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x013C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter) == 0x000008, "Wrong alignment on UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter");
static_assert(sizeof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter) == 0x000150, "Wrong size on UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, EntryPoint) == 0x000000, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_MakeStruct_NotificationParams) == 0x000004, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_MakeStruct_NotificationParams' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_Event_IsDesignTime) == 0x000010, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_DynamicCast_AsGame_State_Flame) == 0x000020, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_DynamicCast_AsGame_State_Flame' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_GetNotificationSystem_ReturnValue) == 0x000030, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_GetNotificationSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_ClassIsChildOf_ReturnValue) == 0x000038, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_ClassIsChildOf_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_GetOwningPlayer_ReturnValue) == 0x000040, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_Create_ReturnValue) == 0x000048, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_GetChallengeManager_ReturnValue) == 0x000050, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_GetChallengeManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_DynamicCast_AsBP_Challenge_Manager) == 0x000060, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_DynamicCast_AsBP_Challenge_Manager' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_GetAllChallengeSlots_Challenge_Slots) == 0x000070, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_GetAllChallengeSlots_Challenge_Slots' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_Get_Challenge_Manager_State_State) == 0x000080, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_Get_Challenge_Manager_State_State' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_Array_Length_ReturnValue) == 0x000084, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000088, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_CustomEvent_Slot) == 0x000090, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_CustomEvent_Slot' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_CustomEvent_New_Progress) == 0x000098, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_CustomEvent_New_Progress' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_CustomEvent_ChallengeSlot) == 0x0000A0, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_CustomEvent_ChallengeSlot' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, Temp_int_Array_Index_Variable) == 0x0000A8, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_CustomEvent_ConsumableClass) == 0x0000B8, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_CustomEvent_ConsumableClass' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_CustomEvent_EffectTimer) == 0x0000C0, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_CustomEvent_EffectTimer' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_CustomEvent_IsEffectPersistent) == 0x0000C4, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_CustomEvent_IsEffectPersistent' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_DynamicCast_AsUI_Onboarding_Shelter_Menus) == 0x0000C8, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_DynamicCast_AsUI_Onboarding_Shelter_Menus' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_DynamicCast_bSuccess_2) == 0x0000D0, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_CreateDelegate_OutputDelegate) == 0x0000D4, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000E8, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x0000F0, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_DynamicCast_AsUI_Onboarding_Shelter_Menus_1) == 0x0000F8, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_DynamicCast_AsUI_Onboarding_Shelter_Menus_1' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_DynamicCast_bSuccess_3) == 0x000100, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_CreateDelegate_OutputDelegate_1) == 0x000104, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_DynamicCast_AsUI_Consumable_Indicators) == 0x000118, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_DynamicCast_AsUI_Consumable_Indicators' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_DynamicCast_bSuccess_4) == 0x000120, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_Event_bShowHUD) == 0x000121, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_Event_bShowHUD' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_GetChallengeManager_ReturnValue_1) == 0x000128, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_GetChallengeManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, Temp_int_Loop_Counter_Variable) == 0x000130, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_IsValid_ReturnValue_1) == 0x000134, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_Less_IntInt_ReturnValue) == 0x000135, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, CallFunc_Add_IntInt_ReturnValue) == 0x000138, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter, K2Node_CreateDelegate_OutputDelegate_2) == 0x00013C, "Member 'UI_HUD_Shelter_C_ExecuteUbergraph_UI_HUD_Shelter::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function UI_HUD_Shelter.UI_HUD_Shelter_C.Show
// 0x0001 (0x0001 - 0x0000)
struct UI_HUD_Shelter_C_Show final
{
public:
	bool                                          bShowHUD;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_HUD_Shelter_C_Show) == 0x000001, "Wrong alignment on UI_HUD_Shelter_C_Show");
static_assert(sizeof(UI_HUD_Shelter_C_Show) == 0x000001, "Wrong size on UI_HUD_Shelter_C_Show");
static_assert(offsetof(UI_HUD_Shelter_C_Show, bShowHUD) == 0x000000, "Member 'UI_HUD_Shelter_C_Show::bShowHUD' has a wrong offset!");

// Function UI_HUD_Shelter.UI_HUD_Shelter_C.ShowConsumableNotification
// 0x0010 (0x0010 - 0x0000)
struct UI_HUD_Shelter_C_ShowConsumableNotification final
{
public:
	class UClass*                                 ConsumableClass;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EffectTimer;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEffectPersistent;                                // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_HUD_Shelter_C_ShowConsumableNotification) == 0x000008, "Wrong alignment on UI_HUD_Shelter_C_ShowConsumableNotification");
static_assert(sizeof(UI_HUD_Shelter_C_ShowConsumableNotification) == 0x000010, "Wrong size on UI_HUD_Shelter_C_ShowConsumableNotification");
static_assert(offsetof(UI_HUD_Shelter_C_ShowConsumableNotification, ConsumableClass) == 0x000000, "Member 'UI_HUD_Shelter_C_ShowConsumableNotification::ConsumableClass' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ShowConsumableNotification, EffectTimer) == 0x000008, "Member 'UI_HUD_Shelter_C_ShowConsumableNotification::EffectTimer' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_ShowConsumableNotification, IsEffectPersistent) == 0x00000C, "Member 'UI_HUD_Shelter_C_ShowConsumableNotification::IsEffectPersistent' has a wrong offset!");

// Function UI_HUD_Shelter.UI_HUD_Shelter_C.ShowChallengeNotification
// 0x0008 (0x0008 - 0x0000)
struct UI_HUD_Shelter_C_ShowChallengeNotification final
{
public:
	class ABP_ChallengeSlot_C*                    ChallengeSlot;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_HUD_Shelter_C_ShowChallengeNotification) == 0x000008, "Wrong alignment on UI_HUD_Shelter_C_ShowChallengeNotification");
static_assert(sizeof(UI_HUD_Shelter_C_ShowChallengeNotification) == 0x000008, "Wrong size on UI_HUD_Shelter_C_ShowChallengeNotification");
static_assert(offsetof(UI_HUD_Shelter_C_ShowChallengeNotification, ChallengeSlot) == 0x000000, "Member 'UI_HUD_Shelter_C_ShowChallengeNotification::ChallengeSlot' has a wrong offset!");

// Function UI_HUD_Shelter.UI_HUD_Shelter_C.EventChallengeProgressUpdated
// 0x0010 (0x0010 - 0x0000)
struct UI_HUD_Shelter_C_EventChallengeProgressUpdated final
{
public:
	class ABP_ChallengeSlot_C*                    Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         New_Progress;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_HUD_Shelter_C_EventChallengeProgressUpdated) == 0x000008, "Wrong alignment on UI_HUD_Shelter_C_EventChallengeProgressUpdated");
static_assert(sizeof(UI_HUD_Shelter_C_EventChallengeProgressUpdated) == 0x000010, "Wrong size on UI_HUD_Shelter_C_EventChallengeProgressUpdated");
static_assert(offsetof(UI_HUD_Shelter_C_EventChallengeProgressUpdated, Slot_0) == 0x000000, "Member 'UI_HUD_Shelter_C_EventChallengeProgressUpdated::Slot_0' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_EventChallengeProgressUpdated, New_Progress) == 0x000008, "Member 'UI_HUD_Shelter_C_EventChallengeProgressUpdated::New_Progress' has a wrong offset!");

// Function UI_HUD_Shelter.UI_HUD_Shelter_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_HUD_Shelter_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_HUD_Shelter_C_PreConstruct) == 0x000001, "Wrong alignment on UI_HUD_Shelter_C_PreConstruct");
static_assert(sizeof(UI_HUD_Shelter_C_PreConstruct) == 0x000001, "Wrong size on UI_HUD_Shelter_C_PreConstruct");
static_assert(offsetof(UI_HUD_Shelter_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_HUD_Shelter_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_HUD_Shelter.UI_HUD_Shelter_C.GetOwningCharacter
// 0x0020 (0x0020 - 0x0000)
struct UI_HUD_Shelter_C_GetOwningCharacter final
{
public:
	class ABP_Character_C*                        BP_Character;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                        K2Node_DynamicCast_AsBP_Character;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_HUD_Shelter_C_GetOwningCharacter) == 0x000008, "Wrong alignment on UI_HUD_Shelter_C_GetOwningCharacter");
static_assert(sizeof(UI_HUD_Shelter_C_GetOwningCharacter) == 0x000020, "Wrong size on UI_HUD_Shelter_C_GetOwningCharacter");
static_assert(offsetof(UI_HUD_Shelter_C_GetOwningCharacter, BP_Character) == 0x000000, "Member 'UI_HUD_Shelter_C_GetOwningCharacter::BP_Character' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_GetOwningCharacter, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000008, "Member 'UI_HUD_Shelter_C_GetOwningCharacter::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_GetOwningCharacter, K2Node_DynamicCast_AsBP_Character) == 0x000010, "Member 'UI_HUD_Shelter_C_GetOwningCharacter::K2Node_DynamicCast_AsBP_Character' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_GetOwningCharacter, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UI_HUD_Shelter_C_GetOwningCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UI_HUD_Shelter.UI_HUD_Shelter_C.SetMainHUDVisibility
// 0x0060 (0x0060 - 0x0000)
struct UI_HUD_Shelter_C_SetMainHUDVisibility final
{
public:
	bool                                          ShowHUD;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Character_C*                        OwningCharacter;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_GameInfo_C*                         CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x5];                                       // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFlameHUD*                              K2Node_DynamicCast_AsFlame_HUD;                    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_HUD_Shelter_C_SetMainHUDVisibility) == 0x000008, "Wrong alignment on UI_HUD_Shelter_C_SetMainHUDVisibility");
static_assert(sizeof(UI_HUD_Shelter_C_SetMainHUDVisibility) == 0x000060, "Wrong size on UI_HUD_Shelter_C_SetMainHUDVisibility");
static_assert(offsetof(UI_HUD_Shelter_C_SetMainHUDVisibility, ShowHUD) == 0x000000, "Member 'UI_HUD_Shelter_C_SetMainHUDVisibility::ShowHUD' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_SetMainHUDVisibility, OwningCharacter) == 0x000008, "Member 'UI_HUD_Shelter_C_SetMainHUDVisibility::OwningCharacter' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_SetMainHUDVisibility, CallFunc_SelectFloat_ReturnValue) == 0x000010, "Member 'UI_HUD_Shelter_C_SetMainHUDVisibility::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_SetMainHUDVisibility, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'UI_HUD_Shelter_C_SetMainHUDVisibility::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_SetMainHUDVisibility, CallFunc_AddChild_ReturnValue) == 0x000020, "Member 'UI_HUD_Shelter_C_SetMainHUDVisibility::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_SetMainHUDVisibility, CallFunc_Create_ReturnValue) == 0x000028, "Member 'UI_HUD_Shelter_C_SetMainHUDVisibility::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_SetMainHUDVisibility, Temp_bool_Variable) == 0x000030, "Member 'UI_HUD_Shelter_C_SetMainHUDVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_SetMainHUDVisibility, Temp_byte_Variable) == 0x000031, "Member 'UI_HUD_Shelter_C_SetMainHUDVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_SetMainHUDVisibility, Temp_byte_Variable_1) == 0x000032, "Member 'UI_HUD_Shelter_C_SetMainHUDVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_SetMainHUDVisibility, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000038, "Member 'UI_HUD_Shelter_C_SetMainHUDVisibility::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_SetMainHUDVisibility, K2Node_Select_Default) == 0x000040, "Member 'UI_HUD_Shelter_C_SetMainHUDVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_SetMainHUDVisibility, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'UI_HUD_Shelter_C_SetMainHUDVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_SetMainHUDVisibility, CallFunc_GetHUD_ReturnValue) == 0x000048, "Member 'UI_HUD_Shelter_C_SetMainHUDVisibility::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_SetMainHUDVisibility, K2Node_DynamicCast_AsFlame_HUD) == 0x000050, "Member 'UI_HUD_Shelter_C_SetMainHUDVisibility::K2Node_DynamicCast_AsFlame_HUD' has a wrong offset!");
static_assert(offsetof(UI_HUD_Shelter_C_SetMainHUDVisibility, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'UI_HUD_Shelter_C_SetMainHUDVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
