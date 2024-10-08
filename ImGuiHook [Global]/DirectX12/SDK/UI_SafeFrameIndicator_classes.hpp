#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SafeFrameIndicator

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SafeFrameIndicator.UI_SafeFrameIndicator_C
// 0x0008 (0x02C0 - 0x02B8)
class UUI_SafeFrameIndicator_C final : public UFlameWidget
{
public:
	class UUI_FlameSafezone_C*                    UI_FlameSafezone;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SafeFrameIndicator_C">();
	}
	static class UUI_SafeFrameIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SafeFrameIndicator_C>();
	}
};
static_assert(alignof(UUI_SafeFrameIndicator_C) == 0x000008, "Wrong alignment on UUI_SafeFrameIndicator_C");
static_assert(sizeof(UUI_SafeFrameIndicator_C) == 0x0002C0, "Wrong size on UUI_SafeFrameIndicator_C");
static_assert(offsetof(UUI_SafeFrameIndicator_C, UI_FlameSafezone) == 0x0002B8, "Member 'UUI_SafeFrameIndicator_C::UI_FlameSafezone' has a wrong offset!");

}

