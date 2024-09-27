#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_DoorBarringObject_Base_Breakable

#include "Basic.hpp"

#include "S_NameArray_structs.hpp"
#include "BP_ADM_DoorBarringObject_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ADM_DoorBarringObject_Base_Breakable.BP_ADM_DoorBarringObject_Base_Breakable_C
// 0x00B0 (0x02F0 - 0x0240)
class ABP_ADM_DoorBarringObject_Base_Breakable_C : public ABP_ADM_DoorBarringObject_Base_C
{
public:
	TMap<class FName, struct FS_NameArray>        BarricadeTAG_To_BarricadesThatSupport_It;          // 0x0240(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, float>                      Mesh_TAG_To_Health;                                // 0x0290(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UBP_ADM_DoorBarricade_Component_C*> MainBarricadeComponents;                           // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void UserConstructionScript();
	void Check_For_Connected_Barricades(const class FName& BarricadeTAG_ToRemove, TArray<class UBP_ADM_DoorBarricade_Component_C*>* Barricades);
	void Get_Barricade_By_TAG(class FName Tag, class UBP_ADM_DoorBarricade_Component_C** Barricade);
	void Get_Next_Active_Barricade_Component(class UBP_ADM_DoorBarricade_Component_C** Barricade_Components);
	void Get_All_Active_Barricade_Meshes(TArray<class UStaticMeshComponent*>* Meshes);
	TArray<class UStaticMeshComponent*> Get_All_Barricade_Meshes();
	void SetupMainBarricades();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ADM_DoorBarringObject_Base_Breakable_C">();
	}
	static class ABP_ADM_DoorBarringObject_Base_Breakable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ADM_DoorBarringObject_Base_Breakable_C>();
	}
};
static_assert(alignof(ABP_ADM_DoorBarringObject_Base_Breakable_C) == 0x000008, "Wrong alignment on ABP_ADM_DoorBarringObject_Base_Breakable_C");
static_assert(sizeof(ABP_ADM_DoorBarringObject_Base_Breakable_C) == 0x0002F0, "Wrong size on ABP_ADM_DoorBarringObject_Base_Breakable_C");
static_assert(offsetof(ABP_ADM_DoorBarringObject_Base_Breakable_C, BarricadeTAG_To_BarricadesThatSupport_It) == 0x000240, "Member 'ABP_ADM_DoorBarringObject_Base_Breakable_C::BarricadeTAG_To_BarricadesThatSupport_It' has a wrong offset!");
static_assert(offsetof(ABP_ADM_DoorBarringObject_Base_Breakable_C, Mesh_TAG_To_Health) == 0x000290, "Member 'ABP_ADM_DoorBarringObject_Base_Breakable_C::Mesh_TAG_To_Health' has a wrong offset!");
static_assert(offsetof(ABP_ADM_DoorBarringObject_Base_Breakable_C, MainBarricadeComponents) == 0x0002E0, "Member 'ABP_ADM_DoorBarringObject_Base_Breakable_C::MainBarricadeComponents' has a wrong offset!");

}
