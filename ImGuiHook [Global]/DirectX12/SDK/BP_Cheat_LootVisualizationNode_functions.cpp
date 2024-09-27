#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cheat_LootVisualizationNode

#include "Basic.hpp"

#include "BP_Cheat_LootVisualizationNode_classes.hpp"
#include "BP_Cheat_LootVisualizationNode_parameters.hpp"


namespace SDK
{

// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.ExecuteUbergraph_BP_Cheat_LootVisualizationNode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cheat_LootVisualizationNode_C::ExecuteUbergraph_BP_Cheat_LootVisualizationNode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "ExecuteUbergraph_BP_Cheat_LootVisualizationNode");

	Params::BP_Cheat_LootVisualizationNode_C_ExecuteUbergraph_BP_Cheat_LootVisualizationNode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.AddIntoCommodityList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cheat_LootVisualizationNode_C::AddIntoCommodityList(class UClass* Item, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "AddIntoCommodityList");

	Params::BP_Cheat_LootVisualizationNode_C_AddIntoCommodityList Parms{};

	Parms.Item = Item;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.OnStoredWeapon
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                          Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cheat_LootVisualizationNode_C::OnStoredWeapon(class AWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "OnStoredWeapon");

	Params::BP_Cheat_LootVisualizationNode_C_OnStoredWeapon Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.OnLootedWeapon
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                          Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cheat_LootVisualizationNode_C::OnLootedWeapon(class AWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "OnLootedWeapon");

	Params::BP_Cheat_LootVisualizationNode_C_OnLootedWeapon Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.RemoveFromCommodityList
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cheat_LootVisualizationNode_C::RemoveFromCommodityList(class UClass* Item, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "RemoveFromCommodityList");

	Params::BP_Cheat_LootVisualizationNode_C_RemoveFromCommodityList Parms{};

	Parms.Item = Item;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.BndEvt__CommodityDetailsDisplayArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cheat_LootVisualizationNode_C::BndEvt__CommodityDetailsDisplayArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "BndEvt__CommodityDetailsDisplayArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_Cheat_LootVisualizationNode_C_BndEvt__CommodityDetailsDisplayArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.BndEvt__CommodityDetailsDisplayArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Cheat_LootVisualizationNode_C::BndEvt__CommodityDetailsDisplayArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "BndEvt__CommodityDetailsDisplayArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_Cheat_LootVisualizationNode_C_BndEvt__CommodityDetailsDisplayArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.BndEvt__HUDMarkerDisplayRange_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cheat_LootVisualizationNode_C::BndEvt__HUDMarkerDisplayRange_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "BndEvt__HUDMarkerDisplayRange_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_Cheat_LootVisualizationNode_C_BndEvt__HUDMarkerDisplayRange_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.BndEvt__HUDMarkerDisplayRange_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Cheat_LootVisualizationNode_C::BndEvt__HUDMarkerDisplayRange_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "BndEvt__HUDMarkerDisplayRange_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_Cheat_LootVisualizationNode_C_BndEvt__HUDMarkerDisplayRange_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.OnLootedCommodity
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class AItemForBackpack>     BagItemClass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cheat_LootVisualizationNode_C::OnLootedCommodity(TSubclassOf<class AItemForBackpack> BagItemClass, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "OnLootedCommodity");

	Params::BP_Cheat_LootVisualizationNode_C_OnLootedCommodity Parms{};

	Parms.BagItemClass = BagItemClass;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.InitializeLootingEvents
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Cheat_LootVisualizationNode_C::InitializeLootingEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "InitializeLootingEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Cheat_LootVisualizationNode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.OnLoaded_303A9E7341428F48F05BE78AAC47A84E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cheat_LootVisualizationNode_C::OnLoaded_303A9E7341428F48F05BE78AAC47A84E(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "OnLoaded_303A9E7341428F48F05BE78AAC47A84E");

	Params::BP_Cheat_LootVisualizationNode_C_OnLoaded_303A9E7341428F48F05BE78AAC47A84E Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.Load Marker Data
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_LootVisualization_LootSourceTypes     LootSourceType                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Marker_Highlight_Color                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMapMarkerType                          Map_Marker_Color                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Marker_Icon_Reference                                  (Parm, OutParm, HasGetValueTypeHash)

void ABP_Cheat_LootVisualizationNode_C::Load_Marker_Data(E_LootVisualization_LootSourceTypes* LootSourceType, struct FLinearColor* Marker_Highlight_Color, EMapMarkerType* Map_Marker_Color, TSoftObjectPtr<class UTexture2D>* Marker_Icon_Reference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "Load Marker Data");

	Params::BP_Cheat_LootVisualizationNode_C_Load_Marker_Data Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LootSourceType != nullptr)
		*LootSourceType = Parms.LootSourceType;

	if (Marker_Highlight_Color != nullptr)
		*Marker_Highlight_Color = std::move(Parms.Marker_Highlight_Color);

	if (Map_Marker_Color != nullptr)
		*Map_Marker_Color = Parms.Map_Marker_Color;

	if (Marker_Icon_Reference != nullptr)
		*Marker_Icon_Reference = Parms.Marker_Icon_Reference;
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.Update HUD Marker Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Cheat_LootVisualizationNode_C::Update_HUD_Marker_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "Update HUD Marker Widget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.Update Commodity Details Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Cheat_LootVisualizationNode_C::Update_Commodity_Details_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "Update Commodity Details Widget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.HideHUDMarker
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Cheat_LootVisualizationNode_C::HideHUDMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "HideHUDMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.DisplayHUDMarker
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Cheat_LootVisualizationNode_C::DisplayHUDMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "DisplayHUDMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.ToggleHUDMarker
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Cheat_LootVisualizationNode_C::ToggleHUDMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "ToggleHUDMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.HideIndicatorBeam
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Cheat_LootVisualizationNode_C::HideIndicatorBeam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "HideIndicatorBeam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.DisplayIndicatorBeam
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Cheat_LootVisualizationNode_C::DisplayIndicatorBeam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "DisplayIndicatorBeam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.ToggleIndicatorBeam
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Cheat_LootVisualizationNode_C::ToggleIndicatorBeam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "ToggleIndicatorBeam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.HideMapMarker
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Cheat_LootVisualizationNode_C::HideMapMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "HideMapMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.DisplayMapMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Cheat_LootVisualizationNode_C::DisplayMapMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "DisplayMapMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.ToggleMapMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Cheat_LootVisualizationNode_C::ToggleMapMarker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "ToggleMapMarker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.MarkCommodityLooted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Commodity_Class                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Commodity_amount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cheat_LootVisualizationNode_C::MarkCommodityLooted(class UClass* Commodity_Class, int32 Commodity_amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "MarkCommodityLooted");

	Params::BP_Cheat_LootVisualizationNode_C_MarkCommodityLooted Parms{};

	Parms.Commodity_Class = Commodity_Class;
	Parms.Commodity_amount = Commodity_amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.GetClosestLootable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Lootable_Base_C*              Lootable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Cheat_LootVisualizationNode_C::GetClosestLootable(class ABP_Lootable_Base_C** Lootable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "GetClosestLootable");

	Params::BP_Cheat_LootVisualizationNode_C_GetClosestLootable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Lootable != nullptr)
		*Lootable = Parms.Lootable;
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.CheckLootableEmpty
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    LootableEmpty                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Cheat_LootVisualizationNode_C::CheckLootableEmpty(bool* LootableEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "CheckLootableEmpty");

	Params::BP_Cheat_LootVisualizationNode_C_CheckLootableEmpty Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LootableEmpty != nullptr)
		*LootableEmpty = Parms.LootableEmpty;
}


// Function BP_Cheat_LootVisualizationNode.BP_Cheat_LootVisualizationNode_C.MarkNodeEmpty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Node_Empty                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Cheat_LootVisualizationNode_C::MarkNodeEmpty(bool Node_Empty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Cheat_LootVisualizationNode_C", "MarkNodeEmpty");

	Params::BP_Cheat_LootVisualizationNode_C_MarkNodeEmpty Parms{};

	Parms.Node_Empty = Node_Empty;

	UObject::ProcessEvent(Func, &Parms);
}

}
