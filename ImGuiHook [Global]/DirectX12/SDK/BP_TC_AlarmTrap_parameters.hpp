#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_AlarmTrap

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_TC_AlarmTrap.BP_TC_AlarmTrap_C.ExecuteUbergraph_BP_TC_AlarmTrap
// 0x0020 (0x0020 - 0x0000)
struct BP_TC_AlarmTrap_C_ExecuteUbergraph_BP_TC_AlarmTrap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlacableTrap_Object_Base_C*         K2Node_Event_PlacedTrap;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_TC_AlarmTrap_Object_C*              K2Node_DynamicCast_AsBP_TC_Alarm_Trap_Object;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TC_AlarmTrap_C_ExecuteUbergraph_BP_TC_AlarmTrap) == 0x000008, "Wrong alignment on BP_TC_AlarmTrap_C_ExecuteUbergraph_BP_TC_AlarmTrap");
static_assert(sizeof(BP_TC_AlarmTrap_C_ExecuteUbergraph_BP_TC_AlarmTrap) == 0x000020, "Wrong size on BP_TC_AlarmTrap_C_ExecuteUbergraph_BP_TC_AlarmTrap");
static_assert(offsetof(BP_TC_AlarmTrap_C_ExecuteUbergraph_BP_TC_AlarmTrap, EntryPoint) == 0x000000, "Member 'BP_TC_AlarmTrap_C_ExecuteUbergraph_BP_TC_AlarmTrap::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_C_ExecuteUbergraph_BP_TC_AlarmTrap, K2Node_Event_PlacedTrap) == 0x000008, "Member 'BP_TC_AlarmTrap_C_ExecuteUbergraph_BP_TC_AlarmTrap::K2Node_Event_PlacedTrap' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_C_ExecuteUbergraph_BP_TC_AlarmTrap, K2Node_DynamicCast_AsBP_TC_Alarm_Trap_Object) == 0x000010, "Member 'BP_TC_AlarmTrap_C_ExecuteUbergraph_BP_TC_AlarmTrap::K2Node_DynamicCast_AsBP_TC_Alarm_Trap_Object' has a wrong offset!");
static_assert(offsetof(BP_TC_AlarmTrap_C_ExecuteUbergraph_BP_TC_AlarmTrap, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_TC_AlarmTrap_C_ExecuteUbergraph_BP_TC_AlarmTrap::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_TC_AlarmTrap.BP_TC_AlarmTrap_C.Trap_Set_Variables
// 0x0008 (0x0008 - 0x0000)
struct BP_TC_AlarmTrap_C_Trap_Set_Variables final
{
public:
	class ABP_PlacableTrap_Object_Base_C*         PlacedTrap;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_TC_AlarmTrap_C_Trap_Set_Variables) == 0x000008, "Wrong alignment on BP_TC_AlarmTrap_C_Trap_Set_Variables");
static_assert(sizeof(BP_TC_AlarmTrap_C_Trap_Set_Variables) == 0x000008, "Wrong size on BP_TC_AlarmTrap_C_Trap_Set_Variables");
static_assert(offsetof(BP_TC_AlarmTrap_C_Trap_Set_Variables, PlacedTrap) == 0x000000, "Member 'BP_TC_AlarmTrap_C_Trap_Set_Variables::PlacedTrap' has a wrong offset!");

}

