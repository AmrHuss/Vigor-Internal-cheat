#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tracer_Bolt

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Tracer_Bolt.BP_Tracer_Bolt_C
// 0x0000 (0x0240 - 0x0240)
class ABP_Tracer_Bolt_C final : public AProjectileTracer
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Tracer_Bolt_C">();
	}
	static class ABP_Tracer_Bolt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Tracer_Bolt_C>();
	}
};
static_assert(alignof(ABP_Tracer_Bolt_C) == 0x000008, "Wrong alignment on ABP_Tracer_Bolt_C");
static_assert(sizeof(ABP_Tracer_Bolt_C) == 0x000240, "Wrong size on ABP_Tracer_Bolt_C");

}
