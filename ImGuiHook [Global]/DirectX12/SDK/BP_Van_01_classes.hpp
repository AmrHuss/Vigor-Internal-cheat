#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Van_01

#include "Basic.hpp"

#include "BP_Van_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Van_01.BP_Van_01_C
// 0x0010 (0x05D0 - 0x05C0)
class ABP_Van_01_C final : public ABP_Van_Base_C
{
public:
	class UDecalComponent*                        Decal;                                             // 0x05C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UObstacleComponent*                     Obstacle;                                          // 0x05C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Van_01_C">();
	}
	static class ABP_Van_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Van_01_C>();
	}
};
static_assert(alignof(ABP_Van_01_C) == 0x000008, "Wrong alignment on ABP_Van_01_C");
static_assert(sizeof(ABP_Van_01_C) == 0x0005D0, "Wrong size on ABP_Van_01_C");
static_assert(offsetof(ABP_Van_01_C, Decal) == 0x0005C0, "Member 'ABP_Van_01_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_Van_01_C, Obstacle) == 0x0005C8, "Member 'ABP_Van_01_C::Obstacle' has a wrong offset!");

}

