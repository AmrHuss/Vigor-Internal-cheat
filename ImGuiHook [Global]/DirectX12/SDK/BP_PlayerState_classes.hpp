#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerState

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "Flame_classes.hpp"
#include "Engine_structs.hpp"
#include "EBooster_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C
// 0x0158 (0x0698 - 0x0540)
class ABP_PlayerState_C : public AHumanPlayerState
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0540(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDefaultStashComponent*                 DefaultStash;                                      // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0550(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsQuitter;                                        // 0x0558(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_559[0x7];                                      // 0x0559(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 GroupId;                                           // 0x0560(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Cloud_Wardrobe_Loaded;                             // 0x0570(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Cloud_Stash_Inventory_Loaded;                      // 0x0571(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Cloud_Shelter_Improvements_Loaded;                 // 0x0572(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_573[0x5];                                      // 0x0573(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_TrackedResource_SaveGame_C*         TrackedResources_SaveGame;                         // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           Title_Slot_Names;                                  // 0x0580(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<int32>                                 Title_Slot_Content;                                // 0x0590(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	TArray<int32>                                 Title_Slot_Request_IDs;                            // 0x05A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           Title_Table_Row_Names;                             // 0x05B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UTexture2D*>                     Title_Badges;                                      // 0x05C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Title_Slots_Initialization_Started;                // 0x05D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Title_Slots_Initialization_Complete;               // 0x05D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D2[0x6];                                      // 0x05D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Title_Slots_Loaded;                                // 0x05D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Badge_Loadings_in_Progress;                        // 0x05E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          All_Badge_Loadings_Started;                        // 0x05EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ED[0x3];                                      // 0x05ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Title_Badges_Loaded;                               // 0x05F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Badge_Initialization_Complete;                     // 0x0600(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_601[0x7];                                      // 0x0601(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Titles_Loaded;                                     // 0x0608(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<bool>                                  Title_Slot_Content_Debug;                          // 0x0618(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ECloudDeathCauseType                          Last_Cause_of_Death;                               // 0x0628(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_629[0x7];                                      // 0x0629(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Last_Death_Instigating_Weapon;                     // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Last_Death_Killer_ID;                              // 0x0638(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63C[0x4];                                      // 0x063C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerState_C*                      Last_Death_Killer;                                 // 0x0640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                        OwningCharacter;                                   // 0x0648(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OwningCharacterReplicated;                         // 0x0650(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int32>                                 OwnedBoosters;                                     // 0x0660(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          LockedBoosters;                                    // 0x0670(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_671[0x3];                                      // 0x0671(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Battle_Pass_Level;                                 // 0x0674(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Battle_Pass_Premium;                               // 0x0678(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_679[0x7];                                      // 0x0679(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Analytics_User_ID;                                 // 0x0680(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         CurrentPlayerGroupIndex;                           // 0x0690(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Title_Slots_Loaded__DelegateSignature();
	void Title_Badges_Loaded__DelegateSignature();
	void Titles_Loaded__DelegateSignature();
	void OwningCharacterReplicated__DelegateSignature(class ABP_PlayerState_C* PlayerState);
	void ExecuteUbergraph_BP_PlayerState(int32 EntryPoint);
	void LoadTrackedResources();
	void StartTrackedResources(class UClass* ShelterSlot, class AHumanPlayerController* HumanPlayerController);
	void PRIVATE_RepNotifyOwnedBoosters(const TArray<int32>& OwnedBoosters_0);
	void ReceiveTick(float DeltaSeconds);
	void Download_Player_Title_Counters(const class FString& Userid);
	void Load_Title_Badges();
	void Player_Title_Received(const struct FCloudRequestResult& RequestResult, class AHumanPlayerController* Player, const struct FCloudUserCounterValue& CounterValue);
	void On_Cloud_Stash_Inventory_Loaded(class AStash* Sender, class UStashComponent* Inventory);
	void On_Cloud_Wardrobe_Loaded(class UShelterCustomizationComponent* Wardrobe);
	void On_Cloud_Shelter_Improvements_Loaded();
	void ReceiveBeginPlay();
	void Player_triggered_multi_hit_grenade_component(int32 Amount_of_nonMinusfriendly_hits, class UClass* Grenade_class);
	void Player_triggered_grenade_hit_component(class AActor* Target_that_got_hit, class UClass* Grenade_class);
	void OnLoadSucceed_DC924D44428C3959F043209199139366(class USaveGame* SaveGame);
	void OnLoadFailed_DC924D44428C3959F043209199139366(class USaveGame* SaveGame);
	void OnSaveSucceed_87E82E1947ED2FD3ABC463BB9DC8F1F5(const class FString& SlotName, const int32 UserIndex);
	void OnSaveFailed_87E82E1947ED2FD3ABC463BB9DC8F1F5(const class FString& SlotName, const int32 UserIndex);
	void OnLoaded_303A9E7341428F48F05BE78A0F43A6DF(class UObject* Loaded);
	void UserConstructionScript();
	void FindTeammates(TArray<class ABP_PlayerState_C*>* TeammatesPlayerStates);
	bool IsInGroup();
	bool IsInTheSameGroup(class APlayerState* PlayerState);
	void GetOrderInGroup(int32* Index_0);
	void SortPlayerStates(class UObject* ObjectA, class UObject* ObjectB, bool* Return);
	void UpdateTrackedResources(class AHumanPlayerController* Controller);
	void StopTrackedResources();
	void GetTrackedResourcesStatus(bool* IsValid, class UClass** ShelterSlot, TMap<class UClass*, int32>* NeededResources, TMap<class UClass*, int32>* OwnedResources);
	void OnRep_Title_Slot_Content();
	void Are_Titles_Loaded(bool* Titles_Loaded_0);
	void Get_Title_Slots(TMap<class FName, int32>* Title_Slots);
	void Set_Title_to_Slot(class FName Slot_Name, int32 Title_ID, int32 Rank_Index, bool* Success);
	void Break_Cloud_Title_ID(int32 Cloud_Title_ID, int32* Title_ID, int32* Rank_Index);
	void Make_Cloud_Title_ID(int32 Title_ID, int32 Rank_Index, int32* Cloud_Title_ID);
	void Title_Slots_Loading_Finished();
	void Titles_Loading_Finished();
	void Get_Table_Row_Name_from_Title_ID(int32 Title_ID, class FName* Row_Name);
	void Get_Titles_Status_Log(class FString* Log);
	void Get_Rank_Info_of_Titles_in_Slots(TArray<struct FF_TitleRank>* Rank_Infos);
	void Get_Rank_Info_from_Cloud_Title_ID(int32 Cloud_Title_ID, bool* Valid_Output, struct FF_TitleRank* Rank_Info);
	void Make_Titles_Debug_Message(const class FString& Custom_Message, class FString* Message);
	void Print_Titles_Debug_Message(const class FString& Custom_Message);
	void Check_Badge_Validity();
	void OnRep_OwningCharacter();
	void LockBoosters(const TMap<EBooster, int32>& Boosters);
	void SetHasBooster(EBooster Booster, int32 Amount);
	void Set_Last_Death_Killer(class AHumanCharacter* Killer_Human_Character);
	void Get_Killer_Match_Player_Info(bool* Success, struct FS_MatchPlayerInfo* Match_Player_Info);
	void PlayerResult_Analytics_AttachRelevantData(class UJsonObject* JsonObject, class UJsonObject** JsonObjectOut);

	void GetBoosterCount(EBooster Booster, int32* Count) const;
	bool HasBoosterInsurance() const;
	bool HasBoosterCrate() const;
	bool HasBoosterLoot() const;
	void GetReadyInLobby(bool* IsReadyInLobby_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerState_C">();
	}
	static class ABP_PlayerState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerState_C>();
	}
};
static_assert(alignof(ABP_PlayerState_C) == 0x000008, "Wrong alignment on ABP_PlayerState_C");
static_assert(sizeof(ABP_PlayerState_C) == 0x000698, "Wrong size on ABP_PlayerState_C");
static_assert(offsetof(ABP_PlayerState_C, UberGraphFrame) == 0x000540, "Member 'ABP_PlayerState_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, DefaultStash) == 0x000548, "Member 'ABP_PlayerState_C::DefaultStash' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, DefaultSceneRoot) == 0x000550, "Member 'ABP_PlayerState_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, bIsQuitter) == 0x000558, "Member 'ABP_PlayerState_C::bIsQuitter' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, GroupId) == 0x000560, "Member 'ABP_PlayerState_C::GroupId' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Cloud_Wardrobe_Loaded) == 0x000570, "Member 'ABP_PlayerState_C::Cloud_Wardrobe_Loaded' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Cloud_Stash_Inventory_Loaded) == 0x000571, "Member 'ABP_PlayerState_C::Cloud_Stash_Inventory_Loaded' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Cloud_Shelter_Improvements_Loaded) == 0x000572, "Member 'ABP_PlayerState_C::Cloud_Shelter_Improvements_Loaded' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, TrackedResources_SaveGame) == 0x000578, "Member 'ABP_PlayerState_C::TrackedResources_SaveGame' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Title_Slot_Names) == 0x000580, "Member 'ABP_PlayerState_C::Title_Slot_Names' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Title_Slot_Content) == 0x000590, "Member 'ABP_PlayerState_C::Title_Slot_Content' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Title_Slot_Request_IDs) == 0x0005A0, "Member 'ABP_PlayerState_C::Title_Slot_Request_IDs' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Title_Table_Row_Names) == 0x0005B0, "Member 'ABP_PlayerState_C::Title_Table_Row_Names' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Title_Badges) == 0x0005C0, "Member 'ABP_PlayerState_C::Title_Badges' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Title_Slots_Initialization_Started) == 0x0005D0, "Member 'ABP_PlayerState_C::Title_Slots_Initialization_Started' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Title_Slots_Initialization_Complete) == 0x0005D1, "Member 'ABP_PlayerState_C::Title_Slots_Initialization_Complete' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Title_Slots_Loaded) == 0x0005D8, "Member 'ABP_PlayerState_C::Title_Slots_Loaded' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Badge_Loadings_in_Progress) == 0x0005E8, "Member 'ABP_PlayerState_C::Badge_Loadings_in_Progress' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, All_Badge_Loadings_Started) == 0x0005EC, "Member 'ABP_PlayerState_C::All_Badge_Loadings_Started' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Title_Badges_Loaded) == 0x0005F0, "Member 'ABP_PlayerState_C::Title_Badges_Loaded' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Badge_Initialization_Complete) == 0x000600, "Member 'ABP_PlayerState_C::Badge_Initialization_Complete' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Titles_Loaded) == 0x000608, "Member 'ABP_PlayerState_C::Titles_Loaded' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Title_Slot_Content_Debug) == 0x000618, "Member 'ABP_PlayerState_C::Title_Slot_Content_Debug' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Last_Cause_of_Death) == 0x000628, "Member 'ABP_PlayerState_C::Last_Cause_of_Death' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Last_Death_Instigating_Weapon) == 0x000630, "Member 'ABP_PlayerState_C::Last_Death_Instigating_Weapon' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Last_Death_Killer_ID) == 0x000638, "Member 'ABP_PlayerState_C::Last_Death_Killer_ID' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Last_Death_Killer) == 0x000640, "Member 'ABP_PlayerState_C::Last_Death_Killer' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, OwningCharacter) == 0x000648, "Member 'ABP_PlayerState_C::OwningCharacter' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, OwningCharacterReplicated) == 0x000650, "Member 'ABP_PlayerState_C::OwningCharacterReplicated' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, OwnedBoosters) == 0x000660, "Member 'ABP_PlayerState_C::OwnedBoosters' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, LockedBoosters) == 0x000670, "Member 'ABP_PlayerState_C::LockedBoosters' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Battle_Pass_Level) == 0x000674, "Member 'ABP_PlayerState_C::Battle_Pass_Level' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Battle_Pass_Premium) == 0x000678, "Member 'ABP_PlayerState_C::Battle_Pass_Premium' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, Analytics_User_ID) == 0x000680, "Member 'ABP_PlayerState_C::Analytics_User_ID' has a wrong offset!");
static_assert(offsetof(ABP_PlayerState_C, CurrentPlayerGroupIndex) == 0x000690, "Member 'ABP_PlayerState_C::CurrentPlayerGroupIndex' has a wrong offset!");

}

