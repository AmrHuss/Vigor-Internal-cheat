#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GarbageBin_01

#include "Basic.hpp"

#include "BP_Lootable_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GarbageBin_01.BP_GarbageBin_01_C
// 0x0000 (0x03A8 - 0x03A8)
class ABP_GarbageBin_01_C final : public ABP_Lootable_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GarbageBin_01_C">();
	}
	static class ABP_GarbageBin_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GarbageBin_01_C>();
	}
};
static_assert(alignof(ABP_GarbageBin_01_C) == 0x000008, "Wrong alignment on ABP_GarbageBin_01_C");
static_assert(sizeof(ABP_GarbageBin_01_C) == 0x0003A8, "Wrong size on ABP_GarbageBin_01_C");

}
