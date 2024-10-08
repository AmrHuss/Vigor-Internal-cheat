#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VegetationModify_Bend

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_VegetationModify_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VegetationModify_Bend.BP_VegetationModify_Bend_C
// 0x0028 (0x0300 - 0x02D8)
class ABP_VegetationModify_Bend_C final : public ABP_VegetationModify_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_VegetationModify_Bend_C;         // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         BendIntensityFadeInTime;                           // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BendIntensityFadeInVal;                            // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BendIntensityFadeOutTime;                          // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BendIntensityFadeOutVal;                           // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BendPhaseFadeInTime;                               // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BendPhaseFadeInVal;                                // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BendPhaseFadeOutTime;                              // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BendPhaseFadeOutVal;                               // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_VegetationModify_Bend(int32 EntryPoint);
	void SetupMaterialParamsForRead();
	void SetupMaterialParamsForSwap();
	void InitMaterialDerivedValues();
	void InitRenderTargetsMatParams();
	void InitMaterialDerivedValues_Override();
	void InitRenderTargetMatParams_Override();
	void SetupMaterialParamsForSwap_Override();
	void SetupMaterialParamsForRead_Override();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VegetationModify_Bend_C">();
	}
	static class ABP_VegetationModify_Bend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VegetationModify_Bend_C>();
	}
};
static_assert(alignof(ABP_VegetationModify_Bend_C) == 0x000008, "Wrong alignment on ABP_VegetationModify_Bend_C");
static_assert(sizeof(ABP_VegetationModify_Bend_C) == 0x000300, "Wrong size on ABP_VegetationModify_Bend_C");
static_assert(offsetof(ABP_VegetationModify_Bend_C, UberGraphFrame_BP_VegetationModify_Bend_C) == 0x0002D8, "Member 'ABP_VegetationModify_Bend_C::UberGraphFrame_BP_VegetationModify_Bend_C' has a wrong offset!");
static_assert(offsetof(ABP_VegetationModify_Bend_C, BendIntensityFadeInTime) == 0x0002E0, "Member 'ABP_VegetationModify_Bend_C::BendIntensityFadeInTime' has a wrong offset!");
static_assert(offsetof(ABP_VegetationModify_Bend_C, BendIntensityFadeInVal) == 0x0002E4, "Member 'ABP_VegetationModify_Bend_C::BendIntensityFadeInVal' has a wrong offset!");
static_assert(offsetof(ABP_VegetationModify_Bend_C, BendIntensityFadeOutTime) == 0x0002E8, "Member 'ABP_VegetationModify_Bend_C::BendIntensityFadeOutTime' has a wrong offset!");
static_assert(offsetof(ABP_VegetationModify_Bend_C, BendIntensityFadeOutVal) == 0x0002EC, "Member 'ABP_VegetationModify_Bend_C::BendIntensityFadeOutVal' has a wrong offset!");
static_assert(offsetof(ABP_VegetationModify_Bend_C, BendPhaseFadeInTime) == 0x0002F0, "Member 'ABP_VegetationModify_Bend_C::BendPhaseFadeInTime' has a wrong offset!");
static_assert(offsetof(ABP_VegetationModify_Bend_C, BendPhaseFadeInVal) == 0x0002F4, "Member 'ABP_VegetationModify_Bend_C::BendPhaseFadeInVal' has a wrong offset!");
static_assert(offsetof(ABP_VegetationModify_Bend_C, BendPhaseFadeOutTime) == 0x0002F8, "Member 'ABP_VegetationModify_Bend_C::BendPhaseFadeOutTime' has a wrong offset!");
static_assert(offsetof(ABP_VegetationModify_Bend_C, BendPhaseFadeOutVal) == 0x0002FC, "Member 'ABP_VegetationModify_Bend_C::BendPhaseFadeOutVal' has a wrong offset!");

}

