#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InGameNewsSystem

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InGameNewsSystem.BP_InGameNewsSystem_C
// 0x0008 (0x01E8 - 0x01E0)
class UBP_InGameNewsSystem_C final : public UInGameNewsSystem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_InGameNewsSystem(int32 EntryPoint);
	void RemoveNotFoundNewsFromSaveFile(const TArray<struct FNewsDto>& News);
	bool NeedsToBeDisplayed(const struct FNewsDto& News);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InGameNewsSystem_C">();
	}
	static class UBP_InGameNewsSystem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InGameNewsSystem_C>();
	}
};
static_assert(alignof(UBP_InGameNewsSystem_C) == 0x000008, "Wrong alignment on UBP_InGameNewsSystem_C");
static_assert(sizeof(UBP_InGameNewsSystem_C) == 0x0001E8, "Wrong size on UBP_InGameNewsSystem_C");
static_assert(offsetof(UBP_InGameNewsSystem_C, UberGraphFrame) == 0x0001E0, "Member 'UBP_InGameNewsSystem_C::UberGraphFrame' has a wrong offset!");

}

