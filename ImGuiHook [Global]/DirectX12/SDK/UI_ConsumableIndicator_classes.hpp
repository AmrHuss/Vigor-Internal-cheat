#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ConsumableIndicator

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ConsumableIndicator.UI_ConsumableIndicator_C
// 0x0048 (0x0300 - 0x02B8)
class UUI_ConsumableIndicator_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Icon;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Progress;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MaterialInstance;                                  // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MaterialInterfaceNormal;                           // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ConsumableEffectDuration;                          // 0x02E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         EffectTotalDuration;                               // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     MaterialInterfaceAdrenalineShot;                   // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MaterialInstanceAdrenalineShot;                    // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_ConsumableIndicator(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void ToggleIndicator(bool Toggle, class UClass* ConsumableClass, bool IsPersistentEffect, float EffectTotalDuration_0);
	void SetIndicatorProgress(float Progress_0);
	void HideIndicator();
	void UpdateIndicator();
	void SetIndicatorIcon(class UClass* ConsumableClass);
	void SetBrush(class UClass* ConsumableClass);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ConsumableIndicator_C">();
	}
	static class UUI_ConsumableIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ConsumableIndicator_C>();
	}
};
static_assert(alignof(UUI_ConsumableIndicator_C) == 0x000008, "Wrong alignment on UUI_ConsumableIndicator_C");
static_assert(sizeof(UUI_ConsumableIndicator_C) == 0x000300, "Wrong size on UUI_ConsumableIndicator_C");
static_assert(offsetof(UUI_ConsumableIndicator_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_ConsumableIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ConsumableIndicator_C, Icon) == 0x0002C0, "Member 'UUI_ConsumableIndicator_C::Icon' has a wrong offset!");
static_assert(offsetof(UUI_ConsumableIndicator_C, Progress) == 0x0002C8, "Member 'UUI_ConsumableIndicator_C::Progress' has a wrong offset!");
static_assert(offsetof(UUI_ConsumableIndicator_C, MaterialInstance) == 0x0002D0, "Member 'UUI_ConsumableIndicator_C::MaterialInstance' has a wrong offset!");
static_assert(offsetof(UUI_ConsumableIndicator_C, MaterialInterfaceNormal) == 0x0002D8, "Member 'UUI_ConsumableIndicator_C::MaterialInterfaceNormal' has a wrong offset!");
static_assert(offsetof(UUI_ConsumableIndicator_C, ConsumableEffectDuration) == 0x0002E0, "Member 'UUI_ConsumableIndicator_C::ConsumableEffectDuration' has a wrong offset!");
static_assert(offsetof(UUI_ConsumableIndicator_C, EffectTotalDuration) == 0x0002E8, "Member 'UUI_ConsumableIndicator_C::EffectTotalDuration' has a wrong offset!");
static_assert(offsetof(UUI_ConsumableIndicator_C, MaterialInterfaceAdrenalineShot) == 0x0002F0, "Member 'UUI_ConsumableIndicator_C::MaterialInterfaceAdrenalineShot' has a wrong offset!");
static_assert(offsetof(UUI_ConsumableIndicator_C, MaterialInstanceAdrenalineShot) == 0x0002F8, "Member 'UUI_ConsumableIndicator_C::MaterialInstanceAdrenalineShot' has a wrong offset!");

}
