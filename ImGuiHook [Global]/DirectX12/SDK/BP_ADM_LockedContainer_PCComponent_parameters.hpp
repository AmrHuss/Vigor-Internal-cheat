#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_LockedContainer_PCComponent

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ADM_LockedContainer_PCComponent.BP_ADM_LockedContainer_PCComponent_C.ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent
// 0x0040 (0x0040 - 0x0000)
struct BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ADM_LockedContainer_GMComponent_C*  K2Node_DynamicCast_AsBP_ADM_Locked_Container_GMComponent; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ADM_LockedContainer_Lock_C*         K2Node_CustomEvent_Interacted_lock;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ADM_LockedContainer_GMComponent_C*  K2Node_DynamicCast_AsBP_ADM_Locked_Container_GMComponent_1; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_AirDropModular_C*  CallFunc_Get_Player_Controller_Player_Controller;  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_CombinationLock_C*                  CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent) == 0x000008, "Wrong alignment on BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent");
static_assert(sizeof(BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent) == 0x000040, "Wrong size on BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent, EntryPoint) == 0x000000, "Member 'BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent, K2Node_DynamicCast_AsBP_ADM_Locked_Container_GMComponent) == 0x000008, "Member 'BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent::K2Node_DynamicCast_AsBP_ADM_Locked_Container_GMComponent' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent, K2Node_CustomEvent_Interacted_lock) == 0x000018, "Member 'BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent::K2Node_CustomEvent_Interacted_lock' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent, K2Node_DynamicCast_AsBP_ADM_Locked_Container_GMComponent_1) == 0x000020, "Member 'BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent::K2Node_DynamicCast_AsBP_ADM_Locked_Container_GMComponent_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent, CallFunc_Get_Player_Controller_Player_Controller) == 0x000030, "Member 'BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent::CallFunc_Get_Player_Controller_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent, CallFunc_Create_ReturnValue) == 0x000038, "Member 'BP_ADM_LockedContainer_PCComponent_C_ExecuteUbergraph_BP_ADM_LockedContainer_PCComponent::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_ADM_LockedContainer_PCComponent.BP_ADM_LockedContainer_PCComponent_C.Debug Open lock UI
// 0x0008 (0x0008 - 0x0000)
struct BP_ADM_LockedContainer_PCComponent_C_Debug_Open_lock_UI final
{
public:
	class ABP_ADM_LockedContainer_Lock_C*         Interacted_lock;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ADM_LockedContainer_PCComponent_C_Debug_Open_lock_UI) == 0x000008, "Wrong alignment on BP_ADM_LockedContainer_PCComponent_C_Debug_Open_lock_UI");
static_assert(sizeof(BP_ADM_LockedContainer_PCComponent_C_Debug_Open_lock_UI) == 0x000008, "Wrong size on BP_ADM_LockedContainer_PCComponent_C_Debug_Open_lock_UI");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_Debug_Open_lock_UI, Interacted_lock) == 0x000000, "Member 'BP_ADM_LockedContainer_PCComponent_C_Debug_Open_lock_UI::Interacted_lock' has a wrong offset!");

// Function BP_ADM_LockedContainer_PCComponent.BP_ADM_LockedContainer_PCComponent_C.Notify other players
// 0x0058 (0x0058 - 0x0000)
struct BP_ADM_LockedContainer_PCComponent_C_Notify_other_players final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Message_to_self;                                   // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_AirDropModular_C*  CallFunc_Get_Player_Controller_Player_Controller;  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerController*>              CallFunc_GetPlayerControllers_ReturnValue;         // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ADM_LockedContainer_PCComponent_C_Notify_other_players) == 0x000008, "Wrong alignment on BP_ADM_LockedContainer_PCComponent_C_Notify_other_players");
static_assert(sizeof(BP_ADM_LockedContainer_PCComponent_C_Notify_other_players) == 0x000058, "Wrong size on BP_ADM_LockedContainer_PCComponent_C_Notify_other_players");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_Notify_other_players, Message) == 0x000000, "Member 'BP_ADM_LockedContainer_PCComponent_C_Notify_other_players::Message' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_Notify_other_players, Message_to_self) == 0x000018, "Member 'BP_ADM_LockedContainer_PCComponent_C_Notify_other_players::Message_to_self' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_Notify_other_players, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BP_ADM_LockedContainer_PCComponent_C_Notify_other_players::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_Notify_other_players, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_ADM_LockedContainer_PCComponent_C_Notify_other_players::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_Notify_other_players, Temp_int_Array_Index_Variable) == 0x000024, "Member 'BP_ADM_LockedContainer_PCComponent_C_Notify_other_players::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_Notify_other_players, CallFunc_Get_Player_Controller_Player_Controller) == 0x000028, "Member 'BP_ADM_LockedContainer_PCComponent_C_Notify_other_players::CallFunc_Get_Player_Controller_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_Notify_other_players, CallFunc_GetPlayerControllers_ReturnValue) == 0x000030, "Member 'BP_ADM_LockedContainer_PCComponent_C_Notify_other_players::CallFunc_GetPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_Notify_other_players, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BP_ADM_LockedContainer_PCComponent_C_Notify_other_players::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_Notify_other_players, CallFunc_Array_Get_Item) == 0x000048, "Member 'BP_ADM_LockedContainer_PCComponent_C_Notify_other_players::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_Notify_other_players, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_ADM_LockedContainer_PCComponent_C_Notify_other_players::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ADM_LockedContainer_PCComponent_C_Notify_other_players, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000051, "Member 'BP_ADM_LockedContainer_PCComponent_C_Notify_other_players::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

}

