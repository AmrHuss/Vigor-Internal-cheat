#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GMComponent_ADM_PostDrop_Simple

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_GMComponent_ADM_PostDrop_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GMComponent_ADM_PostDrop_Simple.BP_GMComponent_ADM_PostDrop_Simple_C
// 0x0010 (0x0148 - 0x0138)
class UBP_GMComponent_ADM_PostDrop_Simple_C final : public UBP_GMComponent_ADM_PostDrop_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GMComponent_ADM_PostDrop_Simple_C; // 0x0138(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         ContainerTouchedDownCount;                         // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_GMComponent_ADM_PostDrop_Simple(int32 EntryPoint);
	void Initialize_Component();
	void Container_Looted(class ABP_AirDropContainer_Base_C* Looted_Container, class UClass* Item_Taken);
	void Container_Touched_Down(class ABP_AirDropContainer_Base_C* Container);
	void Container_Spawned(class ABP_AirDropContainer_Base_C* Container);
	void Initialize_Bindings(bool* Success);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GMComponent_ADM_PostDrop_Simple_C">();
	}
	static class UBP_GMComponent_ADM_PostDrop_Simple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GMComponent_ADM_PostDrop_Simple_C>();
	}
};
static_assert(alignof(UBP_GMComponent_ADM_PostDrop_Simple_C) == 0x000008, "Wrong alignment on UBP_GMComponent_ADM_PostDrop_Simple_C");
static_assert(sizeof(UBP_GMComponent_ADM_PostDrop_Simple_C) == 0x000148, "Wrong size on UBP_GMComponent_ADM_PostDrop_Simple_C");
static_assert(offsetof(UBP_GMComponent_ADM_PostDrop_Simple_C, UberGraphFrame_BP_GMComponent_ADM_PostDrop_Simple_C) == 0x000138, "Member 'UBP_GMComponent_ADM_PostDrop_Simple_C::UberGraphFrame_BP_GMComponent_ADM_PostDrop_Simple_C' has a wrong offset!");
static_assert(offsetof(UBP_GMComponent_ADM_PostDrop_Simple_C, ContainerTouchedDownCount) == 0x000140, "Member 'UBP_GMComponent_ADM_PostDrop_Simple_C::ContainerTouchedDownCount' has a wrong offset!");

}
