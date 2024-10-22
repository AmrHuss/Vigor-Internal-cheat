#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameMode_ADM_Public

#include "Basic.hpp"

#include "BP_GameMode_AirDropModular_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameMode_ADM_Public.BP_GameMode_ADM_Public_C
// 0x0040 (0x0738 - 0x06F8)
class ABP_GameMode_ADM_Public_C final : public ABP_GameMode_AirDropModular_C
{
public:
	class UBP_GMComponent_ADM_BuriedCache_C*      BP_GMComponent_ADM_BuriedCache;                    // 0x06F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GameModeComponent_MementosDistribution_C* BP_GameModeComponent_MementosDistribution;         // 0x0700(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GMComponent_ADM_EventManager_C*     GMC_Event_Manager;                                 // 0x0708(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GMComponent_ADM_Reward_TrackedBox_C* GMC_Reward_TrackedBox;                             // 0x0710(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GMComponent_ADM_Radiation_Timed_C*  GMC_Radiation_Timed;                               // 0x0718(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GMComponent_ADM_PostDrop_Simple_C*  GMC_PostDrop_Simple;                               // 0x0720(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GMComponent_ADM_Container_Simple_C* GMC_Container_Simple;                              // 0x0728(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GMComponent_ADM_CallIn_Timed_C*     GMC_CallIn_Timed;                                  // 0x0730(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameMode_ADM_Public_C">();
	}
	static class ABP_GameMode_ADM_Public_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GameMode_ADM_Public_C>();
	}
};
static_assert(alignof(ABP_GameMode_ADM_Public_C) == 0x000008, "Wrong alignment on ABP_GameMode_ADM_Public_C");
static_assert(sizeof(ABP_GameMode_ADM_Public_C) == 0x000738, "Wrong size on ABP_GameMode_ADM_Public_C");
static_assert(offsetof(ABP_GameMode_ADM_Public_C, BP_GMComponent_ADM_BuriedCache) == 0x0006F8, "Member 'ABP_GameMode_ADM_Public_C::BP_GMComponent_ADM_BuriedCache' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_ADM_Public_C, BP_GameModeComponent_MementosDistribution) == 0x000700, "Member 'ABP_GameMode_ADM_Public_C::BP_GameModeComponent_MementosDistribution' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_ADM_Public_C, GMC_Event_Manager) == 0x000708, "Member 'ABP_GameMode_ADM_Public_C::GMC_Event_Manager' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_ADM_Public_C, GMC_Reward_TrackedBox) == 0x000710, "Member 'ABP_GameMode_ADM_Public_C::GMC_Reward_TrackedBox' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_ADM_Public_C, GMC_Radiation_Timed) == 0x000718, "Member 'ABP_GameMode_ADM_Public_C::GMC_Radiation_Timed' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_ADM_Public_C, GMC_PostDrop_Simple) == 0x000720, "Member 'ABP_GameMode_ADM_Public_C::GMC_PostDrop_Simple' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_ADM_Public_C, GMC_Container_Simple) == 0x000728, "Member 'ABP_GameMode_ADM_Public_C::GMC_Container_Simple' has a wrong offset!");
static_assert(offsetof(ABP_GameMode_ADM_Public_C, GMC_CallIn_Timed) == 0x000730, "Member 'ABP_GameMode_ADM_Public_C::GMC_CallIn_Timed' has a wrong offset!");

}

