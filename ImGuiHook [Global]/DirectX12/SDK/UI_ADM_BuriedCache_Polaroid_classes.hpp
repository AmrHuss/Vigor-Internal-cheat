#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ADM_BuriedCache_Polaroid

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ADM_BuriedCache_Polaroid.UI_ADM_BuriedCache_Polaroid_C
// 0x0048 (0x0300 - 0x02B8)
class UUI_ADM_BuriedCache_Polaroid_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 PictureWidget;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PictureWidget_1;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             Picture;                                           // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UBP_PCComponent_ADM_BuriedCache_C*      Owning_Player_Controller_Component;                // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 Polaroid;                                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTimerHandle                           Picture_Observation_Timer;                         // 0x02F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Picture_0;                                         // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_ADM_BuriedCache_Polaroid(int32 EntryPoint);
	void Picture_Observed_for_Relevant_Time();
	void Show_Picture();
	void Construct();
	void Destruct();
	void Set_Picture(class UTexture2D* Picture_0, class UClass* Polaroid_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ADM_BuriedCache_Polaroid_C">();
	}
	static class UUI_ADM_BuriedCache_Polaroid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ADM_BuriedCache_Polaroid_C>();
	}
};
static_assert(alignof(UUI_ADM_BuriedCache_Polaroid_C) == 0x000008, "Wrong alignment on UUI_ADM_BuriedCache_Polaroid_C");
static_assert(sizeof(UUI_ADM_BuriedCache_Polaroid_C) == 0x000300, "Wrong size on UUI_ADM_BuriedCache_Polaroid_C");
static_assert(offsetof(UUI_ADM_BuriedCache_Polaroid_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_ADM_BuriedCache_Polaroid_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ADM_BuriedCache_Polaroid_C, FadeIn) == 0x0002C0, "Member 'UUI_ADM_BuriedCache_Polaroid_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UUI_ADM_BuriedCache_Polaroid_C, PictureWidget) == 0x0002C8, "Member 'UUI_ADM_BuriedCache_Polaroid_C::PictureWidget' has a wrong offset!");
static_assert(offsetof(UUI_ADM_BuriedCache_Polaroid_C, PictureWidget_1) == 0x0002D0, "Member 'UUI_ADM_BuriedCache_Polaroid_C::PictureWidget_1' has a wrong offset!");
static_assert(offsetof(UUI_ADM_BuriedCache_Polaroid_C, Picture) == 0x0002D8, "Member 'UUI_ADM_BuriedCache_Polaroid_C::Picture' has a wrong offset!");
static_assert(offsetof(UUI_ADM_BuriedCache_Polaroid_C, Owning_Player_Controller_Component) == 0x0002E0, "Member 'UUI_ADM_BuriedCache_Polaroid_C::Owning_Player_Controller_Component' has a wrong offset!");
static_assert(offsetof(UUI_ADM_BuriedCache_Polaroid_C, Polaroid) == 0x0002E8, "Member 'UUI_ADM_BuriedCache_Polaroid_C::Polaroid' has a wrong offset!");
static_assert(offsetof(UUI_ADM_BuriedCache_Polaroid_C, Picture_Observation_Timer) == 0x0002F0, "Member 'UUI_ADM_BuriedCache_Polaroid_C::Picture_Observation_Timer' has a wrong offset!");
static_assert(offsetof(UUI_ADM_BuriedCache_Polaroid_C, Picture_0) == 0x0002F8, "Member 'UUI_ADM_BuriedCache_Polaroid_C::Picture_0' has a wrong offset!");

}
