#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BattlePass_MultiLevelPurchase

#include "Basic.hpp"

#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_BattlePass_MultiLevelPurchase.UI_BattlePass_MultiLevelPurchase_C
// 0x0080 (0x0370 - 0x02F0)
class UUI_BattlePass_MultiLevelPurchase_C final : public UModalWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                ButtonLeft;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ButtonRight;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_72;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        MessageText_LevelsToBuy;                           // 0x0318(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        MessageText_NewLevel;                              // 0x0320(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlameTextBlock*                        MessageText_Price;                                 // 0x0328(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_InputActionWidget_Cancel;                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_InputActionWidget_ChangeAmount;                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InputActionWidget_C*                UI_InputActionWidget_Purchase;                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_BattlePassSystem_C*                 BattlePassSystem;                                  // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_GetCrownsMessageBox_C*              GetCrownsMessageBoxWidget;                         // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_BattlePass_C*                       UI_BattlePass;                                     // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Price;                                             // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LevelsToBuy;                                       // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewLevel;                                          // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_BattlePass_MultiLevelPurchase(int32 EntryPoint);
	void BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void BndEvt__UI_BattlePass_MultiLevelPurchase_ButtonRight_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(class UButton* Sender);
	void Destruct();
	void OnClosedDelegate_Event_0(class UFlameWidget* FlameWidget);
	void PurchaseLevels();
	void BndEvt__UI_InputActionWidget_Purchase_K2Node_ComponentBoundEvent_4_OnActionPressedEvent__DelegateSignature();
	void BndEvt__UI_InputActionWidget_Cancel_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature();
	void Update_Levels_To_Buy(int32 Increment);
	void Update_Info();
	void Construct();
	class UWidget* CustomLeft_RightNavigation(EUINavigation Navigation_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BattlePass_MultiLevelPurchase_C">();
	}
	static class UUI_BattlePass_MultiLevelPurchase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BattlePass_MultiLevelPurchase_C>();
	}
};
static_assert(alignof(UUI_BattlePass_MultiLevelPurchase_C) == 0x000008, "Wrong alignment on UUI_BattlePass_MultiLevelPurchase_C");
static_assert(sizeof(UUI_BattlePass_MultiLevelPurchase_C) == 0x000370, "Wrong size on UUI_BattlePass_MultiLevelPurchase_C");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, UberGraphFrame) == 0x0002F0, "Member 'UUI_BattlePass_MultiLevelPurchase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, ButtonLeft) == 0x0002F8, "Member 'UUI_BattlePass_MultiLevelPurchase_C::ButtonLeft' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, ButtonRight) == 0x000300, "Member 'UUI_BattlePass_MultiLevelPurchase_C::ButtonRight' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, Image_1) == 0x000308, "Member 'UUI_BattlePass_MultiLevelPurchase_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, Image_72) == 0x000310, "Member 'UUI_BattlePass_MultiLevelPurchase_C::Image_72' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, MessageText_LevelsToBuy) == 0x000318, "Member 'UUI_BattlePass_MultiLevelPurchase_C::MessageText_LevelsToBuy' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, MessageText_NewLevel) == 0x000320, "Member 'UUI_BattlePass_MultiLevelPurchase_C::MessageText_NewLevel' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, MessageText_Price) == 0x000328, "Member 'UUI_BattlePass_MultiLevelPurchase_C::MessageText_Price' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, UI_InputActionWidget_Cancel) == 0x000330, "Member 'UUI_BattlePass_MultiLevelPurchase_C::UI_InputActionWidget_Cancel' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, UI_InputActionWidget_ChangeAmount) == 0x000338, "Member 'UUI_BattlePass_MultiLevelPurchase_C::UI_InputActionWidget_ChangeAmount' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, UI_InputActionWidget_Purchase) == 0x000340, "Member 'UUI_BattlePass_MultiLevelPurchase_C::UI_InputActionWidget_Purchase' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, BattlePassSystem) == 0x000348, "Member 'UUI_BattlePass_MultiLevelPurchase_C::BattlePassSystem' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, GetCrownsMessageBoxWidget) == 0x000350, "Member 'UUI_BattlePass_MultiLevelPurchase_C::GetCrownsMessageBoxWidget' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, UI_BattlePass) == 0x000358, "Member 'UUI_BattlePass_MultiLevelPurchase_C::UI_BattlePass' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, Price) == 0x000360, "Member 'UUI_BattlePass_MultiLevelPurchase_C::Price' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, LevelsToBuy) == 0x000364, "Member 'UUI_BattlePass_MultiLevelPurchase_C::LevelsToBuy' has a wrong offset!");
static_assert(offsetof(UUI_BattlePass_MultiLevelPurchase_C, NewLevel) == 0x000368, "Member 'UUI_BattlePass_MultiLevelPurchase_C::NewLevel' has a wrong offset!");

}

