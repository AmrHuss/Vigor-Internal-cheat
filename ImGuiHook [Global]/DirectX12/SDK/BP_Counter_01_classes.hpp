#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Counter_01

#include "Basic.hpp"

#include "BP_Lootable_Furniture_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Counter_01.BP_Counter_01_C
// 0x0008 (0x03B8 - 0x03B0)
class ABP_Counter_01_C final : public ABP_Lootable_Furniture_Base_C
{
public:
	class UObstacleComponent*                     Obstacle;                                          // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Counter_01_C">();
	}
	static class ABP_Counter_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Counter_01_C>();
	}
};
static_assert(alignof(ABP_Counter_01_C) == 0x000008, "Wrong alignment on ABP_Counter_01_C");
static_assert(sizeof(ABP_Counter_01_C) == 0x0003B8, "Wrong size on ABP_Counter_01_C");
static_assert(offsetof(ABP_Counter_01_C, Obstacle) == 0x0003B0, "Member 'ABP_Counter_01_C::Obstacle' has a wrong offset!");

}

