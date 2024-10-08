#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Elevator_ListItem

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Elevator_ListItem.UI_Elevator_ListItem_C
// 0x0030 (0x02E8 - 0x02B8)
class UUI_Elevator_ListItem_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ButtonBackground;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FloorLevelText;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         FloorNumber;                                       // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsCurrentFloor;                                    // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           DefaultColour;                                     // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Elevator_ListItem(int32 EntryPoint);
	void Initialize();
	void Set_Selected(bool IsSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Elevator_ListItem_C">();
	}
	static class UUI_Elevator_ListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Elevator_ListItem_C>();
	}
};
static_assert(alignof(UUI_Elevator_ListItem_C) == 0x000008, "Wrong alignment on UUI_Elevator_ListItem_C");
static_assert(sizeof(UUI_Elevator_ListItem_C) == 0x0002E8, "Wrong size on UUI_Elevator_ListItem_C");
static_assert(offsetof(UUI_Elevator_ListItem_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_Elevator_ListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Elevator_ListItem_C, ButtonBackground) == 0x0002C0, "Member 'UUI_Elevator_ListItem_C::ButtonBackground' has a wrong offset!");
static_assert(offsetof(UUI_Elevator_ListItem_C, FloorLevelText) == 0x0002C8, "Member 'UUI_Elevator_ListItem_C::FloorLevelText' has a wrong offset!");
static_assert(offsetof(UUI_Elevator_ListItem_C, FloorNumber) == 0x0002D0, "Member 'UUI_Elevator_ListItem_C::FloorNumber' has a wrong offset!");
static_assert(offsetof(UUI_Elevator_ListItem_C, IsCurrentFloor) == 0x0002D4, "Member 'UUI_Elevator_ListItem_C::IsCurrentFloor' has a wrong offset!");
static_assert(offsetof(UUI_Elevator_ListItem_C, DefaultColour) == 0x0002D8, "Member 'UUI_Elevator_ListItem_C::DefaultColour' has a wrong offset!");

}

