#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StateMachineDebugComponent

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StateMachineDebugComponent.BP_StateMachineDebugComponent_C
// 0x0020 (0x04D0 - 0x04B0)
class UBP_StateMachineDebugComponent_C final : public UStateMachineDebugComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                 TempString;                                        // 0x04B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_StateMachineDebugComponent(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void BuildInfoStringFromLocal(class FString* Result);
	void BuildInfoStringFromServer(class FString* Result);
	void BuildInfoString(class FString* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StateMachineDebugComponent_C">();
	}
	static class UBP_StateMachineDebugComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_StateMachineDebugComponent_C>();
	}
};
static_assert(alignof(UBP_StateMachineDebugComponent_C) == 0x000010, "Wrong alignment on UBP_StateMachineDebugComponent_C");
static_assert(sizeof(UBP_StateMachineDebugComponent_C) == 0x0004D0, "Wrong size on UBP_StateMachineDebugComponent_C");
static_assert(offsetof(UBP_StateMachineDebugComponent_C, UberGraphFrame) == 0x0004B0, "Member 'UBP_StateMachineDebugComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_StateMachineDebugComponent_C, TempString) == 0x0004B8, "Member 'UBP_StateMachineDebugComponent_C::TempString' has a wrong offset!");

}
