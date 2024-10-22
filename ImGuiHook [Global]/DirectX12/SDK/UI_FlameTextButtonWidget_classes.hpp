#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_FlameTextButtonWidget

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_FlameTextButtonWidget.UI_FlameTextButtonWidget_C
// 0x0010 (0x02C8 - 0x02B8)
class UUI_FlameTextButtonWidget_C final : public UFlameWidget
{
public:
	class UFlameButton*                           FlameButton;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Text;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_FlameTextButtonWidget_C">();
	}
	static class UUI_FlameTextButtonWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_FlameTextButtonWidget_C>();
	}
};
static_assert(alignof(UUI_FlameTextButtonWidget_C) == 0x000008, "Wrong alignment on UUI_FlameTextButtonWidget_C");
static_assert(sizeof(UUI_FlameTextButtonWidget_C) == 0x0002C8, "Wrong size on UUI_FlameTextButtonWidget_C");
static_assert(offsetof(UUI_FlameTextButtonWidget_C, FlameButton) == 0x0002B8, "Member 'UUI_FlameTextButtonWidget_C::FlameButton' has a wrong offset!");
static_assert(offsetof(UUI_FlameTextButtonWidget_C, Text) == 0x0002C0, "Member 'UUI_FlameTextButtonWidget_C::Text' has a wrong offset!");

}

