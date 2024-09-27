#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PCComponent_ADM_CallIn_Timed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PCComponent_ADM_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PCComponent_ADM_CallIn_Timed.BP_PCComponent_ADM_CallIn_Timed_C
// 0x0020 (0x0108 - 0x00E8)
class UBP_PCComponent_ADM_CallIn_Timed_C final : public UBP_PCComponent_ADM_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PCComponent_ADM_CallIn_Timed_C;  // 0x00E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                           Local_Air_Drop_Timer;                              // 0x00F0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ADM_DropZoneMarker_C*               Drop_Zone_Marker;                                  // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_FlameTextWidget_C*                  Timer_Widget;                                      // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PCComponent_ADM_CallIn_Timed(int32 EntryPoint);
	void Update_Text_Timer();
	void Finish_Local_Timer_on_Client();
	void Signal_Airdrop();
	void Set_Local_Timer_on_Client(float Remaining_Time, bool Is_Paused);
	void Spawn_Drop_Zone_Area_Marker(const struct FVector& Marker_Location, float Marker_Radius);
	void Toggle_Passive_UI_Visibility(bool Visible);
	void Adjust_Player_Count_for_Premature_Air_Drop(int32 Delta);
	void Toggle_Local_Timer_on_Client(bool Is_Running);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PCComponent_ADM_CallIn_Timed_C">();
	}
	static class UBP_PCComponent_ADM_CallIn_Timed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PCComponent_ADM_CallIn_Timed_C>();
	}
};
static_assert(alignof(UBP_PCComponent_ADM_CallIn_Timed_C) == 0x000008, "Wrong alignment on UBP_PCComponent_ADM_CallIn_Timed_C");
static_assert(sizeof(UBP_PCComponent_ADM_CallIn_Timed_C) == 0x000108, "Wrong size on UBP_PCComponent_ADM_CallIn_Timed_C");
static_assert(offsetof(UBP_PCComponent_ADM_CallIn_Timed_C, UberGraphFrame_BP_PCComponent_ADM_CallIn_Timed_C) == 0x0000E8, "Member 'UBP_PCComponent_ADM_CallIn_Timed_C::UberGraphFrame_BP_PCComponent_ADM_CallIn_Timed_C' has a wrong offset!");
static_assert(offsetof(UBP_PCComponent_ADM_CallIn_Timed_C, Local_Air_Drop_Timer) == 0x0000F0, "Member 'UBP_PCComponent_ADM_CallIn_Timed_C::Local_Air_Drop_Timer' has a wrong offset!");
static_assert(offsetof(UBP_PCComponent_ADM_CallIn_Timed_C, Drop_Zone_Marker) == 0x0000F8, "Member 'UBP_PCComponent_ADM_CallIn_Timed_C::Drop_Zone_Marker' has a wrong offset!");
static_assert(offsetof(UBP_PCComponent_ADM_CallIn_Timed_C, Timer_Widget) == 0x000100, "Member 'UBP_PCComponent_ADM_CallIn_Timed_C::Timer_Widget' has a wrong offset!");

}
