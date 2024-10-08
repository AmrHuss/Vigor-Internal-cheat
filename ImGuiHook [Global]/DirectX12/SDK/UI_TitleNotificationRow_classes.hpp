#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TitleNotificationRow

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "F_TitleList_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_TitleNotificationRow.UI_TitleNotificationRow_C
// 0x0070 (0x0328 - 0x02B8)
class UUI_TitleNotificationRow_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Badge;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotBackground;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        TitleNameText;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FF_TitleList                           Title_Info;                                        // 0x02D8(0x0048)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Title_Rank;                                        // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_TitleNotificationRow(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateVisual();
	void Construct();
	void OnLoaded_303A9E7341428F48F05BE78A91FF98D4(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_TitleNotificationRow_C">();
	}
	static class UUI_TitleNotificationRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_TitleNotificationRow_C>();
	}
};
static_assert(alignof(UUI_TitleNotificationRow_C) == 0x000008, "Wrong alignment on UUI_TitleNotificationRow_C");
static_assert(sizeof(UUI_TitleNotificationRow_C) == 0x000328, "Wrong size on UUI_TitleNotificationRow_C");
static_assert(offsetof(UUI_TitleNotificationRow_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_TitleNotificationRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_TitleNotificationRow_C, Badge) == 0x0002C0, "Member 'UUI_TitleNotificationRow_C::Badge' has a wrong offset!");
static_assert(offsetof(UUI_TitleNotificationRow_C, SlotBackground) == 0x0002C8, "Member 'UUI_TitleNotificationRow_C::SlotBackground' has a wrong offset!");
static_assert(offsetof(UUI_TitleNotificationRow_C, TitleNameText) == 0x0002D0, "Member 'UUI_TitleNotificationRow_C::TitleNameText' has a wrong offset!");
static_assert(offsetof(UUI_TitleNotificationRow_C, Title_Info) == 0x0002D8, "Member 'UUI_TitleNotificationRow_C::Title_Info' has a wrong offset!");
static_assert(offsetof(UUI_TitleNotificationRow_C, Title_Rank) == 0x000320, "Member 'UUI_TitleNotificationRow_C::Title_Rank' has a wrong offset!");

}

