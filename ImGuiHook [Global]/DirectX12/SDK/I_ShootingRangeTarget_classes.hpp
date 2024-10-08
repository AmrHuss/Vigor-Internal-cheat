#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_ShootingRangeTarget

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass I_ShootingRangeTarget.I_ShootingRangeTarget_C
// 0x0000 (0x0028 - 0x0028)
class II_ShootingRangeTarget_C final : public IInterface
{
public:
	void ResetTarget();
	void SetTargetActivity(bool IsActive);
	void SetSpawnPoint(class AActor* SpawnPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"I_ShootingRangeTarget_C">();
	}
	static class II_ShootingRangeTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<II_ShootingRangeTarget_C>();
	}
};
static_assert(alignof(II_ShootingRangeTarget_C) == 0x000008, "Wrong alignment on II_ShootingRangeTarget_C");
static_assert(sizeof(II_ShootingRangeTarget_C) == 0x000028, "Wrong size on II_ShootingRangeTarget_C");

}

