#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CosmeticsVariantsBox

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_CosmeticsVariantsBox.UI_CosmeticsVariantsBox_C
// 0x00F0 (0x03A8 - 0x02B8)
class UUI_CosmeticsVariantsBox_C final : public UFlameWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NoTicketsToActivate;                               // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         ColorsHorizontalBox;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ColorsScrollBox;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Dev_VariantName;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           FadeBox;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBox_CraftTableLevel;                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_201;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Text_BoosterTicket_Description;                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Text_Category;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Text_PlanNeededLevel;                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Text_Rarity;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        Text_Tickets_OwnedTicketsCount;                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        VariantName;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_AdditionalInfo;                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 BaseItem;                                          // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         OwnedVariants;                                     // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UClass*, class FText>              CurrencyToShopTexts;                               // 0x0348(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUI_CosmeticsShop_C*                    CosmeticShopRoot;                                  // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Shop_VariantSlot_C*                 CurrentItemVariant;                                // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_CosmeticsVariantsBox(int32 EntryPoint);
	void PlayNoTicketsAnimation();
	void SetVariantsBoxVisibility(bool NewVisibility);
	void Fill_Content(class UClass* BaseItem_0, const class FString& OrangeDotPrefix, const TMap<class UClass*, struct FGameStoreSellingPointDetail>& VariantItemsSellingPointInfo, class UUI_CosmeticsShop_C* CosmeticsShop, TArray<class UClass*>* VisibleVariants);
	void SetFocusByIndex(int32 SlotIndex, bool IsCraftingPlan, ESellingPointType SellingPointType, bool UpdateFocus, class UClass** OutFocusedVariant, class UClass** OutFocusedBaseItem, int32* OutSelectedIndex);
	void UpdateTics(int32 TickedIndex);
	void ClearContent();
	void GetIndexOfVariant(class UClass* Variant, int32* Index_0, bool* bFound);
	void SetCosmeticsRoot(class UUI_CosmeticsShop_C* CosmeticsRoot);
	void SetCurrentSkinVariant(class UUI_Shop_VariantSlot_C* TargetVariant);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_CosmeticsVariantsBox_C">();
	}
	static class UUI_CosmeticsVariantsBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_CosmeticsVariantsBox_C>();
	}
};
static_assert(alignof(UUI_CosmeticsVariantsBox_C) == 0x000008, "Wrong alignment on UUI_CosmeticsVariantsBox_C");
static_assert(sizeof(UUI_CosmeticsVariantsBox_C) == 0x0003A8, "Wrong size on UUI_CosmeticsVariantsBox_C");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, UberGraphFrame) == 0x0002B8, "Member 'UUI_CosmeticsVariantsBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, NoTicketsToActivate) == 0x0002C0, "Member 'UUI_CosmeticsVariantsBox_C::NoTicketsToActivate' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, ColorsHorizontalBox) == 0x0002C8, "Member 'UUI_CosmeticsVariantsBox_C::ColorsHorizontalBox' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, ColorsScrollBox) == 0x0002D0, "Member 'UUI_CosmeticsVariantsBox_C::ColorsScrollBox' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, Dev_VariantName) == 0x0002D8, "Member 'UUI_CosmeticsVariantsBox_C::Dev_VariantName' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, FadeBox) == 0x0002E0, "Member 'UUI_CosmeticsVariantsBox_C::FadeBox' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, HBox_CraftTableLevel) == 0x0002E8, "Member 'UUI_CosmeticsVariantsBox_C::HBox_CraftTableLevel' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, Image_201) == 0x0002F0, "Member 'UUI_CosmeticsVariantsBox_C::Image_201' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, Text_BoosterTicket_Description) == 0x0002F8, "Member 'UUI_CosmeticsVariantsBox_C::Text_BoosterTicket_Description' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, Text_Category) == 0x000300, "Member 'UUI_CosmeticsVariantsBox_C::Text_Category' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, Text_PlanNeededLevel) == 0x000308, "Member 'UUI_CosmeticsVariantsBox_C::Text_PlanNeededLevel' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, Text_Rarity) == 0x000310, "Member 'UUI_CosmeticsVariantsBox_C::Text_Rarity' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, Text_Tickets_OwnedTicketsCount) == 0x000318, "Member 'UUI_CosmeticsVariantsBox_C::Text_Tickets_OwnedTicketsCount' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, VariantName) == 0x000320, "Member 'UUI_CosmeticsVariantsBox_C::VariantName' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, WidgetSwitcher_AdditionalInfo) == 0x000328, "Member 'UUI_CosmeticsVariantsBox_C::WidgetSwitcher_AdditionalInfo' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, BaseItem) == 0x000330, "Member 'UUI_CosmeticsVariantsBox_C::BaseItem' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, OwnedVariants) == 0x000338, "Member 'UUI_CosmeticsVariantsBox_C::OwnedVariants' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, CurrencyToShopTexts) == 0x000348, "Member 'UUI_CosmeticsVariantsBox_C::CurrencyToShopTexts' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, CosmeticShopRoot) == 0x000398, "Member 'UUI_CosmeticsVariantsBox_C::CosmeticShopRoot' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsVariantsBox_C, CurrentItemVariant) == 0x0003A0, "Member 'UUI_CosmeticsVariantsBox_C::CurrentItemVariant' has a wrong offset!");

}

