#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CHC_PP_Shelter_Switch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FlameUI_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CHC_PP_Shelter_Switch.BP_CHC_PP_Shelter_Switch_C
// 0x00B0 (0x0160 - 0x00B0)
class UBP_CHC_PP_Shelter_Switch_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  PostProcessComponent;                              // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Color_Grading_Saturation;                          // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Color_Grading_Contrast;                            // 0x00D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Color_Grading_Gain;                                // 0x00E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Shadows_Contrast;                                  // 0x00F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Shadows_Gamma;                                     // 0x0100(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Shadows_Gain;                                      // 0x0110(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Midtones_Saturation;                               // 0x0120(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Midtones_Contrast;                                 // 0x0130(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                               Midtones_Gamma;                                    // 0x0140(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCreatePostProcess;                                // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_CHC_PP_Shelter_Switch(int32 EntryPoint);
	void Client_Add_Componet_To_Actor();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CHC_PP_Shelter_Switch_C">();
	}
	static class UBP_CHC_PP_Shelter_Switch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CHC_PP_Shelter_Switch_C>();
	}
};
static_assert(alignof(UBP_CHC_PP_Shelter_Switch_C) == 0x000010, "Wrong alignment on UBP_CHC_PP_Shelter_Switch_C");
static_assert(sizeof(UBP_CHC_PP_Shelter_Switch_C) == 0x000160, "Wrong size on UBP_CHC_PP_Shelter_Switch_C");
static_assert(offsetof(UBP_CHC_PP_Shelter_Switch_C, UberGraphFrame) == 0x0000B0, "Member 'UBP_CHC_PP_Shelter_Switch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_CHC_PP_Shelter_Switch_C, PostProcessComponent) == 0x0000B8, "Member 'UBP_CHC_PP_Shelter_Switch_C::PostProcessComponent' has a wrong offset!");
static_assert(offsetof(UBP_CHC_PP_Shelter_Switch_C, Color_Grading_Saturation) == 0x0000C0, "Member 'UBP_CHC_PP_Shelter_Switch_C::Color_Grading_Saturation' has a wrong offset!");
static_assert(offsetof(UBP_CHC_PP_Shelter_Switch_C, Color_Grading_Contrast) == 0x0000D0, "Member 'UBP_CHC_PP_Shelter_Switch_C::Color_Grading_Contrast' has a wrong offset!");
static_assert(offsetof(UBP_CHC_PP_Shelter_Switch_C, Color_Grading_Gain) == 0x0000E0, "Member 'UBP_CHC_PP_Shelter_Switch_C::Color_Grading_Gain' has a wrong offset!");
static_assert(offsetof(UBP_CHC_PP_Shelter_Switch_C, Shadows_Contrast) == 0x0000F0, "Member 'UBP_CHC_PP_Shelter_Switch_C::Shadows_Contrast' has a wrong offset!");
static_assert(offsetof(UBP_CHC_PP_Shelter_Switch_C, Shadows_Gamma) == 0x000100, "Member 'UBP_CHC_PP_Shelter_Switch_C::Shadows_Gamma' has a wrong offset!");
static_assert(offsetof(UBP_CHC_PP_Shelter_Switch_C, Shadows_Gain) == 0x000110, "Member 'UBP_CHC_PP_Shelter_Switch_C::Shadows_Gain' has a wrong offset!");
static_assert(offsetof(UBP_CHC_PP_Shelter_Switch_C, Midtones_Saturation) == 0x000120, "Member 'UBP_CHC_PP_Shelter_Switch_C::Midtones_Saturation' has a wrong offset!");
static_assert(offsetof(UBP_CHC_PP_Shelter_Switch_C, Midtones_Contrast) == 0x000130, "Member 'UBP_CHC_PP_Shelter_Switch_C::Midtones_Contrast' has a wrong offset!");
static_assert(offsetof(UBP_CHC_PP_Shelter_Switch_C, Midtones_Gamma) == 0x000140, "Member 'UBP_CHC_PP_Shelter_Switch_C::Midtones_Gamma' has a wrong offset!");
static_assert(offsetof(UBP_CHC_PP_Shelter_Switch_C, bCreatePostProcess) == 0x000150, "Member 'UBP_CHC_PP_Shelter_Switch_C::bCreatePostProcess' has a wrong offset!");

}

