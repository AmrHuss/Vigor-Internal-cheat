#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_NextNextUpgrade

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_NextNextUpgrade.UI_NextNextUpgrade_C
// 0x0048 (0x0300 - 0x02B8)
class UUI_NextNextUpgrade_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFlameTextBlock*                        FlameTextBlock_Description;                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        FlameTextBlock_Level;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Description;                                       // 0x02D8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         Level;                                             // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2F4[0x4];                                      // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 ShelterSlot;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_NextNextUpgrade(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_NextNextUpgrade_C">();
	}
	static class UUI_NextNextUpgrade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_NextNextUpgrade_C>();
	}
};
static_assert(alignof(UUI_NextNextUpgrade_C) == 0x000008, "Wrong alignment on UUI_NextNextUpgrade_C");
static_assert(sizeof(UUI_NextNextUpgrade_C) == 0x000300, "Wrong size on UUI_NextNextUpgrade_C");
static_assert(offsetof(UUI_NextNextUpgrade_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_NextNextUpgrade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_NextNextUpgrade_C, FlameTextBlock_Description) == 0x0002C0, "Member 'UUI_NextNextUpgrade_C::FlameTextBlock_Description' has a wrong offset!");
static_assert(offsetof(UUI_NextNextUpgrade_C, FlameTextBlock_Level) == 0x0002C8, "Member 'UUI_NextNextUpgrade_C::FlameTextBlock_Level' has a wrong offset!");
static_assert(offsetof(UUI_NextNextUpgrade_C, VerticalBox_0) == 0x0002D0, "Member 'UUI_NextNextUpgrade_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UUI_NextNextUpgrade_C, Description) == 0x0002D8, "Member 'UUI_NextNextUpgrade_C::Description' has a wrong offset!");
static_assert(offsetof(UUI_NextNextUpgrade_C, Level) == 0x0002F0, "Member 'UUI_NextNextUpgrade_C::Level' has a wrong offset!");
static_assert(offsetof(UUI_NextNextUpgrade_C, ShelterSlot) == 0x0002F8, "Member 'UUI_NextNextUpgrade_C::ShelterSlot' has a wrong offset!");

}

