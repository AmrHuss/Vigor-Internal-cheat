#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CharacterCustomisation

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "E_SellingPointStatus_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_CharacterCustomisation.UI_CharacterCustomisation_C
// 0x0148 (0x0460 - 0x0318)
class UUI_CharacterCustomisation_C final : public UUpdateableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_InputActionWidget_C*                ActionMoreInfo;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        ActionRotateText;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Backpack;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Eyewear;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Facewear;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gloves;                                            // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Headwear;                                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_87;                                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ItemsScrollBox;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               RotateActionOverlay;                               // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RotateArrowL;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RotateArrowR;                                      // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        SubMenuTitle;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BackButtonPC_C*                     UI_BackButtonPC;                                   // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionRotate;                            // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionSelect;                            // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_GamepadActionWidgetClose;                       // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SellingPointButton_C*               UI_SellingPointButton;                             // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_VariantsBox_C*                      UI_VariantsBox;                                    // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Uniform;                                           // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_ShelterUI_C*                        ShelterUI;                                         // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastMainMenuButton;                                // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedColorSlot;                                 // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotationSpeed;                                     // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInSubMenu;                                       // 0x03DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCustomizationChangeInProgress;                   // 0x03DD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DE[0x2];                                      // 0x03DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 FocusedVariant;                                    // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 FocusedBaseItem;                                   // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 LastSubmenuFilter;                                 // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 LastSubmenuSlot;                                   // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LastSubmenuCanBeNone;                              // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_401[0x7];                                      // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             LastSubmenuSoundWhenEquipped;                      // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LastSubmenuOrangeDotPrefix;                        // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UWidget*                                LastFocusedNotUserWidget;                          // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ForcedFocusedVariant;                              // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListButtonWidget*                      Focused_List_Button;                               // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastFocusedVariantSlot;                            // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43C[0x4];                                      // 0x043C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_WardrobeListItem_C*                 LastWardrobeListFocus;                             // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPanning;                                         // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShouldReturnFocus;                                 // 0x0449(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44A[0x6];                                      // 0x044A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CurrentFocusedWidget;                              // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_WardrobeListItem_C*                 NoneButton;                                        // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_CharacterCustomisation(int32 EntryPoint);
	void BndEvt__UI_CharacterCustomisation_UI_BackButtonPC_K2Node_ComponentBoundEvent_5_OnBackButtonClicked__DelegateSignature();
	void OnClosedDelegate_Event_0(class UFlameWidget* FlameWidget);
	void HandleReturnFocus();
	void OnResetToDefaultState();
	void StopPanning();
	void StartPanning();
	void HandleMouseInput();
	void EquipUsingMouseClick();
	void BndEvt__UI_CharacterCustomisation_UI_GamepadActionSelect_K2Node_ComponentBoundEvent_3_OnClickedEvent__DelegateSignature();
	void BndEvt__UI_GamepadActionWidgetClose_K2Node_ComponentBoundEvent_2_OnClickedEvent__DelegateSignature();
	void BndEvt__ActionMoreInfo_K2Node_ComponentBoundEvent_2_OnActionReleasedEvent__DelegateSignature();
	void BndEvt__UI_SellingPointButton_K2Node_ComponentBoundEvent_0_OnBoughtItemShowcaseClosed__DelegateSignature();
	void OnChildFocusLost(class UWidget* InWidget);
	void OnChildFocusReceived(class UWidget* InWidget);
	void OnPurchaseDone(EGameStorePurchaseType PurchaseType, const struct FUniqueNetIdRepl& InUserId, const int32 PurchaseRequestId, const struct FGameStoreProductId& RequestedProductId, const struct FCloudRequestResult& Result, const struct FGameStorePurchaseResult& PurchaseResult, const bool PurchaseListRefreshed);
	void OnCustomizationChanged(class AHumanCharacter* Sender, class UInventoryCustomizationComponent* Inventory);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CancelPressed();
	void ListenForCancel();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Destruct();
	void FillSubMenu(class UClass* Filter, class UClass* CustomizationSlot, bool CanBeNone, class USoundBase* SoundWhenEquipped, const class FString& OrangeDotPrefix, class UClass* ForcedFocused);
	void EquipItemPerFilter(class UListButtonWidget* ListButton);
	void PreviewNoneItem(class UListButtonWidget* ListButton);
	void IsCustomizationEquipped(class AHumanPlayerController* Player, class UClass* Customization, class UClass* Variant, bool* IsEquipped);
	void UpdateTickIcons(class UUI_WardrobeListItem_C* TickedButton);
	void FillMainMenu();
	void OpenSubMenu(class UListButtonWidget* InListButton);
	void FillColorsBox(class UListButtonWidget* List_Button);
	void SetColorSlotFocus(int32 SlotIndex, bool ItemOnPreview);
	void CustomizationsComparator(class UClass* ClassA, class UClass* ClassB, bool* Return);
	void VariantsComparator(class UClass* ClassA, class UClass* ClassB, bool* Return);
	class UWidget* NavigateLeftRight(EUINavigation Navigation_0);
	void ShowCustomizationOccupiedSlots(class UClass* Customization);
	void ResetCustomizationOccupiedSlots();
	void DefaultArchetypeAsFirstResort(TArray<class UClass*>& CurentVariants, TArray<class UClass*>* CurentVariantsReSorted);
	void FilterOutNonBattlePassCustomizations(TArray<class UClass*>& Variants, TArray<class UClass*>& OwnedVariants, TArray<class UClass*>* FilteredVariants);
	void SetFocusedSubMenu(class UListButtonWidget* InListButton);
	void Update_UI_Elements(bool IsInSubMenu_0, const class FText& SubmenuTitleText);
	void ToggleSelectButton(class UClass* Item, bool ForceEnable);

	class UWidget* GetWidgetToFocus() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_CharacterCustomisation_C">();
	}
	static class UUI_CharacterCustomisation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_CharacterCustomisation_C>();
	}
};
static_assert(alignof(UUI_CharacterCustomisation_C) == 0x000008, "Wrong alignment on UUI_CharacterCustomisation_C");
static_assert(sizeof(UUI_CharacterCustomisation_C) == 0x000460, "Wrong size on UUI_CharacterCustomisation_C");
static_assert(offsetof(UUI_CharacterCustomisation_C, UberGraphFrame) == 0x000318, "Member 'UUI_CharacterCustomisation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, ActionMoreInfo) == 0x000320, "Member 'UUI_CharacterCustomisation_C::ActionMoreInfo' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, ActionRotateText) == 0x000328, "Member 'UUI_CharacterCustomisation_C::ActionRotateText' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, Backpack) == 0x000330, "Member 'UUI_CharacterCustomisation_C::Backpack' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, Eyewear) == 0x000338, "Member 'UUI_CharacterCustomisation_C::Eyewear' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, Facewear) == 0x000340, "Member 'UUI_CharacterCustomisation_C::Facewear' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, Gloves) == 0x000348, "Member 'UUI_CharacterCustomisation_C::Gloves' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, Headwear) == 0x000350, "Member 'UUI_CharacterCustomisation_C::Headwear' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, Image) == 0x000358, "Member 'UUI_CharacterCustomisation_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, Image_87) == 0x000360, "Member 'UUI_CharacterCustomisation_C::Image_87' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, ItemsScrollBox) == 0x000368, "Member 'UUI_CharacterCustomisation_C::ItemsScrollBox' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, RotateActionOverlay) == 0x000370, "Member 'UUI_CharacterCustomisation_C::RotateActionOverlay' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, RotateArrowL) == 0x000378, "Member 'UUI_CharacterCustomisation_C::RotateArrowL' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, RotateArrowR) == 0x000380, "Member 'UUI_CharacterCustomisation_C::RotateArrowR' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, SubMenuTitle) == 0x000388, "Member 'UUI_CharacterCustomisation_C::SubMenuTitle' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, UI_BackButtonPC) == 0x000390, "Member 'UUI_CharacterCustomisation_C::UI_BackButtonPC' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, UI_GamepadActionRotate) == 0x000398, "Member 'UUI_CharacterCustomisation_C::UI_GamepadActionRotate' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, UI_GamepadActionSelect) == 0x0003A0, "Member 'UUI_CharacterCustomisation_C::UI_GamepadActionSelect' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, UI_GamepadActionWidgetClose) == 0x0003A8, "Member 'UUI_CharacterCustomisation_C::UI_GamepadActionWidgetClose' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, UI_SellingPointButton) == 0x0003B0, "Member 'UUI_CharacterCustomisation_C::UI_SellingPointButton' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, UI_VariantsBox) == 0x0003B8, "Member 'UUI_CharacterCustomisation_C::UI_VariantsBox' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, Uniform) == 0x0003C0, "Member 'UUI_CharacterCustomisation_C::Uniform' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, ShelterUI) == 0x0003C8, "Member 'UUI_CharacterCustomisation_C::ShelterUI' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, LastMainMenuButton) == 0x0003D0, "Member 'UUI_CharacterCustomisation_C::LastMainMenuButton' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, SelectedColorSlot) == 0x0003D4, "Member 'UUI_CharacterCustomisation_C::SelectedColorSlot' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, RotationSpeed) == 0x0003D8, "Member 'UUI_CharacterCustomisation_C::RotationSpeed' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, IsInSubMenu) == 0x0003DC, "Member 'UUI_CharacterCustomisation_C::IsInSubMenu' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, IsCustomizationChangeInProgress) == 0x0003DD, "Member 'UUI_CharacterCustomisation_C::IsCustomizationChangeInProgress' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, FocusedVariant) == 0x0003E0, "Member 'UUI_CharacterCustomisation_C::FocusedVariant' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, FocusedBaseItem) == 0x0003E8, "Member 'UUI_CharacterCustomisation_C::FocusedBaseItem' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, LastSubmenuFilter) == 0x0003F0, "Member 'UUI_CharacterCustomisation_C::LastSubmenuFilter' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, LastSubmenuSlot) == 0x0003F8, "Member 'UUI_CharacterCustomisation_C::LastSubmenuSlot' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, LastSubmenuCanBeNone) == 0x000400, "Member 'UUI_CharacterCustomisation_C::LastSubmenuCanBeNone' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, LastSubmenuSoundWhenEquipped) == 0x000408, "Member 'UUI_CharacterCustomisation_C::LastSubmenuSoundWhenEquipped' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, LastSubmenuOrangeDotPrefix) == 0x000410, "Member 'UUI_CharacterCustomisation_C::LastSubmenuOrangeDotPrefix' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, LastFocusedNotUserWidget) == 0x000420, "Member 'UUI_CharacterCustomisation_C::LastFocusedNotUserWidget' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, ForcedFocusedVariant) == 0x000428, "Member 'UUI_CharacterCustomisation_C::ForcedFocusedVariant' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, Focused_List_Button) == 0x000430, "Member 'UUI_CharacterCustomisation_C::Focused_List_Button' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, LastFocusedVariantSlot) == 0x000438, "Member 'UUI_CharacterCustomisation_C::LastFocusedVariantSlot' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, LastWardrobeListFocus) == 0x000440, "Member 'UUI_CharacterCustomisation_C::LastWardrobeListFocus' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, IsPanning) == 0x000448, "Member 'UUI_CharacterCustomisation_C::IsPanning' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, ShouldReturnFocus) == 0x000449, "Member 'UUI_CharacterCustomisation_C::ShouldReturnFocus' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, CurrentFocusedWidget) == 0x000450, "Member 'UUI_CharacterCustomisation_C::CurrentFocusedWidget' has a wrong offset!");
static_assert(offsetof(UUI_CharacterCustomisation_C, NoneButton) == 0x000458, "Member 'UUI_CharacterCustomisation_C::NoneButton' has a wrong offset!");

}

