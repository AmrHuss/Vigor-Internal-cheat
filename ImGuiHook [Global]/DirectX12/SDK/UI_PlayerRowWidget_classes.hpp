#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerRowWidget

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PlayerRowWidget.UI_PlayerRowWidget_C
// 0x0010 (0x02C8 - 0x02B8)
class UUI_PlayerRowWidget_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TextPlayer;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_PlayerRowWidget(int32 EntryPoint);
	void InitPlayerTeam(uint8 Team);
	void InitPlayerName(const class FString& PlayerName);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PlayerRowWidget_C">();
	}
	static class UUI_PlayerRowWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PlayerRowWidget_C>();
	}
};
static_assert(alignof(UUI_PlayerRowWidget_C) == 0x000008, "Wrong alignment on UUI_PlayerRowWidget_C");
static_assert(sizeof(UUI_PlayerRowWidget_C) == 0x0002C8, "Wrong size on UUI_PlayerRowWidget_C");
static_assert(offsetof(UUI_PlayerRowWidget_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_PlayerRowWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_PlayerRowWidget_C, TextPlayer) == 0x0002C0, "Member 'UUI_PlayerRowWidget_C::TextPlayer' has a wrong offset!");

}

