#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MementoLootManager_Lighters

#include "Basic.hpp"

#include "F_ItemArray_structs.hpp"
#include "BP_MementoLootManager_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MementoLootManager_Lighters.BP_MementoLootManager_Lighters_C
// 0x0060 (0x0328 - 0x02C8)
class ABP_MementoLootManager_Lighters_C final : public ABP_MementoLootManager_Base_C
{
public:
	TMap<class FString, struct FF_ItemArray>      Level_Distribution;                                // 0x02C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         Spawned_Lighters;                                  // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Spawn_Mementos(bool Cheat_in_All, TArray<class UClass*>* Spawned_Mementos);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MementoLootManager_Lighters_C">();
	}
	static class ABP_MementoLootManager_Lighters_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MementoLootManager_Lighters_C>();
	}
};
static_assert(alignof(ABP_MementoLootManager_Lighters_C) == 0x000008, "Wrong alignment on ABP_MementoLootManager_Lighters_C");
static_assert(sizeof(ABP_MementoLootManager_Lighters_C) == 0x000328, "Wrong size on ABP_MementoLootManager_Lighters_C");
static_assert(offsetof(ABP_MementoLootManager_Lighters_C, Level_Distribution) == 0x0002C8, "Member 'ABP_MementoLootManager_Lighters_C::Level_Distribution' has a wrong offset!");
static_assert(offsetof(ABP_MementoLootManager_Lighters_C, Spawned_Lighters) == 0x000318, "Member 'ABP_MementoLootManager_Lighters_C::Spawned_Lighters' has a wrong offset!");

}
