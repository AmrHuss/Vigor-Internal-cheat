#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BackgroundBase_B

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_BackgroundBase_B.UI_BackgroundBase_B_C
// 0x0008 (0x02C0 - 0x02B8)
class UUI_BackgroundBase_B_C final : public UFlameWidget
{
public:
	class UUI_CompoundPanel_C*                    CompoundPanel;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BackgroundBase_B_C">();
	}
	static class UUI_BackgroundBase_B_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BackgroundBase_B_C>();
	}
};
static_assert(alignof(UUI_BackgroundBase_B_C) == 0x000008, "Wrong alignment on UUI_BackgroundBase_B_C");
static_assert(sizeof(UUI_BackgroundBase_B_C) == 0x0002C0, "Wrong size on UUI_BackgroundBase_B_C");
static_assert(offsetof(UUI_BackgroundBase_B_C, CompoundPanel) == 0x0002B8, "Member 'UUI_BackgroundBase_B_C::CompoundPanel' has a wrong offset!");

}
