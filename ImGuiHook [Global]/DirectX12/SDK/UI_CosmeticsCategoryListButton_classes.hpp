#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CosmeticsCategoryListButton

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_CosmeticsCategoryListButton.UI_CosmeticsCategoryListButton_C
// 0x0080 (0x0418 - 0x0398)
class UUI_CosmeticsCategoryListButton_C final : public UListButtonWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ExpandIcon;                                        // 0x03A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OffsetLeft;                                        // 0x03A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x03B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFlameTextBlock*                        ButtonName;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CategoryHighlight;                                 // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CategoryImage;                                     // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ExpandibleArrow;                                   // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Icon;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shop_HighlightMarker_C*             UI_Shop_HighlightMarker;                           // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EItemCategory                                 Category;                                          // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESellingPointType                             SellingPointCategory;                              // 0x03E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EA[0x6];                                      // 0x03EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_CosmeticsShop_C*                    CosmeticShop;                                      // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x03F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                             CategoryIcon;                                      // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_CosmeticsCategoryListButton(int32 EntryPoint);
	void Destruct();
	void UpdateTemporarySellingPointCount(int32 Count);
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void UpdateScrollBaronWidget(class UWidget* WidgetToFocus);
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonFocusEvent__DelegateSignature(class UButton* Sender);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetExpandibleBool(bool bShouldBeExpanded);
	void SetCategoryIconHighlightVisibility(bool NewVisibility);
	void CollapseTheExpandible();
	class UWidget* CustomUp_DownNavigation(EUINavigation Navigation_0);
	void UpdateExpandibleIcon(bool bIsExpanded);
	void UpdateCategoryData(const class FText& Text_0, class UUI_CosmeticsShop_C* CosmeticShop_0, class UTexture2D* CategoryIcon_0, EItemCategory Category_0, ESellingPointType SellingPointCategory_0);
	void GetRefToCosmeticsListButton(class UUI_CosmeticsListButton_C** ListBTN, bool* bValid);
	void GetRefToMainCategoryListButton(class UUI_CosmeticsMainCategory_C** MenuLabel, bool* bValid);
	void IsCategoryExpanded(bool* bValid, bool* bIsExpanded);
	void GetRefToSubCategoryListButton(bool* bValid, class UUI_CosmeticsSubCategory_C** SubCategory);
	void GetLastScrollElement(bool* bValid, class UWidget** LastWidget);
	void GetFirstScrollElement(bool* bValid, class UWidget** FirstElement);
	void IsListButtonChildOfSubCategory(class UUI_CosmeticsListButton_C* ListButton, bool* bIsChild);
	void GetItemTypeCategory(bool* Success, ESellingPointType* SellingPointType);
	void DestroyComponentByTAG(class FName Tag, bool* Valid, bool* ComponentFound);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_CosmeticsCategoryListButton_C">();
	}
	static class UUI_CosmeticsCategoryListButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_CosmeticsCategoryListButton_C>();
	}
};
static_assert(alignof(UUI_CosmeticsCategoryListButton_C) == 0x000008, "Wrong alignment on UUI_CosmeticsCategoryListButton_C");
static_assert(sizeof(UUI_CosmeticsCategoryListButton_C) == 0x000418, "Wrong size on UUI_CosmeticsCategoryListButton_C");
static_assert(offsetof(UUI_CosmeticsCategoryListButton_C, UberGraphFrame) == 0x000398, "Member 'UUI_CosmeticsCategoryListButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsCategoryListButton_C, ExpandIcon) == 0x0003A0, "Member 'UUI_CosmeticsCategoryListButton_C::ExpandIcon' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsCategoryListButton_C, OffsetLeft) == 0x0003A8, "Member 'UUI_CosmeticsCategoryListButton_C::OffsetLeft' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsCategoryListButton_C, FadeOut) == 0x0003B0, "Member 'UUI_CosmeticsCategoryListButton_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsCategoryListButton_C, ButtonName) == 0x0003B8, "Member 'UUI_CosmeticsCategoryListButton_C::ButtonName' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsCategoryListButton_C, CategoryHighlight) == 0x0003C0, "Member 'UUI_CosmeticsCategoryListButton_C::CategoryHighlight' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsCategoryListButton_C, CategoryImage) == 0x0003C8, "Member 'UUI_CosmeticsCategoryListButton_C::CategoryImage' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsCategoryListButton_C, ExpandibleArrow) == 0x0003D0, "Member 'UUI_CosmeticsCategoryListButton_C::ExpandibleArrow' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsCategoryListButton_C, Overlay_Icon) == 0x0003D8, "Member 'UUI_CosmeticsCategoryListButton_C::Overlay_Icon' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsCategoryListButton_C, UI_Shop_HighlightMarker) == 0x0003E0, "Member 'UUI_CosmeticsCategoryListButton_C::UI_Shop_HighlightMarker' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsCategoryListButton_C, Category) == 0x0003E8, "Member 'UUI_CosmeticsCategoryListButton_C::Category' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsCategoryListButton_C, SellingPointCategory) == 0x0003E9, "Member 'UUI_CosmeticsCategoryListButton_C::SellingPointCategory' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsCategoryListButton_C, CosmeticShop) == 0x0003F0, "Member 'UUI_CosmeticsCategoryListButton_C::CosmeticShop' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsCategoryListButton_C, Text) == 0x0003F8, "Member 'UUI_CosmeticsCategoryListButton_C::Text' has a wrong offset!");
static_assert(offsetof(UUI_CosmeticsCategoryListButton_C, CategoryIcon) == 0x000410, "Member 'UUI_CosmeticsCategoryListButton_C::CategoryIcon' has a wrong offset!");

}

