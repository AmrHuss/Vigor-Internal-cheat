#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_OutlandsSubTab

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_OutlandsSubTab.UI_OutlandsSubTab_C
// 0x0010 (0x0328 - 0x0318)
class UUI_OutlandsSubTab_C final : public UTabControlWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 BoosterTicketClassToFocus;                         // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_OutlandsSubTab(int32 EntryPoint);
	void OnResetToDefaultState();
	void OnSelectionChanged(int32 NewIndex, int32 OldIndex);
	void OnLock();
	void OnUnlock();

	TArray<class UTabWidget*> CreateTabs() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_OutlandsSubTab_C">();
	}
	static class UUI_OutlandsSubTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_OutlandsSubTab_C>();
	}
};
static_assert(alignof(UUI_OutlandsSubTab_C) == 0x000008, "Wrong alignment on UUI_OutlandsSubTab_C");
static_assert(sizeof(UUI_OutlandsSubTab_C) == 0x000328, "Wrong size on UUI_OutlandsSubTab_C");
static_assert(offsetof(UUI_OutlandsSubTab_C, UberGraphFrame) == 0x000318, "Member 'UUI_OutlandsSubTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_OutlandsSubTab_C, BoosterTicketClassToFocus) == 0x000320, "Member 'UUI_OutlandsSubTab_C::BoosterTicketClassToFocus' has a wrong offset!");

}

