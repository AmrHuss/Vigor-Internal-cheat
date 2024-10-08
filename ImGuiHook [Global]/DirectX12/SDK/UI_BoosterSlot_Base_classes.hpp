#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BoosterSlot_Base

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_BoosterSlot_Base.UI_BoosterSlot_Base_C
// 0x0008 (0x02C0 - 0x02B8)
class UUI_BoosterSlot_Base_C : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_UI_BoosterSlot_Base(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetBoosterLevel(int32 Level);
	void UpdateUI();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BoosterSlot_Base_C">();
	}
	static class UUI_BoosterSlot_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BoosterSlot_Base_C>();
	}
};
static_assert(alignof(UUI_BoosterSlot_Base_C) == 0x000008, "Wrong alignment on UUI_BoosterSlot_Base_C");
static_assert(sizeof(UUI_BoosterSlot_Base_C) == 0x0002C0, "Wrong size on UUI_BoosterSlot_Base_C");
static_assert(offsetof(UUI_BoosterSlot_Base_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_BoosterSlot_Base_C::UberGraphFrame' has a wrong offset!");

}

