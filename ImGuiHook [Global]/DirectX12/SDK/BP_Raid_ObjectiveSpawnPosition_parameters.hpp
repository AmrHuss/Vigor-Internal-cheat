#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Raid_ObjectiveSpawnPosition

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Raid_ObjectiveSpawnPosition.BP_Raid_ObjectiveSpawnPosition_C.ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition
// 0x0178 (0x0178 - 0x0000)
struct BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameState_Raid_C*                   K2Node_DynamicCast_AsBP_Game_State_Raid;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue_1;                   // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBoxComponent*                          CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBoxComponent*                          CallFunc_Array_Get_Item_1;                         // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_CustomEvent_OverlappedComponent;            // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor;                     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherComp;                      // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_OtherBodyIndex;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bFromSweep;                     // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_CustomEvent_SweepResult;                    // 0x00A0(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12D[0x3];                                      // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Character_C*                        K2Node_DynamicCast_AsBP_Character;                 // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBoxComponent*>                  CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0148(0x0010)(ReferenceParm, ContainsInstancedReference)
	class ABP_PlayerController_Raid_C*            K2Node_DynamicCast_AsBP_Player_Controller_Raid;    // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Player_Attacker_Is_Attacker;           // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_163[0x5];                                      // 0x0163(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBoxComponent*                          CallFunc_Array_Get_Item_2;                         // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition) == 0x000008, "Wrong alignment on BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition");
static_assert(sizeof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition) == 0x000178, "Wrong size on BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, EntryPoint) == 0x000000, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, K2Node_DynamicCast_AsBP_Game_State_Raid) == 0x000010, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::K2Node_DynamicCast_AsBP_Game_State_Raid' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, Temp_int_Array_Index_Variable_1) == 0x000020, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_IsServer_ReturnValue) == 0x00002C, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, Temp_int_Loop_Counter_Variable_1) == 0x000040, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_Add_IntInt_ReturnValue_1) == 0x000044, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, Temp_int_Array_Index_Variable_2) == 0x000048, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, Temp_int_Loop_Counter_Variable_2) == 0x00004C, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_Add_IntInt_ReturnValue_2) == 0x000050, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_IsServer_ReturnValue_1) == 0x000054, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_Array_Length_ReturnValue) == 0x000064, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_Array_Length_ReturnValue_1) == 0x000078, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, K2Node_CustomEvent_OverlappedComponent) == 0x000080, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::K2Node_CustomEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, K2Node_CustomEvent_OtherActor) == 0x000088, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, K2Node_CustomEvent_OtherComp) == 0x000090, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::K2Node_CustomEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, K2Node_CustomEvent_OtherBodyIndex) == 0x000098, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::K2Node_CustomEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, K2Node_CustomEvent_bFromSweep) == 0x00009C, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::K2Node_CustomEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, K2Node_CustomEvent_SweepResult) == 0x0000A0, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::K2Node_CustomEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_Less_IntInt_ReturnValue_1) == 0x00012C, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, K2Node_DynamicCast_AsBP_Character) == 0x000130, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::K2Node_DynamicCast_AsBP_Character' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, K2Node_DynamicCast_bSuccess_1) == 0x000138, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_GetController_ReturnValue) == 0x000140, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000148, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, K2Node_DynamicCast_AsBP_Player_Controller_Raid) == 0x000158, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::K2Node_DynamicCast_AsBP_Player_Controller_Raid' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, K2Node_DynamicCast_bSuccess_2) == 0x000160, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_IsValid_ReturnValue_1) == 0x000161, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_Is_Player_Attacker_Is_Attacker) == 0x000162, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_Is_Player_Attacker_Is_Attacker' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_Array_Get_Item_2) == 0x000168, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_Array_Length_ReturnValue_2) == 0x000170, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition, CallFunc_Less_IntInt_ReturnValue_2) == 0x000174, "Member 'BP_Raid_ObjectiveSpawnPosition_C_ExecuteUbergraph_BP_Raid_ObjectiveSpawnPosition::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

// Function BP_Raid_ObjectiveSpawnPosition.BP_Raid_ObjectiveSpawnPosition_C.SpotZoneOverlapped
// 0x00B0 (0x00B0 - 0x0000)
struct BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped) == 0x000008, "Wrong alignment on BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped");
static_assert(sizeof(BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped) == 0x0000B0, "Wrong size on BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped, OverlappedComponent) == 0x000000, "Member 'BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped, OtherActor) == 0x000008, "Member 'BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped, OtherComp) == 0x000010, "Member 'BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped, OtherBodyIndex) == 0x000018, "Member 'BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped, bFromSweep) == 0x00001C, "Member 'BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped, SweepResult) == 0x000020, "Member 'BP_Raid_ObjectiveSpawnPosition_C_SpotZoneOverlapped::SweepResult' has a wrong offset!");

// Function BP_Raid_ObjectiveSpawnPosition.BP_Raid_ObjectiveSpawnPosition_C.UserConstructionScript
// 0x00A0 (0x00A0 - 0x0000)
struct BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UObject>                 CallFunc_GetSoftReference_ReturnValue;             // 0x0008(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadSoftReference_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_DynamicCast_AsMaterial_Interface;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                 CallFunc_GetSoftReference_ReturnValue_1;           // 0x0050(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadSoftReference_ReturnValue_1;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            K2Node_DynamicCast_AsStatic_Mesh;                  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92[0x2];                                       // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript");
static_assert(sizeof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript) == 0x0000A0, "Wrong size on BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, Temp_int_Variable) == 0x000000, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, CallFunc_GetSoftReference_ReturnValue) == 0x000008, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::CallFunc_GetSoftReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, CallFunc_LoadSoftReference_ReturnValue) == 0x000030, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::CallFunc_LoadSoftReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000038, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, K2Node_DynamicCast_AsMaterial_Interface) == 0x000040, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::K2Node_DynamicCast_AsMaterial_Interface' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, CallFunc_GetSoftReference_ReturnValue_1) == 0x000050, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::CallFunc_GetSoftReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, CallFunc_LoadSoftReference_ReturnValue_1) == 0x000078, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::CallFunc_LoadSoftReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x000080, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_1) == 0x000081, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, K2Node_DynamicCast_AsStatic_Mesh) == 0x000088, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::K2Node_DynamicCast_AsStatic_Mesh' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, K2Node_DynamicCast_bSuccess_1) == 0x000090, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x000091, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, CallFunc_GetNumMaterials_ReturnValue) == 0x000094, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x000098, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00009C, "Member 'BP_Raid_ObjectiveSpawnPosition_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_Raid_ObjectiveSpawnPosition.BP_Raid_ObjectiveSpawnPosition_C.Is Player Attacker
// 0x0048 (0x0048 - 0x0000)
struct BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker final
{
public:
	class APlayerState*                           PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Attacker;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerState_Teams_C*                K2Node_DynamicCast_AsBP_Player_State_Teams;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameMode_Raid_C*                    K2Node_DynamicCast_AsBP_Game_Mode_Raid;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_GSC_Team_Raid_C*                    CallFunc_Get_Attacking_Team_Attacking_Team;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker) == 0x000008, "Wrong alignment on BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker");
static_assert(sizeof(BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker) == 0x000048, "Wrong size on BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker, PlayerState) == 0x000000, "Member 'BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker::PlayerState' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker, Is_Attacker) == 0x000008, "Member 'BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker::Is_Attacker' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker, K2Node_DynamicCast_AsBP_Player_State_Teams) == 0x000010, "Member 'BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker::K2Node_DynamicCast_AsBP_Player_State_Teams' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker, CallFunc_GetGameMode_ReturnValue) == 0x000020, "Member 'BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker, K2Node_DynamicCast_AsBP_Game_Mode_Raid) == 0x000028, "Member 'BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker::K2Node_DynamicCast_AsBP_Game_Mode_Raid' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker, CallFunc_Get_Attacking_Team_Attacking_Team) == 0x000038, "Member 'BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker::CallFunc_Get_Attacking_Team_Attacking_Team' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000040, "Member 'BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'BP_Raid_ObjectiveSpawnPosition_C_Is_Player_Attacker::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

