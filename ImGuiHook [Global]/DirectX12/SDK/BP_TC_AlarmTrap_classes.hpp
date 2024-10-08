#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TC_AlarmTrap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlacableTrap_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TC_AlarmTrap.BP_TC_AlarmTrap_C
// 0x0010 (0x0700 - 0x06F0)
class ABP_TC_AlarmTrap_C final : public ABP_PlacableTrap_Base_C
{
public:
	uint8                                         Pad_6E1[0x7];                                      // 0x06E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_TC_AlarmTrap_C;                  // 0x06E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Trap_Alarm_Duration;                               // 0x06F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TC_AlarmTrap(int32 EntryPoint);
	void Trap_Set_Variables(class ABP_PlacableTrap_Object_Base_C* PlacedTrap);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TC_AlarmTrap_C">();
	}
	static class ABP_TC_AlarmTrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TC_AlarmTrap_C>();
	}
};
static_assert(alignof(ABP_TC_AlarmTrap_C) == 0x000010, "Wrong alignment on ABP_TC_AlarmTrap_C");
static_assert(sizeof(ABP_TC_AlarmTrap_C) == 0x000700, "Wrong size on ABP_TC_AlarmTrap_C");
static_assert(offsetof(ABP_TC_AlarmTrap_C, UberGraphFrame_BP_TC_AlarmTrap_C) == 0x0006E8, "Member 'ABP_TC_AlarmTrap_C::UberGraphFrame_BP_TC_AlarmTrap_C' has a wrong offset!");
static_assert(offsetof(ABP_TC_AlarmTrap_C, Trap_Alarm_Duration) == 0x0006F0, "Member 'ABP_TC_AlarmTrap_C::Trap_Alarm_Duration' has a wrong offset!");

}

