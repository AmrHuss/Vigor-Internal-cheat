#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TargetAim

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_TargetAim.UI_TargetAim_C
// 0x0088 (0x0340 - 0x02B8)
class UUI_TargetAim_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Fade;                                              // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Focus;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Focus_1;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Interaction;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_49;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Shadow;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          UseInteractionMaterial;                            // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SoundHasStarted;                                   // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FA[0x6];                                      // 0x02FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        Sound_Effect;                                      // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowCounter;                                      // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_309[0x3];                                      // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Looting_Time;                                      // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventDispatcher_Removing;                          // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          PlayFadeAnimation;                                 // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_321[0x3];                                      // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           TargetColor;                                       // 0x0324(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeToStart;                                       // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DifferentIconAfterStart;                           // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void EventDispatcher_Removing__DelegateSignature();
	void ExecuteUbergraph_UI_TargetAim(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Event_UpdateInChallengeAnimation();
	void Event_StartChallenge();
	void PreConstruct(bool IsDesignTime);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_TargetAim_C">();
	}
	static class UUI_TargetAim_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_TargetAim_C>();
	}
};
static_assert(alignof(UUI_TargetAim_C) == 0x000008, "Wrong alignment on UUI_TargetAim_C");
static_assert(sizeof(UUI_TargetAim_C) == 0x000340, "Wrong size on UUI_TargetAim_C");
static_assert(offsetof(UUI_TargetAim_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_TargetAim_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, Fade) == 0x0002C0, "Member 'UUI_TargetAim_C::Fade' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, Focus) == 0x0002C8, "Member 'UUI_TargetAim_C::Focus' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, Focus_1) == 0x0002D0, "Member 'UUI_TargetAim_C::Focus_1' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, Img_Interaction) == 0x0002D8, "Member 'UUI_TargetAim_C::Img_Interaction' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, Overlay_0) == 0x0002E0, "Member 'UUI_TargetAim_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, Overlay_49) == 0x0002E8, "Member 'UUI_TargetAim_C::Overlay_49' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, Shadow) == 0x0002F0, "Member 'UUI_TargetAim_C::Shadow' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, UseInteractionMaterial) == 0x0002F8, "Member 'UUI_TargetAim_C::UseInteractionMaterial' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, SoundHasStarted) == 0x0002F9, "Member 'UUI_TargetAim_C::SoundHasStarted' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, Sound_Effect) == 0x000300, "Member 'UUI_TargetAim_C::Sound_Effect' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, bShowCounter) == 0x000308, "Member 'UUI_TargetAim_C::bShowCounter' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, Looting_Time) == 0x00030C, "Member 'UUI_TargetAim_C::Looting_Time' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, EventDispatcher_Removing) == 0x000310, "Member 'UUI_TargetAim_C::EventDispatcher_Removing' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, PlayFadeAnimation) == 0x000320, "Member 'UUI_TargetAim_C::PlayFadeAnimation' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, TargetColor) == 0x000324, "Member 'UUI_TargetAim_C::TargetColor' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, TimeToStart) == 0x000334, "Member 'UUI_TargetAim_C::TimeToStart' has a wrong offset!");
static_assert(offsetof(UUI_TargetAim_C, DifferentIconAfterStart) == 0x000338, "Member 'UUI_TargetAim_C::DifferentIconAfterStart' has a wrong offset!");

}

