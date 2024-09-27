#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CharityBox_Tile

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_CharityBox_Tile.UI_CharityBox_Tile_C
// 0x0028 (0x02E0 - 0x02B8)
class UUI_CharityBox_Tile_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                FocusBorder;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1049;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ShelterTile_C*                      UI_ShelterTile;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SceneCaptureIndex;                                 // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_CharityBox_Tile(int32 EntryPoint);
	void Construct();
	void ShowItem(class UClass* ItemClass);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_CharityBox_Tile_C">();
	}
	static class UUI_CharityBox_Tile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_CharityBox_Tile_C>();
	}
};
static_assert(alignof(UUI_CharityBox_Tile_C) == 0x000008, "Wrong alignment on UUI_CharityBox_Tile_C");
static_assert(sizeof(UUI_CharityBox_Tile_C) == 0x0002E0, "Wrong size on UUI_CharityBox_Tile_C");
static_assert(offsetof(UUI_CharityBox_Tile_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_CharityBox_Tile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_Tile_C, FocusBorder) == 0x0002C0, "Member 'UUI_CharityBox_Tile_C::FocusBorder' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_Tile_C, Image_1049) == 0x0002C8, "Member 'UUI_CharityBox_Tile_C::Image_1049' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_Tile_C, UI_ShelterTile) == 0x0002D0, "Member 'UUI_CharityBox_Tile_C::UI_ShelterTile' has a wrong offset!");
static_assert(offsetof(UUI_CharityBox_Tile_C, SceneCaptureIndex) == 0x0002D8, "Member 'UUI_CharityBox_Tile_C::SceneCaptureIndex' has a wrong offset!");

}
