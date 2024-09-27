#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Gunfight_RewardContainer

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Gunfight_RewardContainer.UI_Gunfight_RewardContainer_C
// 0x0040 (0x02A0 - 0x0260)
class UUI_Gunfight_RewardContainer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Animation_RewardHighlight;                         // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Animation_RewardReached;                           // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HBOX_RewardHolder;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Notch;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RewardHighlight;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUI_Gunfight_RewardScreenItemIcon_C*> ShownRewards;                                      // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_UI_Gunfight_RewardContainer(int32 EntryPoint);
	void SetNotchVisibility(const bool bVisible);
	void FillRewards(const TMap<class UClass*, int32>& Rewards);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Gunfight_RewardContainer_C">();
	}
	static class UUI_Gunfight_RewardContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Gunfight_RewardContainer_C>();
	}
};
static_assert(alignof(UUI_Gunfight_RewardContainer_C) == 0x000008, "Wrong alignment on UUI_Gunfight_RewardContainer_C");
static_assert(sizeof(UUI_Gunfight_RewardContainer_C) == 0x0002A0, "Wrong size on UUI_Gunfight_RewardContainer_C");
static_assert(offsetof(UUI_Gunfight_RewardContainer_C, UberGraphFrame) == 0x000260, "Member 'UUI_Gunfight_RewardContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Gunfight_RewardContainer_C, Animation_RewardHighlight) == 0x000268, "Member 'UUI_Gunfight_RewardContainer_C::Animation_RewardHighlight' has a wrong offset!");
static_assert(offsetof(UUI_Gunfight_RewardContainer_C, Animation_RewardReached) == 0x000270, "Member 'UUI_Gunfight_RewardContainer_C::Animation_RewardReached' has a wrong offset!");
static_assert(offsetof(UUI_Gunfight_RewardContainer_C, HBOX_RewardHolder) == 0x000278, "Member 'UUI_Gunfight_RewardContainer_C::HBOX_RewardHolder' has a wrong offset!");
static_assert(offsetof(UUI_Gunfight_RewardContainer_C, Image_Notch) == 0x000280, "Member 'UUI_Gunfight_RewardContainer_C::Image_Notch' has a wrong offset!");
static_assert(offsetof(UUI_Gunfight_RewardContainer_C, RewardHighlight) == 0x000288, "Member 'UUI_Gunfight_RewardContainer_C::RewardHighlight' has a wrong offset!");
static_assert(offsetof(UUI_Gunfight_RewardContainer_C, ShownRewards) == 0x000290, "Member 'UUI_Gunfight_RewardContainer_C::ShownRewards' has a wrong offset!");

}
