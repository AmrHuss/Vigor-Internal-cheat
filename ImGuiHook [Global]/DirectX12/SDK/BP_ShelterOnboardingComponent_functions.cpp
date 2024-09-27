#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShelterOnboardingComponent

#include "Basic.hpp"

#include "BP_ShelterOnboardingComponent_classes.hpp"
#include "BP_ShelterOnboardingComponent_parameters.hpp"


namespace SDK
{

// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.BasicOnboardingFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ShelterOnboardingComponent_C::BasicOnboardingFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "BasicOnboardingFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.ExecuteUbergraph_BP_ShelterOnboardingComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ShelterOnboardingComponent_C::ExecuteUbergraph_BP_ShelterOnboardingComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "ExecuteUbergraph_BP_ShelterOnboardingComponent");

	Params::BP_ShelterOnboardingComponent_C_ExecuteUbergraph_BP_ShelterOnboardingComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.OnBattlePassRewardsClaimed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_BattlePassLevelRewardFull>Free                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FS_BattlePassLevelRewardFull>Premium                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    PremiumLocked                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ShelterOnboardingComponent_C::OnBattlePassRewardsClaimed(TArray<struct FS_BattlePassLevelRewardFull>& Free, TArray<struct FS_BattlePassLevelRewardFull>& Premium, bool PremiumLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "OnBattlePassRewardsClaimed");

	Params::BP_ShelterOnboardingComponent_C_OnBattlePassRewardsClaimed Parms{};

	Parms.Free = std::move(Free);
	Parms.Premium = std::move(Premium);
	Parms.PremiumLocked = PremiumLocked;

	UObject::ProcessEvent(Func, &Parms);

	Free = std::move(Parms.Free);
	Premium = std::move(Parms.Premium);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.OnItemBought
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ShelterOnboardingComponent_C::OnItemBought(class UClass* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "OnItemBought");

	Params::BP_ShelterOnboardingComponent_C_OnItemBought Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.ProcessOnboardingStage
// (BlueprintCallable, BlueprintEvent)

void UBP_ShelterOnboardingComponent_C::ProcessOnboardingStage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "ProcessOnboardingStage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.Refresh UI Locks
// (BlueprintCallable, BlueprintEvent)

void UBP_ShelterOnboardingComponent_C::Refresh_UI_Locks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "Refresh UI Locks");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.SetShelterUILocks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    LockUI                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ShelterOnboardingComponent_C::SetShelterUILocks(bool LockUI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "SetShelterUILocks");

	Params::BP_ShelterOnboardingComponent_C_SetShelterUILocks Parms{};

	Parms.LockUI = LockUI;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.OpenEquipTab
// (BlueprintCallable, BlueprintEvent)

void UBP_ShelterOnboardingComponent_C::OpenEquipTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "OpenEquipTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.UpdateOnboardingData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLeaderboardsDataLoaded                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCloudUserProfileStatistics      LeaderboardsData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ShelterOnboardingComponent_C::UpdateOnboardingData(bool IsLeaderboardsDataLoaded, const struct FCloudUserProfileStatistics& LeaderboardsData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "UpdateOnboardingData");

	Params::BP_ShelterOnboardingComponent_C_UpdateOnboardingData Parms{};

	Parms.IsLeaderboardsDataLoaded = IsLeaderboardsDataLoaded;
	Parms.LeaderboardsData = std::move(LeaderboardsData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_ShelterOnboardingComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.Toggle Shelter Lock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EShelterMainTab                         ShelterTab                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Lock                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ShelterOnboardingComponent_C::Toggle_Shelter_Lock(EShelterMainTab ShelterTab, bool Lock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "Toggle Shelter Lock");

	Params::BP_ShelterOnboardingComponent_C_Toggle_Shelter_Lock Parms{};

	Parms.ShelterTab = ShelterTab;
	Parms.Lock = Lock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.Toggle Shelter Improvements
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Lock                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ShelterOnboardingComponent_C::Toggle_Shelter_Improvements(bool Lock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "Toggle Shelter Improvements");

	Params::BP_ShelterOnboardingComponent_C_Toggle_Shelter_Improvements Parms{};

	Parms.Lock = Lock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.Toggle Donation Box
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Lock                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ShelterOnboardingComponent_C::Toggle_Donation_Box(bool Lock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "Toggle Donation Box");

	Params::BP_ShelterOnboardingComponent_C_Toggle_Donation_Box Parms{};

	Parms.Lock = Lock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.Toggle Interaction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Lock                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInteractionItemComponent*        InteractionComponent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ShelterOnboardingComponent_C::Toggle_Interaction(bool Lock, class UInteractionItemComponent* InteractionComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "Toggle Interaction");

	Params::BP_ShelterOnboardingComponent_C_Toggle_Interaction Parms{};

	Parms.Lock = Lock;
	Parms.InteractionComponent = InteractionComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.Toggle Shooting Range
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Lock                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ShelterOnboardingComponent_C::Toggle_Shooting_Range(bool Lock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "Toggle Shooting Range");

	Params::BP_ShelterOnboardingComponent_C_Toggle_Shooting_Range Parms{};

	Parms.Lock = Lock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.Toggle Cassette Player
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Lock                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ShelterOnboardingComponent_C::Toggle_Cassette_Player(bool Lock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "Toggle Cassette Player");

	Params::BP_ShelterOnboardingComponent_C_Toggle_Cassette_Player Parms{};

	Parms.Lock = Lock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.Get Cosmetics Count
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Cosmetics_Count                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ShelterOnboardingComponent_C::Get_Cosmetics_Count(int32* Cosmetics_Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "Get Cosmetics Count");

	Params::BP_ShelterOnboardingComponent_C_Get_Cosmetics_Count Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Cosmetics_Count != nullptr)
		*Cosmetics_Count = Parms.Cosmetics_Count;
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.Is Tab Locked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EShelterMainTab                         Shelter_Tab                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Locked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ShelterOnboardingComponent_C::Is_Tab_Locked(EShelterMainTab Shelter_Tab, bool* Locked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "Is Tab Locked");

	Params::BP_ShelterOnboardingComponent_C_Is_Tab_Locked Parms{};

	Parms.Shelter_Tab = Shelter_Tab;

	UObject::ProcessEvent(Func, &Parms);

	if (Locked != nullptr)
		*Locked = Parms.Locked;
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.Set Onboarding Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_active                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ShelterOnboardingComponent_C::Set_Onboarding_Active(bool Is_active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "Set Onboarding Active");

	Params::BP_ShelterOnboardingComponent_C_Set_Onboarding_Active Parms{};

	Parms.Is_active = Is_active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ShelterOnboardingComponent.BP_ShelterOnboardingComponent_C.Toggle Onboarding Master Switch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Current_state                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ShelterOnboardingComponent_C::Toggle_Onboarding_Master_Switch(bool* Current_state)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ShelterOnboardingComponent_C", "Toggle Onboarding Master Switch");

	Params::BP_ShelterOnboardingComponent_C_Toggle_Onboarding_Master_Switch Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Current_state != nullptr)
		*Current_state = Parms.Current_state;
}

}
