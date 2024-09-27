#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_GunfightRoundStats

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct Struct_GunfightRoundStats.Struct_GunfightRoundStats
// 0x001C (0x001C - 0x0000)
struct FStruct_GunfightRoundStats final
{
public:
	int32                                         Numberofkills_2_5F3D644941CD430BA4572C882623B234;  // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Killscore_23_0629EB6842C79B53A69F688BB5CE260D;     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Numberofhits_6_598DBD6B40DFEC894EF03BAFAC285D66;   // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Damagedealt_28_B887F33940343F4D348CFF985228C04A;   // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Hitscore_20_E3147171488AFAC31710CB808F6FB7F8;      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Objective_12_EA5CCA6242EDDAE2FCB1D99BBE1DECC7;     // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Roundwinner_11_1723CBD34B0016A083335BABD5F61ECD;   // 0x0015(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WholeTeamSurvivedScore_32_B73D05CB4D091B155A7FF68DDA5902F7; // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_GunfightRoundStats) == 0x000004, "Wrong alignment on FStruct_GunfightRoundStats");
static_assert(sizeof(FStruct_GunfightRoundStats) == 0x00001C, "Wrong size on FStruct_GunfightRoundStats");
static_assert(offsetof(FStruct_GunfightRoundStats, Numberofkills_2_5F3D644941CD430BA4572C882623B234) == 0x000000, "Member 'FStruct_GunfightRoundStats::Numberofkills_2_5F3D644941CD430BA4572C882623B234' has a wrong offset!");
static_assert(offsetof(FStruct_GunfightRoundStats, Killscore_23_0629EB6842C79B53A69F688BB5CE260D) == 0x000004, "Member 'FStruct_GunfightRoundStats::Killscore_23_0629EB6842C79B53A69F688BB5CE260D' has a wrong offset!");
static_assert(offsetof(FStruct_GunfightRoundStats, Numberofhits_6_598DBD6B40DFEC894EF03BAFAC285D66) == 0x000008, "Member 'FStruct_GunfightRoundStats::Numberofhits_6_598DBD6B40DFEC894EF03BAFAC285D66' has a wrong offset!");
static_assert(offsetof(FStruct_GunfightRoundStats, Damagedealt_28_B887F33940343F4D348CFF985228C04A) == 0x00000C, "Member 'FStruct_GunfightRoundStats::Damagedealt_28_B887F33940343F4D348CFF985228C04A' has a wrong offset!");
static_assert(offsetof(FStruct_GunfightRoundStats, Hitscore_20_E3147171488AFAC31710CB808F6FB7F8) == 0x000010, "Member 'FStruct_GunfightRoundStats::Hitscore_20_E3147171488AFAC31710CB808F6FB7F8' has a wrong offset!");
static_assert(offsetof(FStruct_GunfightRoundStats, Objective_12_EA5CCA6242EDDAE2FCB1D99BBE1DECC7) == 0x000014, "Member 'FStruct_GunfightRoundStats::Objective_12_EA5CCA6242EDDAE2FCB1D99BBE1DECC7' has a wrong offset!");
static_assert(offsetof(FStruct_GunfightRoundStats, Roundwinner_11_1723CBD34B0016A083335BABD5F61ECD) == 0x000015, "Member 'FStruct_GunfightRoundStats::Roundwinner_11_1723CBD34B0016A083335BABD5F61ECD' has a wrong offset!");
static_assert(offsetof(FStruct_GunfightRoundStats, WholeTeamSurvivedScore_32_B73D05CB4D091B155A7FF68DDA5902F7) == 0x000018, "Member 'FStruct_GunfightRoundStats::WholeTeamSurvivedScore_32_B73D05CB4D091B155A7FF68DDA5902F7' has a wrong offset!");

}
