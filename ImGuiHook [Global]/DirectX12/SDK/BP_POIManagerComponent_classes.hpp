#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_POIManagerComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_POIManagerComponent.BP_POIManagerComponent_C
// 0x0058 (0x0108 - 0x00B0)
class UBP_POIManagerComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                 SaveGameSlotName;                                  // 0x00B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UBP_POI_SaveGame_C*                     POI_Save_Game;                                     // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           Current_Level_Discovered_POIs;                     // 0x00D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           Current_Level_Undiscovered_POIs;                   // 0x00E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Consider_Full_Level_Discovery;                     // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_POI_MarkerSetter_C*>         UnprocessedPOIActors;                              // 0x00F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_POIManagerComponent(int32 EntryPoint);
	void SafeSavingOfPOI(class USaveGame* SaveGameObject, const class FString& SlotName);
	void Match_Started();
	void Register_POI(class ABP_POI_MarkerSetter_C* POI);
	void ReceiveBeginPlay();
	void OnLoadSucceed_C19AF07A42DCDCF810EBA893F405BFFA(class USaveGame* SaveGame);
	void OnLoadFailed_C19AF07A42DCDCF810EBA893F405BFFA(class USaveGame* SaveGame);
	void OnSaveSucceed_8F3A8DE14F84B10863DBDF85A2A350D3(const class FString& SlotName, const int32 UserIndex);
	void OnSaveFailed_8F3A8DE14F84B10863DBDF85A2A350D3(const class FString& SlotName, const int32 UserIndex);
	bool Is_POI_Discovered(const class FName& POI_Tag);
	void Discover_POI(class ABP_POI_MarkerSetter_C* POI);
	void Check_Current_Level_for_Full_Discovery();
	void CheckIfAchievementProgressMatchesSave();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_POIManagerComponent_C">();
	}
	static class UBP_POIManagerComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_POIManagerComponent_C>();
	}
};
static_assert(alignof(UBP_POIManagerComponent_C) == 0x000008, "Wrong alignment on UBP_POIManagerComponent_C");
static_assert(sizeof(UBP_POIManagerComponent_C) == 0x000108, "Wrong size on UBP_POIManagerComponent_C");
static_assert(offsetof(UBP_POIManagerComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UBP_POIManagerComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_POIManagerComponent_C, SaveGameSlotName) == 0x0000B8, "Member 'UBP_POIManagerComponent_C::SaveGameSlotName' has a wrong offset!");
static_assert(offsetof(UBP_POIManagerComponent_C, POI_Save_Game) == 0x0000C8, "Member 'UBP_POIManagerComponent_C::POI_Save_Game' has a wrong offset!");
static_assert(offsetof(UBP_POIManagerComponent_C, Current_Level_Discovered_POIs) == 0x0000D0, "Member 'UBP_POIManagerComponent_C::Current_Level_Discovered_POIs' has a wrong offset!");
static_assert(offsetof(UBP_POIManagerComponent_C, Current_Level_Undiscovered_POIs) == 0x0000E0, "Member 'UBP_POIManagerComponent_C::Current_Level_Undiscovered_POIs' has a wrong offset!");
static_assert(offsetof(UBP_POIManagerComponent_C, Consider_Full_Level_Discovery) == 0x0000F0, "Member 'UBP_POIManagerComponent_C::Consider_Full_Level_Discovery' has a wrong offset!");
static_assert(offsetof(UBP_POIManagerComponent_C, UnprocessedPOIActors) == 0x0000F8, "Member 'UBP_POIManagerComponent_C::UnprocessedPOIActors' has a wrong offset!");

}

