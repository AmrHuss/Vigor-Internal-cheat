#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_DevSegment

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_DevSegment.UI_DevSegment_C
// 0x0048 (0x0320 - 0x02D8)
class UUI_DevSegment_C final : public UWheelSegment
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             SegmentName;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 MenuName;                                          // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   MenuClass;                                         // 0x02F8(0x0028)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_DevSegment(int32 EntryPoint);
	void Construct();
	void Activate();
	void OnLoaded_B08996E843B69641864BC48B41182A2D(TSubclassOf<class UObject> Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_DevSegment_C">();
	}
	static class UUI_DevSegment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_DevSegment_C>();
	}
};
static_assert(alignof(UUI_DevSegment_C) == 0x000008, "Wrong alignment on UUI_DevSegment_C");
static_assert(sizeof(UUI_DevSegment_C) == 0x000320, "Wrong size on UUI_DevSegment_C");
static_assert(offsetof(UUI_DevSegment_C, UberGraphFrame) == 0x0002D8, "Member 'UUI_DevSegment_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_DevSegment_C, SegmentName) == 0x0002E0, "Member 'UUI_DevSegment_C::SegmentName' has a wrong offset!");
static_assert(offsetof(UUI_DevSegment_C, MenuName) == 0x0002E8, "Member 'UUI_DevSegment_C::MenuName' has a wrong offset!");
static_assert(offsetof(UUI_DevSegment_C, MenuClass) == 0x0002F8, "Member 'UUI_DevSegment_C::MenuClass' has a wrong offset!");

}
