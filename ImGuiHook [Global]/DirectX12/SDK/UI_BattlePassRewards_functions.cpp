#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BattlePassRewards

#include "Basic.hpp"

#include "UI_BattlePassRewards_classes.hpp"
#include "UI_BattlePassRewards_parameters.hpp"


namespace SDK
{

// Function UI_BattlePassRewards.UI_BattlePassRewards_C.ExecuteUbergraph_UI_BattlePassRewards
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassRewards_C::ExecuteUbergraph_UI_BattlePassRewards(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "ExecuteUbergraph_UI_BattlePassRewards");

	Params::UI_BattlePassRewards_C_ExecuteUbergraph_UI_BattlePassRewards Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.BndEvt__UI_BattlePassRewards_FlameButton_152_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassRewards_C::BndEvt__UI_BattlePassRewards_FlameButton_152_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "BndEvt__UI_BattlePassRewards_FlameButton_152_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	Params::UI_BattlePassRewards_C_BndEvt__UI_BattlePassRewards_FlameButton_152_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.BndEvt__UI_BattlePassRewards_FlameButton_152_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassRewards_C::BndEvt__UI_BattlePassRewards_FlameButton_152_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "BndEvt__UI_BattlePassRewards_FlameButton_152_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	Params::UI_BattlePassRewards_C_BndEvt__UI_BattlePassRewards_FlameButton_152_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.BndEvt__UI_BattlePassRewards_FlameButton_152_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassRewards_C::BndEvt__UI_BattlePassRewards_FlameButton_152_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "BndEvt__UI_BattlePassRewards_FlameButton_152_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	Params::UI_BattlePassRewards_C_BndEvt__UI_BattlePassRewards_FlameButton_152_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.BndEvt__UI_BattlePassRewards_ActionA_K2Node_ComponentBoundEvent_4_OnClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_BattlePassRewards_C::BndEvt__UI_BattlePassRewards_ActionA_K2Node_ComponentBoundEvent_4_OnClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "BndEvt__UI_BattlePassRewards_ActionA_K2Node_ComponentBoundEvent_4_OnClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.FadeAway
// (BlueprintCallable, BlueprintEvent)

void UUI_BattlePassRewards_C::FadeAway()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "FadeAway");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_BattlePassRewards_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.Event_BattlePassBuyPremiumClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasPremiumPurchaseSuccesful                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BattlePassRewards_C::Event_BattlePassBuyPremiumClosed(bool WasPremiumPurchaseSuccesful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "Event_BattlePassBuyPremiumClosed");

	Params::UI_BattlePassRewards_C_Event_BattlePassBuyPremiumClosed Parms{};

	Parms.WasPremiumPurchaseSuccesful = WasPremiumPurchaseSuccesful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.WarningMsgBoxClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMessageBoxAction                       Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassRewards_C::WarningMsgBoxClosed(EMessageBoxAction Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "WarningMsgBoxClosed");

	Params::UI_BattlePassRewards_C_WarningMsgBoxClosed Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_BattlePassRewards_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.Event Rewards Claim Result
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BattlePassRewards_C::Event_Rewards_Claim_Result(bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "Event Rewards Claim Result");

	Params::UI_BattlePassRewards_C_Event_Rewards_Claim_Result Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BattlePassRewards_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "PreConstruct");

	Params::UI_BattlePassRewards_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.BndEvt__ActionY_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_BattlePassRewards_C::BndEvt__ActionY_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "BndEvt__ActionY_K2Node_ComponentBoundEvent_0_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.EventClaimReward
// (BlueprintCallable, BlueprintEvent)

void UUI_BattlePassRewards_C::EventClaimReward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "EventClaimReward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.OnChildFocusReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                          InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassRewards_C::OnChildFocusReceived(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "OnChildFocusReceived");

	Params::UI_BattlePassRewards_C_OnChildFocusReceived Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.BindToSlotInRow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_BattlePassRewardsRow_C*       RewardsRow_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassRewards_C::BindToSlotInRow(class UUI_BattlePassRewardsRow_C* RewardsRow_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "BindToSlotInRow");

	Params::UI_BattlePassRewards_C_BindToSlotInRow Parms{};

	Parms.RewardsRow_0 = RewardsRow_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.UnbindSlotInRow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_BattlePassRewardsRow_C*       RewardsRow_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassRewards_C::UnbindSlotInRow(class UUI_BattlePassRewardsRow_C* RewardsRow_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "UnbindSlotInRow");

	Params::UI_BattlePassRewards_C_UnbindSlotInRow Parms{};

	Parms.RewardsRow_0 = RewardsRow_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.UpdateItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          WidgetIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassRewards_C::UpdateItemInfo(class UWidget* WidgetIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "UpdateItemInfo");

	Params::UI_BattlePassRewards_C_UpdateItemInfo Parms{};

	Parms.WidgetIn = WidgetIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.Create Idle Widget
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_BattlePassRewards_C::Create_Idle_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "Create Idle Widget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.Remove Idle Widget
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_BattlePassRewards_C::Remove_Idle_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "Remove Idle Widget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.RefreshRewards
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     SeasonsIn                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FS_BattlePassLevelRewardFull>FreeRewardsIn                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FS_BattlePassLevelRewardFull>PremiumRewardsIn                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    PremiumRowLockedIn                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BattlePassRewards_C::RefreshRewards(TArray<class FName>& SeasonsIn, TArray<struct FS_BattlePassLevelRewardFull>& FreeRewardsIn, TArray<struct FS_BattlePassLevelRewardFull>& PremiumRewardsIn, bool PremiumRowLockedIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "RefreshRewards");

	Params::UI_BattlePassRewards_C_RefreshRewards Parms{};

	Parms.SeasonsIn = std::move(SeasonsIn);
	Parms.FreeRewardsIn = std::move(FreeRewardsIn);
	Parms.PremiumRewardsIn = std::move(PremiumRewardsIn);
	Parms.PremiumRowLockedIn = PremiumRowLockedIn;

	UObject::ProcessEvent(Func, &Parms);

	SeasonsIn = std::move(Parms.SeasonsIn);
	FreeRewardsIn = std::move(Parms.FreeRewardsIn);
	PremiumRewardsIn = std::move(Parms.PremiumRewardsIn);
}


// Function UI_BattlePassRewards.UI_BattlePassRewards_C.GetFinalPremiumPrice
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Price                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DiscountPercent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PriceAfterDiscount                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FinalPrice                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePassRewards_C::GetFinalPremiumPrice(int32 Price, int32 DiscountPercent, int32 PriceAfterDiscount, int32* FinalPrice) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BattlePassRewards_C", "GetFinalPremiumPrice");

	Params::UI_BattlePassRewards_C_GetFinalPremiumPrice Parms{};

	Parms.Price = Price;
	Parms.DiscountPercent = DiscountPercent;
	Parms.PriceAfterDiscount = PriceAfterDiscount;

	UObject::ProcessEvent(Func, &Parms);

	if (FinalPrice != nullptr)
		*FinalPrice = Parms.FinalPrice;
}

}

