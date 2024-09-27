#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_LeaveMatch

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_LeaveMatch.UI_LeaveMatch_C
// 0x0010 (0x02C8 - 0x02B8)
class UUI_LeaveMatch_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_InputActionWidget_C*                Action_LeaveMatch;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_LeaveMatch(int32 EntryPoint);
	void BndEvt__Action_LeaveMatch_K2Node_ComponentBoundEvent_1_OnActionHoldEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_LeaveMatch_C">();
	}
	static class UUI_LeaveMatch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_LeaveMatch_C>();
	}
};
static_assert(alignof(UUI_LeaveMatch_C) == 0x000008, "Wrong alignment on UUI_LeaveMatch_C");
static_assert(sizeof(UUI_LeaveMatch_C) == 0x0002C8, "Wrong size on UUI_LeaveMatch_C");
static_assert(offsetof(UUI_LeaveMatch_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_LeaveMatch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_LeaveMatch_C, Action_LeaveMatch) == 0x0002C0, "Member 'UUI_LeaveMatch_C::Action_LeaveMatch' has a wrong offset!");

}
