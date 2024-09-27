#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TitleLogic_Base

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TitleLogic_Base.BP_TitleLogic_Base_C
// 0x0020 (0x0240 - 0x0220)
class ABP_TitleLogic_Base_C : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Initialization_Finished;                           // 0x0228(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_TitlesManager_C*                    Titles_Manager;                                    // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Initialization_Finished__DelegateSignature();
	void Is_Initialized(bool* Initialized);
	void Is_Title_Owned(int32 Title_ID, bool* Title_Owned, int32* Rank_Index);
	void Is_Rank_Owned(const struct FF_TitleRank& Rank_Info, bool* Owned);
	void Get_Title_Logic_Status_Log(class FString* Log);
	void Get_Title_Item(const struct FF_TitleRank& Rank, class UClass** Item, bool* Valid);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TitleLogic_Base_C">();
	}
	static class ABP_TitleLogic_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TitleLogic_Base_C>();
	}
};
static_assert(alignof(ABP_TitleLogic_Base_C) == 0x000008, "Wrong alignment on ABP_TitleLogic_Base_C");
static_assert(sizeof(ABP_TitleLogic_Base_C) == 0x000240, "Wrong size on ABP_TitleLogic_Base_C");
static_assert(offsetof(ABP_TitleLogic_Base_C, DefaultSceneRoot) == 0x000220, "Member 'ABP_TitleLogic_Base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_TitleLogic_Base_C, Initialization_Finished) == 0x000228, "Member 'ABP_TitleLogic_Base_C::Initialization_Finished' has a wrong offset!");
static_assert(offsetof(ABP_TitleLogic_Base_C, Titles_Manager) == 0x000238, "Member 'ABP_TitleLogic_Base_C::Titles_Manager' has a wrong offset!");

}
