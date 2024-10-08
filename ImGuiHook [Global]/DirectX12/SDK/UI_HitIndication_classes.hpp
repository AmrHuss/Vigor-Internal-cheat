#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_HitIndication

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_HitIndication.UI_HitIndication_C
// 0x0038 (0x02F0 - 0x02B8)
class UUI_HitIndication_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimFadeOut;                                       // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 IndicatorImage;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               IndicatorOverlay;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector                                BulletOrigin;                                      // 0x02D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsPlayerHit;                                       // 0x02E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsArmorHit;                                        // 0x02E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsFriendlyFire;                                    // 0x02E6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2E7[0x1];                                      // 0x02E7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Character_Script_C*                 Caster;                                            // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_HitIndication(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Event_Initialize(const struct FVector& BulletOrigin_0, bool IsPlayerHit_0, bool IsArmorHit_0, bool IsFriendlyFire_0, class ABP_Character_Script_C* Caster_0);
	void Construct();
	void EventFadeOutFinished();
	void UpdateBulletIndicator();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_HitIndication_C">();
	}
	static class UUI_HitIndication_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_HitIndication_C>();
	}
};
static_assert(alignof(UUI_HitIndication_C) == 0x000008, "Wrong alignment on UUI_HitIndication_C");
static_assert(sizeof(UUI_HitIndication_C) == 0x0002F0, "Wrong size on UUI_HitIndication_C");
static_assert(offsetof(UUI_HitIndication_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_HitIndication_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_HitIndication_C, AnimFadeOut) == 0x0002C0, "Member 'UUI_HitIndication_C::AnimFadeOut' has a wrong offset!");
static_assert(offsetof(UUI_HitIndication_C, IndicatorImage) == 0x0002C8, "Member 'UUI_HitIndication_C::IndicatorImage' has a wrong offset!");
static_assert(offsetof(UUI_HitIndication_C, IndicatorOverlay) == 0x0002D0, "Member 'UUI_HitIndication_C::IndicatorOverlay' has a wrong offset!");
static_assert(offsetof(UUI_HitIndication_C, BulletOrigin) == 0x0002D8, "Member 'UUI_HitIndication_C::BulletOrigin' has a wrong offset!");
static_assert(offsetof(UUI_HitIndication_C, IsPlayerHit) == 0x0002E4, "Member 'UUI_HitIndication_C::IsPlayerHit' has a wrong offset!");
static_assert(offsetof(UUI_HitIndication_C, IsArmorHit) == 0x0002E5, "Member 'UUI_HitIndication_C::IsArmorHit' has a wrong offset!");
static_assert(offsetof(UUI_HitIndication_C, IsFriendlyFire) == 0x0002E6, "Member 'UUI_HitIndication_C::IsFriendlyFire' has a wrong offset!");
static_assert(offsetof(UUI_HitIndication_C, Caster) == 0x0002E8, "Member 'UUI_HitIndication_C::Caster' has a wrong offset!");

}

