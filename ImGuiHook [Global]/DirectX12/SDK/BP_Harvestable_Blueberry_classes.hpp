#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Harvestable_Blueberry

#include "Basic.hpp"

#include "BP_HarvestableBush_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Harvestable_Blueberry.BP_Harvestable_Blueberry_C
// 0x0000 (0x03E0 - 0x03E0)
class ABP_Harvestable_Blueberry_C final : public ABP_HarvestableBush_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Harvestable_Blueberry_C">();
	}
	static class ABP_Harvestable_Blueberry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Harvestable_Blueberry_C>();
	}
};
static_assert(alignof(ABP_Harvestable_Blueberry_C) == 0x000008, "Wrong alignment on ABP_Harvestable_Blueberry_C");
static_assert(sizeof(ABP_Harvestable_Blueberry_C) == 0x0003E0, "Wrong size on ABP_Harvestable_Blueberry_C");

}

