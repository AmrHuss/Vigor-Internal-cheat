#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlacableTrap_Hologram_Base

#include "Basic.hpp"

#include "BP_PlacableTrap_Hologram_Base_classes.hpp"
#include "BP_PlacableTrap_Hologram_Base_parameters.hpp"


namespace SDK
{

// Function BP_PlacableTrap_Hologram_Base.BP_PlacableTrap_Hologram_Base_C.ExecuteUbergraph_BP_PlacableTrap_Hologram_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlacableTrap_Hologram_Base_C::ExecuteUbergraph_BP_PlacableTrap_Hologram_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlacableTrap_Hologram_Base_C", "ExecuteUbergraph_BP_PlacableTrap_Hologram_Base");

	Params::BP_PlacableTrap_Hologram_Base_C_ExecuteUbergraph_BP_PlacableTrap_Hologram_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlacableTrap_Hologram_Base.BP_PlacableTrap_Hologram_Base_C.Set hologram mesh
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PlacableTrap_Hologram_Base_C::Set_hologram_mesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlacableTrap_Hologram_Base_C", "Set hologram mesh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlacableTrap_Hologram_Base.BP_PlacableTrap_Hologram_Base_C.OnLoaded_303A9E7341428F48F05BE78A04090D6B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlacableTrap_Hologram_Base_C::OnLoaded_303A9E7341428F48F05BE78A04090D6B(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlacableTrap_Hologram_Base_C", "OnLoaded_303A9E7341428F48F05BE78A04090D6B");

	Params::BP_PlacableTrap_Hologram_Base_C_OnLoaded_303A9E7341428F48F05BE78A04090D6B Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlacableTrap_Hologram_Base.BP_PlacableTrap_Hologram_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlacableTrap_Hologram_Base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlacableTrap_Hologram_Base_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlacableTrap_Hologram_Base.BP_PlacableTrap_Hologram_Base_C.Hologram_ChangeVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanBePlaced                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlacableTrap_Hologram_Base_C::Hologram_ChangeVisuals(bool CanBePlaced)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlacableTrap_Hologram_Base_C", "Hologram_ChangeVisuals");

	Params::BP_PlacableTrap_Hologram_Base_C_Hologram_ChangeVisuals Parms{};

	Parms.CanBePlaced = CanBePlaced;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlacableTrap_Hologram_Base.BP_PlacableTrap_Hologram_Base_C.Hologram_SetVariablesFromTool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Trap_Range_Trigger_0                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Hologram_DisplayRangeDecal_0                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UStaticMesh>       Hologram_Mesh_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UMaterialInterface*               Hologram_Material_InvalidPlacement_0                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Hologram_Material_ValidPlacement_0                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlacableTrap_Hologram_Base_C::Hologram_SetVariablesFromTool(float Trap_Range_Trigger_0, bool Hologram_DisplayRangeDecal_0, TSoftObjectPtr<class UStaticMesh> Hologram_Mesh_0, class UMaterialInterface* Hologram_Material_InvalidPlacement_0, class UMaterialInterface* Hologram_Material_ValidPlacement_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlacableTrap_Hologram_Base_C", "Hologram_SetVariablesFromTool");

	Params::BP_PlacableTrap_Hologram_Base_C_Hologram_SetVariablesFromTool Parms{};

	Parms.Trap_Range_Trigger_0 = Trap_Range_Trigger_0;
	Parms.Hologram_DisplayRangeDecal_0 = Hologram_DisplayRangeDecal_0;
	Parms.Hologram_Mesh_0 = Hologram_Mesh_0;
	Parms.Hologram_Material_InvalidPlacement_0 = Hologram_Material_InvalidPlacement_0;
	Parms.Hologram_Material_ValidPlacement_0 = Hologram_Material_ValidPlacement_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlacableTrap_Hologram_Base.BP_PlacableTrap_Hologram_Base_C.Hologram_CanBePlaced
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanBePlaced                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlacableTrap_Hologram_Base_C::Hologram_CanBePlaced(bool* CanBePlaced)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlacableTrap_Hologram_Base_C", "Hologram_CanBePlaced");

	Params::BP_PlacableTrap_Hologram_Base_C_Hologram_CanBePlaced Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanBePlaced != nullptr)
		*CanBePlaced = Parms.CanBePlaced;
}

}

