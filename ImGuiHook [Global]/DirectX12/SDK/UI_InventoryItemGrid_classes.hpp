#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InventoryItemGrid

#include "Basic.hpp"

#include "Flame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_InventoryItemGrid.UI_InventoryItemGrid_C
// 0x0000 (0x02F0 - 0x02F0)
class UUI_InventoryItemGrid_C final : public UFlameGridWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_InventoryItemGrid_C">();
	}
	static class UUI_InventoryItemGrid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_InventoryItemGrid_C>();
	}
};
static_assert(alignof(UUI_InventoryItemGrid_C) == 0x000008, "Wrong alignment on UUI_InventoryItemGrid_C");
static_assert(sizeof(UUI_InventoryItemGrid_C) == 0x0002F0, "Wrong size on UUI_InventoryItemGrid_C");

}

