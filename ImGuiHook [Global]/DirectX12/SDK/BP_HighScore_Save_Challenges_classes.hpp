#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HighScore_Save_Challenges

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HighScore_Save_Challenges.BP_HighScore_Save_Challenges_C
// 0x0068 (0x0090 - 0x0028)
class UBP_HighScore_Save_Challenges_C final : public USaveGame
{
public:
	float                                         HighScoreSave_Variable;                            // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         UnlockedWeapons;                                   // 0x0030(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMap<class FName, float>                      HighScores;                                        // 0x0040(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HighScore_Save_Challenges_C">();
	}
	static class UBP_HighScore_Save_Challenges_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HighScore_Save_Challenges_C>();
	}
};
static_assert(alignof(UBP_HighScore_Save_Challenges_C) == 0x000008, "Wrong alignment on UBP_HighScore_Save_Challenges_C");
static_assert(sizeof(UBP_HighScore_Save_Challenges_C) == 0x000090, "Wrong size on UBP_HighScore_Save_Challenges_C");
static_assert(offsetof(UBP_HighScore_Save_Challenges_C, HighScoreSave_Variable) == 0x000028, "Member 'UBP_HighScore_Save_Challenges_C::HighScoreSave_Variable' has a wrong offset!");
static_assert(offsetof(UBP_HighScore_Save_Challenges_C, UnlockedWeapons) == 0x000030, "Member 'UBP_HighScore_Save_Challenges_C::UnlockedWeapons' has a wrong offset!");
static_assert(offsetof(UBP_HighScore_Save_Challenges_C, HighScores) == 0x000040, "Member 'UBP_HighScore_Save_Challenges_C::HighScores' has a wrong offset!");

}

