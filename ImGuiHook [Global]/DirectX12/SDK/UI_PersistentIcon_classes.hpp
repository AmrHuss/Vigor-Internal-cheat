#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PersistentIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PersistentIcon.UI_PersistentIcon_C
// 0x0028 (0x0288 - 0x0260)
class UUI_PersistentIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Image;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             Icon_Texture;                                      // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ProgressMaterial;                                  // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_PersistentIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Set_Progress(float Progress);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PersistentIcon_C">();
	}
	static class UUI_PersistentIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PersistentIcon_C>();
	}
};
static_assert(alignof(UUI_PersistentIcon_C) == 0x000008, "Wrong alignment on UUI_PersistentIcon_C");
static_assert(sizeof(UUI_PersistentIcon_C) == 0x000288, "Wrong size on UUI_PersistentIcon_C");
static_assert(offsetof(UUI_PersistentIcon_C, UberGraphFrame) == 0x000260, "Member 'UUI_PersistentIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_PersistentIcon_C, BG) == 0x000268, "Member 'UUI_PersistentIcon_C::BG' has a wrong offset!");
static_assert(offsetof(UUI_PersistentIcon_C, Icon_Image) == 0x000270, "Member 'UUI_PersistentIcon_C::Icon_Image' has a wrong offset!");
static_assert(offsetof(UUI_PersistentIcon_C, Icon_Texture) == 0x000278, "Member 'UUI_PersistentIcon_C::Icon_Texture' has a wrong offset!");
static_assert(offsetof(UUI_PersistentIcon_C, ProgressMaterial) == 0x000280, "Member 'UUI_PersistentIcon_C::ProgressMaterial' has a wrong offset!");

}
