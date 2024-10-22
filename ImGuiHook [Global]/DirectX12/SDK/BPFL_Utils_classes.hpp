#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_Utils

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPFL_Utils.BPFL_Utils_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_Utils_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetCurrentCameraPosition(class UObject* __WorldContext, struct FVector* OutPosition, bool* OutPositionValid);
	static void GetInverseOf(float Val, float DefaultVal, class UObject* __WorldContext, float* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPFL_Utils_C">();
	}
	static class UBPFL_Utils_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPFL_Utils_C>();
	}
};
static_assert(alignof(UBPFL_Utils_C) == 0x000008, "Wrong alignment on UBPFL_Utils_C");
static_assert(sizeof(UBPFL_Utils_C) == 0x000028, "Wrong size on UBPFL_Utils_C");

}

