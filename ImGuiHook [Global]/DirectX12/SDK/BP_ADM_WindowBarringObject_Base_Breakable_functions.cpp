#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ADM_WindowBarringObject_Base_Breakable

#include "Basic.hpp"

#include "BP_ADM_WindowBarringObject_Base_Breakable_classes.hpp"
#include "BP_ADM_WindowBarringObject_Base_Breakable_parameters.hpp"


namespace SDK
{

// Function BP_ADM_WindowBarringObject_Base_Breakable.BP_ADM_WindowBarringObject_Base_Breakable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ADM_WindowBarringObject_Base_Breakable_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_WindowBarringObject_Base_Breakable_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ADM_WindowBarringObject_Base_Breakable.BP_ADM_WindowBarringObject_Base_Breakable_C.Check For Connected Barricades
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Item                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UBP_ADM_DoorBarricade_Component_C*>Barricades                                             (Parm, OutParm, ContainsInstancedReference)

void ABP_ADM_WindowBarringObject_Base_Breakable_C::Check_For_Connected_Barricades(const class FName& Item, TArray<class UBP_ADM_DoorBarricade_Component_C*>* Barricades)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_WindowBarringObject_Base_Breakable_C", "Check For Connected Barricades");

	Params::BP_ADM_WindowBarringObject_Base_Breakable_C_Check_For_Connected_Barricades Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Barricades != nullptr)
		*Barricades = std::move(Parms.Barricades);
}


// Function BP_ADM_WindowBarringObject_Base_Breakable.BP_ADM_WindowBarringObject_Base_Breakable_C.Get Barricade By TAG
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ADM_DoorBarricade_Component_C*Barricade                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_WindowBarringObject_Base_Breakable_C::Get_Barricade_By_TAG(class FName Tag, class UBP_ADM_DoorBarricade_Component_C** Barricade)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_WindowBarringObject_Base_Breakable_C", "Get Barricade By TAG");

	Params::BP_ADM_WindowBarringObject_Base_Breakable_C_Get_Barricade_By_TAG Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

	if (Barricade != nullptr)
		*Barricade = Parms.Barricade;
}


// Function BP_ADM_WindowBarringObject_Base_Breakable.BP_ADM_WindowBarringObject_Base_Breakable_C.Get Next Active Barricade Component
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_ADM_DoorBarricade_Component_C*Barricade_Components                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ADM_WindowBarringObject_Base_Breakable_C::Get_Next_Active_Barricade_Component(class UBP_ADM_DoorBarricade_Component_C** Barricade_Components)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_WindowBarringObject_Base_Breakable_C", "Get Next Active Barricade Component");

	Params::BP_ADM_WindowBarringObject_Base_Breakable_C_Get_Next_Active_Barricade_Component Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Barricade_Components != nullptr)
		*Barricade_Components = Parms.Barricade_Components;
}


// Function BP_ADM_WindowBarringObject_Base_Breakable.BP_ADM_WindowBarringObject_Base_Breakable_C.Get All Active Barricade Meshes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UStaticMeshComponent*>     Meshes                                                 (Parm, OutParm, ContainsInstancedReference)

void ABP_ADM_WindowBarringObject_Base_Breakable_C::Get_All_Active_Barricade_Meshes(TArray<class UStaticMeshComponent*>* Meshes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_WindowBarringObject_Base_Breakable_C", "Get All Active Barricade Meshes");

	Params::BP_ADM_WindowBarringObject_Base_Breakable_C_Get_All_Active_Barricade_Meshes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Meshes != nullptr)
		*Meshes = std::move(Parms.Meshes);
}


// Function BP_ADM_WindowBarringObject_Base_Breakable.BP_ADM_WindowBarringObject_Base_Breakable_C.Get All Barricade Meshes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UStaticMeshComponent*>     ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UStaticMeshComponent*> ABP_ADM_WindowBarringObject_Base_Breakable_C::Get_All_Barricade_Meshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_WindowBarringObject_Base_Breakable_C", "Get All Barricade Meshes");

	Params::BP_ADM_WindowBarringObject_Base_Breakable_C_Get_All_Barricade_Meshes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ADM_WindowBarringObject_Base_Breakable.BP_ADM_WindowBarringObject_Base_Breakable_C.SetupMainBarricades
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ADM_WindowBarringObject_Base_Breakable_C::SetupMainBarricades()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ADM_WindowBarringObject_Base_Breakable_C", "SetupMainBarricades");

	UObject::ProcessEvent(Func, nullptr);
}

}

