#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTDecorator_IsEnemyShootable

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTDecorator_IsEnemyShootable.BTDecorator_IsEnemyShootable_C
// 0x0028 (0x00C8 - 0x00A0)
class UBTDecorator_IsEnemyShootable_C final : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                 EnemyBlackboardKey;                                // 0x00A0(0x0028)(Edit, BlueprintVisible)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTDecorator_IsEnemyShootable_C">();
	}
	static class UBTDecorator_IsEnemyShootable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_IsEnemyShootable_C>();
	}
};
static_assert(alignof(UBTDecorator_IsEnemyShootable_C) == 0x000008, "Wrong alignment on UBTDecorator_IsEnemyShootable_C");
static_assert(sizeof(UBTDecorator_IsEnemyShootable_C) == 0x0000C8, "Wrong size on UBTDecorator_IsEnemyShootable_C");
static_assert(offsetof(UBTDecorator_IsEnemyShootable_C, EnemyBlackboardKey) == 0x0000A0, "Member 'UBTDecorator_IsEnemyShootable_C::EnemyBlackboardKey' has a wrong offset!");

}
