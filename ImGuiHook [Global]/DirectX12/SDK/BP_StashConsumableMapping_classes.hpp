#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StashConsumableMapping

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StashConsumableMapping.BP_StashConsumableMapping_C
// 0x0000 (0x0078 - 0x0078)
class UBP_StashConsumableMapping_C final : public UInventoryActionMapping
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StashConsumableMapping_C">();
	}
	static class UBP_StashConsumableMapping_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_StashConsumableMapping_C>();
	}
};
static_assert(alignof(UBP_StashConsumableMapping_C) == 0x000008, "Wrong alignment on UBP_StashConsumableMapping_C");
static_assert(sizeof(UBP_StashConsumableMapping_C) == 0x000078, "Wrong size on UBP_StashConsumableMapping_C");

}
